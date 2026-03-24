/*
 * XREFs of KeQueryUnbiasedInterruptTime @ 0x1402E9880
 * Callers:
 *     CmpFlushHive @ 0x14062A0D8 (CmpFlushHive.c)
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     PopBatteryWorker @ 0x14077F810 (PopBatteryWorker.c)
 * Callees:
 *     <none>
 */

ULONGLONG KeQueryUnbiasedInterruptTime(void)
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}
