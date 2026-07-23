/*
 * XREFs of ZwAlpcDisconnectPort @ 0x1403F91F0
 * Callers:
 *     DbgkRegisterErrorPort @ 0x1408894A4 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
