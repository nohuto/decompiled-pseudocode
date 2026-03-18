/*
 * XREFs of ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0091400
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
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
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
