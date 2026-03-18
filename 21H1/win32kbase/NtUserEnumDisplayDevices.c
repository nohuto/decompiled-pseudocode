/*
 * XREFs of NtUserEnumDisplayDevices @ 0x1C0093220
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0066480 (UserSessionSwitchEnterCrit.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     EtwTraceReleaseUserCrit @ 0x1C008A064 (EtwTraceReleaseUserCrit.c)
 *     DrvEnumDisplayDevices @ 0x1C0091330 (DrvEnumDisplayDevices.c)
 *     UpdateGraphicsDeviceList @ 0x1C0093320 (UpdateGraphicsDeviceList.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnumDisplayDevices(struct _UNICODE_STRING *a1, unsigned int a2, void *a3, unsigned int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  int v19; // [rsp+30h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+38h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+58h] [rbp-60h] BYREF

  v19 = 0;
  UserSessionSwitchEnterCrit((__int64)a1);
  if ( gbVideoInitialized )
  {
    UpdateGraphicsDeviceList(&v19);
    if ( v19 )
    {
      if ( qword_1C0258B08 )
        qword_1C0258B08();
      if ( (_DWORD)gdwInAtomicOperation )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
        v9 = (unsigned int)gdwInAtomicOperation;
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
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v9);
        v13 = CurrentThreadWin32Thread;
        if ( CurrentThreadWin32Thread )
        {
          v14 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
          if ( (*(_DWORD *)(v13 + 44) || *(_DWORD *)(v13 + 48) || v14 > 0)
            && (unsigned int)dword_1C024C960 > 6
            && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C0219981,
              (const GUID *)(v13 + 28),
              0LL,
              2u,
              &v20);
          }
          *(_DWORD *)(v13 + 44) = 0;
          *(_OWORD *)(v13 + 28) = 0LL;
        }
      }
      EtwTraceReleaseUserCrit(v9);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      UserSessionSwitchEnterCrit(v15);
    }
    v10 = DrvEnumDisplayDevices(a1, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96) + 232LL), a2, a3, a4, 1);
  }
  else
  {
    v10 = -1073741823;
  }
  if ( qword_1C0258B08 )
    qword_1C0258B08();
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    v8 = (unsigned int)gdwInAtomicOperation;
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
    v16 = PsGetCurrentThreadWin32Thread(v8);
    v17 = v16;
    if ( v16 )
    {
      v18 = *(_DWORD *)(v16 + 24);
      if ( (*(_DWORD *)(v17 + 44) || *(_DWORD *)(v17 + 48) || v18 > 0)
        && (unsigned int)dword_1C024C960 > 6
        && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C0219981,
          (const GUID *)(v17 + 28),
          0LL,
          2u,
          &v21);
      }
      *(_DWORD *)(v17 + 44) = 0;
      *(_OWORD *)(v17 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit(v8);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v10;
}
