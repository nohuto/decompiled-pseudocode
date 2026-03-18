/*
 * XREFs of ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0157EAC
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0096AE0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     SfnINOUTNCCALCSIZE @ 0x1C00A5000 (SfnINOUTNCCALCSIZE.c)
 *     xxxDesktopThreadWaiter @ 0x1C00BE118 (xxxDesktopThreadWaiter.c)
 *     xxxCreateDesktopEx @ 0x1C00C52A4 (xxxCreateDesktopEx.c)
 *     xxxRemoteReconnect @ 0x1C01541B0 (xxxRemoteReconnect.c)
 *     xxxUserModeCallback @ 0x1C0234488 (xxxUserModeCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall LeaveEnterCrit::~LeaveEnterCrit(LeaveEnterCrit *this)
{
  EnterCrit(0LL, 1LL);
}
