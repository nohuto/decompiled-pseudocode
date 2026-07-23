/*
 * XREFs of NtContinue @ 0x1403F6570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  return NtContinueEx(ContextRecord, (PVOID)TestAlert);
}
