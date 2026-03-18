/*
 * XREFs of ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C003ECA0
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004C72C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C004DC90 (GreCreateDisplayDC.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0064CB0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00CFCA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00D0920 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C344 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003C850 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003D91C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00406D0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C0040990 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0044450 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

__int64 __fastcall DC::bSetDefaultRegion(DC *this)
{
  struct _ENTRY *EntryFromObject; // rax
  unsigned int v3; // esi
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  struct REGION *v6; // rax
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rax
  LONG v11; // eax
  int v12; // eax
  REGION *v13; // rbx
  _BYTE v14[8]; // [rsp+20h] [rbp-50h] BYREF
  struct tagSIZE v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  struct _RECTL v17; // [rsp+40h] [rbp-30h] BYREF
  REGION *v18[2]; // [rsp+50h] [rbp-20h] BYREF

  *((_DWORD *)this + 9) |= 0x10u;
  EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, this);
  v3 = 0;
  v15 = 0LL;
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  DC::vGet_sizlWindow(this, &v15);
  v4 = (_DWORD *)*((_QWORD *)this + 6);
  v18[1] = (REGION *)v15;
  v18[0] = 0LL;
  v17 = *(struct _RECTL *)v18;
  if ( *((_QWORD *)this + 62) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v14);
    if ( (v4[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
    {
      v11 = v4[646];
      v17.right += v11;
      v17.left = v11;
      v12 = v4[647];
      v17.top += v12;
      v17.bottom += v12;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion(v5);
    }
  }
  v6 = (struct REGION *)*((_QWORD *)this + 140);
  if ( v6 && v6 != prgnDefault )
  {
    v16 = *((_QWORD *)this + 140);
    RGNOBJ::vSet((RGNOBJ *)&v16, &v17);
LABEL_10:
    v8 = *((_QWORD *)this + 140);
    *(_DWORD *)(v8 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
    *((struct tagSIZE *)this + 130) = v15;
    *(struct _RECTL *)((char *)this + 1000) = v17;
    *((_QWORD *)this + 127) = 0LL;
    *((_QWORD *)this + 129) = 0LL;
    v3 = 1;
    v9 = *((_DWORD *)this + 10) & 1;
    LODWORD(v8) = *((_DWORD *)this + 2 * v9 + 255);
    *((_DWORD *)this + 294) = *((_DWORD *)this + 2 * v9 + 254);
    *((_DWORD *)this + 295) = v8;
    return v3;
  }
  LODWORD(v18[1]) = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)v18, 0x70u);
  v13 = v18[0];
  if ( v18[0] )
  {
    RGNOBJ::vSet((RGNOBJ *)v18, &v17);
    v7 = LODWORD(v18[1]) == 1;
    *((_QWORD *)this + 140) = v13;
    if ( v7 )
      REGION::vDeleteREGION(v13);
    goto LABEL_10;
  }
  v7 = LODWORD(v18[1]) == 1;
  *((_QWORD *)this + 140) = prgnDefault;
  if ( v7 )
    REGION::vDeleteREGION(0LL);
  return v3;
}
