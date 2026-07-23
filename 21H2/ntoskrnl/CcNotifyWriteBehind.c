/*
 * XREFs of CcNotifyWriteBehind @ 0x1403847C0
 * Callers:
 *     MmDuplicateMemory @ 0x14099625C (MmDuplicateMemory.c)
 *     MiShutdownSystem @ 0x1409B0CE8 (MiShutdownSystem.c)
 * Callees:
 *     CcForEachPartition @ 0x140303960 (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
}
