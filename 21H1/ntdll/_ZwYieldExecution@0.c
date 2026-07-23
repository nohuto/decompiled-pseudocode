/*
 * XREFs of _ZwYieldExecution@0 @ 0x4B2F2DE0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS ZwYieldExecution(void)
{
  return Wow64SystemServiceCall();
}
