/*
 * XREFs of EtwTraceReleaseUserCrit @ 0x1C00910B4
 * Callers:
 *     UserSessionSwitchEnterCrit @ 0x1C0033CC0 (UserSessionSwitchEnterCrit.c)
 *     W32CalloutDispatch @ 0x1C0065BE0 (W32CalloutDispatch.c)
 *     NtUserGetDC @ 0x1C0090AC0 (NtUserGetDC.c)
 *     NtUserReleaseDC @ 0x1C0090E70 (NtUserReleaseDC.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     LeaveCrit @ 0x1C0091920 (LeaveCrit.c)
 *     NtUserEnumDisplaySettings @ 0x1C00A3BF0 (NtUserEnumDisplaySettings.c)
 *     NtUserGetKeyState @ 0x1C00ACAB0 (NtUserGetKeyState.c)
 *     ChangeAcquireResourceType @ 0x1C00AD590 (ChangeAcquireResourceType.c)
 *     NtUserEnumDisplayDevices @ 0x1C00B4930 (NtUserEnumDisplayDevices.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D16E0 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1A80 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1F20 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     UserDeleteW32Thread @ 0x1C0123370 (UserDeleteW32Thread.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012C534 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceReleaseUserCrit(__int64 a1)
{
  unsigned __int64 CurrentThreadWin32Thread; // rax
  unsigned __int64 v2; // rbx
  LARGE_INTEGER v3; // rdi
  __int64 *v4; // rdx
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v8; // [rsp+38h] [rbp-39h] BYREF
  __int64 v9; // [rsp+40h] [rbp-31h]
  __int64 v10; // [rsp+48h] [rbp-29h]
  __int64 v11; // [rsp+50h] [rbp-21h]
  __int64 v12; // [rsp+58h] [rbp-19h]
  __int64 v13; // [rsp+60h] [rbp-11h]
  __int64 v14; // [rsp+68h] [rbp-9h]
  __int64 v15; // [rsp+70h] [rbp-1h]
  __int64 v16; // [rsp+78h] [rbp+7h]
  __int64 v17; // [rsp+80h] [rbp+Fh]
  __int64 v18; // [rsp+88h] [rbp+17h]
  __int64 v19; // [rsp+90h] [rbp+1Fh]
  __int64 v20; // [rsp+98h] [rbp+27h]
  __int64 v21; // [rsp+A0h] [rbp+2Fh]
  __int64 v22; // [rsp+A8h] [rbp+37h]

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1);
  v2 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    v3 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(CurrentThreadWin32Thread + 8));
    if ( (dword_1C024CE88 & 1) == 0 )
    {
      dword_1C024CE88 |= 1u;
      memset(qword_1C024CE90, 0, 0x198uLL);
      qword_1C024D028 = 0LL;
      qword_1C024D030 = 0LL;
    }
    v22 = -1LL;
    v8 = 10LL;
    CurrentThreadWin32Thread = (unsigned __int64)(1000000 * v3.QuadPart) / gliQpcFreq.QuadPart;
    v9 = 25LL;
    v4 = &v8;
    v10 = 50LL;
    v11 = 100LL;
    v5 = 0LL;
    v12 = 250LL;
    v13 = 500LL;
    v14 = 1000LL;
    v15 = 2500LL;
    v16 = 5000LL;
    v17 = 10000LL;
    v18 = 25000LL;
    v19 = 50000LL;
    v20 = 100000LL;
    v21 = 200000LL;
    while ( CurrentThreadWin32Thread > *v4 )
    {
      v5 = (unsigned int)(v5 + 1);
      ++v4;
      if ( (unsigned int)v5 >= 0xF )
        goto LABEL_9;
    }
    _InterlockedIncrement64(&qword_1C024CE90[v5 + 30]);
LABEL_9:
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&xmmword_1C024D008, CurrentThreadWin32Thread);
    _InterlockedIncrement64((_QWORD *)&xmmword_1C024D018 + 1);
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0 )
    {
      LOBYTE(CurrentThreadWin32Thread) = byte_1C0245748 - 1;
      if ( (unsigned __int8)(byte_1C0245748 - 1) > 2u && (qword_1C0245730 & 0x200000010000000LL) != 0 )
      {
        LOBYTE(CurrentThreadWin32Thread) = 0;
        if ( (qword_1C0245738 & 0x200000010000000LL) == qword_1C0245738 )
        {
          LOBYTE(CurrentThreadWin32Thread) = BYTE2(Microsoft_Windows_Win32kEnableBits);
          if ( (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
            LOBYTE(CurrentThreadWin32Thread) = McTemplateK0xqx_EtwWriteTransfer(
                                                 v5,
                                                 (unsigned int)&ReleaseUserCritEvent,
                                                 v6,
                                                 v3.LowPart,
                                                 0,
                                                 *(_QWORD *)(v2 + 16),
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
                                                 v21,
                                                 v22);
        }
      }
    }
  }
  return CurrentThreadWin32Thread;
}
