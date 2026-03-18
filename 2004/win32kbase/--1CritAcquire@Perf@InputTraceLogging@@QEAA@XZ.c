/*
 * XREFs of ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x1C00059E0 (NtMITGetCursorUpdateHandle.c)
 *     NtUserCheckProcessSession @ 0x1C0007170 (NtUserCheckProcessSession.c)
 *     NtUserVkKeyScanEx @ 0x1C0018D10 (NtUserVkKeyScanEx.c)
 *     DrvGetCurrentDpiInfo @ 0x1C003DE94 (DrvGetCurrentDpiInfo.c)
 *     NtUserGetDoubleClickTime @ 0x1C0045EF0 (NtUserGetDoubleClickTime.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C004D490 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C0050790 (NtUserGetProcessDpiAwarenessContext.c)
 *     UserPowerInfoCallout @ 0x1C0066874 (UserPowerInfoCallout.c)
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
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00D05B0 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D16E0 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1A80 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1F20 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     NtMITSetLastInputRecipient @ 0x1C01304E0 (NtMITSetLastInputRecipient.c)
 *     NtUserCreateActivationGroup @ 0x1C0131F70 (NtUserCreateActivationGroup.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C01347A0 (NtUserGetSystemDpiForProcess.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C0136C00 (NtUserIsMouseInPointerEnabled.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C013F6F0 (W32pLkmdDataCollectionCallback.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B61A0 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C02960C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
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
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v3 = *((unsigned __int8 *)this + 8);
        v7 = 4LL;
        v6 = &v3;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E30,
          (const GUID *)((char *)this + 12),
          0LL,
          3u,
          &v5);
        v2 = dword_1C0246A70;
      }
      if ( v2 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v4 = *((unsigned __int8 *)this + 8);
        v10 = 4LL;
        v9 = &v4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E5D,
          (const GUID *)((char *)this + 12),
          0LL,
          3u,
          &v8);
      }
    }
  }
}
