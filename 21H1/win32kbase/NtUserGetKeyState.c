/*
 * XREFs of NtUserGetKeyState @ 0x1C0073EA0
 * Callers:
 *     <none>
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1C000F790 (PostUpdateKeyStateEvent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ChangeAcquireResourceType @ 0x1C0033C90 (ChangeAcquireResourceType.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     EtwTraceReleaseUserCrit @ 0x1C008A064 (EtwTraceReleaseUserCrit.c)
 *     EnterSharedCrit @ 0x1C008A1D0 (EnterSharedCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     EtwTraceUIPIInputError @ 0x1C009FEB0 (EtwTraceUIPIInputError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C01B104C (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetKeyState(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *ThreadWin32Thread; // rax
  const struct tagTHREADINFO *v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ecx
  unsigned __int8 *v10; // rax
  int v11; // ebx
  int v12; // ebx
  struct _KTHREAD *v13; // r12
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rax
  int v18; // r9d
  __int16 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rcx
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

  EnterSharedCrit(0LL, 1LL);
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
  v8 = *(unsigned int *)(*(_QWORD *)(v3 + 424) + 388LL);
  if ( (v8 & 1) != 0 )
  {
    ChangeAcquireResourceType(v8);
    v23 = *(_QWORD *)(v3 + 424);
    v7 = *(const struct tagTHREADINFO **)(v23 + 88);
    if ( (*(_DWORD *)(v23 + 388) & 1) != 0 )
      PostUpdateKeyStateEvent(v23);
  }
  if ( (unsigned __int8)a1 >= 0x20u )
  {
    v9 = 0;
    v10 = byte_1C0213258;
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
              (_DWORD)v7,
              10,
              490,
              (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
          }
          v11 = 0;
          if ( qword_1C0257D08 && (int)qword_1C0257D08() >= 0 && qword_1C0257D10 )
            v11 = qword_1C0257D10();
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v7) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v7,
              10,
              491,
              (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
          }
          if ( v11 )
          {
            LOWORD(v20) = 0;
            goto LABEL_39;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v7) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v7,
              10,
              182,
              (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
          }
          v12 = 0;
          if ( qword_1C0259178 && (int)qword_1C0259178() >= 0 && qword_1C0259180 )
            v12 = qword_1C0259180(1LL);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v7) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v7,
              10,
              183,
              (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
          }
          if ( !v12 )
          {
            EtwTraceUIPIInputError((struct tagTHREADINFO *)v3, 0LL, 3);
            LOWORD(v20) = 0;
            goto LABEL_39;
          }
        }
        break;
      }
    }
  }
  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) != 0
    && InputDelegation::IsDelegationEnabledForThread((InputDelegation *)v3, v7) )
  {
    LOWORD(v20) = 0;
  }
  else if ( a1 >= 0x100 )
  {
    UserSetLastError(87LL);
    LOWORD(v20) = 0;
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
    v18 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)a1 >> 2) + *(_QWORD *)(v14 + 424) + 228);
    v7 = (const struct tagTHREADINFO *)(a1 & 3);
    v19 = _bittest(&v18, (unsigned __int8)(2 * (_BYTE)v7 + 1));
    LOWORD(v20) = v19 | 0xFF80;
    if ( !_bittest(&v18, (unsigned __int8)(2 * (_BYTE)v7)) )
      LOWORD(v20) = v19;
  }
LABEL_39:
  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) != 0
    && InputDelegation::IsDelegationEnabledForThread((InputDelegation *)v3, v7) )
  {
    *(_DWORD *)(*(_QWORD *)(v3 + 472) + 112LL) = 0;
    v21 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v3 + 472) + 116LL) = 0LL;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(v3 + 472) + 112LL) = *((_DWORD *)gpsi + 1746);
    v21 = *(_QWORD *)(*(_QWORD *)(v3 + 424) + 228LL);
    *(_QWORD *)(*(_QWORD *)(v3 + 472) + 116LL) = v21;
  }
  v20 = (__int16)v20;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( qword_1C0258B08 )
    qword_1C0258B08();
  if ( (_DWORD)gdwInAtomicOperation )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
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
        && (unsigned int)dword_1C024C960 > 6
        && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C0219981,
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
  return v20;
}
