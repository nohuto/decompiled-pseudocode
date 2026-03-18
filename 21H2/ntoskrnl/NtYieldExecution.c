/*
 * XREFs of NtYieldExecution @ 0x14029B2F0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x14029B310 (KeYieldExecution.c)
 */

void __noreturn NtYieldExecution()
{
  KeYieldExecution(0LL);
}
