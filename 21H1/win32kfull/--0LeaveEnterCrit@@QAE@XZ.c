/*
 * XREFs of ??0LeaveEnterCrit@@QAE@XZ @ 0xAEFB8
 * Callers:
 *     ?xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z @ 0x45220 (-xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z.c)
 *     ?HandleProcessSpinning@@YGHXZ @ 0x69E70 (-HandleProcessSpinning@@YGHXZ.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     _SfnINOUTNCCALCSIZE@32 @ 0x93FEA (_SfnINOUTNCCALCSIZE@32.c)
 *     _xxxDesktopThreadWaiter@8 @ 0xA6EF2 (_xxxDesktopThreadWaiter@8.c)
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 *     _xxxUserModeCallback@20 @ 0x1950A7 (_xxxUserModeCallback@20.c)
 * Callees:
 *     <none>
 */

LeaveEnterCrit *__thiscall LeaveEnterCrit::LeaveEnterCrit(LeaveEnterCrit *this)
{
  UserSessionSwitchLeaveCrit();
  return this;
}
