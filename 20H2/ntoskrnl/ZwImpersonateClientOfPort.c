/*
 * XREFs of ZwImpersonateClientOfPort @ 0x1403F8550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
