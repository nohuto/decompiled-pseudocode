/*
 * XREFs of EtwTraceReleaseUserCrit @ 0x1C004B064
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1C000C3B0 (NtUserEnumDisplaySettings.c)
 *     W32CalloutDispatch @ 0x1C00297E0 (W32CalloutDispatch.c)
 *     NtUserGetDC @ 0x1C004AA70 (NtUserGetDC.c)
 *     NtUserReleaseDC @ 0x1C004AE20 (NtUserReleaseDC.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     LeaveCrit @ 0x1C004B930 (LeaveCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00511E0 (UserSessionSwitchEnterCrit.c)
 *     NtUserEnumDisplayDevices @ 0x1C00532A0 (NtUserEnumDisplayDevices.c)
 *     NtUserGetKeyState @ 0x1C00764D0 (NtUserGetKeyState.c)
 *     ChangeAcquireResourceType @ 0x1C0076F50 (ChangeAcquireResourceType.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1640 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D19E0 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     UserDeleteW32Thread @ 0x1C0121020 (UserDeleteW32Thread.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012A1E4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

char EtwTraceReleaseUserCrit()
{
  unsigned __int64 CurrentThreadWin32Thread; // rax
  unsigned __int64 v1; // rbx
  LARGE_INTEGER v2; // rdi
  __int64 *v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  __int64 v7; // [rsp+38h] [rbp-39h] BYREF
  __int64 v8; // [rsp+40h] [rbp-31h]
  __int64 v9; // [rsp+48h] [rbp-29h]
  __int64 v10; // [rsp+50h] [rbp-21h]
  __int64 v11; // [rsp+58h] [rbp-19h]
  __int64 v12; // [rsp+60h] [rbp-11h]
  __int64 v13; // [rsp+68h] [rbp-9h]
  __int64 v14; // [rsp+70h] [rbp-1h]
  __int64 v15; // [rsp+78h] [rbp+7h]
  __int64 v16; // [rsp+80h] [rbp+Fh]
  __int64 v17; // [rsp+88h] [rbp+17h]
  __int64 v18; // [rsp+90h] [rbp+1Fh]
  __int64 v19; // [rsp+98h] [rbp+27h]
  __int64 v20; // [rsp+A0h] [rbp+2Fh]
  __int64 v21; // [rsp+A8h] [rbp+37h]

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  v1 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    v2 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(CurrentThreadWin32Thread + 8));
    if ( (dword_1C024AE90 & 1) == 0 )
    {
      dword_1C024AE90 |= 1u;
      memset(qword_1C024AEA0, 0, 0x198uLL);
      qword_1C024B038 = 0LL;
      qword_1C024B040 = 0LL;
    }
    v21 = -1LL;
    v7 = 10LL;
    CurrentThreadWin32Thread = (unsigned __int64)(1000000 * v2.QuadPart) / gliQpcFreq.QuadPart;
    v8 = 25LL;
    v3 = &v7;
    v9 = 50LL;
    v10 = 100LL;
    v4 = 0LL;
    v11 = 250LL;
    v12 = 500LL;
    v13 = 1000LL;
    v14 = 2500LL;
    v15 = 5000LL;
    v16 = 10000LL;
    v17 = 25000LL;
    v18 = 50000LL;
    v19 = 100000LL;
    v20 = 200000LL;
    while ( CurrentThreadWin32Thread > *v3 )
    {
      v4 = (unsigned int)(v4 + 1);
      ++v3;
      if ( (unsigned int)v4 >= 0xF )
        goto LABEL_9;
    }
    _InterlockedIncrement64(&qword_1C024AEA0[v4 + 30]);
LABEL_9:
    v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&xmmword_1C024B018, CurrentThreadWin32Thread);
    _InterlockedIncrement64((_QWORD *)&xmmword_1C024B028 + 1);
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0 )
    {
      LOBYTE(CurrentThreadWin32Thread) = byte_1C0243738 - 1;
      if ( (unsigned __int8)(byte_1C0243738 - 1) > 2u && (qword_1C0243720 & 0x200000010000000LL) != 0 )
      {
        LOBYTE(CurrentThreadWin32Thread) = 0;
        if ( (qword_1C0243728 & 0x200000010000000LL) == qword_1C0243728 )
        {
          LOBYTE(CurrentThreadWin32Thread) = BYTE2(Microsoft_Windows_Win32kEnableBits);
          if ( (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
            LOBYTE(CurrentThreadWin32Thread) = McTemplateK0xqx_EtwWriteTransfer(
                                                 v4,
                                                 (unsigned int)&ReleaseUserCritEvent,
                                                 v5,
                                                 v2.LowPart,
                                                 0,
                                                 *(_QWORD *)(v1 + 16),
                                                 v7,
                                                 v8,
                                                 v9,
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
                                                 v21);
        }
      }
    }
  }
  return CurrentThreadWin32Thread;
}
