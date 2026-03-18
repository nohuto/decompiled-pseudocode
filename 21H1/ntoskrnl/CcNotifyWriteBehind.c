/*
 * XREFs of CcNotifyWriteBehind @ 0x14037FB4C
 * Callers:
 *     MmDuplicateMemory @ 0x14098C6CC (MmDuplicateMemory.c)
 *     MiShutdownSystem @ 0x1409AC0E8 (MiShutdownSystem.c)
 * Callees:
 *     CcForEachPartition @ 0x140202D30 (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
}
