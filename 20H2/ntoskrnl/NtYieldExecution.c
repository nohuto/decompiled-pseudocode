/*
 * XREFs of NtYieldExecution @ 0x140302F80
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x140302FA0 (KeYieldExecution.c)
 */

NTSTATUS __noreturn NtYieldExecution(void)
{
  return KeYieldExecution(0LL);
}
