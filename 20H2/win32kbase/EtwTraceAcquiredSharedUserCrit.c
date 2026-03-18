/*
 * XREFs of EtwTraceAcquiredSharedUserCrit @ 0x1C004B650
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00D0244 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1640 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D19E0 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     NtUserCreateActivationGroup @ 0x1C012FC20 (NtUserCreateActivationGroup.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012A1E4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

__int64 EtwTraceAcquiredSharedUserCrit()
{
  __int64 result; // rax
  __int64 v1; // rbx
  LARGE_INTEGER PerformanceCounter; // rsi
  int v3; // r8d
  LONGLONG v4; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rcx
  bool v9; // zf
  __int64 v10; // [rsp+30h] [rbp-98h] BYREF
  __int64 v11; // [rsp+38h] [rbp-90h]
  __int64 v12; // [rsp+40h] [rbp-88h]
  __int64 v13; // [rsp+48h] [rbp-80h]
  __int64 v14; // [rsp+50h] [rbp-78h]
  __int64 v15; // [rsp+58h] [rbp-70h]
  __int64 v16; // [rsp+60h] [rbp-68h]
  __int64 v17; // [rsp+68h] [rbp-60h]
  __int64 v18; // [rsp+70h] [rbp-58h]
  __int64 v19; // [rsp+78h] [rbp-50h]
  __int64 v20; // [rsp+80h] [rbp-48h]
  __int64 v21; // [rsp+88h] [rbp-40h]
  __int64 v22; // [rsp+90h] [rbp-38h]
  __int64 v23; // [rsp+98h] [rbp-30h]
  __int64 v24; // [rsp+A0h] [rbp-28h]

  result = PsGetCurrentThreadWin32Thread();
  v1 = result;
  if ( result )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v4 = PerformanceCounter.QuadPart - *(_QWORD *)(v1 + 8);
    if ( (dword_1C024AE90 & 1) == 0 )
    {
      dword_1C024AE90 |= 1u;
      memset(qword_1C024AEA0, 0, 0x198uLL);
      qword_1C024B038 = 0LL;
      qword_1C024B040 = 0LL;
    }
    v5 = 1000000 * v4;
    v10 = 10LL;
    v11 = 25LL;
    v12 = 50LL;
    v13 = 100LL;
    v14 = 250LL;
    v15 = 500LL;
    v16 = 1000LL;
    v17 = 2500LL;
    v18 = 5000LL;
    v19 = 10000LL;
    v20 = 25000LL;
    v21 = 50000LL;
    v22 = 100000LL;
    v23 = 200000LL;
    v24 = -1LL;
    if ( gliQpcFreq.QuadPart == 10000000 )
      v6 = v5 / 0x989680;
    else
      v6 = v5 / gliQpcFreq.QuadPart;
    v7 = 0LL;
    v8 = &v10;
    while ( v6 > *v8 )
    {
      v7 = (unsigned int)(v7 + 1);
      ++v8;
      if ( (unsigned int)v7 >= 0xF )
        goto LABEL_9;
    }
    _InterlockedIncrement64(&qword_1C024AEA0[v7 + 15]);
LABEL_9:
    _InterlockedExchangeAdd64((_QWORD *)&xmmword_1C024B008 + 1, v6);
    _InterlockedIncrement64((volatile signed __int64 *)&xmmword_1C024B028);
    v9 = (W32kEtwEnabledKeyword & 0x200000010000000LL) == 0;
    *(LARGE_INTEGER *)(v1 + 8) = PerformanceCounter;
    if ( !v9
      && (unsigned __int8)(byte_1C0243738 - 1) > 2u
      && (qword_1C0243720 & 0x200000010000000LL) != 0
      && (qword_1C0243728 & 0x200000010000000LL) == qword_1C0243728
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      McTemplateK0xqx_EtwWriteTransfer(
        (_DWORD)v8,
        (unsigned int)&AcquiredSharedUserCritEvent,
        v3,
        v4,
        0,
        gullUserCritAcquireToken,
        v10,
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
        v24);
    }
    if ( v4 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0xqx_EtwWriteTransfer(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v3,
          v4,
          (__int64)v5 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    result = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    *(_QWORD *)(v1 + 16) = result;
  }
  return result;
}
