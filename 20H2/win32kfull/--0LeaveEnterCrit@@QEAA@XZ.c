/*
 * XREFs of ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C012CEAC
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00527B0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxDesktopThreadWaiter @ 0x1C007E9C8 (xxxDesktopThreadWaiter.c)
 *     SfnINOUTNCCALCSIZE @ 0x1C00EF250 (SfnINOUTNCCALCSIZE.c)
 *     xxxRemoteReconnect @ 0x1C0156B10 (xxxRemoteReconnect.c)
 *     xxxUserModeCallback @ 0x1C02335F8 (xxxUserModeCallback.c)
 * Callees:
 *     <none>
 */

LeaveEnterCrit *__fastcall LeaveEnterCrit::LeaveEnterCrit(LeaveEnterCrit *this)
{
  UserSessionSwitchLeaveCrit(this);
  return this;
}
