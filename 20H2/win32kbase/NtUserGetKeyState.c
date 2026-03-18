/*
 * XREFs of NtUserGetKeyState @ 0x1C00764D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C004B064 (EtwTraceReleaseUserCrit.c)
 *     EnterSharedCrit @ 0x1C004B1D0 (EnterSharedCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PostUpdateKeyStateEvent @ 0x1C0076CF0 (PostUpdateKeyStateEvent.c)
 *     ChangeAcquireResourceType @ 0x1C0076F50 (ChangeAcquireResourceType.c)
 *     EtwTraceUIPIInputError @ 0x1C0077560 (EtwTraceUIPIInputError.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C01A8F6C (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetKeyState(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned int v9; // ecx
  _BYTE *v10; // rax
  int v11; // ebx
  int v12; // ebx
  struct _KTHREAD *v13; // r12
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int16 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v27; // rax
  int v28; // ebx
  __int64 v29; // rax
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v31; // rdi
  int v32; // eax
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+70h] [rbp-48h] BYREF

  EnterSharedCrit(0, 1);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v5, v4),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v3 + 432) + 388LL) & 1) != 0 )
  {
    ChangeAcquireResourceType();
    v23 = *(_QWORD *)(v3 + 432);
    v7 = *(_QWORD *)(v23 + 88);
    if ( (*(_DWORD *)(v23 + 388) & 1) != 0 )
      PostUpdateKeyStateEvent(v23);
  }
  if ( (unsigned __int8)a1 >= 0x20u )
  {
    v9 = 0;
    v10 = &unk_1C020B2B8;
    while ( *v10 != (_BYTE)a1 )
    {
      ++v9;
      ++v10;
      if ( v9 >= 0xE )
      {
        if ( (unsigned __int8)a1 < 0x5Bu || (unsigned __int8)a1 > 0x5Cu && (unsigned __int8)(a1 + 96) > 5u )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v7) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v7,
              10,
              490,
              (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
          }
          v11 = 0;
          if ( qword_1C024FD48 && (int)qword_1C024FD48() >= 0 && qword_1C024FD50 )
            v11 = qword_1C024FD50();
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v7) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v7,
              10,
              491,
              (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
          }
          if ( v11 )
          {
            LOWORD(v19) = 0;
            goto LABEL_39;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v7) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v7,
              10,
              182,
              (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
          }
          v12 = 0;
          if ( qword_1C02511B8 && (int)qword_1C02511B8() >= 0 && qword_1C02511C0 )
            v12 = qword_1C02511C0(1LL);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v7) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v7,
              10,
              183,
              (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
          }
          if ( !v12 )
          {
            EtwTraceUIPIInputError((struct tagTHREADINFO *)v3, 0LL, 3);
            LOWORD(v19) = 0;
            goto LABEL_39;
          }
        }
        break;
      }
    }
  }
  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) != 0
    && InputDelegation::IsDelegationEnabledForThread((InputDelegation *)v3, (const struct tagTHREADINFO *)v7) )
  {
    LOWORD(v19) = 0;
  }
  else if ( a1 >= 0x100 )
  {
    UserSetLastError(87LL, v7);
    LOWORD(v19) = 0;
  }
  else
  {
    v13 = KeGetCurrentThread();
    v14 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v27 = PsGetCurrentProcess(v16, v15),
          v28 = PsGetProcessSessionIdEx(v27),
          v29 = PsGetCurrentThreadProcess(),
          v28 == (unsigned int)PsGetProcessSessionIdEx(v29)) )
    {
      v17 = (__int64 *)PsGetThreadWin32Thread(v13);
      if ( v17 )
        v14 = *v17;
    }
    v8 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)a1 >> 2) + *(_QWORD *)(v14 + 432) + 228);
    v7 = a1 & 3;
    v18 = _bittest((const int *)&v8, (unsigned __int8)(2 * v7 + 1));
    LOWORD(v19) = v18 | 0xFF80;
    if ( !_bittest((const int *)&v8, (unsigned __int8)(2 * v7)) )
      LOWORD(v19) = v18;
  }
LABEL_39:
  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) != 0
    && InputDelegation::IsDelegationEnabledForThread((InputDelegation *)v3, (const struct tagTHREADINFO *)v7) )
  {
    *(_DWORD *)(*(_QWORD *)(v3 + 480) + 112LL) = 0;
    v20 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v3 + 480) + 116LL) = 0LL;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(v3 + 480) + 112LL) = *((_DWORD *)gpsi + 1746);
    v20 = *(_QWORD *)(*(_QWORD *)(v3 + 432) + 228LL);
    *(_QWORD *)(*(_QWORD *)(v3 + 480) + 116LL) = v20;
  }
  v19 = (__int16)v19;
  v21 = (unsigned int)gcSwitchInProgressWaiters;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( qword_1C0250B48 )
    qword_1C0250B48();
  if ( (_DWORD)gdwInAtomicOperation )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v7, v21, v8);
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread((unsigned int)gdwInAtomicOperation);
    v31 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v32 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v31 + 44) || *(_DWORD *)(v31 + 48) || v32 > 0)
        && (unsigned int)dword_1C0244A70 > 6
        && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E11,
          (const GUID *)(v31 + 28),
          0LL,
          2u,
          &v33);
      }
      *(_DWORD *)(v31 + 44) = 0;
      *(_OWORD *)(v31 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v19;
}
