/*
 * XREFs of NtYieldExecution @ 0x1403366A0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x1403366C0 (KeYieldExecution.c)
 */

NTSTATUS __noreturn NtYieldExecution(void)
{
  return KeYieldExecution(0LL);
}
