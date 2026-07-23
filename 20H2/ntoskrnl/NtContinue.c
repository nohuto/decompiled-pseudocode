/*
 * XREFs of NtContinue @ 0x1403FC3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  return NtContinueEx(ContextRecord, (PVOID)TestAlert);
}
