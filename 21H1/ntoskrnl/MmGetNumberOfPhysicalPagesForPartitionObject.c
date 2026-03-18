/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1407A44A0
 * Callers:
 *     CcInitializePartition @ 0x1403BD90C (CcInitializePartition.c)
 *     CcInitializeCacheManager @ 0x140A397E8 (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E588 + 8LL * **a1) + 6928LL);
}
