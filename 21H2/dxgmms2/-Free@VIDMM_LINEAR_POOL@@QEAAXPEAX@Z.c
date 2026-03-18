/*
 * XREFs of ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00A3F98
 * Callers:
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C00A3E50 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z @ 0x1C00D73CC (-FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E8230 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z @ 0x1C00E8E20 (-FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00EAAA4 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00EC790 (-ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00EC8E0 (-ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C00EEB10 (--1VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00EF524 (-FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00F10A4 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00F18F0 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C00A10FC (-FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00A41B0 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::Free(VIDMM_LINEAR_POOL *this, struct _VIDMM_POOL_BLOCK *a2, __int64 a3, __int64 a4)
{
  struct _VIDMM_POOL_BLOCK *v4; // r14
  struct _VIDMM_POOL_BLOCK *v5; // rdi
  VIDMM_LINEAR_POOL *v8; // rax
  char *v9; // rbx
  char *v10; // rax
  char **v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  struct _VIDMM_POOL_BLOCK **v14; // rdx
  struct _VIDMM_POOL_BLOCK **v15; // rcx
  __int64 v16; // rdx
  struct _VIDMM_POOL_BLOCK *v17; // rdx
  struct _VIDMM_POOL_BLOCK **v18; // rcx
  struct _VIDMM_POOL_BLOCK *v19; // rdx
  struct _VIDMM_POOL_BLOCK **v20; // rcx
  struct _VIDMM_POOL_BLOCK *v21; // rdx
  __int64 v22; // rdx
  struct _VIDMM_POOL_BLOCK *v23; // rdx
  struct _VIDMM_POOL_BLOCK **v24; // rcx
  char *v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  char **v29; // rcx
  char **v30; // rax
  char *v31; // rdi
  char **v32; // rax
  __int64 v33; // rcx
  struct _VIDMM_POOL_BLOCK *v34; // [rsp+78h] [rbp+10h] BYREF
  struct _VIDMM_POOL_BLOCK *v35; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  if ( *((_BYTE *)a2 + 56) == 4 )
  {
    v8 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 4);
    if ( v8 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      v4 = (VIDMM_LINEAR_POOL *)((char *)v8 - 24);
    v9 = (char *)a2 + 24;
    v10 = (char *)*((_QWORD *)a2 + 3);
    if ( v10 != (char *)this + 40 )
      v5 = (struct _VIDMM_POOL_BLOCK *)(v10 - 24);
    if ( *((char **)v10 + 1) != v9 )
      goto LABEL_37;
    v11 = (char **)*((_QWORD *)a2 + 4);
    if ( *v11 != v9 )
      goto LABEL_37;
    *v11 = v10;
    *((_QWORD *)v10 + 1) = v11;
    *(_QWORD *)v9 = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    v12 = *((_DWORD *)this + 4);
    if ( !v12 )
    {
      WdLogSingleEntry1(1LL, 1756LL);
      DxgkLogInternalTriageEvent(v27, 0x40000LL);
      v12 = *((_DWORD *)this + 4);
    }
    *((_DWORD *)this + 4) = v12 - 1;
  }
  else
  {
    v9 = (char *)a2 + 24;
    v28 = *((_QWORD *)a2 + 3);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v28 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) )
      goto LABEL_37;
    v29 = (char **)*((_QWORD *)a2 + 4);
    if ( *v29 != v9 )
      goto LABEL_37;
    *v29 = (char *)v28;
    *(_QWORD *)(v28 + 8) = v29;
    *(_QWORD *)v9 = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(this, a2, &v34, &v35);
    v4 = v34;
    v5 = v35;
  }
  if ( !v4 || (v13 = *((_QWORD *)v4 + 1), v13 + *(_QWORD *)v4 != *(_QWORD *)a2) || *((_BYTE *)v4 + 56) != 2 )
  {
    if ( v5 && (v22 = *((_QWORD *)a2 + 1), *(_QWORD *)v5 == v22 + *(_QWORD *)a2) && *((_BYTE *)v5 + 56) == 2 )
    {
      *((_QWORD *)v5 + 1) += v22;
      *(_QWORD *)v5 = *(_QWORD *)a2;
      v23 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)a2 + 5);
      if ( *((struct _VIDMM_POOL_BLOCK **)v23 + 1) == (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
      {
        v24 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
        if ( *v24 == (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
        {
          *v24 = v23;
          *((_QWORD *)v23 + 1) = v24;
          v21 = a2;
          goto LABEL_32;
        }
      }
    }
    else
    {
      *((_QWORD *)a2 + 2) = 0LL;
      *((_BYTE *)a2 + 56) = 2;
      if ( v4 )
      {
        v25 = (char *)v4 + 24;
        v26 = *(_QWORD *)v25;
        if ( *(char **)(*(_QWORD *)v25 + 8LL) == v25 )
        {
          *(_QWORD *)v9 = v26;
          *((_QWORD *)v9 + 1) = v25;
          *(_QWORD *)(v26 + 8) = v9;
          *(_QWORD *)v25 = v9;
          return;
        }
      }
      else if ( v5 )
      {
        v30 = (char **)*((_QWORD *)v5 + 4);
        v31 = (char *)v5 + 24;
        if ( *v30 == v31 )
        {
          *(_QWORD *)v9 = v31;
          *((_QWORD *)v9 + 1) = v30;
          *v30 = v9;
          *((_QWORD *)v31 + 1) = v9;
          return;
        }
      }
      else
      {
        v32 = (char **)((char *)this + 40);
        v33 = *((_QWORD *)this + 5);
        if ( *(VIDMM_LINEAR_POOL **)(v33 + 8) == (VIDMM_LINEAR_POOL *)((char *)this + 40) )
        {
          *(_QWORD *)v9 = v33;
          *((_QWORD *)v9 + 1) = v32;
          *(_QWORD *)(v33 + 8) = v9;
          *v32 = v9;
          return;
        }
      }
    }
LABEL_37:
    __fastfail(3u);
  }
  *((_QWORD *)v4 + 1) = v13 + *((_QWORD *)a2 + 1);
  v14 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 5);
  if ( v14[1] != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
    goto LABEL_37;
  v15 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
  if ( *v15 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
    goto LABEL_37;
  *v15 = (struct _VIDMM_POOL_BLOCK *)v14;
  v14[1] = (struct _VIDMM_POOL_BLOCK *)v15;
  VIDMM_LINEAR_POOL::FreeBlock(this, a2);
  if ( v5 )
  {
    v16 = *((_QWORD *)v4 + 1);
    if ( *(_QWORD *)v5 == v16 + *(_QWORD *)v4 && *((_BYTE *)v5 + 56) == 2 )
    {
      *((_QWORD *)v4 + 1) = v16 + *((_QWORD *)v5 + 1);
      v17 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)v5 + 3);
      if ( *((struct _VIDMM_POOL_BLOCK **)v17 + 1) == (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 24) )
      {
        v18 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v5 + 4);
        if ( *v18 == (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 24) )
        {
          *v18 = v17;
          *((_QWORD *)v17 + 1) = v18;
          v19 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)v5 + 5);
          if ( *((struct _VIDMM_POOL_BLOCK **)v19 + 1) == (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 40) )
          {
            v20 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v5 + 6);
            if ( *v20 == (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 40) )
            {
              *v20 = v19;
              *((_QWORD *)v19 + 1) = v20;
              v21 = v5;
LABEL_32:
              VIDMM_LINEAR_POOL::FreeBlock(this, v21);
              return;
            }
          }
        }
      }
      goto LABEL_37;
    }
  }
}
