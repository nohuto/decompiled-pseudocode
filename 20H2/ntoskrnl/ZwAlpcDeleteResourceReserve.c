/*
 * XREFs of ZwAlpcDeleteResourceReserve @ 0x1403F9190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDeleteResourceReserve(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ResourceId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
