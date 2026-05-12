/*
 * XREFs of RaidSecondaryDumpDeregister @ 0x1C0056F1C
 * Callers:
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0012D94 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidDeleteUnit @ 0x1C001567C (RaidDeleteUnit.c)
 * Callees:
 *     <none>
 */

__int64 RaidSecondaryDumpDeregister()
{
  __int64 result; // rax

  if ( SecondaryDumpCallbackRegistered
    && KeDeregisterBugCheckReasonCallback((PKBUGCHECK_REASON_CALLBACK_RECORD)&WPP_MAIN_CB.DeviceQueue.32) != 1 )
  {
    return 3221225473LL;
  }
  BootDriveExtension = 0LL;
  result = 0LL;
  SecondaryDumpCallbackRegistered = 0;
  return result;
}
