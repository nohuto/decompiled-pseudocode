/*
 * XREFs of KeQueryUnbiasedInterruptTime @ 0x14029ABD0
 * Callers:
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     PopBatteryWorker @ 0x14077F9D0 (PopBatteryWorker.c)
 * Callees:
 *     <none>
 */

ULONGLONG KeQueryUnbiasedInterruptTime(void)
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}
