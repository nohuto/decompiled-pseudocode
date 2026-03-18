/*
 * XREFs of ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C004B870
 * Callers:
 *     UserPowerInfoCallout @ 0x1C002A474 (UserPowerInfoCallout.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00D0244 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1640 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D19E0 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     NtUserCreateActivationGroup @ 0x1C012FC20 (NtUserCreateActivationGroup.c)
 *     Win32kBaseDriverEntry @ 0x1C0294600 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

InputTraceLogging::Perf::CritAcquire *__fastcall InputTraceLogging::Perf::CritAcquire::CritAcquire(
        InputTraceLogging::Perf::CritAcquire *this,
        char a2)
{
  GUID *v2; // rdi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  int v9; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+38h] [rbp-40h] BYREF
  int *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]

  v2 = (GUID *)((char *)this + 12);
  *(_OWORD *)((char *)this + 12) = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    *((_BYTE *)this + 8) = a2;
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    *(_QWORD *)this = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread
      && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(*(_QWORD *)this + 48LL)) )
    {
      EtwActivityIdControl(3u, v2);
      if ( (unsigned int)dword_1C0244A70 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v6, v7) )
      {
        v8 = *((unsigned __int8 *)this + 8);
        v13 = 0;
        v9 = v8;
        v12 = 4;
        v11 = &v9;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E87, (int)v2, 0, 3u, &v10);
      }
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
  return this;
}
