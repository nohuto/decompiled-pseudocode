/*
 * XREFs of ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0043B90
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0043E5C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C009E350 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::HandleTSRequest(CBaseInput *a1, unsigned int a2)
{
  __int64 v2; // r15
  __int64 v4; // rcx
  __int64 v5; // rcx
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
  __int64 v23; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct tagKERNELHANDLETABLEENTRY *v27; // rsi
  __int64 v29; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rcx
  PERESOURCE *v39; // rdi
  int v40; // [rsp+30h] [rbp-99h] BYREF
  int v41; // [rsp+34h] [rbp-95h] BYREF
  int v42; // [rsp+38h] [rbp-91h] BYREF
  unsigned int v43; // [rsp+3Ch] [rbp-8Dh]
  __int64 v44; // [rsp+40h] [rbp-89h]
  unsigned __int8 v45; // [rsp+48h] [rbp-81h]
  GUID ActivityId; // [rsp+4Ch] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+60h] [rbp-69h] BYREF
  int *v48; // [rsp+80h] [rbp-49h]
  int v49; // [rsp+88h] [rbp-41h]
  int v50; // [rsp+8Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+90h] [rbp-39h] BYREF
  int *v52; // [rsp+B0h] [rbp-19h]
  int v53; // [rsp+B8h] [rbp-11h]
  int v54; // [rsp+BCh] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+C0h] [rbp-9h] BYREF
  int *v56; // [rsp+E0h] [rbp+17h]
  int v57; // [rsp+E8h] [rbp+1Fh]
  int v58; // [rsp+ECh] [rbp+23h]

  v2 = a2;
  v43 = a2;
  if ( a2 < 4 )
  {
    if ( *((_DWORD *)&unk_1C0205F30 + 6 * a2) != a2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    if ( *((_DWORD *)&unk_1C0205F30 + 6 * v2 + 4) >= 0x11u || CBaseInput::ExecutingOnSensorHostingThread(a1) )
    {
      (*((void (__fastcall **)(CBaseInput *))&unk_1C0205F30 + 3 * v2 + 1))(a1);
    }
    else
    {
      UserSessionSwitchLeaveCrit(v4);
      CRIMBase::SensorDoWorkAndWait(a1, *((unsigned int *)&unk_1C0205F30 + 6 * v2 + 4));
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v45 = 1;
        v32 = PsGetCurrentThreadWin32Thread(v6);
        v44 = v32;
        if ( v32 && (*(int *)(v32 + 24) > 0 || *(_DWORD *)(v44 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C024C960 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v33, v34) )
            {
              v50 = 0;
              v40 = v45;
              v49 = 4;
              v48 = &v40;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199F7,
                &ActivityId,
                0LL,
                3u,
                &v47);
            }
          }
        }
      }
      else
      {
        v44 = 0LL;
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
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v44 && (*(_DWORD *)(v44 + 48) || *(int *)(v44 + 24) > 0) )
      {
        *(_DWORD *)(v44 + 44) = 1;
        *(GUID *)(v44 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v15) )
          {
            v54 = 0;
            v41 = v45;
            v53 = 4;
            v52 = &v41;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v51);
            v35 = (unsigned int)dword_1C024C960;
          }
          if ( (unsigned int)v35 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v35, v36) )
          {
            v58 = 0;
            v42 = v45;
            v57 = 4;
            v56 = &v42;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v55);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v8;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v29 = PsGetCurrentProcess(v17, v16),
            ProcessSessionId = PsGetProcessSessionIdEx(v29),
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
          && (*(_DWORD *)(v19 + 1216) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v27 = gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v27 + 2);
              v37 = *(_QWORD *)v27;
              *((_QWORD *)v27 + 2) = 0LL;
              if ( !*(_DWORD *)(v37 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
              v39 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v39 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v38);
              ExReleaseResourceAndLeaveCriticalRegion(*v39);
              HMUnlockObject(*(_QWORD *)v27);
              tagDomLock::LockExclusive((tagDomLock *)v39);
              v27 = gpducstulHead;
            }
            while ( gpducstulHead );
            LODWORD(v2) = v43;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
    }
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, (unsigned int)v2);
}
