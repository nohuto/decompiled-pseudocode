/*
 * XREFs of NtYieldExecution @ 0x14029E190
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x14029E1B0 (KeYieldExecution.c)
 */

void __noreturn NtYieldExecution()
{
  KeYieldExecution(0LL);
}
