/*
 * XREFs of ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C008A870
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00CFBB0 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D0DC0 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1160 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1600 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     NtUserCreateActivationGroup @ 0x1C0137F60 (NtUserCreateActivationGroup.c)
 *     NtUserEnableTouchPad @ 0x1C0138A20 (NtUserEnableTouchPad.c)
 *     Win32kBaseDriverEntry @ 0x1C029C0C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

InputTraceLogging::Perf::CritAcquire *__fastcall InputTraceLogging::Perf::CritAcquire::CritAcquire(
        InputTraceLogging::Perf::CritAcquire *this,
        char a2)
{
  GUID *v2; // rdi
  __int64 CurrentThreadWin32Thread; // rax
  int v6; // eax
  int v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = (GUID *)((char *)this + 12);
  *(_OWORD *)((char *)this + 12) = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    *((_BYTE *)this + 8) = a2;
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(this);
    *(_QWORD *)this = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread
      && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(*(_QWORD *)this + 48LL)) )
    {
      EtwActivityIdControl(3u, v2);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v6 = *((unsigned __int8 *)this + 8);
        v11 = 0;
        v7 = v6;
        v10 = 4;
        v9 = &v7;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          v2,
          0LL,
          3u,
          &v8);
      }
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
  return this;
}
