/*
 * XREFs of McTemplateK0xqx_EtwWriteTransfer @ 0x1C0132524
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
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     NtUserGetDC @ 0x1C0089A70 (NtUserGetDC.c)
 *     NtUserReleaseDC @ 0x1C0089E20 (NtUserReleaseDC.c)
 *     EtwTraceReleaseUserCrit @ 0x1C008A064 (EtwTraceReleaseUserCrit.c)
 *     EnterSharedCrit @ 0x1C008A1D0 (EnterSharedCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C008A650 (EtwTraceAcquiredSharedUserCrit.c)
 *     ReferenceDwmApiPort @ 0x1C00ADB00 (ReferenceDwmApiPort.c)
 *     GreGetDCPoint @ 0x1C00B4970 (GreGetDCPoint.c)
 *     NtMITSetLastInputRecipient @ 0x1C01364D0 (NtMITSetLastInputRecipient.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C013A440 (NtUserGetSystemDpiForProcess.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C013C8A0 (NtUserIsMouseInPointerEnabled.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C0145A40 (W32pLkmdDataCollectionCallback.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01BBF00 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00A2A70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0xqx_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, _DWORD a3, __int64 a4, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v6; // [rsp+40h] [rbp-40h]
  __int64 v7; // [rsp+48h] [rbp-38h]
  va_list v8; // [rsp+50h] [rbp-30h]
  __int64 v9; // [rsp+58h] [rbp-28h]
  va_list v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va; // [rsp+B0h] [rbp+30h]
  va_list va1; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v13 = va_arg(va1, _QWORD);
  v12 = a4;
  v7 = 8LL;
  v6 = &v12;
  v11 = 8LL;
  va_copy(v8, va);
  v9 = 4LL;
  va_copy(v10, va1);
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 4u, &v5);
}
