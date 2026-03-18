/*
 * XREFs of IoWMISetNotificationCallback @ 0x1407BDDE0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x1402486F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

NTSTATUS __stdcall IoWMISetNotificationCallback(PVOID Object, WMI_NOTIFICATION_CALLBACK Callback, PVOID Context)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  *((_QWORD *)Object + 9) = Callback;
  *((_QWORD *)Object + 10) = Context;
  KeReleaseMutex(&WmipSMMutex, 0);
  return 0;
}
