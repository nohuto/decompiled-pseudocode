/*
 * XREFs of CcNotifyWriteBehind @ 0x1403843E4
 * Callers:
 *     MmDuplicateMemory @ 0x140992AAC (MmDuplicateMemory.c)
 *     MiShutdownSystem @ 0x1409ACF48 (MiShutdownSystem.c)
 * Callees:
 *     CcForEachPartition @ 0x140343DA0 (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
}
