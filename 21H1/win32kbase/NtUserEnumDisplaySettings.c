/*
 * XREFs of NtUserEnumDisplaySettings @ 0x1C002AF90
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DrvEnumDisplaySettings @ 0x1C002B060 (DrvEnumDisplaySettings.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0066480 (UserSessionSwitchEnterCrit.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     EtwTraceReleaseUserCrit @ 0x1C008A064 (EtwTraceReleaseUserCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnumDisplaySettings(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  int v13; // eax
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-58h] BYREF

  UserSessionSwitchEnterCrit();
  if ( gbVideoInitialized )
    v7 = DrvEnumDisplaySettings(a1, a4);
  else
    v7 = -1073741823;
  if ( qword_1C0258B08 )
    qword_1C0258B08();
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
    v6 = (unsigned int)gdwInAtomicOperation;
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
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v6);
    v12 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v13 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v12 + 44) || *(_DWORD *)(v12 + 48) || v13 > 0)
        && (unsigned int)dword_1C024C960 > 6
        && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v10, v11) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C0219981,
          (const GUID *)(v12 + 28),
          0LL,
          2u,
          &v14);
      }
      *(_DWORD *)(v12 + 44) = 0;
      *(_OWORD *)(v12 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v7;
}
