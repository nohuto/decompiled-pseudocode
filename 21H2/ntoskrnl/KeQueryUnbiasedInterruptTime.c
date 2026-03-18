/*
 * XREFs of KeQueryUnbiasedInterruptTime @ 0x1402A0850
 * Callers:
 *     MiGetSlabCurrentTime @ 0x1404192EC (MiGetSlabCurrentTime.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

ULONGLONG KeQueryUnbiasedInterruptTime(void)
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}
