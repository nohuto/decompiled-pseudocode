/*
 * XREFs of NtYieldExecution @ 0x14021B6F0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x14021B710 (KeYieldExecution.c)
 */

NTSTATUS __noreturn NtYieldExecution(void)
{
  return KeYieldExecution(0LL);
}
