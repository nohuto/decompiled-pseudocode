/*
 * XREFs of _ZwListenPort@8 @ 0x4B2F39C0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwListenPort(HANDLE PortHandle, PPORT_MESSAGE ConnectionRequest)
{
  return Wow64SystemServiceCall();
}
