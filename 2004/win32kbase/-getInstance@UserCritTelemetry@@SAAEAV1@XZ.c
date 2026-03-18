/*
 * XREFs of ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00915F0
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x1C00059E0 (NtMITGetCursorUpdateHandle.c)
 *     NtUserCheckProcessSession @ 0x1C0007170 (NtUserCheckProcessSession.c)
 *     NtUserVkKeyScanEx @ 0x1C0018D10 (NtUserVkKeyScanEx.c)
 *     DrvGetCurrentDpiInfo @ 0x1C003DE94 (DrvGetCurrentDpiInfo.c)
 *     NtUserGetDoubleClickTime @ 0x1C0045EF0 (NtUserGetDoubleClickTime.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C004D490 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C0050790 (NtUserGetProcessDpiAwarenessContext.c)
 *     NtUserGetKeyboardLayout @ 0x1C0076BE0 (NtUserGetKeyboardLayout.c)
 *     NtUserMapVirtualKeyEx @ 0x1C0077150 (NtUserMapVirtualKeyEx.c)
 *     UserEnterUserCritSecShared @ 0x1C0077370 (UserEnterUserCritSecShared.c)
 *     UserReleaseDC @ 0x1C0078DA0 (UserReleaseDC.c)
 *     NtUserGetDC @ 0x1C0090AC0 (NtUserGetDC.c)
 *     NtUserReleaseDC @ 0x1C0090E70 (NtUserReleaseDC.c)
 *     EnterSharedCrit @ 0x1C0091220 (EnterSharedCrit.c)
 *     GreGetDCPoint @ 0x1C00A4F40 (GreGetDCPoint.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C00A9A40 (UserGetDesktopIdForCurrentThread.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C00BA270 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     ReferenceDwmApiPort @ 0x1C00BA7E0 (ReferenceDwmApiPort.c)
 *     NtMITSetLastInputRecipient @ 0x1C01304E0 (NtMITSetLastInputRecipient.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C01347A0 (NtUserGetSystemDpiForProcess.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C0136C00 (NtUserIsMouseInPointerEnabled.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C013F6F0 (W32pLkmdDataCollectionCallback.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B61A0 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C00D3880 (memset.c)
 */

struct UserCritTelemetry *UserCritTelemetry::getInstance(void)
{
  if ( (dword_1C024CE88 & 1) == 0 )
  {
    dword_1C024CE88 |= 1u;
    memset(qword_1C024CE90, 0, 0x198uLL);
    qword_1C024D028 = 0LL;
    qword_1C024D030 = 0LL;
  }
  return (struct UserCritTelemetry *)qword_1C024CE90;
}
