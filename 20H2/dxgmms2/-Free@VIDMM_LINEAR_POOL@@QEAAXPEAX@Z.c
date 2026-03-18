/*
 * XREFs of ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00853E0
 * Callers:
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C00852B0 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C46D0 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapPagesFromAperture@VIDMM_APERTURE_SEGMENT@@UEAAXKPEAU_MDL@@PEAX_K@Z @ 0x1C00C4E70 (-UnmapPagesFromAperture@VIDMM_APERTURE_SEGMENT@@UEAAXKPEAU_MDL@@PEAX_K@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00C5100 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 *     ?FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z @ 0x1C00C5AE0 (-FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C7CD8 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00C9A30 (-ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00C9B90 (-ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00CD400 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00CDC44 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C00CF090 (--1VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00CFA04 (-FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 * Callees:
 *     ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C006E998 (-FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00855FC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::Free(VIDMM_LINEAR_POOL *this, struct _VIDMM_POOL_BLOCK *a2, __int64 a3)
{
  struct _VIDMM_POOL_BLOCK *v3; // r14
  struct _VIDMM_POOL_BLOCK *v4; // rdi
  VIDMM_LINEAR_POOL *v7; // rax
  char *v8; // rbx
  char *v9; // rax
  char **v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  struct _VIDMM_POOL_BLOCK **v13; // rdx
  struct _VIDMM_POOL_BLOCK **v14; // rcx
  __int64 v15; // rdx
  struct _VIDMM_POOL_BLOCK *v16; // rdx
  struct _VIDMM_POOL_BLOCK **v17; // rcx
  struct _VIDMM_POOL_BLOCK *v18; // rdx
  struct _VIDMM_POOL_BLOCK **v19; // rcx
  struct _VIDMM_POOL_BLOCK *v20; // rdx
  __int64 v21; // rdx
  char *v22; // r14
  __int64 v23; // rax
  struct _VIDMM_POOL_BLOCK *v24; // rdx
  struct _VIDMM_POOL_BLOCK **v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  char **v28; // rcx
  char **v29; // rax
  char *v30; // rdi
  char **v31; // rax
  __int64 v32; // rcx
  struct _VIDMM_POOL_BLOCK *v33; // [rsp+48h] [rbp+10h] BYREF
  struct _VIDMM_POOL_BLOCK *v34; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_BYTE *)a2 + 56) == 4 )
  {
    v7 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 4);
    if ( v7 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      v3 = (VIDMM_LINEAR_POOL *)((char *)v7 - 24);
    v8 = (char *)a2 + 24;
    v9 = (char *)*((_QWORD *)a2 + 3);
    if ( v9 != (char *)this + 40 )
      v4 = (struct _VIDMM_POOL_BLOCK *)(v9 - 24);
    if ( *((char **)v9 + 1) != v8 )
      goto LABEL_37;
    v10 = (char **)*((_QWORD *)a2 + 4);
    if ( *v10 != v8 )
      goto LABEL_37;
    *v10 = v9;
    *((_QWORD *)v9 + 1) = v10;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    v11 = *((_DWORD *)this + 4);
    if ( !v11 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v10, a2, a3);
      *(_QWORD *)(v26 + 24) = 1756LL;
      WdLogEvent5_WdAssertion(v26);
      v11 = *((_DWORD *)this + 4);
    }
    *((_DWORD *)this + 4) = v11 - 1;
  }
  else
  {
    v8 = (char *)a2 + 24;
    v27 = *((_QWORD *)a2 + 3);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v27 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) )
      goto LABEL_37;
    v28 = (char **)*((_QWORD *)a2 + 4);
    if ( *v28 != v8 )
      goto LABEL_37;
    *v28 = (char *)v27;
    *(_QWORD *)(v27 + 8) = v28;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(this, a2, &v33, &v34);
    v3 = v33;
    v4 = v34;
  }
  if ( v3 && (v12 = *((_QWORD *)v3 + 1), v12 + *(_QWORD *)v3 == *(_QWORD *)a2) && *((_BYTE *)v3 + 56) == 2 )
  {
    *((_QWORD *)v3 + 1) = v12 + *((_QWORD *)a2 + 1);
    v13 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 5);
    if ( v13[1] != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
      goto LABEL_37;
    v14 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
    if ( *v14 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
      goto LABEL_37;
    *v14 = (struct _VIDMM_POOL_BLOCK *)v13;
    v13[1] = (struct _VIDMM_POOL_BLOCK *)v14;
    VIDMM_LINEAR_POOL::FreeBlock(this, a2);
    if ( v4 )
    {
      v15 = *((_QWORD *)v3 + 1);
      if ( *(_QWORD *)v4 == v15 + *(_QWORD *)v3 && *((_BYTE *)v4 + 56) == 2 )
      {
        *((_QWORD *)v3 + 1) = v15 + *((_QWORD *)v4 + 1);
        v16 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)v4 + 3);
        if ( *((struct _VIDMM_POOL_BLOCK **)v16 + 1) == (struct _VIDMM_POOL_BLOCK *)((char *)v4 + 24) )
        {
          v17 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v4 + 4);
          if ( *v17 == (struct _VIDMM_POOL_BLOCK *)((char *)v4 + 24) )
          {
            *v17 = v16;
            *((_QWORD *)v16 + 1) = v17;
            v18 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)v4 + 5);
            if ( *((struct _VIDMM_POOL_BLOCK **)v18 + 1) == (struct _VIDMM_POOL_BLOCK *)((char *)v4 + 40) )
            {
              v19 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v4 + 6);
              if ( *v19 == (struct _VIDMM_POOL_BLOCK *)((char *)v4 + 40) )
              {
                *v19 = v18;
                *((_QWORD *)v18 + 1) = v19;
                v20 = v4;
LABEL_26:
                VIDMM_LINEAR_POOL::FreeBlock(this, v20);
                return;
              }
            }
          }
        }
        goto LABEL_37;
      }
    }
  }
  else
  {
    if ( v4 )
    {
      v21 = *((_QWORD *)a2 + 1);
      if ( *(_QWORD *)v4 == v21 + *(_QWORD *)a2 && *((_BYTE *)v4 + 56) == 2 )
      {
        *((_QWORD *)v4 + 1) += v21;
        *(_QWORD *)v4 = *(_QWORD *)a2;
        v24 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)a2 + 5);
        if ( *((struct _VIDMM_POOL_BLOCK **)v24 + 1) == (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
        {
          v25 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
          if ( *v25 == (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
          {
            *v25 = v24;
            *((_QWORD *)v24 + 1) = v25;
            v20 = a2;
            goto LABEL_26;
          }
        }
LABEL_37:
        __fastfail(3u);
      }
    }
    *((_QWORD *)a2 + 2) = 0LL;
    *((_BYTE *)a2 + 56) = 2;
    if ( v3 )
    {
      v22 = (char *)v3 + 24;
      v23 = *(_QWORD *)v22;
      if ( *(char **)(*(_QWORD *)v22 + 8LL) != v22 )
        goto LABEL_37;
      *(_QWORD *)v8 = v23;
      *((_QWORD *)v8 + 1) = v22;
      *(_QWORD *)(v23 + 8) = v8;
      *(_QWORD *)v22 = v8;
    }
    else if ( v4 )
    {
      v29 = (char **)*((_QWORD *)v4 + 4);
      v30 = (char *)v4 + 24;
      if ( *v29 != v30 )
        goto LABEL_37;
      *(_QWORD *)v8 = v30;
      *((_QWORD *)v8 + 1) = v29;
      *v29 = v8;
      *((_QWORD *)v30 + 1) = v8;
    }
    else
    {
      v31 = (char **)((char *)this + 40);
      v32 = *((_QWORD *)this + 5);
      if ( *(VIDMM_LINEAR_POOL **)(v32 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
        goto LABEL_37;
      *(_QWORD *)v8 = v32;
      *((_QWORD *)v8 + 1) = v31;
      *(_QWORD *)(v32 + 8) = v8;
      *v31 = v8;
    }
  }
}
