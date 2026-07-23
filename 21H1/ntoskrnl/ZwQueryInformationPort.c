/*
 * XREFs of ZwQueryInformationPort @ 0x1403F4C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationPort(
        HANDLE PortHandle,
        PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
