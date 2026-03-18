/*
 * XREFs of ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x1C00059E0 (NtMITGetCursorUpdateHandle.c)
 *     NtUserCheckProcessSession @ 0x1C0007170 (NtUserCheckProcessSession.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0010CB0 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     ReferenceDwmApiPort @ 0x1C0016610 (ReferenceDwmApiPort.c)
 *     UserPowerInfoCallout @ 0x1C002A474 (UserPowerInfoCallout.c)
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
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00D0244 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1640 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D19E0 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     NtMITSetLastInputRecipient @ 0x1C012E190 (NtMITSetLastInputRecipient.c)
 *     NtUserCreateActivationGroup @ 0x1C012FC20 (NtUserCreateActivationGroup.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C0132450 (NtUserGetSystemDpiForProcess.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C01348B0 (NtUserIsMouseInPointerEnabled.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C013D3A0 (W32pLkmdDataCollectionCallback.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B3E30 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C0294600 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Perf::CritAcquire::~CritAcquire(
        InputTraceLogging::Perf::CritAcquire *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+30h] [rbp-78h] BYREF
  int v8; // [rsp+34h] [rbp-74h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-70h] BYREF
  int *v10; // [rsp+58h] [rbp-50h]
  __int64 v11; // [rsp+60h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+68h] [rbp-40h] BYREF
  int *v13; // [rsp+88h] [rbp-20h]
  __int64 v14; // [rsp+90h] [rbp-18h]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
    && *(_QWORD *)this
    && (*(_DWORD *)(*(_QWORD *)this + 48LL) || *(int *)(*(_QWORD *)this + 24LL) > 0) )
  {
    *(_DWORD *)(*(_QWORD *)this + 44LL) = 1;
    *(_OWORD *)(*(_QWORD *)this + 28LL) = *(_OWORD *)((char *)this + 12);
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, a4) )
      {
        v7 = *((unsigned __int8 *)this + 8);
        v11 = 4LL;
        v10 = &v7;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E30, (_DWORD)this + 12, 0, 3u, &v9);
        v5 = (unsigned int)dword_1C0244A70;
      }
      if ( (unsigned int)v5 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v5, v6) )
        {
          v8 = *((unsigned __int8 *)this + 8);
          v14 = 4LL;
          v13 = &v8;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C0244A70,
            (int)&dword_1C0211E5D,
            (_DWORD)this + 12,
            0,
            3u,
            &v12);
        }
      }
    }
  }
}
