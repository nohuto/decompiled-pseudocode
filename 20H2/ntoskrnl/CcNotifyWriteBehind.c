/*
 * XREFs of CcNotifyWriteBehind @ 0x140386514
 * Callers:
 *     MmDuplicateMemory @ 0x140998B1C (MmDuplicateMemory.c)
 *     MiShutdownSystem @ 0x1409B2EB8 (MiShutdownSystem.c)
 * Callees:
 *     CcForEachPartition @ 0x14033B8A0 (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
}
