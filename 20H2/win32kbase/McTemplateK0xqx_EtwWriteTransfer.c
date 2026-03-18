/*
 * XREFs of McTemplateK0xqx_EtwWriteTransfer @ 0x1C012A1E4
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x1C00059E0 (NtMITGetCursorUpdateHandle.c)
 *     NtUserCheckProcessSession @ 0x1C0007170 (NtUserCheckProcessSession.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0010CB0 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     ReferenceDwmApiPort @ 0x1C0016610 (ReferenceDwmApiPort.c)
 *     DrvGetCurrentDpiInfo @ 0x1C00316D4 (DrvGetCurrentDpiInfo.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     NtUserGetDC @ 0x1C004AA70 (NtUserGetDC.c)
 *     NtUserReleaseDC @ 0x1C004AE20 (NtUserReleaseDC.c)
 *     EtwTraceReleaseUserCrit @ 0x1C004B064 (EtwTraceReleaseUserCrit.c)
 *     EnterSharedCrit @ 0x1C004B1D0 (EnterSharedCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C004B650 (EtwTraceAcquiredSharedUserCrit.c)
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
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00287C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
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
