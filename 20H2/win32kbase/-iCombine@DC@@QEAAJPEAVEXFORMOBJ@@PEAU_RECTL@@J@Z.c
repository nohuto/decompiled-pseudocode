/*
 * XREFs of ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0141EE0
 * Callers:
 *     GreIntersectClipRect @ 0x1C00C29C0 (GreIntersectClipRect.c)
 * Callees:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0037C30 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C003C1F0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C344 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003C850 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003CAC0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003D91C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     PopThreadGuardedObject @ 0x1C003E4B0 (PopThreadGuardedObject.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00406D0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C0040990 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00412F0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0044450 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C005A410 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C005D520 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C005D690 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C0087700 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C00977F0 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C00999B0 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     EngSetLastError @ 0x1C00AAA00 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct EXFORMOBJ *a2, struct _RECTL *a3, int a4)
{
  LONG left; // r9d
  LONG top; // edx
  int v9; // r15d
  unsigned int v10; // edi
  __int64 v12; // r14
  struct _ENTRY *EntryFromObject; // rax
  REGION *v14; // rbx
  REGION *v15; // rcx
  bool v16; // zf
  REGION *v17; // rcx
  LONG v18; // edi
  LONG v19; // r12d
  _DWORD *v20; // rbx
  int v21; // r14d
  int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  LONG v26; // edi
  int v27; // eax
  _BYTE v28[8]; // [rsp+20h] [rbp-E0h] BYREF
  REGION *v29; // [rsp+28h] [rbp-D8h] BYREF
  int v30; // [rsp+30h] [rbp-D0h]
  REGION *v31; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+40h] [rbp-C0h]
  struct _RECTL v33; // [rsp+48h] [rbp-B8h] BYREF
  REGION *v34; // [rsp+58h] [rbp-A8h] BYREF
  int v35; // [rsp+60h] [rbp-A0h]
  _BYTE v36[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h]
  _QWORD v38[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v39; // [rsp+E0h] [rbp-20h]
  struct _POINTL v40; // [rsp+F0h] [rbp-10h] BYREF
  struct _POINTL v41; // [rsp+F8h] [rbp-8h] BYREF
  LONG x; // [rsp+100h] [rbp+0h]
  LONG bottom; // [rsp+104h] [rbp+4h]
  LONG v44; // [rsp+108h] [rbp+8h]
  LONG v45; // [rsp+10Ch] [rbp+Ch]

  left = a3->left;
  top = a3->top;
  v41.x = a3->right;
  x = v41.x;
  bottom = a3->bottom;
  v45 = bottom;
  v40.x = left;
  v40.y = top;
  v41.y = top;
  v44 = left;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v36);
  v9 = 0;
  if ( !v37 )
  {
    EngSetLastError(8u);
LABEL_3:
    v10 = 0;
    goto LABEL_4;
  }
  if ( !(unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)v36, a2, &v40)
    || !(unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)v36, a2, &v41, 3)
    || !(unsigned int)EPATHOBJ::bCloseFigure((EPATHOBJ *)v36) )
  {
    goto LABEL_3;
  }
  v30 = 0;
  RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v29, (struct EPATHOBJ *)v36, 1u, 0LL);
  if ( !v29 )
  {
    EngSetLastError(8u);
    v10 = 0;
    goto LABEL_39;
  }
  *((_DWORD *)this + 9) |= 0x10u;
  v10 = 0;
  v12 = *((_QWORD *)this + 20);
  EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, this);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  if ( v12 )
  {
    v32 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v31, 0x70u);
    v14 = v31;
    if ( v31 )
    {
      *(_QWORD *)&v33.left = v12;
      v10 = RGNOBJ::iCombine((RGNOBJ *)&v31, (struct RGNOBJ *)&v33, (struct RGNOBJ *)&v29, a4);
      if ( v10 )
      {
        v14 = v31;
        v15 = *(REGION **)&v33.left;
        ++*((_DWORD *)v31 + 8);
        *((_QWORD *)this + 20) = v14;
        v16 = (*((_DWORD *)v15 + 8))-- == 1;
        if ( v16 )
          REGION::vDeleteREGION(v15);
      }
      else
      {
        REGION::vDeleteREGION(v31);
        v14 = 0LL;
      }
    }
    REGION::vDeleteREGION(v29);
    v16 = v32 == 1;
    goto LABEL_37;
  }
  if ( a4 != 1 )
  {
    v35 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v34, 0x70u);
    v14 = v34;
    *(_QWORD *)&v33.left = 0LL;
    if ( !v34 )
    {
LABEL_36:
      REGION::vDeleteREGION(v29);
      v16 = v35 == 1;
LABEL_37:
      v29 = 0LL;
      if ( v16 )
        REGION::vDeleteREGION(v14);
      goto LABEL_39;
    }
    v32 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v31, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v31);
    if ( v31 )
    {
      DC::vGet_sizlWindow(this, (struct tagSIZE *)&v33);
      v18 = v33.left;
      v19 = v33.top;
      v20 = (_DWORD *)*((_QWORD *)this + 6);
      if ( *((_QWORD *)this + 62) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v28);
        v21 = 0;
        if ( (v20[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
        {
          v21 = v20[646];
          v18 += v21;
          v9 = v20[647];
          v19 += v9;
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v22);
        if ( ghsemDynamicModeChange )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
          PsLeavePriorityRegion(v23);
        }
      }
      else
      {
        v21 = 0;
      }
      v24 = *((_DWORD *)this + 10) & 1;
      v25 = *((_DWORD *)this + 2 * v24 + 254);
      v26 = v18 - v25;
      v33.left = v21 - v25;
      v27 = *((_DWORD *)this + 2 * v24 + 255);
      v33.top = v9 - v27;
      v33.bottom = v19 - v27;
      v33.right = v26;
      RGNOBJ::vSet((struct _RECTL **)&v31, &v33);
      v10 = RGNOBJ::iCombine((RGNOBJ *)&v34, (struct RGNOBJ *)&v31, (struct RGNOBJ *)&v29, a4);
      if ( v10 )
      {
        v14 = v34;
        ++*((_DWORD *)v34 + 8);
        *((_QWORD *)this + 20) = v14;
        goto LABEL_35;
      }
      v17 = v34;
    }
    else
    {
      v17 = v14;
    }
    REGION::vDeleteREGION(v17);
    v14 = 0LL;
LABEL_35:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v31);
    goto LABEL_36;
  }
  ++*((_DWORD *)v29 + 8);
  *((_QWORD *)this + 20) = v29;
  v10 = RGNOBJ::iComplexity((RGNOBJ *)&v29);
LABEL_39:
  if ( v30 == 1 )
  {
    REGION::vDeleteREGION(v29);
    v29 = 0LL;
  }
LABEL_4:
  EPATHOBJ::vUnlock((EPATHOBJ *)v36);
  if ( v39 )
    PopThreadGuardedObject(v38);
  return v10;
}
