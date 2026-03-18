/*
 * XREFs of EtwTraceAcquiredSharedUserCrit @ 0x1C008A650
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00CFBB0 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D0DC0 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1160 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1600 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     NtUserCreateActivationGroup @ 0x1C0137F60 (NtUserCreateActivationGroup.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0132524 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceAcquiredSharedUserCrit(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  LARGE_INTEGER PerformanceCounter; // rsi
  int v4; // r8d
  LONGLONG v5; // rdi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 *v9; // rcx
  bool v10; // zf
  __int64 v11; // [rsp+30h] [rbp-98h] BYREF
  __int64 v12; // [rsp+38h] [rbp-90h]
  __int64 v13; // [rsp+40h] [rbp-88h]
  __int64 v14; // [rsp+48h] [rbp-80h]
  __int64 v15; // [rsp+50h] [rbp-78h]
  __int64 v16; // [rsp+58h] [rbp-70h]
  __int64 v17; // [rsp+60h] [rbp-68h]
  __int64 v18; // [rsp+68h] [rbp-60h]
  __int64 v19; // [rsp+70h] [rbp-58h]
  __int64 v20; // [rsp+78h] [rbp-50h]
  __int64 v21; // [rsp+80h] [rbp-48h]
  __int64 v22; // [rsp+88h] [rbp-40h]
  __int64 v23; // [rsp+90h] [rbp-38h]
  __int64 v24; // [rsp+98h] [rbp-30h]
  __int64 v25; // [rsp+A0h] [rbp-28h]

  result = PsGetCurrentThreadWin32Thread(a1);
  v2 = result;
  if ( result )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v5 = PerformanceCounter.QuadPart - *(_QWORD *)(v2 + 8);
    if ( (dword_1C0252E98 & 1) == 0 )
    {
      dword_1C0252E98 |= 1u;
      memset(qword_1C0252EA0, 0, 0x198uLL);
      qword_1C0253038 = 0LL;
      qword_1C0253040 = 0LL;
    }
    v6 = 1000000 * v5;
    v11 = 10LL;
    v12 = 25LL;
    v13 = 50LL;
    v14 = 100LL;
    v15 = 250LL;
    v16 = 500LL;
    v17 = 1000LL;
    v18 = 2500LL;
    v19 = 5000LL;
    v20 = 10000LL;
    v21 = 25000LL;
    v22 = 50000LL;
    v23 = 100000LL;
    v24 = 200000LL;
    v25 = -1LL;
    if ( gliQpcFreq.QuadPart == 10000000 )
      v7 = v6 / 0x989680;
    else
      v7 = v6 / gliQpcFreq.QuadPart;
    v8 = 0LL;
    v9 = &v11;
    while ( v7 > *v9 )
    {
      v8 = (unsigned int)(v8 + 1);
      ++v9;
      if ( (unsigned int)v8 >= 0xF )
        goto LABEL_9;
    }
    _InterlockedIncrement64(&qword_1C0252EA0[v8 + 15]);
LABEL_9:
    _InterlockedExchangeAdd64((_QWORD *)&xmmword_1C0253008 + 1, v7);
    _InterlockedIncrement64((volatile signed __int64 *)&xmmword_1C0253028);
    v10 = (W32kEtwEnabledKeyword & 0x200000010000000LL) == 0;
    *(LARGE_INTEGER *)(v2 + 8) = PerformanceCounter;
    if ( !v10
      && (unsigned __int8)(byte_1C024B738 - 1) > 2u
      && (qword_1C024B720 & 0x200000010000000LL) != 0
      && (qword_1C024B728 & 0x200000010000000LL) == qword_1C024B728
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        (_DWORD)v9,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v4,
        v5,
        0,
        gullUserCritAcquireToken,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    if ( v5 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0xqx_EtwWriteTransfer(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v4,
          v5,
          (__int64)v6 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    result = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    *(_QWORD *)(v2 + 16) = result;
  }
  return result;
}
