/*
 * XREFs of NtUserEnumDisplayDevices @ 0x1C00532A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C004B064 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00511E0 (UserSessionSwitchEnterCrit.c)
 *     UpdateGraphicsDeviceList @ 0x1C0053230 (UpdateGraphicsDeviceList.c)
 *     DrvEnumDisplayDevices @ 0x1C0055B20 (DrvEnumDisplayDevices.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnumDisplayDevices(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // edi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  int v26; // eax
  int v27; // [rsp+30h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+38h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+58h] [rbp-60h] BYREF

  v27 = 0;
  UserSessionSwitchEnterCrit((__int64)a1);
  if ( gbVideoInitialized )
  {
    UpdateGraphicsDeviceList(&v27, v6);
    if ( v27 )
    {
      if ( qword_1C0250B48 )
        qword_1C0250B48();
      if ( (_DWORD)gdwInAtomicOperation )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
        v11 = (unsigned int)gdwInAtomicOperation;
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
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v11);
        v19 = CurrentThreadWin32Thread;
        if ( CurrentThreadWin32Thread )
        {
          v20 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
          if ( (*(_DWORD *)(v19 + 44) || *(_DWORD *)(v19 + 48) || v20 > 0)
            && (unsigned int)dword_1C0244A70 > 6
            && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v17, v18) )
          {
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E11, v19 + 28, 0, 2u, &v28);
          }
          *(_DWORD *)(v19 + 44) = 0;
          *(_OWORD *)(v19 + 28) = 0LL;
        }
      }
      EtwTraceReleaseUserCrit();
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      UserSessionSwitchEnterCrit(v21);
    }
    v14 = DrvEnumDisplayDevices(a1, a4, 1);
  }
  else
  {
    v14 = -1073741823;
  }
  if ( qword_1C0250B48 )
    qword_1C0250B48();
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
    v22 = PsGetCurrentThreadWin32Thread(v7);
    v25 = v22;
    if ( v22 )
    {
      v26 = *(_DWORD *)(v22 + 24);
      if ( (*(_DWORD *)(v25 + 44) || *(_DWORD *)(v25 + 48) || v26 > 0)
        && (unsigned int)dword_1C0244A70 > 6
        && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v23, v24) )
      {
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E11, v25 + 28, 0, 2u, &v29);
      }
      *(_DWORD *)(v25 + 44) = 0;
      *(_OWORD *)(v25 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v14;
}
