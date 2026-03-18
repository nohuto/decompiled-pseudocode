/*
 * XREFs of ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C01A5108
 * Callers:
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C01ADE90 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
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
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C01A563C (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CKeyboardProcessor::ProcessInput(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v7; // r14
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v10; // rax
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int ProcessSessionId; // ebx
  __int64 v24; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v31; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  PERESOURCE *v38; // rdi
  unsigned int v39; // ebx
  __int64 v40; // rcx
  int v42; // [rsp+20h] [rbp-C1h]
  int v43; // [rsp+30h] [rbp-B1h] BYREF
  int v44; // [rsp+34h] [rbp-ADh] BYREF
  int v45; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v46; // [rsp+40h] [rbp-A1h]
  __int64 v47; // [rsp+48h] [rbp-99h]
  unsigned __int8 v48; // [rsp+50h] [rbp-91h]
  GUID ActivityId; // [rsp+54h] [rbp-8Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+68h] [rbp-79h] BYREF
  int *v51; // [rsp+88h] [rbp-59h]
  int v52; // [rsp+90h] [rbp-51h]
  int v53; // [rsp+94h] [rbp-4Dh]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+98h] [rbp-49h] BYREF
  int *v55; // [rsp+B8h] [rbp-29h]
  int v56; // [rsp+C0h] [rbp-21h]
  int v57; // [rsp+C4h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+C8h] [rbp-19h] BYREF
  int *v59; // [rsp+E8h] [rbp+7h]
  int v60; // [rsp+F0h] [rbp+Fh]
  int v61; // [rsp+F4h] [rbp+13h]

  v46 = a2;
  v7 = a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v48 = 1;
    v10 = PsGetCurrentThreadWin32Thread(v8);
    v47 = v10;
    if ( v10 && (*(int *)(v10 + 24) > 0 || *(_DWORD *)(v47 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v53 = 0;
        v43 = v48;
        v52 = 4;
        v51 = &v43;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v50);
      }
    }
  }
  else
  {
    v47 = 0LL;
  }
  v11 = 0LL;
  while ( 1 )
  {
    v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v12 )
      v11 = *v12;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v11 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v47 )
    {
      v17 = *(unsigned int *)(v47 + 24);
      if ( *(_DWORD *)(v47 + 48) || (int)v17 > 0 )
      {
        *(_DWORD *)(v47 + 44) = 1;
        *(GUID *)(v47 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v57 = 0;
            v44 = v48;
            v56 = 4;
            v55 = &v44;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v54);
            v18 = dword_1C024C960;
          }
          if ( v18 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v61 = 0;
            v45 = v48;
            v60 = 4;
            v59 = &v45;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v58);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v17);
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v19)
    || (v22 = PsGetCurrentProcess(v21, v20),
        ProcessSessionId = PsGetProcessSessionIdEx(v22),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v24),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v27 = 0LL;
    if ( !IsThreadCrossSessionAttached(v21) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v27 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28);
    if ( v27 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v27 + 480) & 0x1000000) != 0 )
        {
          v21 = *(unsigned int *)(v27 + 1216);
          if ( (v21 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v35 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v35[2];
                v36 = *v35;
                v35[2] = 0LL;
                if ( !*(_DWORD *)(v36 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v34);
                v38 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v38 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v37);
                ExReleaseResourceAndLeaveCriticalRegion(*v38);
                HMUnlockObject(*v35);
                tagDomLock::LockExclusive(v38);
                v35 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v7 = v46;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  LOBYTE(v42) = a5;
  v39 = CKeyboardProcessor::ProcessInputNoLock(v21, v7, a3, a4, v42);
  UserSessionSwitchLeaveCrit(v40);
  return v39;
}
