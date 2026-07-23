/*
 * XREFs of _ZwAlpcQueryInformation@20 @ 0x4B2F3210
 * Callers:
 *     _TpWaitForAlpcCompletion@4 @ 0x4B383490 (_TpWaitForAlpcCompletion@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwAlpcQueryInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  return Wow64SystemServiceCall();
}
