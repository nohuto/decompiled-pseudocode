/*
 * XREFs of ?IsTimestampNewest@CursorNotificationProcessor@@QEAA_N_J@Z @ 0x18003AEC0
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x18001AD60 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800B45A0 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CursorNotificationProcessor::IsTimestampNewest(CursorNotificationProcessor *this, __int64 a2)
{
  if ( !a2 )
    return 1;
  if ( a2 > *((_QWORD *)this + 5) )
  {
    *((_QWORD *)this + 5) = a2;
    return 1;
  }
  return 0;
}
