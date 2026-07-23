/*
 * XREFs of ZwAlpcRevokeSecurityContext @ 0x1403F92D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcRevokeSecurityContext(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ContextHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
