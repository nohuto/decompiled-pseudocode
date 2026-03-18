/*
 * XREFs of xxxCreateSystemThreads @ 0x1C00852C0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C00855EC (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     VideoPortCalloutThread @ 0x1C011F704 (VideoPortCalloutThread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxCreateSystemThreads(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  int v6; // eax
  void (__fastcall *v7)(void *); // rax
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rbx
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 *v40; // rsi
  int v42; // eax
  __int64 v43; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v46; // rax
  unsigned int v47; // r8d
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  PERESOURCE *v51; // rdi
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned int v54[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *v55; // [rsp+40h] [rbp-C8h] BYREF
  int v56; // [rsp+48h] [rbp-C0h] BYREF
  int v57; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v58; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v59; // [rsp+58h] [rbp-B0h]
  unsigned __int8 ActivityId_4; // [rsp+60h] [rbp-A8h]
  GUID ActivityId_8; // [rsp+64h] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+78h] [rbp-90h] BYREF
  int *v63; // [rsp+98h] [rbp-70h]
  __int64 v64; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+A8h] [rbp-60h] BYREF
  int *v66; // [rsp+C8h] [rbp-40h]
  __int64 v67; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v69; // [rsp+F8h] [rbp-10h]
  __int64 v70; // [rsp+100h] [rbp-8h]

  v54[0] = 0;
  v55 = 0LL;
  if ( (PVOID)PsGetCurrentProcess(a1, a2) != gpepCSRSS || !(unsigned int)CSTPop(v54, &v55) )
    return 1LL;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v2, v3, v4);
  if ( v54[0] == 1 )
  {
    if ( qword_1C02503A0 )
      v42 = qword_1C02503A0();
    else
      v42 = -1073741637;
    if ( v42 >= 0 )
    {
      v7 = (void (__fastcall *)(void *))qword_1C02503A8;
LABEL_10:
      if ( v7 )
        v7(v55);
    }
  }
  else
  {
    if ( v54[0] != 2 )
    {
      if ( v54[0] == 4 )
        VideoPortCalloutThread(v55);
      goto LABEL_12;
    }
    if ( qword_1C02503D0 )
      v6 = qword_1C02503D0();
    else
      v6 = -1073741637;
    if ( v6 >= 0 )
    {
      v7 = (void (__fastcall *)(void *))qword_1C02503D8;
      goto LABEL_10;
    }
  }
LABEL_12:
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v46 = PsGetCurrentThreadWin32Thread(v8);
    v59 = v46;
    if ( v46 && (*(int *)(v46 + 24) > 0 || *(_DWORD *)(v59 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v56 = ActivityId_4;
        v64 = 4LL;
        v63 = &v56;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId_8,
          0LL,
          3u,
          &v62);
      }
    }
  }
  else
  {
    v59 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v59 && (*(_DWORD *)(v59 + 48) || *(int *)(v59 + 24) > 0) )
  {
    *(_DWORD *)(v59 + 44) = 1;
    *(GUID *)(v59 + 28) = ActivityId_8;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v57 = ActivityId_4;
        v67 = 4LL;
        v66 = &v57;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId_8,
          0LL,
          3u,
          &v65);
        v47 = dword_1C0244A70;
      }
      if ( v47 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        LODWORD(v58) = ActivityId_4;
        v70 = 4LL;
        v69 = &v58;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId_8,
          0LL,
          3u,
          &v68);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v43 = PsGetCurrentProcess(v18, v17),
        ProcessSessionId = PsGetProcessSessionIdEx(v43),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v20 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v20 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
    if ( v20
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v20 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v20 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v24, v25, v26);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v30, v31);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34, v35);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v40 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v48 = *v40;
        v40[2] = 0LL;
        if ( !*(_DWORD *)(v48 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38, v39);
        v51 = (PERESOURCE *)GetDomainLockRef(12LL, v36, v38, v39);
        if ( v51 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v52, v53);
        ExReleaseResourceAndLeaveCriticalRegion(*v51);
        HMUnlockObject(*v40);
        tagDomLock::LockExclusive(v51);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return 1LL;
}
