/*
 * XREFs of NtUserSetProcessDpiAwarenessContext @ 0x1C000E750
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C000EA8C (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C000EC44 (IsValidKernelDpiAwarenessContext.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetProcessDpiAwarenessContext(__int64 a1, int a2)
{
  int v2; // r15d
  unsigned int v3; // r14d
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE *DomainLockRef; // rbx
  struct tagKERNELHANDLETABLEENTRY *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rsi
  __int64 i; // rsi
  __int64 v31; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  PERESOURCE *v40; // rdi
  int v41; // [rsp+38h] [rbp-89h] BYREF
  int v42; // [rsp+3Ch] [rbp-85h] BYREF
  int v43; // [rsp+40h] [rbp-81h] BYREF
  int v44; // [rsp+44h] [rbp-7Dh]
  __int64 v45; // [rsp+48h] [rbp-79h]
  unsigned __int8 v46; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+68h] [rbp-59h] BYREF
  int *v49; // [rsp+88h] [rbp-39h]
  int v50; // [rsp+90h] [rbp-31h]
  int v51; // [rsp+94h] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+98h] [rbp-29h] BYREF
  int *v53; // [rsp+B8h] [rbp-9h]
  int v54; // [rsp+C0h] [rbp-1h]
  int v55; // [rsp+C4h] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+C8h] [rbp+7h] BYREF
  int *v57; // [rsp+E8h] [rbp+27h]
  int v58; // [rsp+F0h] [rbp+2Fh]
  int v59; // [rsp+F4h] [rbp+33h]

  v2 = a2;
  v44 = a2;
  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v46 = 1;
    v34 = PsGetCurrentThreadWin32Thread(v4);
    v45 = v34;
    if ( v34 && (*(int *)(v34 + 24) > 0 || *(_DWORD *)(v45 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v35, v36) )
        {
          v51 = 0;
          v41 = v46;
          v50 = 4;
          v49 = &v41;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199F7, (int)&ActivityId, 0, 3u, &v48);
        }
      }
    }
  }
  else
  {
    v45 = 0LL;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v45 && (*(_DWORD *)(v45 + 48) || *(int *)(v45 + 24) > 0) )
  {
    *(_DWORD *)(v45 + 44) = 1;
    *(GUID *)(v45 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v13) )
      {
        v55 = 0;
        v42 = v46;
        v54 = 4;
        v53 = &v42;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199A0, (int)&ActivityId, 0, 3u, &v52);
        v37 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v37 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v37, v38) )
      {
        v59 = 0;
        v43 = v46;
        v58 = 4;
        v57 = &v43;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199CD, (int)&ActivityId, 0, 3u, &v56);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v31 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v31),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v17 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v17 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
    if ( v17
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v17 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v17 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v22 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v22 + 2);
          v39 = *(_QWORD *)v22;
          *((_QWORD *)v22 + 2) = 0LL;
          if ( !*(_DWORD *)(v39 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v40 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v40 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          ExReleaseResourceAndLeaveCriticalRegion(*v40);
          HMUnlockObject(*(_QWORD *)v22);
          tagDomLock::LockExclusive((tagDomLock *)v40);
          v22 = gpducstulHead;
        }
        while ( gpducstulHead );
        v2 = v44;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  if ( !(unsigned int)IsValidKernelDpiAwarenessContext(v3)
    || (v3 & 0xF) == 1 && ((v3 >> 8) & 0x1FF) != *(_WORD *)(PsGetCurrentProcessWin32Process(v23) + 284) )
  {
    UserSetLastError(87LL);
LABEL_72:
    v27 = 0LL;
    goto LABEL_37;
  }
  v24 = *((_QWORD *)gptiCurrent + 52);
  v25 = *(unsigned int *)(v24 + 820);
  if ( (v25 & 0x400000) != 0 )
  {
    if ( !v2 )
      goto LABEL_72;
    if ( (v3 & 0xF) == 0 )
      goto LABEL_72;
    v26 = *(_DWORD *)(v24 + 280);
    if ( v26 != 18 )
      goto LABEL_72;
  }
  else
  {
    v26 = *(_DWORD *)(v24 + 280);
  }
  v25 = (unsigned int)v25 | 0x400000;
  v27 = 1LL;
  *(_DWORD *)(v24 + 820) = v25;
  if ( v26 != v3 )
  {
    v28 = *(_QWORD *)(v24 + 664);
    *(_DWORD *)(v24 + 280) = v3;
    if ( v28 )
    {
      for ( i = *(_QWORD *)(v28 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v24, *(struct tagWND **)(*(_QWORD *)(i + 8) + 24LL));
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v24, *(struct tagWND **)(i + 104));
      }
    }
  }
LABEL_37:
  UserSessionSwitchLeaveCrit(v25);
  return v27;
}
