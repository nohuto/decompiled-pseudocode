/*
 * XREFs of MiUpdatePartitionChildPageCounts @ 0x1405BFE08
 * Callers:
 *     MiInitializeDynamicPfns @ 0x140582D7C (MiInitializeDynamicPfns.c)
 *     MiMoveLargeFreePage @ 0x1405AF3BC (MiMoveLargeFreePage.c)
 *     MiActOnPartitionNodePages @ 0x1405BCBC4 (MiActOnPartitionNodePages.c)
 *     MiTransferPartitionPageRun @ 0x1405BF718 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiRestrictRangeToNode @ 0x1403B7A10 (MiRestrictRangeToNode.c)
 */

_QWORD *__fastcall MiUpdatePartitionChildPageCounts(__int64 a1, __int64 a2, ULONG_PTR a3, ULONG_PTR a4)
{
  _QWORD *result; // rax
  ULONG_PTR v5; // rbx
  ULONG_PTR v9; // rdi
  __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a4;
  if ( ((ULONG_PTR *)a2 == &MiSystemPartition || (ULONG_PTR *)a1 == &MiSystemPartition)
    && !_bittest((const signed __int32 *)(a2 + 4), 8u)
    && !_bittest((const signed __int32 *)(a1 + 4), 8u)
    && a4 )
  {
    do
    {
      v9 = MiRestrictRangeToNode(a3, v5);
      result = MiSearchNumaNodeTable(a3);
      v10 = *((unsigned int *)result + 2);
      if ( (ULONG_PTR *)a2 == &MiSystemPartition )
      {
        _InterlockedExchangeAdd64(&MiState[(unsigned int)v10 + 1506], v9);
      }
      else if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      {
        _InterlockedExchangeAdd64(&MiState[v10 + 1506], -(__int64)v9);
      }
      a3 += v9;
      v5 -= v9;
    }
    while ( v5 );
  }
  return result;
}
