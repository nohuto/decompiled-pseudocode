/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1407BC924
 * Callers:
 *     CcInitializePartition @ 0x1403C2964 (CcInitializePartition.c)
 *     CcInitializeCacheManager @ 0x140A3D1B8 (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E648 + 8LL * **a1) + 6928LL);
}
