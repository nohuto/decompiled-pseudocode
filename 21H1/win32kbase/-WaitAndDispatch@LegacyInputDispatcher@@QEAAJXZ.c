/*
 * XREFs of ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C009D9D0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?NeedsUpdateKeyboardLEDs@@YA_NXZ @ 0x1C009DD08 (-NeedsUpdateKeyboardLEDs@@YA_NXZ.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C009DD2C (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C009DDE0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::WaitAndDispatch(LegacyInputDispatcher *this)
{
  __int64 v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rbx
  unsigned int v5; // edx
  __int64 v6; // rcx
  unsigned int v7; // eax
  void (*v8)(void); // rax
  __int64 v10; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *i; // rsi
  __int64 v32; // rcx
  __int64 v33; // rax
  int ProcessSessionId; // ebx
  __int64 v35; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v37; // rax
  unsigned int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // rcx
  PERESOURCE *v41; // rdi
  int v42; // [rsp+48h] [rbp-C0h] BYREF
  int v43; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v44; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-B0h]
  unsigned __int8 ActivityId_4; // [rsp+60h] [rbp-A8h]
  GUID ActivityId_8; // [rsp+64h] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+78h] [rbp-90h] BYREF
  int *v49; // [rsp+98h] [rbp-70h]
  int v50; // [rsp+A0h] [rbp-68h]
  int v51; // [rsp+A4h] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+A8h] [rbp-60h] BYREF
  int *v53; // [rsp+C8h] [rbp-40h]
  int v54; // [rsp+D0h] [rbp-38h]
  int v55; // [rsp+D4h] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v57; // [rsp+F8h] [rbp-10h]
  int v58; // [rsp+100h] [rbp-8h]
  int v59; // [rsp+104h] [rbp-4h]

  while ( 1 )
  {
    if ( NeedsUpdateKeyboardLEDs() )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId_8 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        ActivityId_4 = 1;
        v37 = PsGetCurrentThreadWin32Thread(v10);
        v45 = v37;
        if ( v37 && (*(int *)(v37 + 24) > 0 || *(_DWORD *)(v45 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId_8);
          if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v51 = 0;
            v42 = ActivityId_4;
            v50 = 4;
            v49 = &v42;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &ActivityId_8,
              0LL,
              3u,
              &v48);
          }
        }
      }
      else
      {
        v45 = 0LL;
      }
      v12 = 0LL;
      while ( 1 )
      {
        v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v13 )
          v12 = *v13;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v15, v14);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v18, v17) == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v12 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        if ( v45 )
        {
          v18 = *(unsigned int *)(v45 + 24);
          if ( *(_DWORD *)(v45 + 48) || (int)v18 > 0 )
          {
            *(_DWORD *)(v45 + 44) = 1;
            *(GUID *)(v45 + 28) = ActivityId_8;
            if ( (unsigned int)dword_1C024C960 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
              {
                v55 = 0;
                v43 = ActivityId_4;
                v54 = 4;
                v53 = &v43;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199A0,
                  &ActivityId_8,
                  0LL,
                  3u,
                  &v52);
                v38 = dword_1C024C960;
              }
              if ( v38 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
              {
                v59 = 0;
                LODWORD(v44) = ActivityId_4;
                v58 = 4;
                v57 = &v44;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199CD,
                  &ActivityId_8,
                  0LL,
                  3u,
                  &v56);
              }
            }
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit(v18);
      gptiCurrent = v12;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess(v19)
        || (v33 = PsGetCurrentProcess(v21, v20),
            ProcessSessionId = PsGetProcessSessionIdEx(v33),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v35),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v23 = 0LL;
        if ( !IsThreadCrossSessionAttached(v21) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v23 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
        if ( v23
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v23 + 480) & 0x1000000) != 0
          && (*(_DWORD *)(v23 + 1216) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
            v39 = *i;
            i[2] = 0LL;
            if ( !*(_DWORD *)(v39 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
            v41 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v41 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40);
            ExReleaseResourceAndLeaveCriticalRegion(*v41);
            HMUnlockObject(*i);
            tagDomLock::LockExclusive(v41);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      if ( NeedsUpdateKeyboardLEDs() )
        CKeyboardSensor::UpdateKeyboardLEDs(gpKeyboardSensor);
      UserSessionSwitchLeaveCrit(v32);
    }
    v3 = KeWaitForMultipleObjects(
           *((_DWORD *)this + 13),
           *((PVOID **)this + 1),
           WaitAny,
           WrUserRequest,
           *((_BYTE *)this + 56),
           *((_BYTE *)this + 57),
           0LL,
           *((PKWAIT_BLOCK *)this + 3));
    v4 = (unsigned int)v3;
    if ( v3 < 0 )
      return (unsigned int)v4;
    v5 = *((_DWORD *)this + 13);
    if ( v3 >= v5 )
      goto LABEL_73;
    v6 = *((unsigned int *)this + 10);
    v7 = v6;
    if ( (unsigned int)v6 >= v5 && (_DWORD)v6 != 64 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
      v7 = *((_DWORD *)this + 10);
    }
    if ( (unsigned int)v4 < v7 || v7 == 64 )
    {
LABEL_73:
      if ( (unsigned int)v4 >= *((_DWORD *)this + 10) )
        return (unsigned int)v4;
      v8 = *(void (**)(void))(*((_QWORD *)this + 4) + 16 * v4);
      if ( !v8 )
        return (unsigned int)v4;
      v8();
    }
    else
    {
      LegacyInputDispatcher::Dispatch(this, v4);
    }
  }
}
