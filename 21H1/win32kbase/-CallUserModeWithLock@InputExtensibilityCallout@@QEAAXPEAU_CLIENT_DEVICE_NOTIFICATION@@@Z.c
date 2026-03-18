/*
 * XREFs of ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01A5F10
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
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ApiSetEditionInputExtensibilityCallout @ 0x1C01CE440 (ApiSetEditionInputExtensibilityCallout.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::CallUserModeWithLock(
        InputExtensibilityCallout *this,
        struct _CLIENT_DEVICE_NOTIFICATION *a2)
{
  CInputThread *v2; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v11; // rax
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int ProcessSessionId; // ebx
  __int64 v25; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v32; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  PERESOURCE *v38; // rdi
  __int64 *v39; // rsi
  int v40; // [rsp+30h] [rbp-99h] BYREF
  int v41; // [rsp+34h] [rbp-95h] BYREF
  int v42; // [rsp+38h] [rbp-91h] BYREF
  __int64 v43; // [rsp+40h] [rbp-89h]
  unsigned __int8 v44; // [rsp+48h] [rbp-81h]
  GUID ActivityId; // [rsp+4Ch] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+60h] [rbp-69h] BYREF
  int *v47; // [rsp+80h] [rbp-49h]
  int v48; // [rsp+88h] [rbp-41h]
  int v49; // [rsp+8Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+90h] [rbp-39h] BYREF
  int *v51; // [rsp+B0h] [rbp-19h]
  int v52; // [rsp+B8h] [rbp-11h]
  int v53; // [rsp+BCh] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+C0h] [rbp-9h] BYREF
  int *v55; // [rsp+E0h] [rbp+17h]
  int v56; // [rsp+E8h] [rbp+1Fh]
  int v57; // [rsp+ECh] [rbp+23h]

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
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
  ApiSetEditionInputExtensibilityCallout(*(_QWORD *)this, a2);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v44 = 1;
    v11 = PsGetCurrentThreadWin32Thread(v9);
    v43 = v11;
    if ( v11 && (*(int *)(v11 + 24) > 0 || *(_DWORD *)(v43 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v49 = 0;
        v40 = v44;
        v48 = 4;
        v47 = &v40;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v46);
      }
    }
  }
  else
  {
    v43 = 0LL;
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
    if ( v43 )
    {
      v18 = *(unsigned int *)(v43 + 24);
      if ( *(_DWORD *)(v43 + 48) || (int)v18 > 0 )
      {
        *(_DWORD *)(v43 + 44) = 1;
        *(GUID *)(v43 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v53 = 0;
            v41 = v44;
            v52 = 4;
            v51 = &v41;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v50);
            v19 = dword_1C024C960;
          }
          if ( v19 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v57 = 0;
            v42 = v44;
            v56 = 4;
            v55 = &v42;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v54);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v18);
  gptiCurrent = v12;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v20)
    || (v23 = PsGetCurrentProcess(v22, v21),
        ProcessSessionId = PsGetProcessSessionIdEx(v23),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v25),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v28 = 0LL;
    if ( !IsThreadCrossSessionAttached(v22) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v28 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29);
    if ( v28
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v28 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v28 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v34);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v39 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v36 = *v39;
        v39[2] = 0LL;
        if ( !*(_DWORD *)(v36 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v35);
        v38 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v38 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v37);
        ExReleaseResourceAndLeaveCriticalRegion(*v38);
        HMUnlockObject(*v39);
        tagDomLock::LockExclusive(v38);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
}
