/*
 * XREFs of ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0124930
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C008ED0C (W32kEtwEnableCallback.c)
 * Callees:
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C0028818 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C0076294 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0129608 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  PERESOURCE *v42; // rdi
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rsi
  unsigned __int64 v48; // r15
  __int64 i; // rdi
  _QWORD *j; // r14
  int ThreadInfoFlags; // eax
  struct tagQ *v52; // rcx
  int v53; // r13d
  int v54; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v55; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v56[2]; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE ThreadId; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A8h]
  unsigned __int8 ActivityId_4; // [rsp+68h] [rbp-A0h]
  GUID ActivityId_8; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+80h] [rbp-88h] BYREF
  unsigned int *v62; // [rsp+A0h] [rbp-68h]
  __int64 v63; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+B0h] [rbp-58h] BYREF
  HANDLE *v65; // [rsp+D0h] [rbp-38h]
  __int64 v66; // [rsp+D8h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+E0h] [rbp-28h] BYREF
  int *v68; // [rsp+100h] [rbp-8h]
  __int64 v69; // [rsp+108h] [rbp+0h]

  v56[0] = 0;
  v55 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId_8 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v3 = PsGetCurrentThreadWin32Thread(v1);
    v58 = v3;
    if ( v3 && (*(int *)(v3 + 24) > 0 || *(_DWORD *)(v58 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v56[1] = ActivityId_4;
        v63 = 4LL;
        v62 = &v56[1];
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId_8,
          0LL,
          3u,
          &v61);
      }
    }
  }
  else
  {
    v58 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v58 && (*(_DWORD *)(v58 + 48) || *(int *)(v58 + 24) > 0) )
  {
    *(_DWORD *)(v58 + 44) = 1;
    *(GUID *)(v58 + 28) = ActivityId_8;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        LODWORD(ThreadId) = ActivityId_4;
        v66 = 4LL;
        v65 = &ThreadId;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId_8,
          0LL,
          3u,
          &v64);
        v11 = dword_1C0244A70;
      }
      if ( v11 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v54 = ActivityId_4;
        v69 = 4LL;
        v68 = &v54;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId_8,
          0LL,
          3u,
          &v67);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v14 = PsGetCurrentProcess(v13, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(v14),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v21 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
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
        if ( (*(_DWORD *)(v21 + 488) & 0x1000000) != 0 )
        {
          v17 = *(unsigned int *)(v21 + 1232);
          if ( (v17 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v25, v18, v19);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v29, v30);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            while ( 1 )
            {
              v45 = (__int64 *)gpducstulHead;
              if ( !gpducstulHead )
                break;
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
              v39 = *v45;
              v45[2] = 0LL;
              if ( !*(_DWORD *)(v39 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37, v38);
              v42 = (PERESOURCE *)GetDomainLockRef(12LL, v35, v37, v38);
              if ( v42 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v43, v44);
              ExReleaseResourceAndLeaveCriticalRegion(*v42);
              HMUnlockObject(*v45);
              tagDomLock::LockExclusive(v42);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  if ( (W32kEtwEnabledKeyword & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_1C0243738 - 1) > 2u
    && (qword_1C0243720 & 0x8000000000040000uLL) != 0
    && (qword_1C0243728 & 0x8000000000040000uLL) == qword_1C0243728 )
  {
    if ( W32kEtwWaitCursorActiveType )
    {
      v17 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
          - W32kEtwWaitCursorStartMs;
      if ( (unsigned int)v17 >= 0xC8 && (Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(
          v17,
          (unsigned int)&WaitCursorEvent,
          v18,
          W32kEtwWaitCursorThreadId,
          W32kEtwWaitCursorProcessId,
          gSessionId,
          W32kEtwWaitCursorActiveType,
          ((unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24) - W32kEtwWaitCursorStartMs);
    }
  }
  v46 = 0x8000000000080000uLL;
  if ( (W32kEtwEnabledKeyword & 0x8000000000080000uLL) != 0
    && (unsigned __int8)(byte_1C0243738 - 1) > 2u
    && (qword_1C0243720 & 0x8000000000080000uLL) != 0
    && (qword_1C0243728 & 0x8000000000080000uLL) == qword_1C0243728 )
  {
    v47 = grpWinStaList;
    v48 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v47 )
    {
      for ( i = *(_QWORD *)(v47 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        for ( j = *(_QWORD **)(i + 168); j != (_QWORD *)(i + 168); j = (_QWORD *)*j )
        {
          ThreadId = PsGetThreadId((PETHREAD)*(j - 93));
          ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)(j - 93));
          v52 = (struct tagQ *)*(j - 39);
          v53 = *((_DWORD *)j + 108);
          v54 = ThreadInfoFlags;
          EtwpGetLastInputProcessTime(v52, v48, v56, &v55);
          LOBYTE(v17) = Microsoft_Windows_Win32kEnableBits;
          if ( (Microsoft_Windows_Win32kEnableBits & 0x80u) != 0LL )
            McTemplateK0qqqqq_EtwWriteTransfer(
              v48 - v53,
              (unsigned int)&ThreadInfoRundownEvent,
              v18,
              (_DWORD)ThreadId,
              v54,
              v53 != 0 ? v48 - v53 : 0,
              v56[0],
              v55);
        }
      }
      v47 = *(_QWORD *)(v47 + 8);
    }
  }
  UserSessionSwitchLeaveCrit(v17, v46, v18, v19);
}
