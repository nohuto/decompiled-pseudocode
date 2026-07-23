/*
 * XREFs of ZwSetWnfProcessNotificationEvent @ 0x1403F5990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetWnfProcessNotificationEvent(HANDLE NotificationEvent)
{
  _disable();
  __readeflags();
  return KiServiceInternal(NotificationEvent);
}
