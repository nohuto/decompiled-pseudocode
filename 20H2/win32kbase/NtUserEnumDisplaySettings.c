/*
 * XREFs of NtUserEnumDisplaySettings @ 0x1C000C3B0
 * Callers:
 *     <none>
 * Callees:
 *     DrvEnumDisplaySettings @ 0x1C000C480 (DrvEnumDisplaySettings.c)
 *     EtwTraceReleaseUserCrit @ 0x1C004B064 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00511E0 (UserSessionSwitchEnterCrit.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnumDisplaySettings(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  int v16; // eax
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-58h] BYREF

  UserSessionSwitchEnterCrit();
  if ( gbVideoInitialized )
    v10 = DrvEnumDisplaySettings(a1, a4);
  else
    v10 = -1073741823;
  if ( qword_1C0250B48 )
    qword_1C0250B48();
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
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
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v15 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v16 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v15 + 44) || *(_DWORD *)(v15 + 48) || v16 > 0)
        && (unsigned int)dword_1C0244A70 > 6
        && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v13, v14) )
      {
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E11, v15 + 28, 0, 2u, &v17);
      }
      *(_DWORD *)(v15 + 44) = 0;
      *(_OWORD *)(v15 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v10;
}
