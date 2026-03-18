/*
 * XREFs of NtYieldExecution @ 0x1403366A0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x1403366C0 (KeYieldExecution.c)
 */

void __noreturn NtYieldExecution()
{
  KeYieldExecution(0LL);
}
