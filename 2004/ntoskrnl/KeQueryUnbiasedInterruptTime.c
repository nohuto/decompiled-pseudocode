/*
 * XREFs of KeQueryUnbiasedInterruptTime @ 0x140268150
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     PopBatteryWorker @ 0x14076D000 (PopBatteryWorker.c)
 * Callees:
 *     <none>
 */

ULONGLONG KeQueryUnbiasedInterruptTime(void)
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}
