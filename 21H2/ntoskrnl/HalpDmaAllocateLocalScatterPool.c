/*
 * XREFs of HalpDmaAllocateLocalScatterPool @ 0x1408651D8
 * Callers:
 *     HalpDmaAllocateChildAdapterV2 @ 0x140764C4C (HalpDmaAllocateChildAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407C3BC8 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x14024E380 (MmFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x1404B8DB4 (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x1404B8E0C (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaCommitScatterMapBuffers @ 0x1404C7474 (HalpDmaCommitScatterMapBuffers.c)
 *     HalpDmaPrependTranslations @ 0x1404C7FB0 (HalpDmaPrependTranslations.c)
 *     HalpDmaAllocateScatterMemory @ 0x140865408 (HalpDmaAllocateScatterMemory.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDmaAllocateLocalScatterPool(__int64 a1, __int64 a2)
{
  int v2; // r14d
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  struct _MDL *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  PVOID v11; // r15
  __int64 v12; // r12
  void *v13; // rax
  __int64 v14; // rcx
  __int64 ScatterPagesFromScatterPool; // rax
  __int64 v16; // rcx
  int v17; // r9d
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // r9d
  __int64 ScatterPagesFromContiguousPool; // rax
  int v22; // r9d
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // r9d
  __int64 result; // rax
  PVOID BaseAddress; // [rsp+70h] [rbp+8h] BYREF
  int v28; // [rsp+78h] [rbp+10h] BYREF

  BaseAddress = 0LL;
  v28 = 0;
  v2 = a2;
  v4 = 0LL;
  v5 = HalpDmaAllocateScatterMemory(a1, a2, &BaseAddress);
  v7 = (struct _MDL *)v5;
  if ( v5 )
  {
    v8 = *(_DWORD *)(v5 + 40) >> 12;
    v9 = HalpMmAllocCtxAlloc(v6, 24LL);
    v11 = BaseAddress;
    v12 = v9;
    if ( v9 )
    {
      v13 = (void *)HalpMmAllocCtxAlloc(v10, 72LL * (unsigned int)v8);
      v4 = (__int64)v13;
      if ( v13 )
      {
        *(_QWORD *)v12 = 0LL;
        *(_DWORD *)(v12 + 12) = 0;
        memset(v13, 0, 72 * v8);
        *(_DWORD *)(v12 + 8) = v8;
        *(_QWORD *)(v12 + 16) = v4;
        *(_DWORD *)(a1 + 80) = 0;
        *(_QWORD *)(a1 + 48) = v12;
        *(_QWORD *)(a1 + 72) = v12;
        v4 = HalpDmaCommitScatterMapBuffers(a1, (__int64)v11, 0LL, 0, v7);
        if ( v4 )
        {
          *(_QWORD *)(a1 + 320) = v7;
          *(_QWORD *)(a1 + 328) = v11;
          goto LABEL_11;
        }
        HalpMmAllocCtxFree(v6, *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL));
      }
      HalpMmAllocCtxFree(v14, v12);
    }
    if ( v11 )
      MmUnmapLockedPages(v11, v7);
    MmFreePagesFromMdl(v7);
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  LODWORD(v8) = 0;
LABEL_11:
  if ( (_DWORD)v8 != v2 )
  {
    ScatterPagesFromScatterPool = HalpDmaAllocateScatterPagesFromScatterPool(
                                    v6,
                                    *(_QWORD *)(a1 + 152),
                                    (unsigned int)(v2 - v8),
                                    0LL,
                                    1,
                                    (unsigned int *)&v28);
    if ( ScatterPagesFromScatterPool )
    {
      v17 = v28;
      v18 = ScatterPagesFromScatterPool;
      if ( v28 )
      {
        v19 = (unsigned int)v28;
        do
        {
          *(_QWORD *)(v18 + 48) = *(_QWORD *)(v18 + 48) & 0xFFFFFFFFFFFFFFF3uLL | 8;
          v18 = *(_QWORD *)(v18 + 8);
          --v19;
        }
        while ( v19 );
      }
      v4 = HalpDmaPrependTranslations(ScatterPagesFromScatterPool, v17, v4);
      LODWORD(v8) = v20 + v8;
    }
    if ( (_DWORD)v8 != v2 )
    {
      ScatterPagesFromContiguousPool = HalpDmaAllocateScatterPagesFromContiguousPool(
                                         v16,
                                         *(_QWORD *)(a1 + 152),
                                         (unsigned int)(v2 - v8),
                                         0LL,
                                         1,
                                         (ULONG *)&v28);
      if ( ScatterPagesFromContiguousPool )
      {
        v22 = v28;
        v23 = ScatterPagesFromContiguousPool;
        if ( v28 )
        {
          v24 = (unsigned int)v28;
          do
          {
            *(_QWORD *)(v23 + 48) = *(_QWORD *)(v23 + 48) & 0xFFFFFFFFFFFFFFF3uLL | 8;
            v23 = *(_QWORD *)(v23 + 8);
            --v24;
          }
          while ( v24 );
        }
        v4 = HalpDmaPrependTranslations(ScatterPagesFromContiguousPool, v22, v4);
        LODWORD(v8) = v25 + v8;
      }
      if ( !(_DWORD)v8 )
        return 3221225626LL;
    }
  }
  *(_DWORD *)(a1 + 224) = v2;
  result = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  *(_DWORD *)(a1 + 32) = v8;
  return result;
}
