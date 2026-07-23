/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1407BD0B4
 * Callers:
 *     CcInitializePartition @ 0x1403C2D94 (CcInitializePartition.c)
 *     CcInitializeCacheManager @ 0x140A3E1B8 (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8LL * **a1) + 6928LL);
}
