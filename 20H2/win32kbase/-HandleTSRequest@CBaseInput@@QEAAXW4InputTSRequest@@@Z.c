/*
 * XREFs of ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0024570
 * Callers:
 *     <none>
 * Callees:
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0023C90 (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0025730 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
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

__int64 __fastcall CBaseInput::HandleTSRequest(CBaseInput *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rbx
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  struct tagKERNELHANDLETABLEENTRY *v41; // rsi
  __int64 v43; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  PERESOURCE *v54; // rdi
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // [rsp+30h] [rbp-99h] BYREF
  int v58; // [rsp+34h] [rbp-95h] BYREF
  int v59; // [rsp+38h] [rbp-91h] BYREF
  int v60; // [rsp+3Ch] [rbp-8Dh]
  __int64 v61; // [rsp+40h] [rbp-89h]
  unsigned __int8 v62; // [rsp+48h] [rbp-81h]
  GUID ActivityId; // [rsp+4Ch] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+60h] [rbp-69h] BYREF
  int *v65; // [rsp+80h] [rbp-49h]
  int v66; // [rsp+88h] [rbp-41h]
  int v67; // [rsp+8Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+90h] [rbp-39h] BYREF
  int *v69; // [rsp+B0h] [rbp-19h]
  int v70; // [rsp+B8h] [rbp-11h]
  int v71; // [rsp+BCh] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+C0h] [rbp-9h] BYREF
  int *v73; // [rsp+E0h] [rbp+17h]
  int v74; // [rsp+E8h] [rbp+1Fh]
  int v75; // [rsp+ECh] [rbp+23h]

  v4 = (unsigned int)a2;
  v60 = a2;
  if ( (unsigned int)a2 < 4 )
  {
    if ( *((_DWORD *)&unk_1C01FC9F0 + 6 * (unsigned int)a2) != (_DWORD)a2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    if ( *((_DWORD *)&unk_1C01FC9F0 + 6 * v4 + 4) >= 0x11u || CBaseInput::ExecutingOnSensorHostingThread(a1) )
    {
      (*((void (__fastcall **)(CBaseInput *))&unk_1C01FC9F0 + 3 * v4 + 1))(a1);
    }
    else
    {
      UserSessionSwitchLeaveCrit(v6);
      CRIMBase::SensorDoWorkAndWait((__int64)a1, *((unsigned int *)&unk_1C01FC9F0 + 6 * v4 + 4), v7, v8);
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v62 = 1;
        v46 = PsGetCurrentThreadWin32Thread();
        v61 = v46;
        if ( v46 && (*(int *)(v46 + 24) > 0 || *(_DWORD *)(v61 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C0244A70 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v47, v48) )
            {
              v67 = 0;
              v57 = v62;
              v66 = 4;
              v65 = &v57;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C0244A70,
                (int)&dword_1C0211E87,
                (int)&ActivityId,
                0,
                3u,
                &v64);
            }
          }
        }
      }
      else
      {
        v61 = 0LL;
      }
      v10 = 0LL;
      while ( 1 )
      {
        v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v11 )
          v10 = *v11;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v13, v12);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v16, v15) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v10 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v61 && (*(_DWORD *)(v61 + 48) || *(int *)(v61 + 24) > 0) )
      {
        *(_DWORD *)(v61 + 44) = 1;
        *(GUID *)(v61 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v17) )
          {
            v71 = 0;
            v58 = v62;
            v70 = 4;
            v69 = &v58;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C0244A70,
              (int)&dword_1C0211E30,
              (int)&ActivityId,
              0,
              3u,
              &v68);
            v49 = (unsigned int)dword_1C0244A70;
          }
          if ( (unsigned int)v49 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v49, v50) )
          {
            v75 = 0;
            v59 = v62;
            v74 = 4;
            v73 = &v59;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C0244A70,
              (int)&dword_1C0211E5D,
              (int)&ActivityId,
              0,
              3u,
              &v72);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v10;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v43 = PsGetCurrentProcess(v19, v18),
            ProcessSessionId = PsGetProcessSessionIdEx(v43),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v21 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v21 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23, v22, v24, v25);
        if ( v21
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v21 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v21 + 1232) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v31, v32);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v41 = gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v41 + 2);
              v51 = *(_QWORD *)v41;
              *((_QWORD *)v41 + 2) = 0LL;
              if ( !*(_DWORD *)(v51 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
              v54 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v54 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v52, v55, v56);
              ExReleaseResourceAndLeaveCriticalRegion(*v54);
              HMUnlockObject(*(_QWORD *)v41);
              tagDomLock::LockExclusive((tagDomLock *)v54);
              v41 = gpducstulHead;
            }
            while ( gpducstulHead );
            LODWORD(v4) = v60;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
    }
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, (unsigned int)v4);
}
