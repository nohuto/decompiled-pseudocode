/*
 * XREFs of ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0051650
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C005191C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C00B02B0 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::HandleTSRequest(CBaseInput *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  struct tagKERNELHANDLETABLEENTRY *v36; // rsi
  __int64 v38; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  PERESOURCE *v49; // rdi
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // [rsp+30h] [rbp-99h] BYREF
  int v53; // [rsp+34h] [rbp-95h] BYREF
  int v54; // [rsp+38h] [rbp-91h] BYREF
  int v55; // [rsp+3Ch] [rbp-8Dh]
  __int64 v56; // [rsp+40h] [rbp-89h]
  unsigned __int8 v57; // [rsp+48h] [rbp-81h]
  GUID ActivityId; // [rsp+4Ch] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+60h] [rbp-69h] BYREF
  int *v60; // [rsp+80h] [rbp-49h]
  int v61; // [rsp+88h] [rbp-41h]
  int v62; // [rsp+8Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+90h] [rbp-39h] BYREF
  int *v64; // [rsp+B0h] [rbp-19h]
  int v65; // [rsp+B8h] [rbp-11h]
  int v66; // [rsp+BCh] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+C0h] [rbp-9h] BYREF
  int *v68; // [rsp+E0h] [rbp+17h]
  int v69; // [rsp+E8h] [rbp+1Fh]
  int v70; // [rsp+ECh] [rbp+23h]

  v4 = (unsigned int)a2;
  v55 = a2;
  if ( (unsigned int)a2 < 4 )
  {
    if ( *((_DWORD *)&unk_1C0200400 + 6 * (unsigned int)a2) != (_DWORD)a2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    if ( *((_DWORD *)&unk_1C0200400 + 6 * v4 + 4) >= 0x11u || CBaseInput::ExecutingOnSensorHostingThread(a1) )
    {
      (*((void (__fastcall **)(CBaseInput *))&unk_1C0200400 + 3 * v4 + 1))(a1);
    }
    else
    {
      UserSessionSwitchLeaveCrit(v6);
      CRIMBase::SensorDoWorkAndWait(a1, *((unsigned int *)&unk_1C0200400 + 6 * v4 + 4));
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v57 = 1;
        v41 = PsGetCurrentThreadWin32Thread();
        v56 = v41;
        if ( v41 && (*(int *)(v41 + 24) > 0 || *(_DWORD *)(v56 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C0246A70 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v42, v43) )
            {
              v62 = 0;
              v52 = v57;
              v61 = 4;
              v60 = &v52;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E87,
                &ActivityId,
                0LL,
                3u,
                &v59);
            }
          }
        }
      }
      else
      {
        v56 = 0LL;
      }
      v8 = 0LL;
      while ( 1 )
      {
        v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v9 )
          v8 = *v9;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v14, v13) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v8 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v56 && (*(_DWORD *)(v56 + 48) || *(int *)(v56 + 24) > 0) )
      {
        *(_DWORD *)(v56 + 44) = 1;
        *(GUID *)(v56 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v15) )
          {
            v66 = 0;
            v53 = v57;
            v65 = 4;
            v64 = &v53;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v63);
            v44 = (unsigned int)dword_1C0246A70;
          }
          if ( (unsigned int)v44 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v44, v45) )
          {
            v70 = 0;
            v54 = v57;
            v69 = 4;
            v68 = &v54;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v67);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v8;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v38 = PsGetCurrentProcess(v17, v16),
            ProcessSessionId = PsGetProcessSessionIdEx(v38),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v19 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v19 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
        if ( v19
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v19 + 480) & 0x1000000) != 0
          && (*(_DWORD *)(v19 + 1224) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v26, v27);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v36 = gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v36 + 2);
              v46 = *(_QWORD *)v36;
              *((_QWORD *)v36 + 2) = 0LL;
              if ( !*(_DWORD *)(v46 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34, v35);
              v49 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v49 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v50, v51);
              ExReleaseResourceAndLeaveCriticalRegion(*v49);
              HMUnlockObject(*(_QWORD *)v36);
              tagDomLock::LockExclusive((tagDomLock *)v49);
              v36 = gpducstulHead;
            }
            while ( gpducstulHead );
            LODWORD(v4) = v55;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
    }
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, (unsigned int)v4);
}
