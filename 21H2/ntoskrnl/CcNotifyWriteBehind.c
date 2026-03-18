/*
 * XREFs of CcNotifyWriteBehind @ 0x14038A808
 * Callers:
 *     MmDuplicateMemory @ 0x140A487C0 (MmDuplicateMemory.c)
 *     MiShutdownSystem @ 0x140A69FD8 (MiShutdownSystem.c)
 * Callees:
 *     CcForEachPartition @ 0x140363C8C (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64 (__fastcall *)(__int64, _QWORD, __int64))CcNotifyWriteBehindHelper, 2LL, 0, 0);
}
