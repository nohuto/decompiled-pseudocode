/*
 * XREFs of NtYieldExecution @ 0x1402F1560
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x1402F1580 (KeYieldExecution.c)
 */

NTSTATUS __noreturn NtYieldExecution(void)
{
  return KeYieldExecution(0LL);
}
