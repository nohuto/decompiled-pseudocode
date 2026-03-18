/*
 * XREFs of NtUserEnumDisplaySettings @ 0x1C00A3BF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchEnterCrit @ 0x1C0033CC0 (UserSessionSwitchEnterCrit.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     EtwTraceReleaseUserCrit @ 0x1C00910B4 (EtwTraceReleaseUserCrit.c)
 *     DrvEnumDisplaySettings @ 0x1C00A3CE0 (DrvEnumDisplaySettings.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnumDisplaySettings(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v13; // rbx
  int v14; // eax
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-58h] BYREF

  UserSessionSwitchEnterCrit();
  if ( gbVideoInitialized )
    v10 = DrvEnumDisplaySettings(a1, a4);
  else
    v10 = -1073741823;
  if ( qword_1C0252B48 )
    qword_1C0252B48();
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
    v7 = (unsigned int)gdwInAtomicOperation;
    if ( (_DWORD)gdwInAtomicOperation )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v7);
    v13 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v14 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v13 + 44) || *(_DWORD *)(v13 + 48) || v14 > 0)
        && (unsigned int)dword_1C0246A70 > 6
        && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E11,
          (const GUID *)(v13 + 28),
          0LL,
          2u,
          &v15);
      }
      *(_DWORD *)(v13 + 44) = 0;
      *(_OWORD *)(v13 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit(v7);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v10;
}
