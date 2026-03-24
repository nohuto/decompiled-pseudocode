/*
 * XREFs of CcNotifyWriteBehind @ 0x140384670
 * Callers:
 *     MmDuplicateMemory @ 0x14099525C (MmDuplicateMemory.c)
 *     MiShutdownSystem @ 0x1409AFDB8 (MiShutdownSystem.c)
 * Callees:
 *     CcForEachPartition @ 0x1402F8C10 (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
}
