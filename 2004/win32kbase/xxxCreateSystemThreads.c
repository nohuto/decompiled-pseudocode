/*
 * XREFs of xxxCreateSystemThreads @ 0x1C0021BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C0021EFC (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     VideoPortCalloutThread @ 0x1C0121A54 (VideoPortCalloutThread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxCreateSystemThreads(__int64 a1, __int64 a2)
{
  int v2; // eax
  void (__fastcall *v3)(void *); // rax
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
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
  int v38; // eax
  __int64 v39; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  PERESOURCE *v50; // rdi
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int v53[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *v54; // [rsp+40h] [rbp-C8h] BYREF
  int v55; // [rsp+48h] [rbp-C0h] BYREF
  int v56; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v57; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v58; // [rsp+58h] [rbp-B0h]
  unsigned __int8 ActivityId_4; // [rsp+60h] [rbp-A8h]
  GUID ActivityId_8; // [rsp+64h] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+78h] [rbp-90h] BYREF
  int *v62; // [rsp+98h] [rbp-70h]
  __int64 v63; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+A8h] [rbp-60h] BYREF
  int *v65; // [rsp+C8h] [rbp-40h]
  __int64 v66; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v68; // [rsp+F8h] [rbp-10h]
  __int64 v69; // [rsp+100h] [rbp-8h]

  v53[0] = 0;
  v54 = 0LL;
  if ( (PVOID)PsGetCurrentProcess(a1, a2) != gpepCSRSS || !(unsigned int)CSTPop(v53, &v54) )
    return 1LL;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
  if ( v53[0] == 1 )
  {
    if ( qword_1C02523A0 )
      v38 = qword_1C02523A0();
    else
      v38 = -1073741637;
    if ( v38 >= 0 )
    {
      v3 = (void (__fastcall *)(void *))qword_1C02523A8;
LABEL_10:
      if ( v3 )
        v3(v54);
    }
  }
  else
  {
    if ( v53[0] != 2 )
    {
      if ( v53[0] == 4 )
        VideoPortCalloutThread(v54);
      goto LABEL_12;
    }
    if ( qword_1C02523D0 )
      v2 = qword_1C02523D0();
    else
      v2 = -1073741637;
    if ( v2 >= 0 )
    {
      v3 = (void (__fastcall *)(void *))qword_1C02523D8;
      goto LABEL_10;
    }
  }
LABEL_12:
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v42 = PsGetCurrentThreadWin32Thread();
    v58 = v42;
    if ( v42 && (*(int *)(v42 + 24) > 0 || *(_DWORD *)(v58 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v43, v44) )
        {
          v55 = ActivityId_4;
          v63 = 4LL;
          v62 = &v55;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C0246A70,
            (int)&dword_1C0213E87,
            (int)&ActivityId_8,
            0,
            3u,
            &v61);
        }
      }
    }
  }
  else
  {
    v58 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v58 && (*(_DWORD *)(v58 + 48) || *(int *)(v58 + 24) > 0) )
  {
    *(_DWORD *)(v58 + 44) = 1;
    *(GUID *)(v58 + 28) = ActivityId_8;
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v12) )
      {
        v56 = ActivityId_4;
        v66 = 4LL;
        v65 = &v56;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E30, (int)&ActivityId_8, 0, 3u, &v64);
        v45 = (unsigned int)dword_1C0246A70;
      }
      if ( (unsigned int)v45 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v45, v46) )
      {
        LODWORD(v57) = ActivityId_4;
        v69 = 4LL;
        v68 = &v57;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E5D, (int)&ActivityId_8, 0, 3u, &v67);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v39 = PsGetCurrentProcess(v14, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(v39),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18, v17, v19, v20);
    if ( v16
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v16 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v16 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v26, v27);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v36 = gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v47 = *(_QWORD *)v36;
        *((_QWORD *)v36 + 2) = 0LL;
        if ( !*(_DWORD *)(v47 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34, v35);
        v50 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v50 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v51, v52);
        ExReleaseResourceAndLeaveCriticalRegion(*v50);
        HMUnlockObject(*(_QWORD *)v36);
        tagDomLock::LockExclusive((tagDomLock *)v50);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return 1LL;
}
