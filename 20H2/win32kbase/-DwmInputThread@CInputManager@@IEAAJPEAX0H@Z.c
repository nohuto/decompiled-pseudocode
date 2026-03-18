/*
 * XREFs of ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C01F4324
 * Callers:
 *     NtCompositionInputThread @ 0x1C01F5420 (NtCompositionInputThread.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C01F4288 (-CleanupDwmInputThread@CInputManager@@IEAAXXZ.c)
 *     ?ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z @ 0x1C01F4B8C (-ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 *v48; // r14
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  PERESOURCE *v52; // rdi
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v61; // [rsp+38h] [rbp-C8h] BYREF
  int v62; // [rsp+40h] [rbp-C0h] BYREF
  int v63; // [rsp+44h] [rbp-BCh] BYREF
  int v64; // [rsp+48h] [rbp-B8h] BYREF
  CInputManager *v65; // [rsp+50h] [rbp-B0h]
  __int64 v66; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v67; // [rsp+60h] [rbp-A0h]
  GUID ActivityId; // [rsp+64h] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+78h] [rbp-88h] BYREF
  int *v70; // [rsp+98h] [rbp-68h]
  __int64 v71; // [rsp+A0h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+A8h] [rbp-58h] BYREF
  int *v73; // [rsp+C8h] [rbp-38h]
  __int64 v74; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+D8h] [rbp-28h] BYREF
  int *v76; // [rsp+F8h] [rbp-8h]
  __int64 v77; // [rsp+100h] [rbp+0h]

  v4 = g_pInputManager;
  v65 = g_pInputManager;
  Handle = 0LL;
  v61 = 0LL;
  v7 = CInputManager::ValidateUserEvent(a2, &Handle);
  if ( v7 >= 0 )
  {
    v7 = CInputManager::ValidateUserEvent(a3, &v61);
    if ( v7 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 1, (signed __int64)CurrentThread, 0LL);
      if ( !v9 || (CurrentThread = KeGetCurrentThread(), (struct _KTHREAD *)v9 == CurrentThread) )
      {
        *((_QWORD *)v4 + 2) = Handle;
        *((_QWORD *)v4 + 3) = v61;
        v10 = *(_QWORD *)v4;
        *((_DWORD *)v4 + 15) = a4;
        *((_QWORD *)v4 + 4) = v10;
        Handle = 0LL;
        v61 = 0LL;
        if ( qword_1C0250D08 )
          v7 = qword_1C0250D08((char *)v4 + 16);
        else
          v7 = -1073741822;
        if ( v7 >= 0 )
        {
          if ( qword_1C0250D10 )
            v7 = qword_1C0250D10((char *)v4 + 16);
          else
            v7 = -1073741822;
        }
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(CurrentThread);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        ActivityId = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v67 = 1;
          v13 = PsGetCurrentThreadWin32Thread(v11);
          v66 = v13;
          if ( v13 && (*(int *)(v13 + 24) > 0 || *(_DWORD *)(v66 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
            {
              v62 = v67;
              v71 = 4LL;
              v70 = &v62;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0244A70,
                (unsigned __int8 *)dword_1C0211E87,
                &ActivityId,
                0LL,
                3u,
                &v69);
            }
          }
        }
        else
        {
          v66 = 0LL;
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
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v66
          && (*(_DWORD *)(v66 + 48) || *(int *)(v66 + 24) > 0) )
        {
          *(_DWORD *)(v66 + 44) = 1;
          *(GUID *)(v66 + 28) = ActivityId;
          if ( (unsigned int)dword_1C0244A70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
            {
              v63 = v67;
              v74 = 4LL;
              v73 = &v63;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0244A70,
                (unsigned __int8 *)dword_1C0211E30,
                &ActivityId,
                0LL,
                3u,
                &v72);
              v21 = dword_1C0244A70;
            }
            if ( v21 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
            {
              v64 = v67;
              v77 = 4LL;
              v76 = &v64;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0244A70,
                (unsigned __int8 *)dword_1C0211E5D,
                &ActivityId,
                0LL,
                3u,
                &v75);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v14;
        gbValidateHandleForIL = 1;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (v24 = PsGetCurrentProcess(v23, v22),
              ProcessSessionId = PsGetProcessSessionIdEx(v24),
              CurrentThreadProcess = PsGetCurrentThreadProcess(),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          v27 = KeGetCurrentThread();
          v28 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v27);
            if ( ThreadWin32Thread )
              v28 = *ThreadWin32Thread;
          }
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29);
          if ( v28
            && CurrentProcessWin32Process
            && (*(_DWORD *)(v28 + 488) & 0x1000000) != 0
            && (*(_DWORD *)(v28 + 1232) & 0x80u) == 0
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v32, v33, v34);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v38, v39);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42, v43);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v48 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v48[2];
                v49 = *v48;
                v48[2] = 0LL;
                if ( !*(_DWORD *)(v49 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v46, v47);
                v52 = (PERESOURCE *)GetDomainLockRef(12LL, v44, v46, v47);
                if ( v52 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v51, v50, v53, v54);
                ExReleaseResourceAndLeaveCriticalRegion(*v52);
                HMUnlockObject(*v48);
                tagDomLock::LockExclusive(v52);
                v48 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v4 = v65;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
        CInputManager::CleanupDwmInputThread(v4);
        UserSessionSwitchLeaveCrit(v56, v55, v57, v58);
      }
      else
      {
        v7 = -2147483631;
      }
      if ( Handle )
        ZwClose(Handle);
      if ( v61 )
        ZwClose(v61);
    }
  }
  return (unsigned int)v7;
}
