/*
 * XREFs of ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600
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
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00CFBB0 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D0DC0 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1160 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1600 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     NtMITSetLastInputRecipient @ 0x1C01364D0 (NtMITSetLastInputRecipient.c)
 *     NtUserCreateActivationGroup @ 0x1C0137F60 (NtUserCreateActivationGroup.c)
 *     NtUserEnableTouchPad @ 0x1C0138A20 (NtUserEnableTouchPad.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C013A440 (NtUserGetSystemDpiForProcess.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C013C8A0 (NtUserIsMouseInPointerEnabled.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C0145A40 (W32pLkmdDataCollectionCallback.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01BBF00 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C029C0C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Perf::CritAcquire::~CritAcquire(InputTraceLogging::Perf::CritAcquire *this)
{
  unsigned int v2; // r8d
  int v3; // [rsp+30h] [rbp-78h] BYREF
  int v4; // [rsp+34h] [rbp-74h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-70h] BYREF
  int *v6; // [rsp+58h] [rbp-50h]
  __int64 v7; // [rsp+60h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+68h] [rbp-40h] BYREF
  int *v9; // [rsp+88h] [rbp-20h]
  __int64 v10; // [rsp+90h] [rbp-18h]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
    && *(_QWORD *)this
    && (*(_DWORD *)(*(_QWORD *)this + 48LL) || *(int *)(*(_QWORD *)this + 24LL) > 0) )
  {
    *(_DWORD *)(*(_QWORD *)this + 44LL) = 1;
    *(_OWORD *)(*(_QWORD *)this + 28LL) = *(_OWORD *)((char *)this + 12);
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v3 = *((unsigned __int8 *)this + 8);
        v7 = 4LL;
        v6 = &v3;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          (const GUID *)((char *)this + 12),
          0LL,
          3u,
          &v5);
        v2 = dword_1C024C960;
      }
      if ( v2 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v4 = *((unsigned __int8 *)this + 8);
        v10 = 4LL;
        v9 = &v4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199CD,
          (const GUID *)((char *)this + 12),
          0LL,
          3u,
          &v8);
      }
    }
  }
}
