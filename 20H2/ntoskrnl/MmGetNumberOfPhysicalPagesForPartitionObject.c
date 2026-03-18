/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1407B7CC4
 * Callers:
 *     CcInitializePartition @ 0x1403C2114 (CcInitializePartition.c)
 *     CcInitializeCacheManager @ 0x140A3F638 (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E4C8 + 8LL * **a1) + 6928LL);
}
