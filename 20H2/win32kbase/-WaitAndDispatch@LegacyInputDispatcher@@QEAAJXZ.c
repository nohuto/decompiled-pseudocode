/*
 * XREFs of ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0024DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?NeedsUpdateKeyboardLEDs@@YA_NXZ @ 0x1C00250E8 (-NeedsUpdateKeyboardLEDs@@YA_NXZ.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C002510C (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00251C0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::WaitAndDispatch(LegacyInputDispatcher *this)
{
  NTSTATUS v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // eax
  void (*v9)(void); // rax
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  struct tagKERNELHANDLETABLEENTRY *i; // rsi
  __int64 v44; // rcx
  __int64 v45; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  PERESOURCE *v56; // rdi
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // [rsp+48h] [rbp-C0h] BYREF
  int v60; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v61; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+58h] [rbp-B0h]
  unsigned __int8 ActivityId_4; // [rsp+60h] [rbp-A8h]
  GUID ActivityId_8; // [rsp+64h] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+78h] [rbp-90h] BYREF
  int *v66; // [rsp+98h] [rbp-70h]
  int v67; // [rsp+A0h] [rbp-68h]
  int v68; // [rsp+A4h] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+A8h] [rbp-60h] BYREF
  int *v70; // [rsp+C8h] [rbp-40h]
  int v71; // [rsp+D0h] [rbp-38h]
  int v72; // [rsp+D4h] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v74; // [rsp+F8h] [rbp-10h]
  int v75; // [rsp+100h] [rbp-8h]
  int v76; // [rsp+104h] [rbp-4h]

  while ( 1 )
  {
    if ( NeedsUpdateKeyboardLEDs() )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId_8 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        ActivityId_4 = 1;
        v48 = PsGetCurrentThreadWin32Thread();
        v62 = v48;
        if ( v48 && (*(int *)(v48 + 24) > 0 || *(_DWORD *)(v62 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId_8);
          if ( (unsigned int)dword_1C0244A70 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v49, v50) )
            {
              v68 = 0;
              v59 = ActivityId_4;
              v67 = 4;
              v66 = &v59;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C0244A70,
                (int)&dword_1C0211E87,
                (int)&ActivityId_8,
                0,
                3u,
                &v65);
            }
          }
        }
      }
      else
      {
        v62 = 0LL;
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
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v62 && (*(_DWORD *)(v62 + 48) || *(int *)(v62 + 24) > 0) )
      {
        *(_DWORD *)(v62 + 44) = 1;
        *(GUID *)(v62 + 28) = ActivityId_8;
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v19) )
          {
            v72 = 0;
            v60 = ActivityId_4;
            v71 = 4;
            v70 = &v60;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C0244A70,
              (int)&dword_1C0211E30,
              (int)&ActivityId_8,
              0,
              3u,
              &v69);
            v51 = (unsigned int)dword_1C0244A70;
          }
          if ( (unsigned int)v51 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v51, v52) )
          {
            v76 = 0;
            LODWORD(v61) = ActivityId_4;
            v75 = 4;
            v74 = &v61;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C0244A70,
              (int)&dword_1C0211E5D,
              (int)&ActivityId_8,
              0,
              3u,
              &v73);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v12;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v45 = PsGetCurrentProcess(v21, v20),
            ProcessSessionId = PsGetProcessSessionIdEx(v45),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v23 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v23 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25, v24, v26, v27);
        if ( v23
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v23 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v23 + 1232) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v33, v34);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37, v38);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          for ( i = gpducstulHead; gpducstulHead; i = gpducstulHead )
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)i + 2);
            v53 = *(_QWORD *)i;
            *((_QWORD *)i + 2) = 0LL;
            if ( !*(_DWORD *)(v53 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
            v56 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v56 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v57, v58);
            ExReleaseResourceAndLeaveCriticalRegion(*v56);
            HMUnlockObject(*(_QWORD *)i);
            tagDomLock::LockExclusive((tagDomLock *)v56);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      if ( NeedsUpdateKeyboardLEDs() )
        CKeyboardSensor::UpdateKeyboardLEDs(gpKeyboardSensor);
      UserSessionSwitchLeaveCrit(v44);
    }
    v2 = KeWaitForMultipleObjects(
           *((_DWORD *)this + 13),
           *((PVOID **)this + 1),
           WaitAny,
           WrUserRequest,
           *((_BYTE *)this + 56),
           *((_BYTE *)this + 57),
           0LL,
           *((PKWAIT_BLOCK *)this + 3));
    v5 = (unsigned int)v2;
    if ( v2 < 0 )
      return (unsigned int)v5;
    v6 = *((unsigned int *)this + 13);
    if ( v2 >= (unsigned int)v6 )
      goto LABEL_73;
    v7 = *((unsigned int *)this + 10);
    v8 = v7;
    if ( (unsigned int)v7 >= (unsigned int)v6 && (_DWORD)v7 != 64 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v3, v4);
      v8 = *((_DWORD *)this + 10);
    }
    if ( (unsigned int)v5 < v8 || v8 == 64 )
    {
LABEL_73:
      if ( (unsigned int)v5 >= *((_DWORD *)this + 10) )
        return (unsigned int)v5;
      v9 = *(void (**)(void))(*((_QWORD *)this + 4) + 16 * v5);
      if ( !v9 )
        return (unsigned int)v5;
      v9();
    }
    else
    {
      LegacyInputDispatcher::Dispatch(this, v5);
    }
  }
}
