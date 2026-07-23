/*
 * XREFs of ZwOpenSession @ 0x1403FA710
 * Callers:
 *     PnpInitializeNotifyEntry @ 0x1406ECF54 (PnpInitializeNotifyEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenSession(PHANDLE SessionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SessionHandle);
}
