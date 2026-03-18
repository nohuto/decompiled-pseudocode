/*
 * XREFs of HalpDmaAllocateTranslationBuffer @ 0x140A5D2E4
 * Callers:
 *     HalpDmaInitializeMasterAdapter @ 0x140A5D1AC (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403772D0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037AA88 (HalpMmAllocCtxAlloc.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall HalpDmaAllocateTranslationBuffer(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rcx
  void *v7; // rdi
  __int64 result; // rax

  v4 = HalpMmAllocCtxAlloc(a1, 24LL);
  if ( v4 )
  {
    v5 = (void *)HalpMmAllocCtxAlloc(v3, 0x4000LL);
    v7 = v5;
    if ( v5 )
    {
      *(_QWORD *)v4 = 0LL;
      *(_DWORD *)(v4 + 12) = 0;
      memset(v5, 0, 0x4000uLL);
      *(_DWORD *)(v4 + 8) = 227;
      result = v4;
      *(_QWORD *)(v4 + 16) = v7;
      *(_DWORD *)(a2 + 8) = 0;
      *(_QWORD *)a2 = v4;
      return result;
    }
    HalpMmAllocCtxFree(v6, v4);
  }
  return 0LL;
}
