/*
 * XREFs of ?EtwCaptureStateCallback@@YAXXZ @ 0x1C012CC70
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C00123AC (W32kEtwEnableCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C0032C88 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00A2AC8 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0131948 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v19; // r8d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  PERESOURCE *v31; // rdi
  __int64 *v32; // rsi
  __int64 v33; // rsi
  unsigned __int64 v34; // r15
  __int64 i; // rdi
  _QWORD *j; // r14
  int ThreadInfoFlags; // eax
  struct tagQ *v38; // rcx
  int v39; // r13d
  int v40; // r8d
  int v41; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v42; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v43[2]; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE ThreadId; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A8h]
  unsigned __int8 ActivityId_4; // [rsp+68h] [rbp-A0h]
  GUID ActivityId_8; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+80h] [rbp-88h] BYREF
  unsigned int *v49; // [rsp+A0h] [rbp-68h]
  __int64 v50; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+B0h] [rbp-58h] BYREF
  HANDLE *v52; // [rsp+D0h] [rbp-38h]
  __int64 v53; // [rsp+D8h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+E0h] [rbp-28h] BYREF
  int *v55; // [rsp+100h] [rbp-8h]
  __int64 v56; // [rsp+108h] [rbp+0h]

  v43[0] = 0;
  v42 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v3 = PsGetCurrentThreadWin32Thread(v1);
    v45 = v3;
    if ( v3 && (*(int *)(v3 + 24) > 0 || *(_DWORD *)(v45 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v43[1] = ActivityId_4;
        v50 = 4LL;
        v49 = &v43[1];
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId_8,
          0LL,
          3u,
          &v48);
      }
    }
  }
  else
  {
    v45 = 0LL;
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
    if ( v45 )
    {
      v10 = *(unsigned int *)(v45 + 24);
      if ( *(_DWORD *)(v45 + 48) || (int)v10 > 0 )
      {
        *(_DWORD *)(v45 + 44) = 1;
        *(GUID *)(v45 + 28) = ActivityId_8;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            LODWORD(ThreadId) = ActivityId_4;
            v53 = 4LL;
            v52 = &ThreadId;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId_8,
              0LL,
              3u,
              &v51);
            v11 = dword_1C024C960;
          }
          if ( v11 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v41 = ActivityId_4;
            v56 = 4LL;
            v55 = &v41;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId_8,
              0LL,
              3u,
              &v54);
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
    v21 = 0LL;
    if ( !IsThreadCrossSessionAttached(v14) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v21 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
    if ( v21 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v21 + 480) & 0x1000000) != 0 )
        {
          v14 = *(unsigned int *)(v21 + 1216);
          if ( (v14 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            while ( 1 )
            {
              v32 = (__int64 *)gpducstulHead;
              if ( !gpducstulHead )
                break;
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
              v29 = *v32;
              v32[2] = 0LL;
              if ( !*(_DWORD *)(v29 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
              v31 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v31 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
              ExReleaseResourceAndLeaveCriticalRegion(*v31);
              HMUnlockObject(*v32);
              tagDomLock::LockExclusive(v31);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  if ( (W32kEtwEnabledKeyword & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_1C024B738 - 1) > 2u
    && (qword_1C024B720 & 0x8000000000040000uLL) != 0
    && (qword_1C024B728 & 0x8000000000040000uLL) == qword_1C024B728 )
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
  if ( (W32kEtwEnabledKeyword & 0x8000000000080000uLL) != 0
    && (unsigned __int8)(byte_1C024B738 - 1) > 2u
    && (qword_1C024B720 & 0x8000000000080000uLL) != 0
    && (qword_1C024B728 & 0x8000000000080000uLL) == qword_1C024B728 )
  {
    v33 = grpWinStaList;
    v34 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v33 )
    {
      for ( i = *(_QWORD *)(v33 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        for ( j = *(_QWORD **)(i + 168); j != (_QWORD *)(i + 168); j = (_QWORD *)*j )
        {
          ThreadId = PsGetThreadId((PETHREAD)*(j - 92));
          ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)(j - 92));
          v38 = (struct tagQ *)*(j - 39);
          v39 = *((_DWORD *)j + 106);
          v41 = ThreadInfoFlags;
          EtwpGetLastInputProcessTime(v38, v34, v43, &v42);
          LOBYTE(v14) = Microsoft_Windows_Win32kEnableBits;
          if ( (Microsoft_Windows_Win32kEnableBits & 0x80u) != 0LL )
            McTemplateK0qqqqq_EtwWriteTransfer(
              v34 - v39,
              (unsigned int)&ThreadInfoRundownEvent,
              v40,
              (_DWORD)ThreadId,
              v41,
              v39 != 0 ? v34 - v39 : 0,
              v43[0],
              v42);
        }
      }
      v33 = *(_QWORD *)(v33 + 8);
    }
  }
  UserSessionSwitchLeaveCrit(v14);
}
