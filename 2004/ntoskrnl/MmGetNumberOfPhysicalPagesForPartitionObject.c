/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1407A6BF8
 * Callers:
 *     CcInitializePartition @ 0x1403BE89C (CcInitializePartition.c)
 *     CcInitializeCacheManager @ 0x140A39658 (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E448 + 8LL * **a1) + 6928LL);
}
