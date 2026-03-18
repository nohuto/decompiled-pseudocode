/*
 * XREFs of ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C019F3A8
 * Callers:
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C01A8130 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
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
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C019F8DC (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  PERESOURCE *v51; // rdi
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned int v54; // ebx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  int v60; // [rsp+20h] [rbp-C1h]
  int v61; // [rsp+30h] [rbp-B1h] BYREF
  int v62; // [rsp+34h] [rbp-ADh] BYREF
  int v63; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v64; // [rsp+40h] [rbp-A1h]
  __int64 v65; // [rsp+48h] [rbp-99h]
  unsigned __int8 v66; // [rsp+50h] [rbp-91h]
  GUID ActivityId; // [rsp+54h] [rbp-8Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+68h] [rbp-79h] BYREF
  int *v69; // [rsp+88h] [rbp-59h]
  int v70; // [rsp+90h] [rbp-51h]
  int v71; // [rsp+94h] [rbp-4Dh]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+98h] [rbp-49h] BYREF
  int *v73; // [rsp+B8h] [rbp-29h]
  int v74; // [rsp+C0h] [rbp-21h]
  int v75; // [rsp+C4h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+C8h] [rbp-19h] BYREF
  int *v77; // [rsp+E8h] [rbp+7h]
  int v78; // [rsp+F0h] [rbp+Fh]
  int v79; // [rsp+F4h] [rbp+13h]

  v64 = a2;
  v7 = a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v66 = 1;
    v10 = PsGetCurrentThreadWin32Thread(v8);
    v65 = v10;
    if ( v10 && (*(int *)(v10 + 24) > 0 || *(_DWORD *)(v65 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v71 = 0;
        v61 = v66;
        v70 = 4;
        v69 = &v61;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v68);
      }
    }
  }
  else
  {
    v65 = 0LL;
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
    if ( v65 )
    {
      v17 = *(unsigned int *)(v65 + 24);
      if ( *(_DWORD *)(v65 + 48) || (int)v17 > 0 )
      {
        *(_DWORD *)(v65 + 44) = 1;
        *(GUID *)(v65 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v75 = 0;
            v62 = v66;
            v74 = 4;
            v73 = &v62;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v72);
            v18 = dword_1C0246A70;
          }
          if ( v18 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v79 = 0;
            v63 = v66;
            v78 = 4;
            v77 = &v63;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v76);
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
          v21 = *(unsigned int *)(v27 + 1224);
          if ( (v21 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v31, v32, v33);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v37, v38);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v47 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v47[2];
                v48 = *v47;
                v47[2] = 0LL;
                if ( !*(_DWORD *)(v48 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v45, v46);
                v51 = (PERESOURCE *)GetDomainLockRef(12LL, v43, v45, v46);
                if ( v51 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v52, v53);
                ExReleaseResourceAndLeaveCriticalRegion(*v51);
                HMUnlockObject(*v47);
                tagDomLock::LockExclusive(v51);
                v47 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v7 = v64;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  LOBYTE(v60) = a5;
  v54 = CKeyboardProcessor::ProcessInputNoLock(v21, v7, a3, a4, v60);
  UserSessionSwitchLeaveCrit(v56, v55, v57, v58);
  return v54;
}
