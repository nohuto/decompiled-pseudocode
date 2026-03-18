/*
 * XREFs of ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C01FB684
 * Callers:
 *     NtCompositionInputThread @ 0x1C01FC780 (NtCompositionInputThread.c)
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
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C01FB5E8 (-CleanupDwmInputThread@CInputManager@@IEAAXXZ.c)
 *     ?ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z @ 0x1C01FBEEC (-ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v29; // rdx
  __int64 v30; // r8
  struct _KTHREAD *v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v36; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 *v40; // r14
  __int64 v41; // rax
  __int64 v42; // rcx
  PERESOURCE *v43; // rdi
  __int64 v44; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v47; // [rsp+38h] [rbp-C8h] BYREF
  int v48; // [rsp+40h] [rbp-C0h] BYREF
  int v49; // [rsp+44h] [rbp-BCh] BYREF
  int v50; // [rsp+48h] [rbp-B8h] BYREF
  CInputManager *v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v53; // [rsp+60h] [rbp-A0h]
  GUID ActivityId; // [rsp+64h] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+78h] [rbp-88h] BYREF
  int *v56; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+A8h] [rbp-58h] BYREF
  int *v59; // [rsp+C8h] [rbp-38h]
  __int64 v60; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+D8h] [rbp-28h] BYREF
  int *v62; // [rsp+F8h] [rbp-8h]
  __int64 v63; // [rsp+100h] [rbp+0h]

  v4 = g_pInputManager;
  v51 = g_pInputManager;
  Handle = 0LL;
  v47 = 0LL;
  v7 = CInputManager::ValidateUserEvent(a2, &Handle);
  if ( v7 >= 0 )
  {
    v7 = CInputManager::ValidateUserEvent(a3, &v47);
    if ( v7 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 1, (signed __int64)CurrentThread, 0LL);
      if ( !v9 || (CurrentThread = KeGetCurrentThread(), (struct _KTHREAD *)v9 == CurrentThread) )
      {
        *((_QWORD *)v4 + 2) = Handle;
        *((_QWORD *)v4 + 3) = v47;
        v10 = *(_QWORD *)v4;
        *((_DWORD *)v4 + 15) = a4;
        *((_QWORD *)v4 + 4) = v10;
        Handle = 0LL;
        v47 = 0LL;
        if ( qword_1C0258CC8 )
          v7 = qword_1C0258CC8((char *)v4 + 16);
        else
          v7 = -1073741822;
        if ( v7 >= 0 )
        {
          if ( qword_1C0258CD0 )
            v7 = qword_1C0258CD0((char *)v4 + 16);
          else
            v7 = -1073741822;
        }
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(CurrentThread);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        ActivityId = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v53 = 1;
          v13 = PsGetCurrentThreadWin32Thread(v11);
          v52 = v13;
          if ( v13 && (*(int *)(v13 + 24) > 0 || *(_DWORD *)(v52 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v48 = v53;
              v57 = 4LL;
              v56 = &v48;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199F7,
                &ActivityId,
                0LL,
                3u,
                &v55);
            }
          }
        }
        else
        {
          v52 = 0LL;
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
          if ( v52 )
          {
            v20 = *(unsigned int *)(v52 + 24);
            if ( *(_DWORD *)(v52 + 48) || (int)v20 > 0 )
            {
              *(_DWORD *)(v52 + 44) = 1;
              *(GUID *)(v52 + 28) = ActivityId;
              if ( (unsigned int)dword_1C024C960 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
                {
                  v49 = v53;
                  v60 = 4LL;
                  v59 = &v49;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024C960,
                    (unsigned __int8 *)dword_1C02199A0,
                    &ActivityId,
                    0LL,
                    3u,
                    &v58);
                  v21 = dword_1C024C960;
                }
                if ( v21 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
                {
                  v50 = v53;
                  v63 = 4LL;
                  v62 = &v50;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024C960,
                    (unsigned __int8 *)dword_1C02199CD,
                    &ActivityId,
                    0LL,
                    3u,
                    &v61);
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
          v31 = KeGetCurrentThread();
          v32 = 0LL;
          if ( !IsThreadCrossSessionAttached(v24) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v31);
            if ( ThreadWin32Thread )
              v32 = *ThreadWin32Thread;
          }
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33);
          if ( v32
            && CurrentProcessWin32Process
            && (*(_DWORD *)(v32 + 480) & 0x1000000) != 0
            && (*(_DWORD *)(v32 + 1216) & 0x80u) == 0
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v38);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v40 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v40[2];
                v41 = *v40;
                v40[2] = 0LL;
                if ( !*(_DWORD *)(v41 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v39);
                v43 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v43 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v42);
                ExReleaseResourceAndLeaveCriticalRegion(*v43);
                HMUnlockObject(*v40);
                tagDomLock::LockExclusive(v43);
                v40 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v4 = v51;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
        CInputManager::CleanupDwmInputThread(v4, v29, v30);
        UserSessionSwitchLeaveCrit(v44);
      }
      else
      {
        v7 = -2147483631;
      }
      if ( Handle )
        ZwClose(Handle);
      if ( v47 )
        ZwClose(v47);
    }
  }
  return (unsigned int)v7;
}
