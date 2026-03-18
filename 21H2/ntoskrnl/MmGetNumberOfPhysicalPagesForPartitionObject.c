/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x14084D678
 * Callers:
 *     CcInitializePartition @ 0x1403D0FE0 (CcInitializePartition.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x14053C908 (CcInitializePrivateVolumeCacheMap.c)
 *     CcInitializeCacheManager @ 0x140AFC9DC (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * **a1) + 16720LL);
}
