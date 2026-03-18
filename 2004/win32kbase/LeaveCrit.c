/*
 * XREFs of LeaveCrit @ 0x1C0091920
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     EtwTraceReleaseUserCrit @ 0x1C00910B4 (EtwTraceReleaseUserCrit.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall LeaveCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v5; // rbx
  int v6; // eax
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-38h] BYREF

  if ( qword_1C0252B48 )
    qword_1C0252B48();
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    a1 = (unsigned int)gdwInAtomicOperation;
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
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1);
    v5 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v6 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v5 + 44) || *(_DWORD *)(v5 + 48) || v6 > 0)
        && (unsigned int)dword_1C0246A70 > 6
        && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E11,
          (const GUID *)(v5 + 28),
          0LL,
          2u,
          &v7);
      }
      *(_DWORD *)(v5 + 44) = 0;
      *(_OWORD *)(v5 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit(a1);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
}
