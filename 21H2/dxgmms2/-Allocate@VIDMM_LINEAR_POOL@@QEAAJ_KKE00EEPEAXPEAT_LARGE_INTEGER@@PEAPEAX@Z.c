/*
 * XREFs of ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C009C224
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C009BD90 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?AllocatePhysical@VIDMM_GLOBAL@@CAPEAX_KKPEAPEAX@Z @ 0x1C00D510C (-AllocatePhysical@VIDMM_GLOBAL@@CAPEAX_KKPEAPEAX@Z.c)
 *     ?ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E83A0 (-ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z @ 0x1C00E8A00 (-AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z.c)
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00E9C8C (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00ECA28 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C00EEC44 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z.c)
 *     ?AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C00EEC9C (-AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00F10A4 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z @ 0x1C009C43C (-SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z.c)
 *     ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C009C670 (-FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BL.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00A41B0 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::Allocate(
        VIDMM_LINEAR_POOL *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        char a8,
        void *a9,
        union _LARGE_INTEGER *a10,
        void **a11)
{
  int BlockRun; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // r12
  __int64 i; // rsi
  __int64 v20; // rdi
  _QWORD *v21; // r15
  bool v22; // zf
  _QWORD *v23; // rdi
  __int64 *v24; // rsi
  _QWORD *v25; // rsi
  _QWORD *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct _VIDMM_POOL_BLOCK *v32; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rdx
  _QWORD *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  _QWORD *v57; // rcx
  unsigned __int8 v58; // [rsp+38h] [rbp-59h]
  struct _VIDMM_POOL_BLOCK *v59; // [rsp+88h] [rbp-9h] BYREF

  v59 = 0LL;
  if ( !a8 )
  {
    v58 = 0;
    BlockRun = VIDMM_LINEAR_POOL::FindBlockRun(this);
    v16 = 0LL;
    v17 = BlockRun;
    if ( BlockRun >= 0 )
      goto LABEL_3;
    if ( !*((_DWORD *)this + 4) || a7 )
      return v17;
  }
  if ( !*((_QWORD *)this + 4) || (v58 = 1, v36 = VIDMM_LINEAR_POOL::FindBlockRun(this), v16 = 0LL, v36 < 0) )
  {
    v58 = 2;
    v37 = VIDMM_LINEAR_POOL::FindBlockRun(this);
    v16 = 0LL;
    v17 = v37;
    if ( v37 < 0 )
      return v17;
  }
LABEL_3:
  v18 = MEMORY[0x18];
  for ( i = 24LL; i != v18; v16 = 0LL )
  {
    v20 = i - 24;
    v21 = (_QWORD *)i;
    v22 = *(_BYTE *)(i - 24 + 56) == 4;
    i = *(_QWORD *)i;
    if ( v22 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v13, v14, v15) + 24) = v20;
      (*((void (__fastcall **)(_QWORD))this + 3))(*(_QWORD *)(v20 + 16));
      *(_QWORD *)(v20 + 16) = 0LL;
      *(_BYTE *)(v20 + 56) = 2;
      v38 = *((_DWORD *)this + 4);
      if ( !v38 )
      {
        WdLogSingleEntry1(1LL, 543LL);
        v58 = 0;
        DxgkLogInternalTriageEvent(v39, 0x40000LL);
        v38 = *((_DWORD *)this + 4);
      }
      *((_DWORD *)this + 4) = v38 - 1;
    }
    if ( v20 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v40 = WdLogNewEntry5_WdTrace(v16, v13, 0LL, v15);
        *(_QWORD *)(v40 + 24) = v20;
        *(_QWORD *)(v40 + 32) = 0LL;
      }
      MEMORY[8] += *(_QWORD *)(v20 + 8);
      v41 = *v21;
      if ( *(_QWORD **)(*v21 + 8LL) != v21 )
        goto LABEL_53;
      v42 = (_QWORD *)v21[1];
      if ( (_QWORD *)*v42 != v21 )
        goto LABEL_53;
      *v42 = v41;
      *(_QWORD *)(v41 + 8) = v42;
      v43 = (_QWORD *)(v20 + 40);
      *v21 = 0LL;
      *(_QWORD *)(v20 + 32) = 0LL;
      v44 = *(_QWORD *)(v20 + 40);
      if ( *(_QWORD *)(v44 + 8) != v20 + 40 )
        goto LABEL_53;
      v45 = *(_QWORD **)(v20 + 48);
      if ( (_QWORD *)*v45 != v43 )
        goto LABEL_53;
      *v45 = v44;
      *(_QWORD *)(v44 + 8) = v45;
      *v43 = 0LL;
      *(_QWORD *)(v20 + 48) = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v20);
    }
  }
  v23 = (_QWORD *)MEMORY[0x20];
  if ( (VIDMM_LINEAR_POOL *)MEMORY[0x20] != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v24 = (__int64 *)(MEMORY[0x20] - 24LL);
    if ( *(_BYTE *)(MEMORY[0x20] + 32LL) == 2 )
    {
      v34 = *v24;
      v35 = *v24 + *(_QWORD *)(MEMORY[0x20] - 16LL);
      if ( v35 == MEMORY[0] )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v46 = WdLogNewEntry5_WdTrace(v35, v34, v14, v15);
          *(_QWORD *)(v46 + 24) = 0LL;
          *(_QWORD *)(v46 + 32) = v24;
          v34 = *v24;
        }
        MEMORY[0] = v34;
        MEMORY[8] += *(v23 - 2);
        v47 = *v23;
        if ( *(_QWORD **)(*v23 + 8LL) != v23 )
          goto LABEL_53;
        v48 = (_QWORD *)v23[1];
        if ( (_QWORD *)*v48 != v23 )
          goto LABEL_53;
        *v48 = v47;
        *(_QWORD *)(v47 + 8) = v48;
        v49 = v23 + 2;
        *v23 = 0LL;
        v23[1] = 0LL;
        v50 = v23[2];
        if ( *(_QWORD **)(v50 + 8) != v23 + 2 )
          goto LABEL_53;
        v51 = (_QWORD *)v23[3];
        if ( (_QWORD *)*v51 != v49 )
          goto LABEL_53;
        *v51 = v50;
        *(_QWORD *)(v50 + 8) = v51;
        *v49 = 0LL;
        v23[3] = 0LL;
        VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)(v23 - 3));
      }
    }
  }
  v25 = (_QWORD *)MEMORY[0x18];
  if ( (VIDMM_LINEAR_POOL *)MEMORY[0x18] != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v26 = (_QWORD *)(MEMORY[0x18] - 24LL);
    if ( *(_BYTE *)(MEMORY[0x18] - 24LL + 56) == 2 )
    {
      v27 = MEMORY[8];
      if ( *v26 == MEMORY[8] + MEMORY[0] )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v52 = WdLogNewEntry5_WdTrace(MEMORY[8] + MEMORY[0], MEMORY[8], v14, v15);
          *(_QWORD *)(v52 + 24) = 0LL;
          *(_QWORD *)(v52 + 32) = v26;
          v27 = MEMORY[8];
        }
        MEMORY[8] = v27 + v26[1];
        v53 = *v25;
        if ( *(_QWORD **)(*v25 + 8LL) == v25 )
        {
          v54 = (_QWORD *)v25[1];
          if ( (_QWORD *)*v54 == v25 )
          {
            *v54 = v53;
            *(_QWORD *)(v53 + 8) = v54;
            v55 = v26 + 5;
            *v25 = 0LL;
            v26[4] = 0LL;
            v56 = v26[5];
            if ( *(_QWORD **)(v56 + 8) == v26 + 5 )
            {
              v57 = (_QWORD *)v26[6];
              if ( (_QWORD *)*v57 == v55 )
              {
                *v57 = v56;
                *(_QWORD *)(v56 + 8) = v57;
                *v55 = 0LL;
                v26[6] = 0LL;
                VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)(v25 - 3));
                goto LABEL_12;
              }
            }
          }
        }
LABEL_53:
        __fastfail(3u);
      }
    }
  }
LABEL_12:
  v17 = VIDMM_LINEAR_POOL::SplitBlock(this, 0LL, 0LL, 0LL, a9, &v59, v58);
  if ( (v17 & 0x80000000) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
    v32 = v59;
    *a10 = *(union _LARGE_INTEGER *)v59;
    *a11 = v32;
  }
  return v17;
}
