/*
 * XREFs of ZwOpenSession @ 0x1403F48B0
 * Callers:
 *     PnpInitializeNotifyEntry @ 0x1406B3954 (PnpInitializeNotifyEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenSession(PHANDLE SessionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SessionHandle);
}
