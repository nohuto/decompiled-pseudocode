/*
 * XREFs of _NtContinueEx@8 @ 0x4B2F3390
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtContinueEx(PCONTEXT ContextRecord, PVOID ContinueArgument)
{
  return Wow64SystemServiceCall();
}
