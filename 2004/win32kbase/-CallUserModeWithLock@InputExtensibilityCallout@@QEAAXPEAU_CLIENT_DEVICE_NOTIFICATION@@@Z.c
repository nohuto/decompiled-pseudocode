/*
 * XREFs of ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01A01B0
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
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ApiSetEditionInputExtensibilityCallout @ 0x1C01C84C0 (ApiSetEditionInputExtensibilityCallout.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::CallUserModeWithLock(
        InputExtensibilityCallout *this,
        struct _CLIENT_DEVICE_NOTIFICATION *a2)
{
  CInputThread *v2; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v14; // rax
  struct tagTHREADINFO *v15; // rbx
  struct tagTHREADINFO **v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  PVOID CurrentProcess; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int ProcessSessionId; // ebx
  __int64 v28; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  PERESOURCE *v54; // rdi
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 *v57; // rsi
  int v58; // [rsp+30h] [rbp-99h] BYREF
  int v59; // [rsp+34h] [rbp-95h] BYREF
  int v60; // [rsp+38h] [rbp-91h] BYREF
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

  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v6 = *((_DWORD *)v2 + 10);
  v7 = CurrentThreadId;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 != v6 )
    KeBugCheck(0x164u);
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v8, v9, v10);
  ApiSetEditionInputExtensibilityCallout(*(_QWORD *)this, a2);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v11);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v62 = 1;
    v14 = PsGetCurrentThreadWin32Thread(v12);
    v61 = v14;
    if ( v14 && (*(int *)(v14 + 24) > 0 || *(_DWORD *)(v61 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v67 = 0;
        v58 = v62;
        v66 = 4;
        v65 = &v58;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v64);
      }
    }
  }
  else
  {
    v61 = 0LL;
  }
  v15 = 0LL;
  while ( 1 )
  {
    v16 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v16 )
      v15 = *v16;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v18, v17);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v21, v20) == gpepCSRSS && v15 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v15 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v61 )
    {
      v21 = *(unsigned int *)(v61 + 24);
      if ( *(_DWORD *)(v61 + 48) || (int)v21 > 0 )
      {
        *(_DWORD *)(v61 + 44) = 1;
        *(GUID *)(v61 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v71 = 0;
            v59 = v62;
            v70 = 4;
            v69 = &v59;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v68);
            v22 = dword_1C0246A70;
          }
          if ( v22 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v75 = 0;
            v60 = v62;
            v74 = 4;
            v73 = &v60;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v72);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v21);
  gptiCurrent = v15;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v23)
    || (v26 = PsGetCurrentProcess(v25, v24),
        ProcessSessionId = PsGetProcessSessionIdEx(v26),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v28),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v31 = 0LL;
    if ( !IsThreadCrossSessionAttached(v25) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v31 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32);
    if ( v31
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v31 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v31 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v35, v36, v37);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v41, v42);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v45, v46);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v57 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v51 = *v57;
        v57[2] = 0LL;
        if ( !*(_DWORD *)(v51 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v49, v50);
        v54 = (PERESOURCE *)GetDomainLockRef(12LL, v47, v49, v50);
        if ( v54 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v52, v55, v56);
        ExReleaseResourceAndLeaveCriticalRegion(*v54);
        HMUnlockObject(*v57);
        tagDomLock::LockExclusive(v54);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
}
