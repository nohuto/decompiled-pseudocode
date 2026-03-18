/*
 * XREFs of ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C011FE4C
 * Callers:
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011F550 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C011F610 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CitDisplayPowerChange @ 0x1C005E85C (CitDisplayPowerChange.c)
 *     EtwTraceDisplayChange @ 0x1C005F530 (EtwTraceDisplayChange.c)
 *     PowerInputEvent @ 0x1C00642E0 (PowerInputEvent.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall UpdateSessionPowerState(int a1, enum POWER_MONITOR_REQUEST_REASON a2)
{
  __int64 v4; // r9
  __int64 v5; // r8
  unsigned __int128 v6; // rax
  __int64 v7; // rcx
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
  __int64 v27; // rdx
  __int64 v28; // r8
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
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
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  PERESOURCE *v51; // rdi
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 *v54; // rsi
  int v55; // [rsp+30h] [rbp-D0h] BYREF
  int v56; // [rsp+34h] [rbp-CCh] BYREF
  int v57; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v59; // [rsp+48h] [rbp-B8h]
  GUID ActivityId; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 InputBuffer; // [rsp+60h] [rbp-A0h] BYREF
  int v62; // [rsp+68h] [rbp-98h]
  char v63; // [rsp+6Ch] [rbp-94h]
  bool v64; // [rsp+6Dh] [rbp-93h]
  __int16 v65; // [rsp+6Eh] [rbp-92h]
  enum POWER_MONITOR_REQUEST_REASON v66; // [rsp+70h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+78h] [rbp-88h] BYREF
  int *v68; // [rsp+98h] [rbp-68h]
  __int64 v69; // [rsp+A0h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+A8h] [rbp-58h] BYREF
  int *v71; // [rsp+C8h] [rbp-38h]
  __int64 v72; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+D8h] [rbp-28h] BYREF
  int *v74; // [rsp+F8h] [rbp-8h]
  __int64 v75; // [rsp+100h] [rbp+0h]

  gPowerDisplayState = gSessionId;
  dword_1C024D13C = dword_1C024D140;
  v65 = 0;
  v4 = 0xFFFFF78000000004uLL;
  v5 = 0xFFFFF78000000320uLL;
  dword_1C024D140 = a1 != 0;
  qword_1C024D108 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - qword_1C024D110;
  v6 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  qword_1C024D110 = *((_QWORD *)&v6 + 1);
  word_1C024D144 = gProtocolType == 0;
  v7 = (unsigned int)gdwInAtomicOperation;
  gPowerTransitionsState = a1;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  if ( !a1 && !gPowerAdaptiveState )
  {
    gPowerAdaptiveState = 1;
    PowerInputEvent(0);
  }
  UserSessionSwitchLeaveCrit(v7, *((__int64 *)&v6 + 1), v5, v4);
  v64 = gProtocolType == 0;
  InputBuffer = 19LL;
  v62 = gSessionId;
  v63 = a1;
  v66 = a2;
  ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x14u, 0LL, 0);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v59 = 1;
    v11 = PsGetCurrentThreadWin32Thread(v9);
    v58 = v11;
    if ( v11 && (*(int *)(v11 + 24) > 0 || *(_DWORD *)(v58 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v55 = v59;
        v69 = 4LL;
        v68 = &v55;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v67);
      }
    }
  }
  else
  {
    v58 = 0LL;
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
    if ( v58 )
    {
      v18 = *(unsigned int *)(v58 + 24);
      if ( *(_DWORD *)(v58 + 48) || (int)v18 > 0 )
      {
        *(_DWORD *)(v58 + 44) = 1;
        *(GUID *)(v58 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v56 = v59;
            v72 = 4LL;
            v71 = &v56;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v70);
            v19 = dword_1C0246A70;
          }
          if ( v19 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v57 = v59;
            v75 = 4LL;
            v74 = &v57;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v73);
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
    v30 = 0LL;
    if ( !IsThreadCrossSessionAttached(v22) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v30 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
    if ( v30 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v30 + 480) & 0x1000000) != 0 )
        {
          LODWORD(v22) = *(_DWORD *)(v30 + 1224);
          if ( (v22 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v27, v28, v34);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v38, v39);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42, v43);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            while ( 1 )
            {
              v54 = (__int64 *)gpducstulHead;
              if ( !gpducstulHead )
                break;
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
              v48 = *v54;
              v54[2] = 0LL;
              if ( !*(_DWORD *)(v48 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v46, v47);
              v51 = (PERESOURCE *)GetDomainLockRef(12LL, v44, v46, v47);
              if ( v51 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v52, v53);
              ExReleaseResourceAndLeaveCriticalRegion(*v51);
              HMUnlockObject(*v54);
              tagDomLock::LockExclusive(v51);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  EtwTraceDisplayChange(v22, v27, v28);
  CitDisplayPowerChange((__int64)&gPowerDisplayState);
}
