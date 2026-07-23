/*
 * XREFs of _NtCompleteConnectPort@4 @ 0x4B2F3360
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtCompleteConnectPort(HANDLE PortHandle)
{
  return Wow64SystemServiceCall();
}
