/*
 * XREFs of _ZwCallbackReturn@12 @ 0x4B2F29B0
 * Callers:
 *     _KiUserCallbackExceptionHandler@16 @ 0x4B2F4D80 (_KiUserCallbackExceptionHandler@16.c)
 *     _KiUserCallbackDispatcher@12 @ 0x4B2F4E00 (_KiUserCallbackDispatcher@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwCallbackReturn(PVOID OutputBuffer, ULONG OutputLength, NTSTATUS Status)
{
  return Wow64SystemServiceCall();
}
