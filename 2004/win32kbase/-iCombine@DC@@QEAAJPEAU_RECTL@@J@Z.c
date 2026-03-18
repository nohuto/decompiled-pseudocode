/*
 * XREFs of ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C007F4C0
 * Callers:
 *     GreIntersectClipRect @ 0x1C007EB80 (GreIntersectClipRect.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C0049420 (EngSetLastError.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C007B580 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00809E0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0080B34 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0080CC0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0081030 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0081350 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0082170 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00860F0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C00863B0 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0091FAC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C00923A4 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C01426FC (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct _RECTL *a2, int a3)
{
  int v3; // r12d
  tagSIZE v4; // r13
  __int64 v8; // rsi
  __int64 v9; // rbx
  void *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // edi
  __int64 v16; // r14
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r9
  unsigned int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r14d
  DC *v25; // rdx
  unsigned int v26; // ebx
  struct REGION *Region; // rax
  REGION *v28; // rdi
  __int64 v29; // rax
  REGION *v30; // rcx
  REGION *v32; // rsi
  LONG cx; // ebx
  int v34; // r12d
  LONG cy; // r13d
  _DWORD *v36; // rdi
  int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  LONG v41; // ebx
  int v42; // eax
  unsigned int v43; // r8d
  REGION *v44; // rcx
  REGION *v45; // rcx
  REGION *v46; // [rsp+20h] [rbp-50h] BYREF
  int v47; // [rsp+28h] [rbp-48h]
  struct _RECTL v48; // [rsp+30h] [rbp-40h] BYREF
  __int64 v49; // [rsp+40h] [rbp-30h] BYREF
  int v50; // [rsp+48h] [rbp-28h]
  REGION *v51; // [rsp+50h] [rbp-20h] BYREF
  int v52; // [rsp+58h] [rbp-18h]
  tagSIZE v53; // [rsp+A0h] [rbp+30h] BYREF
  int v54; // [rsp+B0h] [rbp+40h]

  v54 = a3;
  v3 = a3;
  v4 = (tagSIZE)*((_QWORD *)this + 20);
  if ( (a2->left & 0xF8000000) != 0 && (a2->left & 0xF8000000) != -134217728
    || (a2->bottom & 0xF8000000) != 0 && (a2->bottom & 0xF8000000) != -134217728
    || (a2->right & 0xF8000000) != -134217728 && (a2->right & 0xF8000000) != 0
    || (a2->top & 0xF8000000) != -134217728 && (a2->top & 0xF8000000) != 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v8 = 0LL;
  v47 = 0;
  if ( !gpTypeIsolation[7] )
    goto LABEL_65;
  v9 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  if ( v9 )
  {
    v10 = RGNMEMOBJ::s_pSCANLookAsideList;
    if ( qword_1C0252C50 && (int)qword_1C0252C50() >= 0 && qword_1C0252C58 )
    {
      v11 = qword_1C0252C58(v10);
      v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
      v11 = 0LL;
    }
    *(_QWORD *)(v9 + 88) = v11;
    if ( !v11 )
    {
      REGION::vDeleteREGION((REGION *)v9);
LABEL_65:
      v9 = 0LL;
    }
  }
  v46 = (REGION *)v9;
  if ( !v9 )
    return 0;
  v12 = *(_QWORD *)(v9 + 88);
  *(_DWORD *)(v9 + 80) = 16;
  *(_DWORD *)(v9 + 84) = 1;
  *(_QWORD *)(v9 + 96) = 0LL;
  *(_QWORD *)(v9 + 104) = 0LL;
  *(_DWORD *)v12 = 0;
  *(_DWORD *)(v12 + 4) = 0x80000000;
  *(_QWORD *)(v12 + 8) = 0x7FFFFFFFLL;
  *(_QWORD *)(v9 + 40) = v12 + 16;
  *(_QWORD *)(v9 + 24) = 112LL;
  *(_QWORD *)(v9 + 32) = 0LL;
  *(_QWORD *)(v9 + 56) = v9 + 48;
  *(_QWORD *)(v9 + 48) = v9 + 48;
  RGNOBJ::vSet((RGNOBJ *)&v46, a2);
  v13 = *(_DWORD *)this;
  v14 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  v15 = (unsigned __int16)v13 | (v14 >> 8) & 0xFF0000;
  if ( v15 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v15,
                                  1)
           + 13) == HIWORD(v15) )
        v15 = (unsigned __int16)v15;
    }
    else
    {
      v15 = (unsigned __int16)v15;
    }
    v8 = 0LL;
  }
  v16 = *((_QWORD *)gpHandleManager + 2);
  v17 = *(_DWORD *)(v16 + 2056);
  if ( v15 < v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
  {
    v18 = ((v15 - v17) >> 16) + 1;
    if ( v15 < v17 )
      v18 = 0LL;
    v19 = *(_QWORD *)(v16 + 8 * v18 + 8);
    if ( (_DWORD)v18 )
      v20 = v15 + ((1 - (_DWORD)v18) << 16) - v17;
    else
      v20 = v15;
    if ( v20 < *(_DWORD *)(v19 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v20 >> 8))
                   + 16LL * (unsigned __int8)v20
                   + 8) )
    {
      v8 = *(_QWORD *)v19 + 24LL * v20;
    }
  }
  if ( v15 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v15,
                                  1)
           + 13) == HIWORD(v15) )
        v15 = (unsigned __int16)v15;
    }
    else
    {
      v15 = (unsigned __int16)v15;
    }
    v3 = v54;
  }
  v21 = *(_DWORD *)(v16 + 2056);
  if ( v15 >= v21 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
    goto LABEL_75;
  v22 = ((v15 - v21) >> 16) + 1;
  if ( v15 < v21 )
    v22 = 0LL;
  v23 = *(_QWORD *)(v16 + 8 * v22 + 8);
  if ( (_DWORD)v22 )
    v15 += ((1 - (_DWORD)v22) << 16) - v21;
  if ( v15 >= *(_DWORD *)(v23 + 20) )
  {
LABEL_75:
    v24 = 0;
    v25 = 0LL;
  }
  else
  {
    v24 = 0;
    v25 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * ((unsigned __int64)v15 >> 8))
                 + 16LL * (unsigned __int8)v15
                 + 8);
  }
  if ( v25 != this )
    v8 = 0LL;
  *(_BYTE *)(v8 + 15) |= 4u;
  if ( v4 )
  {
    v52 = 0;
    Region = RGNMEMOBJ::AllocateRegion(0x70uLL);
    v51 = Region;
    v28 = Region;
    if ( Region )
    {
      *((_DWORD *)Region + 20) = 16;
      *((_DWORD *)Region + 21) = 1;
      *((_QWORD *)Region + 12) = 0LL;
      *((_QWORD *)Region + 13) = 0LL;
      v29 = *((_QWORD *)Region + 11);
      v53 = v4;
      *(_DWORD *)v29 = 0;
      *(_DWORD *)(v29 + 4) = 0x80000000;
      *(_QWORD *)(v29 + 8) = 0x7FFFFFFFLL;
      *((_QWORD *)v28 + 5) = v29 + 16;
      *((_QWORD *)v28 + 3) = 112LL;
      *((_QWORD *)v28 + 4) = 0LL;
      *((_QWORD *)v28 + 7) = (char *)v28 + 48;
      *((_QWORD *)v28 + 6) = (char *)v28 + 48;
      v26 = RGNOBJ::iCombine((RGNOBJ *)&v51, (struct RGNOBJ *)&v53, (struct RGNOBJ *)&v46, v3);
      if ( v26 )
      {
        v28 = v51;
        v30 = (REGION *)v53;
        ++*((_DWORD *)v51 + 8);
        *((_QWORD *)this + 20) = v28;
        if ( (*((_DWORD *)v30 + 8))-- == 1 )
          REGION::vDeleteREGION(v30);
      }
      else
      {
        REGION::vDeleteREGION(v51);
        v28 = 0LL;
      }
    }
    else
    {
      v26 = 0;
    }
    REGION::vDeleteREGION(v46);
    if ( v52 != 1 )
      goto LABEL_45;
    v44 = v28;
    goto LABEL_79;
  }
  if ( v3 != 1 )
  {
    v52 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v51, 0x70u);
    v50 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v49, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v49);
    v32 = v51;
    v53 = 0LL;
    if ( v51 )
    {
      if ( !v49 )
      {
        REGION::vDeleteREGION(v51);
        v32 = 0LL;
        v26 = 0;
        goto LABEL_59;
      }
      DC::vGet_sizlWindow(this, &v53);
      cx = v53.cx;
      v34 = 0;
      cy = v53.cy;
      v36 = (_DWORD *)*((_QWORD *)this + 6);
      if ( *((_QWORD *)this + 62) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v53);
        if ( (v36[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
        {
          v24 = v36[646];
          cx += v24;
          v34 = v36[647];
          cy += v34;
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v37);
        if ( ghsemDynamicModeChange )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
          PsLeavePriorityRegion(v38);
        }
      }
      v39 = 1016LL;
      if ( (*((_DWORD *)this + 10) & 1) != 0 )
        v39 = 1024LL;
      v40 = *(_DWORD *)((char *)this + v39);
      v41 = cx - v40;
      v48.left = v24 - v40;
      v42 = *(_DWORD *)((char *)this + v39 + 4);
      v48.top = v34 - v42;
      v48.bottom = cy - v42;
      v48.right = v41;
      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v48) && (unsigned int)ERECTL::bWrapped((ERECTL *)&v48) )
      {
        v26 = v43;
        v45 = v32;
      }
      else
      {
        RGNOBJ::vSet((RGNOBJ *)&v49, &v48);
        v26 = RGNOBJ::iCombine((RGNOBJ *)&v51, (struct RGNOBJ *)&v49, (struct RGNOBJ *)&v46, v54);
        if ( v26 )
        {
          v32 = v51;
          ++*((_DWORD *)v51 + 8);
          *((_QWORD *)this + 20) = v32;
LABEL_59:
          REGION::vDeleteREGION(v46);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v49);
          if ( v52 != 1 )
            goto LABEL_45;
          v44 = v32;
LABEL_79:
          REGION::vDeleteREGION(v44);
LABEL_45:
          if ( v47 == 1 )
            REGION::vDeleteREGION(0LL);
          return v26;
        }
        v45 = v51;
      }
      REGION::vDeleteREGION(v45);
      v32 = 0LL;
      goto LABEL_59;
    }
    v26 = 0;
    goto LABEL_59;
  }
  ++*(_DWORD *)(v9 + 32);
  *((_QWORD *)this + 20) = v9;
  return 2;
}
