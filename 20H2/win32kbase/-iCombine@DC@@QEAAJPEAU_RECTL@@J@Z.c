/*
 * XREFs of ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003A380
 * Callers:
 *     GreIntersectClipRect @ 0x1C00C29C0 (GreIntersectClipRect.c)
 * Callees:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0037C30 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C003C1F0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C344 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C003C4D0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003C850 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003CAC0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003D91C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00406D0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C0040990 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004C100 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C004C910 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C00AAA00 (EngSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C014021C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
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
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  LONG v40; // ebx
  int v41; // eax
  unsigned int v42; // r8d
  REGION *v43; // rcx
  REGION *v44; // rcx
  REGION *v45; // [rsp+20h] [rbp-50h] BYREF
  int v46; // [rsp+28h] [rbp-48h]
  struct _RECTL v47; // [rsp+30h] [rbp-40h] BYREF
  __int64 v48; // [rsp+40h] [rbp-30h] BYREF
  int v49; // [rsp+48h] [rbp-28h]
  REGION *v50; // [rsp+50h] [rbp-20h] BYREF
  int v51; // [rsp+58h] [rbp-18h]
  tagSIZE v52; // [rsp+A0h] [rbp+30h] BYREF
  int v53; // [rsp+B0h] [rbp+40h]

  v53 = a3;
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
  v46 = 0;
  if ( !gpTypeIsolation[7] )
    goto LABEL_65;
  v9 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  if ( v9 )
  {
    v10 = RGNMEMOBJ::s_pSCANLookAsideList;
    if ( qword_1C0250C50 && (int)qword_1C0250C50() >= 0 && qword_1C0250C58 )
    {
      v11 = qword_1C0250C58(v10);
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
  v45 = (REGION *)v9;
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
  RGNOBJ::vSet((RGNOBJ *)&v45, a2);
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
    v3 = v53;
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
    v51 = 0;
    Region = RGNMEMOBJ::AllocateRegion(0x70uLL);
    v50 = Region;
    v28 = Region;
    if ( Region )
    {
      *((_DWORD *)Region + 20) = 16;
      *((_DWORD *)Region + 21) = 1;
      *((_QWORD *)Region + 12) = 0LL;
      *((_QWORD *)Region + 13) = 0LL;
      v29 = *((_QWORD *)Region + 11);
      v52 = v4;
      *(_DWORD *)v29 = 0;
      *(_DWORD *)(v29 + 4) = 0x80000000;
      *(_QWORD *)(v29 + 8) = 0x7FFFFFFFLL;
      *((_QWORD *)v28 + 5) = v29 + 16;
      *((_QWORD *)v28 + 3) = 112LL;
      *((_QWORD *)v28 + 4) = 0LL;
      *((_QWORD *)v28 + 7) = (char *)v28 + 48;
      *((_QWORD *)v28 + 6) = (char *)v28 + 48;
      v26 = RGNOBJ::iCombine((RGNOBJ *)&v50, (struct RGNOBJ *)&v52, (struct RGNOBJ *)&v45, v3);
      if ( v26 )
      {
        v28 = v50;
        v30 = (REGION *)v52;
        ++*((_DWORD *)v50 + 8);
        *((_QWORD *)this + 20) = v28;
        if ( (*((_DWORD *)v30 + 8))-- == 1 )
          REGION::vDeleteREGION(v30);
      }
      else
      {
        REGION::vDeleteREGION(v50);
        v28 = 0LL;
      }
    }
    else
    {
      v26 = 0;
    }
    REGION::vDeleteREGION(v45);
    if ( v51 != 1 )
      goto LABEL_45;
    v43 = v28;
    goto LABEL_79;
  }
  if ( v3 != 1 )
  {
    v51 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v50, 0x70u);
    v49 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v48, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v48);
    v32 = v50;
    v52 = 0LL;
    if ( v50 )
    {
      if ( !v48 )
      {
        REGION::vDeleteREGION(v50);
        v32 = 0LL;
        v26 = 0;
        goto LABEL_59;
      }
      DC::vGet_sizlWindow(this, &v52);
      cx = v52.cx;
      v34 = 0;
      cy = v52.cy;
      v36 = (_DWORD *)*((_QWORD *)this + 6);
      if ( *((_QWORD *)this + 62) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v52);
        if ( (v36[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
        {
          v24 = v36[646];
          cx += v24;
          v34 = v36[647];
          cy += v34;
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        if ( ghsemDynamicModeChange )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
          PsLeavePriorityRegion(v37);
        }
      }
      v38 = 1016LL;
      if ( (*((_DWORD *)this + 10) & 1) != 0 )
        v38 = 1024LL;
      v39 = *(_DWORD *)((char *)this + v38);
      v40 = cx - v39;
      v47.left = v24 - v39;
      v41 = *(_DWORD *)((char *)this + v38 + 4);
      v47.top = v34 - v41;
      v47.bottom = cy - v41;
      v47.right = v40;
      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v47) && (unsigned int)ERECTL::bWrapped((ERECTL *)&v47) )
      {
        v26 = v42;
        v44 = v32;
      }
      else
      {
        RGNOBJ::vSet((RGNOBJ *)&v48, &v47);
        v26 = RGNOBJ::iCombine((RGNOBJ *)&v50, (struct RGNOBJ *)&v48, (struct RGNOBJ *)&v45, v53);
        if ( v26 )
        {
          v32 = v50;
          ++*((_DWORD *)v50 + 8);
          *((_QWORD *)this + 20) = v32;
LABEL_59:
          REGION::vDeleteREGION(v45);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v48);
          if ( v51 != 1 )
            goto LABEL_45;
          v43 = v32;
LABEL_79:
          REGION::vDeleteREGION(v43);
LABEL_45:
          if ( v46 == 1 )
            REGION::vDeleteREGION(0LL);
          return v26;
        }
        v44 = v50;
      }
      REGION::vDeleteREGION(v44);
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
