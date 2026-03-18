/*
 * XREFs of NtUserGetKeyState @ 0x1C00ACAB0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     EtwTraceReleaseUserCrit @ 0x1C00910B4 (EtwTraceReleaseUserCrit.c)
 *     EnterSharedCrit @ 0x1C0091220 (EnterSharedCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     PostUpdateKeyStateEvent @ 0x1C00AD330 (PostUpdateKeyStateEvent.c)
 *     ChangeAcquireResourceType @ 0x1C00AD590 (ChangeAcquireResourceType.c)
 *     EtwTraceUIPIInputError @ 0x1C00ADBA0 (EtwTraceUIPIInputError.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C01AB2EC (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetKeyState(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int8 *v11; // rax
  int v12; // ebx
  int v13; // ebx
  struct _KTHREAD *v14; // r12
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int16 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v27; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v34; // rdi
  int v35; // eax
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+70h] [rbp-48h] BYREF

  EnterSharedCrit(0LL, 1);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v4)
    || (CurrentProcess = PsGetCurrentProcess(v6, v5),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v27),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v10 = *(unsigned int *)(*(_QWORD *)(v3 + 424) + 388LL);
  if ( (v10 & 1) != 0 )
  {
    ChangeAcquireResourceType();
    v10 = *(_QWORD *)(v3 + 424);
    v8 = *(_QWORD *)(v10 + 88);
    if ( (*(_DWORD *)(v10 + 388) & 1) != 0 )
      PostUpdateKeyStateEvent(v10);
  }
  if ( (unsigned __int8)a1 >= 0x20u )
  {
    v10 = 0LL;
    v11 = byte_1C020D4C0;
    while ( *v11 != (_BYTE)a1 )
    {
      v10 = (unsigned int)(v10 + 1);
      ++v11;
      if ( (unsigned int)v10 >= 0xE )
      {
        if ( (unsigned __int8)a1 < 0x5Bu || (unsigned __int8)a1 > 0x5Cu && (unsigned __int8)(a1 + 96) > 5u )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v10 = (unsigned __int64)WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v8) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v8,
                10,
                490,
                (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
            }
          }
          v12 = 0;
          if ( qword_1C0251D48 && (int)qword_1C0251D48() >= 0 && qword_1C0251D50 )
            v12 = qword_1C0251D50();
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v10 = (unsigned __int64)WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v8) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v8,
                10,
                491,
                (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
            }
          }
          if ( v12 )
          {
            LOWORD(v20) = 0;
            goto LABEL_39;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v10 = (unsigned __int64)WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v8) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v8,
                10,
                182,
                (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
            }
          }
          v13 = 0;
          if ( qword_1C02531B8 && (int)qword_1C02531B8() >= 0 && qword_1C02531C0 )
            v13 = qword_1C02531C0(1LL);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v10 = (unsigned __int64)WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v8) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v8,
                10,
                183,
                (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
            }
          }
          if ( !v13 )
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
    && InputDelegation::IsDelegationEnabledForThread((InputDelegation *)v3, (const struct tagTHREADINFO *)v8) )
  {
    LOWORD(v20) = 0;
  }
  else if ( a1 >= 0x100 )
  {
    UserSetLastError(87LL, v8);
    LOWORD(v20) = 0;
  }
  else
  {
    v14 = KeGetCurrentThread();
    v15 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v10)
      || (v29 = PsGetCurrentProcess(v17, v16),
          v30 = PsGetProcessSessionIdEx(v29),
          v32 = PsGetCurrentThreadProcess(v31),
          v30 == (unsigned int)PsGetProcessSessionIdEx(v32)) )
    {
      v18 = (__int64 *)PsGetThreadWin32Thread(v14);
      if ( v18 )
        v15 = *v18;
    }
    v9 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)a1 >> 2) + *(_QWORD *)(v15 + 424) + 228);
    v8 = a1 & 3;
    v19 = _bittest((const int *)&v9, (unsigned __int8)(2 * v8 + 1));
    LOWORD(v20) = v19 | 0xFF80;
    if ( !_bittest((const int *)&v9, (unsigned __int8)(2 * v8)) )
      LOWORD(v20) = v19;
  }
LABEL_39:
  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) != 0
    && InputDelegation::IsDelegationEnabledForThread((InputDelegation *)v3, (const struct tagTHREADINFO *)v8) )
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
  v22 = (unsigned int)gcSwitchInProgressWaiters;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( qword_1C0252B48 )
    qword_1C0252B48();
  if ( (_DWORD)gdwInAtomicOperation )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v8, v22, v9);
  v23 = (unsigned int)gdwInAtomicOperation;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread((unsigned int)gdwInAtomicOperation);
    v34 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v35 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v34 + 44) || *(_DWORD *)(v34 + 48) || v35 > 0)
        && (unsigned int)dword_1C0246A70 > 6
        && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E11,
          (const GUID *)(v34 + 28),
          0LL,
          2u,
          &v36);
      }
      *(_DWORD *)(v34 + 44) = 0;
      *(_OWORD *)(v34 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit(v23);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v20;
}
