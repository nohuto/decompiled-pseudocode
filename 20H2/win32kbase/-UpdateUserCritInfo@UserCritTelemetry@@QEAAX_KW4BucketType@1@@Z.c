/*
 * XREFs of ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004B3B0
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
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

signed __int64 __fastcall UserCritTelemetry::UpdateUserCritInfo(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  unsigned int v7; // r8d
  unsigned __int64 *v8; // rcx
  signed __int64 result; // rax
  _QWORD v10[16]; // [rsp+0h] [rbp-98h] BYREF

  v10[0] = 10LL;
  v10[1] = 25LL;
  v10[2] = 50LL;
  v4 = a3;
  v5 = 1000000 * a2;
  v10[3] = 100LL;
  v10[4] = 250LL;
  v10[5] = 500LL;
  v10[6] = 1000LL;
  v10[7] = 2500LL;
  v10[8] = 5000LL;
  v10[9] = 10000LL;
  v10[10] = 25000LL;
  v10[11] = 50000LL;
  v10[12] = 100000LL;
  v10[13] = 200000LL;
  v10[14] = -1LL;
  if ( gliQpcFreq.QuadPart == 10000000 )
    v6 = v5 / 0x989680;
  else
    v6 = v5 / gliQpcFreq.QuadPart;
  v7 = 0;
  v8 = v10;
  while ( v6 > *v8 )
  {
    ++v7;
    ++v8;
    if ( v7 >= 0xF )
      goto LABEL_6;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8 * (v7 + 15 * v4)));
LABEL_6:
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8 * v4 + 360), v6);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8 * v4 + 384));
  return result;
}
