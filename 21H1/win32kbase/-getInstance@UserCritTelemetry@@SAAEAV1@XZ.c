/*
 * XREFs of ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C008A5A0
 * Callers:
 *     DrvGetCurrentDpiInfo @ 0x1C002F614 (DrvGetCurrentDpiInfo.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C00369E0 (NtMITGetCursorUpdateHandle.c)
 *     NtUserCheckProcessSession @ 0x1C0038170 (NtUserCheckProcessSession.c)
 *     NtUserGetDoubleClickTime @ 0x1C0038DE0 (NtUserGetDoubleClickTime.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C0039D90 (UserGetDesktopIdForCurrentThread.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C0040920 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C0042D50 (NtUserGetProcessDpiAwarenessContext.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0046DB0 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     NtUserVkKeyScanEx @ 0x1C0058990 (NtUserVkKeyScanEx.c)
 *     UserReleaseDC @ 0x1C006D8A0 (UserReleaseDC.c)
 *     NtUserGetKeyboardLayout @ 0x1C006EE80 (NtUserGetKeyboardLayout.c)
 *     NtUserMapVirtualKeyEx @ 0x1C006F3F0 (NtUserMapVirtualKeyEx.c)
 *     UserEnterUserCritSecShared @ 0x1C006F610 (UserEnterUserCritSecShared.c)
 *     NtUserGetDC @ 0x1C0089A70 (NtUserGetDC.c)
 *     NtUserReleaseDC @ 0x1C0089E20 (NtUserReleaseDC.c)
 *     EnterSharedCrit @ 0x1C008A1D0 (EnterSharedCrit.c)
 *     ReferenceDwmApiPort @ 0x1C00ADB00 (ReferenceDwmApiPort.c)
 *     GreGetDCPoint @ 0x1C00B4970 (GreGetDCPoint.c)
 *     NtMITSetLastInputRecipient @ 0x1C01364D0 (NtMITSetLastInputRecipient.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C013A440 (NtUserGetSystemDpiForProcess.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C013C8A0 (NtUserIsMouseInPointerEnabled.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C0145A40 (W32pLkmdDataCollectionCallback.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01BBF00 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C00D2E00 (memset.c)
 */

struct UserCritTelemetry *UserCritTelemetry::getInstance(void)
{
  if ( (dword_1C0252E98 & 1) == 0 )
  {
    dword_1C0252E98 |= 1u;
    memset(qword_1C0252EA0, 0, 0x198uLL);
    qword_1C0253038 = 0LL;
    qword_1C0253040 = 0LL;
  }
  return (struct UserCritTelemetry *)qword_1C0252EA0;
}
