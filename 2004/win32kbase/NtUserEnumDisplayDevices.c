/*
 * XREFs of NtUserEnumDisplayDevices @ 0x1C00B4930
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchEnterCrit @ 0x1C0033CC0 (UserSessionSwitchEnterCrit.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     EtwTraceReleaseUserCrit @ 0x1C00910B4 (EtwTraceReleaseUserCrit.c)
 *     DrvEnumDisplayDevices @ 0x1C0094400 (DrvEnumDisplayDevices.c)
 *     UpdateGraphicsDeviceList @ 0x1C00B4A30 (UpdateGraphicsDeviceList.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnumDisplayDevices(struct _UNICODE_STRING *a1, unsigned int a2, void *a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rbx
  int v23; // eax
  int v24; // [rsp+30h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+38h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+58h] [rbp-60h] BYREF

  v24 = 0;
  UserSessionSwitchEnterCrit();
  if ( gbVideoInitialized )
  {
    UpdateGraphicsDeviceList(&v24);
    if ( v24 )
    {
      if ( qword_1C0252B48 )
        qword_1C0252B48();
      if ( (_DWORD)gdwInAtomicOperation )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
        v13 = (unsigned int)gdwInAtomicOperation;
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
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v13);
        v19 = CurrentThreadWin32Thread;
        if ( CurrentThreadWin32Thread )
        {
          v20 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
          if ( (*(_DWORD *)(v19 + 44) || *(_DWORD *)(v19 + 48) || v20 > 0)
            && (unsigned int)dword_1C0246A70 > 6
            && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E11,
              (const GUID *)(v19 + 28),
              0LL,
              2u,
              &v25);
          }
          *(_DWORD *)(v19 + 44) = 0;
          *(_OWORD *)(v19 + 28) = 0LL;
        }
      }
      EtwTraceReleaseUserCrit(v13);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      UserSessionSwitchEnterCrit();
    }
    v16 = DrvEnumDisplayDevices(a1, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96) + 232LL), a2, a3, a4, 1);
  }
  else
  {
    v16 = -1073741823;
  }
  if ( qword_1C0252B48 )
    qword_1C0252B48();
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
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
    v21 = PsGetCurrentThreadWin32Thread(v9);
    v22 = v21;
    if ( v21 )
    {
      v23 = *(_DWORD *)(v21 + 24);
      if ( (*(_DWORD *)(v22 + 44) || *(_DWORD *)(v22 + 48) || v23 > 0)
        && (unsigned int)dword_1C0246A70 > 6
        && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E11,
          (const GUID *)(v22 + 28),
          0LL,
          2u,
          &v26);
      }
      *(_DWORD *)(v22 + 44) = 0;
      *(_OWORD *)(v22 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit(v9);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v16;
}
