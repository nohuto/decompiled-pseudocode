/*
 * XREFs of ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C01F5C54
 * Callers:
 *     NtCompositionInputThread @ 0x1C01F6D50 (NtCompositionInputThread.c)
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
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C01F5BB8 (-CleanupDwmInputThread@CInputManager@@IEAAXXZ.c)
 *     ?ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z @ 0x1C01F64BC (-ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputManager::DwmInputThread(CInputManager *this, void *a2, void *a3, int a4)
{
  CInputManager *v4; // r15
  int v7; // esi
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v13; // rax
  struct tagTHREADINFO *v14; // rbx
  struct tagTHREADINFO **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int ProcessSessionId; // ebx
  __int64 v27; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // r14
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  PERESOURCE *v54; // rdi
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v63; // [rsp+38h] [rbp-C8h] BYREF
  int v64; // [rsp+40h] [rbp-C0h] BYREF
  int v65; // [rsp+44h] [rbp-BCh] BYREF
  int v66; // [rsp+48h] [rbp-B8h] BYREF
  CInputManager *v67; // [rsp+50h] [rbp-B0h]
  __int64 v68; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v69; // [rsp+60h] [rbp-A0h]
  GUID ActivityId; // [rsp+64h] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+78h] [rbp-88h] BYREF
  int *v72; // [rsp+98h] [rbp-68h]
  __int64 v73; // [rsp+A0h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+A8h] [rbp-58h] BYREF
  int *v75; // [rsp+C8h] [rbp-38h]
  __int64 v76; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+D8h] [rbp-28h] BYREF
  int *v78; // [rsp+F8h] [rbp-8h]
  __int64 v79; // [rsp+100h] [rbp+0h]

  v4 = g_pInputManager;
  v67 = g_pInputManager;
  Handle = 0LL;
  v63 = 0LL;
  v7 = CInputManager::ValidateUserEvent(a2, &Handle);
  if ( v7 >= 0 )
  {
    v7 = CInputManager::ValidateUserEvent(a3, &v63);
    if ( v7 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 1, (signed __int64)CurrentThread, 0LL);
      if ( !v9 || (CurrentThread = KeGetCurrentThread(), (struct _KTHREAD *)v9 == CurrentThread) )
      {
        *((_QWORD *)v4 + 2) = Handle;
        *((_QWORD *)v4 + 3) = v63;
        v10 = *(_QWORD *)v4;
        *((_DWORD *)v4 + 15) = a4;
        *((_QWORD *)v4 + 4) = v10;
        Handle = 0LL;
        v63 = 0LL;
        if ( qword_1C0252D08 )
          v7 = qword_1C0252D08((char *)v4 + 16);
        else
          v7 = -1073741822;
        if ( v7 >= 0 )
        {
          if ( qword_1C0252D10 )
            v7 = qword_1C0252D10((char *)v4 + 16);
          else
            v7 = -1073741822;
        }
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(CurrentThread);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        ActivityId = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v69 = 1;
          v13 = PsGetCurrentThreadWin32Thread(v11);
          v68 = v13;
          if ( v13 && (*(int *)(v13 + 24) > 0 || *(_DWORD *)(v68 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v64 = v69;
              v73 = 4LL;
              v72 = &v64;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E87,
                &ActivityId,
                0LL,
                3u,
                &v71);
            }
          }
        }
        else
        {
          v68 = 0LL;
        }
        v14 = 0LL;
        while ( 1 )
        {
          v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v15 )
            v14 = *v15;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v17, v16);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v20, v19) == gpepCSRSS && v14 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v14 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          if ( v68 )
          {
            v20 = *(unsigned int *)(v68 + 24);
            if ( *(_DWORD *)(v68 + 48) || (int)v20 > 0 )
            {
              *(_DWORD *)(v68 + 44) = 1;
              *(GUID *)(v68 + 28) = ActivityId;
              if ( (unsigned int)dword_1C0246A70 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
                {
                  v65 = v69;
                  v76 = 4LL;
                  v75 = &v65;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0246A70,
                    (unsigned __int8 *)dword_1C0213E30,
                    &ActivityId,
                    0LL,
                    3u,
                    &v74);
                  v21 = dword_1C0246A70;
                }
                if ( v21 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
                {
                  v66 = v69;
                  v79 = 4LL;
                  v78 = &v66;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0246A70,
                    (unsigned __int8 *)dword_1C0213E5D,
                    &ActivityId,
                    0LL,
                    3u,
                    &v77);
                }
              }
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit(v20);
        gptiCurrent = v14;
        gbValidateHandleForIL = 1;
        if ( !(unsigned __int8)KeIsAttachedProcess(v22)
          || (v25 = PsGetCurrentProcess(v24, v23),
              ProcessSessionId = PsGetProcessSessionIdEx(v25),
              CurrentThreadProcess = PsGetCurrentThreadProcess(v27),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          v29 = KeGetCurrentThread();
          v30 = 0LL;
          if ( !IsThreadCrossSessionAttached(v24) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v29);
            if ( ThreadWin32Thread )
              v30 = *ThreadWin32Thread;
          }
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
          if ( v30
            && CurrentProcessWin32Process
            && (*(_DWORD *)(v30 + 480) & 0x1000000) != 0
            && (*(_DWORD *)(v30 + 1224) & 0x80u) == 0
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v34, v35, v36);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v40, v41);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v44, v45);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v50 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v50[2];
                v51 = *v50;
                v50[2] = 0LL;
                if ( !*(_DWORD *)(v51 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v48, v49);
                v54 = (PERESOURCE *)GetDomainLockRef(12LL, v46, v48, v49);
                if ( v54 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v52, v55, v56);
                ExReleaseResourceAndLeaveCriticalRegion(*v54);
                HMUnlockObject(*v50);
                tagDomLock::LockExclusive(v54);
                v50 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v4 = v67;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
        CInputManager::CleanupDwmInputThread(v4);
        UserSessionSwitchLeaveCrit(v58, v57, v59, v60);
      }
      else
      {
        v7 = -2147483631;
      }
      if ( Handle )
        ZwClose(Handle);
      if ( v63 )
        ZwClose(v63);
    }
  }
  return (unsigned int)v7;
}
