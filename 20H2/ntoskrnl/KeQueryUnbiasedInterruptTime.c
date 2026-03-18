/*
 * XREFs of KeQueryUnbiasedInterruptTime @ 0x1402E8F20
 * Callers:
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     PopBatteryWorker @ 0x14077BA30 (PopBatteryWorker.c)
 * Callees:
 *     <none>
 */

ULONGLONG KeQueryUnbiasedInterruptTime(void)
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}
