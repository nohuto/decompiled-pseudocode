/*
 * XREFs of ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C004B5A0
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x1C00059E0 (NtMITGetCursorUpdateHandle.c)
 *     NtUserCheckProcessSession @ 0x1C0007170 (NtUserCheckProcessSession.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0010CB0 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     ReferenceDwmApiPort @ 0x1C0016610 (ReferenceDwmApiPort.c)
 *     DrvGetCurrentDpiInfo @ 0x1C00316D4 (DrvGetCurrentDpiInfo.c)
 *     NtUserGetDC @ 0x1C004AA70 (NtUserGetDC.c)
 *     NtUserReleaseDC @ 0x1C004AE20 (NtUserReleaseDC.c)
 *     EnterSharedCrit @ 0x1C004B1D0 (EnterSharedCrit.c)
 *     UserEnterUserCritSecShared @ 0x1C004E080 (UserEnterUserCritSecShared.c)
 *     NtUserGetKeyboardLayout @ 0x1C004F220 (NtUserGetKeyboardLayout.c)
 *     NtUserMapVirtualKeyEx @ 0x1C004F790 (NtUserMapVirtualKeyEx.c)
 *     GreGetDCPoint @ 0x1C0060930 (GreGetDCPoint.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C006BAA0 (UserGetDesktopIdForCurrentThread.c)
 *     NtUserVkKeyScanEx @ 0x1C0089510 (NtUserVkKeyScanEx.c)
 *     UserReleaseDC @ 0x1C009B640 (UserReleaseDC.c)
 *     NtUserGetDoubleClickTime @ 0x1C00A71E0 (NtUserGetDoubleClickTime.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00AE330 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C00B0E40 (NtUserGetProcessDpiAwarenessContext.c)
 *     NtMITSetLastInputRecipient @ 0x1C012E190 (NtMITSetLastInputRecipient.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C0132450 (NtUserGetSystemDpiForProcess.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C01348B0 (NtUserIsMouseInPointerEnabled.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C013D3A0 (W32pLkmdDataCollectionCallback.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B3E30 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C00D3740 (memset.c)
 */

struct UserCritTelemetry *UserCritTelemetry::getInstance(void)
{
  if ( (dword_1C024AE90 & 1) == 0 )
  {
    dword_1C024AE90 |= 1u;
    memset(qword_1C024AEA0, 0, 0x198uLL);
    qword_1C024B038 = 0LL;
    qword_1C024B040 = 0LL;
  }
  return (struct UserCritTelemetry *)qword_1C024AEA0;
}
