/*
 * XREFs of McTemplateK0xqx_EtwWriteTransfer @ 0x1C012C534
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
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     NtUserGetDC @ 0x1C0090AC0 (NtUserGetDC.c)
 *     NtUserReleaseDC @ 0x1C0090E70 (NtUserReleaseDC.c)
 *     EtwTraceReleaseUserCrit @ 0x1C00910B4 (EtwTraceReleaseUserCrit.c)
 *     EnterSharedCrit @ 0x1C0091220 (EnterSharedCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C00916A0 (EtwTraceAcquiredSharedUserCrit.c)
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
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001B2C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
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
