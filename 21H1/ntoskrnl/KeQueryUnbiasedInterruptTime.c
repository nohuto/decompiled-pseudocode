/*
 * XREFs of KeQueryUnbiasedInterruptTime @ 0x140337F80
 * Callers:
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     PopBatteryWorker @ 0x14076A860 (PopBatteryWorker.c)
 * Callees:
 *     <none>
 */

ULONGLONG KeQueryUnbiasedInterruptTime(void)
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}
