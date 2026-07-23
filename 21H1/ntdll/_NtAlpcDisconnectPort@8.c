/*
 * XREFs of _NtAlpcDisconnectPort@8 @ 0x4B2F31C0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  return Wow64SystemServiceCall();
}
