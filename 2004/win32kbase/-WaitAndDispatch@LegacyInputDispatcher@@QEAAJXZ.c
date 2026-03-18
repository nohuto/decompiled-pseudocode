/*
 * XREFs of ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C00AF930
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?NeedsUpdateKeyboardLEDs@@YA_NXZ @ 0x1C00AFC68 (-NeedsUpdateKeyboardLEDs@@YA_NXZ.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C00AFC8C (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00AFD40 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::WaitAndDispatch(LegacyInputDispatcher *this)
{
  __int64 v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // eax
  void (*v10)(void); // rax
  __int64 v12; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v14; // rbx
  struct tagTHREADINFO **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 *i; // rsi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  int ProcessSessionId; // ebx
  __int64 v52; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v54; // rax
  unsigned int v55; // r8d
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  PERESOURCE *v59; // rdi
  __int64 v60; // r8
  __int64 v61; // r9
  int v62; // [rsp+48h] [rbp-C0h] BYREF
  int v63; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v64; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+58h] [rbp-B0h]
  unsigned __int8 ActivityId_4; // [rsp+60h] [rbp-A8h]
  GUID ActivityId_8; // [rsp+64h] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+78h] [rbp-90h] BYREF
  int *v69; // [rsp+98h] [rbp-70h]
  int v70; // [rsp+A0h] [rbp-68h]
  int v71; // [rsp+A4h] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+A8h] [rbp-60h] BYREF
  int *v73; // [rsp+C8h] [rbp-40h]
  int v74; // [rsp+D0h] [rbp-38h]
  int v75; // [rsp+D4h] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v77; // [rsp+F8h] [rbp-10h]
  int v78; // [rsp+100h] [rbp-8h]
  int v79; // [rsp+104h] [rbp-4h]

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
        v54 = PsGetCurrentThreadWin32Thread(v12);
        v65 = v54;
        if ( v54 && (*(int *)(v54 + 24) > 0 || *(_DWORD *)(v65 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId_8);
          if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v71 = 0;
            v62 = ActivityId_4;
            v70 = 4;
            v69 = &v62;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E87,
              &ActivityId_8,
              0LL,
              3u,
              &v68);
          }
        }
      }
      else
      {
        v65 = 0LL;
      }
      v14 = 0LL;
      while ( 1 )
      {
        v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v15 )
          v14 = *v15;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v17, v16);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v20, v19) == gpepCSRSS && v14 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v14 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        if ( v65 )
        {
          v20 = *(unsigned int *)(v65 + 24);
          if ( *(_DWORD *)(v65 + 48) || (int)v20 > 0 )
          {
            *(_DWORD *)(v65 + 44) = 1;
            *(GUID *)(v65 + 28) = ActivityId_8;
            if ( (unsigned int)dword_1C0246A70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
              {
                v75 = 0;
                v63 = ActivityId_4;
                v74 = 4;
                v73 = &v63;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E30,
                  &ActivityId_8,
                  0LL,
                  3u,
                  &v72);
                v55 = dword_1C0246A70;
              }
              if ( v55 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
              {
                v79 = 0;
                LODWORD(v64) = ActivityId_4;
                v78 = 4;
                v77 = &v64;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E5D,
                  &ActivityId_8,
                  0LL,
                  3u,
                  &v76);
              }
            }
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit(v20);
      gptiCurrent = v14;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess(v21)
        || (v50 = PsGetCurrentProcess(v23, v22),
            ProcessSessionId = PsGetProcessSessionIdEx(v50),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v52),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v25 = 0LL;
        if ( !IsThreadCrossSessionAttached(v23) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v25 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
        if ( v25
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v25 + 480) & 0x1000000) != 0
          && (*(_DWORD *)(v25 + 1224) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v29, v30, v31);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v35, v36);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
            v56 = *i;
            i[2] = 0LL;
            if ( !*(_DWORD *)(v56 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v43, v44);
            v59 = (PERESOURCE *)GetDomainLockRef(12LL, v41, v43, v44);
            if ( v59 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v58, v57, v60, v61);
            ExReleaseResourceAndLeaveCriticalRegion(*v59);
            HMUnlockObject(*i);
            tagDomLock::LockExclusive(v59);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      if ( NeedsUpdateKeyboardLEDs() )
        CKeyboardSensor::UpdateKeyboardLEDs(gpKeyboardSensor);
      UserSessionSwitchLeaveCrit(v47, v46, v48, v49);
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
    v6 = (unsigned int)v3;
    if ( v3 < 0 )
      return (unsigned int)v6;
    v7 = *((unsigned int *)this + 13);
    if ( v3 >= (unsigned int)v7 )
      goto LABEL_73;
    v8 = *((unsigned int *)this + 10);
    v9 = v8;
    if ( (unsigned int)v8 >= (unsigned int)v7 && (_DWORD)v8 != 64 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v4, v5);
      v9 = *((_DWORD *)this + 10);
    }
    if ( (unsigned int)v6 < v9 || v9 == 64 )
    {
LABEL_73:
      if ( (unsigned int)v6 >= *((_DWORD *)this + 10) )
        return (unsigned int)v6;
      v10 = *(void (**)(void))(*((_QWORD *)this + 4) + 16 * v6);
      if ( !v10 )
        return (unsigned int)v6;
      v10();
    }
    else
    {
      LegacyInputDispatcher::Dispatch(this, v6);
    }
  }
}
