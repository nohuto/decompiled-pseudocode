/*
 * XREFs of ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00844C0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0091A00 (GreCreateDisplayDC.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C009262C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00A5FA0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C00CFF50 (hbmSelectBitmapInternal.c)
 *     GreRestoreDCInternal @ 0x1C00D0C80 (GreRestoreDCInternal.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0081030 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0082170 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00860F0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C01426FC (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall DC::bSetDefaultRegion(DC *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // r15
  unsigned int v12; // edx
  __int64 v13; // rcx
  DC *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  _DWORD *v17; // rdi
  struct REGION *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // r8
  void *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rax
  char *v26; // rcx
  int v27; // edx
  __int64 result; // rax
  int v29; // r8d
  __int64 v30; // rcx
  LONG v31; // eax
  int v32; // eax
  _BYTE v33[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v34; // [rsp+28h] [rbp-38h] BYREF
  __int64 v35; // [rsp+30h] [rbp-30h] BYREF
  int v36; // [rsp+38h] [rbp-28h]
  struct _RECTL v37; // [rsp+40h] [rbp-20h] BYREF

  v3 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  v5 = (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000;
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v3,
                                  1)
           + 13) == ((unsigned __int16)v3 | (v3 >> 8) & 0xFF0000) >> 16 )
        v5 = (unsigned __int16)v5;
    }
    else
    {
      v5 = (unsigned __int16)v3;
    }
  }
  v6 = *((_QWORD *)gpHandleManager + 2);
  v7 = *(_DWORD *)(v6 + 2056);
  if ( v5 >= v7 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
  {
    v11 = 0LL;
  }
  else
  {
    v8 = ((v5 - v7) >> 16) + 1;
    if ( v5 < v7 )
      v8 = 0LL;
    v9 = *(_QWORD *)(v6 + 8 * v8 + 8);
    if ( (_DWORD)v8 )
      v10 = v5 + ((1 - (_DWORD)v8) << 16) - v7;
    else
      v10 = v5;
    v11 = 0LL;
    if ( v10 < *(_DWORD *)(v9 + 20) )
    {
      LODWORD(a3) = v10;
      if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                     + 16LL * (unsigned __int8)v10
                     + 8) )
        v11 = *(_QWORD *)v9 + 24LL * v10;
    }
  }
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)v6,
                                  (unsigned __int16)v5,
                                  1)
           + 13) == HIWORD(v5) )
        v5 = (unsigned __int16)v5;
    }
    else
    {
      v5 = (unsigned __int16)v5;
    }
  }
  v12 = *(_DWORD *)(v6 + 2056);
  if ( v5 >= v12 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
    goto LABEL_56;
  v13 = ((v5 - v12) >> 16) + 1;
  if ( v5 < v12 )
    v13 = 0LL;
  a3 = *(_QWORD *)(v6 + 8 * v13 + 8);
  if ( (_DWORD)v13 )
    v5 += ((1 - (_DWORD)v13) << 16) - v12;
  if ( v5 >= *(_DWORD *)(a3 + 20) )
LABEL_56:
    v14 = 0LL;
  else
    v14 = *(DC **)(*(_QWORD *)(**(_QWORD **)(a3 + 24) + 8 * ((unsigned __int64)v5 >> 8)) + 16LL * (unsigned __int8)v5 + 8);
  if ( v14 != this )
    v11 = 0LL;
  *(_BYTE *)(v11 + 15) |= 4u;
  v15 = *((_QWORD *)this + 62);
  if ( v15 && (*(_DWORD *)(v15 + 116) & 0x800) != 0 )
    v16 = *(_QWORD *)((char *)this + 532);
  else
    v16 = *((_QWORD *)this + 64);
  v17 = (_DWORD *)*((_QWORD *)this + 6);
  *(_QWORD *)&v37.left = 0LL;
  *(_QWORD *)&v37.right = v16;
  if ( v15 )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v33, (__int64)v14, a3);
    if ( (v17[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
    {
      v31 = v17[646];
      v37.right += v31;
      v37.left = v31;
      v32 = v17[647];
      v37.top += v32;
      v37.bottom += v32;
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v29);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion(v30);
    }
  }
  v18 = (struct REGION *)*((_QWORD *)this + 140);
  if ( v18 && v18 != prgnDefault )
  {
    v34 = *((_QWORD *)this + 140);
    RGNOBJ::vSet((RGNOBJ *)&v34, &v37);
    v21 = *((_QWORD *)this + 140);
    goto LABEL_35;
  }
  v36 = 0;
  if ( gpTypeIsolation[7] )
  {
    v21 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
    if ( !v21 )
      goto LABEL_33;
    v23 = RGNMEMOBJ::s_pSCANLookAsideList;
    if ( qword_1C0252C50 && (int)qword_1C0252C50(v20, v19, v22) >= 0 && qword_1C0252C58 )
      v24 = qword_1C0252C58(v23);
    else
      v24 = 0LL;
    *(_QWORD *)(v21 + 88) = v24;
    if ( v24 )
      goto LABEL_33;
    REGION::vDeleteREGION((REGION *)v21);
  }
  v21 = 0LL;
LABEL_33:
  v35 = v21;
  if ( !v21 )
  {
    result = 0LL;
    *((_QWORD *)this + 140) = prgnDefault;
    return result;
  }
  v25 = *(_QWORD *)(v21 + 88);
  *(_DWORD *)(v21 + 80) = 16;
  *(_DWORD *)(v21 + 84) = 1;
  *(_QWORD *)(v21 + 96) = 0LL;
  *(_QWORD *)(v21 + 104) = 0LL;
  *(_DWORD *)v25 = 0;
  *(_DWORD *)(v25 + 4) = 0x80000000;
  *(_QWORD *)(v25 + 8) = 0x7FFFFFFFLL;
  *(_QWORD *)(v21 + 40) = v25 + 16;
  *(_QWORD *)(v21 + 24) = 112LL;
  *(_QWORD *)(v21 + 32) = 0LL;
  *(_QWORD *)(v21 + 56) = v21 + 48;
  *(_QWORD *)(v21 + 48) = v21 + 48;
  RGNOBJ::vSet((RGNOBJ *)&v35, &v37);
  *((_QWORD *)this + 140) = v21;
LABEL_35:
  v26 = (char *)this + 1016;
  *(_DWORD *)(v21 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
  *(struct _RECTL *)((char *)this + 1000) = v37;
  *((_QWORD *)this + 127) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 130) = v16;
  if ( (*((_DWORD *)this + 10) & 1) != 0 )
    v26 = (char *)this + 1024;
  v27 = *((_DWORD *)v26 + 1);
  result = 1LL;
  *((_DWORD *)this + 294) = *(_DWORD *)v26;
  *((_DWORD *)this + 295) = v27;
  return result;
}
