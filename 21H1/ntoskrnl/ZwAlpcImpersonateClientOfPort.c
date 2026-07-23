/*
 * XREFs of ZwAlpcImpersonateClientOfPort @ 0x1403F33F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
