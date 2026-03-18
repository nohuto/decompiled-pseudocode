/*
 * XREFs of ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0126C80
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C002D2AC (W32kEtwEnableCallback.c)
 * Callees:
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C001B318 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00AC874 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C012B958 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EtwCaptureStateCallback(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v3; // rax
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int ProcessSessionId; // ebx
  __int64 v17; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v26; // rdx
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
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  PERESOURCE *v43; // rdi
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 *v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rsi
  unsigned __int64 v49; // r15
  __int64 i; // rdi
  _QWORD *j; // r14
  int ThreadInfoFlags; // eax
  struct tagQ *v53; // rcx
  int v54; // r13d
  int v55; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v56; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v57[2]; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE ThreadId; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+60h] [rbp-A8h]
  unsigned __int8 ActivityId_4; // [rsp+68h] [rbp-A0h]
  GUID ActivityId_8; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+80h] [rbp-88h] BYREF
  unsigned int *v63; // [rsp+A0h] [rbp-68h]
  __int64 v64; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+B0h] [rbp-58h] BYREF
  HANDLE *v66; // [rsp+D0h] [rbp-38h]
  __int64 v67; // [rsp+D8h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+E0h] [rbp-28h] BYREF
  int *v69; // [rsp+100h] [rbp-8h]
  __int64 v70; // [rsp+108h] [rbp+0h]

  v57[0] = 0;
  v56 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v3 = PsGetCurrentThreadWin32Thread(v1);
    v59 = v3;
    if ( v3 && (*(int *)(v3 + 24) > 0 || *(_DWORD *)(v59 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v57[1] = ActivityId_4;
        v64 = 4LL;
        v63 = &v57[1];
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
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
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v4 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v59 )
    {
      v10 = *(unsigned int *)(v59 + 24);
      if ( *(_DWORD *)(v59 + 48) || (int)v10 > 0 )
      {
        *(_DWORD *)(v59 + 44) = 1;
        *(GUID *)(v59 + 28) = ActivityId_8;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            LODWORD(ThreadId) = ActivityId_4;
            v67 = 4LL;
            v66 = &ThreadId;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId_8,
              0LL,
              3u,
              &v65);
            v11 = dword_1C0246A70;
          }
          if ( v11 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v55 = ActivityId_4;
            v70 = 4LL;
            v69 = &v55;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId_8,
              0LL,
              3u,
              &v68);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v10);
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v12)
    || (v15 = PsGetCurrentProcess(v14, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(v15),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v17),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v22 = 0LL;
    if ( !IsThreadCrossSessionAttached(v14) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v22 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
    if ( v22 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v22 + 480) & 0x1000000) != 0 )
        {
          v14 = *(unsigned int *)(v22 + 1224);
          if ( (v14 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v26, v19, v20);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v30, v31);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34, v35);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            while ( 1 )
            {
              v46 = (__int64 *)gpducstulHead;
              if ( !gpducstulHead )
                break;
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
              v40 = *v46;
              v46[2] = 0LL;
              if ( !*(_DWORD *)(v40 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38, v39);
              v43 = (PERESOURCE *)GetDomainLockRef(12LL, v36, v38, v39);
              if ( v43 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v44, v45);
              ExReleaseResourceAndLeaveCriticalRegion(*v43);
              HMUnlockObject(*v46);
              tagDomLock::LockExclusive(v43);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  if ( (W32kEtwEnabledKeyword & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_1C0245748 - 1) > 2u
    && (qword_1C0245730 & 0x8000000000040000uLL) != 0
    && (qword_1C0245738 & 0x8000000000040000uLL) == qword_1C0245738 )
  {
    if ( W32kEtwWaitCursorActiveType )
    {
      v14 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
          - W32kEtwWaitCursorStartMs;
      if ( (unsigned int)v14 >= 0xC8 && (Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(
          v14,
          (unsigned int)&WaitCursorEvent,
          v19,
          W32kEtwWaitCursorThreadId,
          W32kEtwWaitCursorProcessId,
          gSessionId,
          W32kEtwWaitCursorActiveType,
          ((unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24) - W32kEtwWaitCursorStartMs);
    }
  }
  v47 = 0x8000000000080000uLL;
  if ( (W32kEtwEnabledKeyword & 0x8000000000080000uLL) != 0
    && (unsigned __int8)(byte_1C0245748 - 1) > 2u
    && (qword_1C0245730 & 0x8000000000080000uLL) != 0
    && (qword_1C0245738 & 0x8000000000080000uLL) == qword_1C0245738 )
  {
    v48 = grpWinStaList;
    v49 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v48 )
    {
      for ( i = *(_QWORD *)(v48 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        for ( j = *(_QWORD **)(i + 168); j != (_QWORD *)(i + 168); j = (_QWORD *)*j )
        {
          ThreadId = PsGetThreadId((PETHREAD)*(j - 92));
          ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)(j - 92));
          v53 = (struct tagQ *)*(j - 39);
          v54 = *((_DWORD *)j + 108);
          v55 = ThreadInfoFlags;
          EtwpGetLastInputProcessTime(v53, v49, v57, &v56);
          LOBYTE(v14) = Microsoft_Windows_Win32kEnableBits;
          if ( (Microsoft_Windows_Win32kEnableBits & 0x80u) != 0LL )
            McTemplateK0qqqqq_EtwWriteTransfer(
              v49 - v54,
              (unsigned int)&ThreadInfoRundownEvent,
              v19,
              (_DWORD)ThreadId,
              v55,
              v54 != 0 ? v49 - v54 : 0,
              v57[0],
              v56);
        }
      }
      v48 = *(_QWORD *)(v48 + 8);
    }
  }
  UserSessionSwitchLeaveCrit(v14, v47, v19, v20);
}
