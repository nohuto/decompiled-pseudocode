/*
 * XREFs of ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C011DAFC
 * Callers:
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D200 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C011D2C0 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PowerInputEvent @ 0x1C0070D10 (PowerInputEvent.c)
 *     CitDisplayPowerChange @ 0x1C00BEC3C (CitDisplayPowerChange.c)
 *     EtwTraceDisplayChange @ 0x1C00BF8A0 (EtwTraceDisplayChange.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // r8
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
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
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  PERESOURCE *v50; // rdi
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 *v53; // rsi
  int v54; // [rsp+30h] [rbp-D0h] BYREF
  int v55; // [rsp+34h] [rbp-CCh] BYREF
  int v56; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v58; // [rsp+48h] [rbp-B8h]
  GUID ActivityId; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 InputBuffer; // [rsp+60h] [rbp-A0h] BYREF
  int v61; // [rsp+68h] [rbp-98h]
  char v62; // [rsp+6Ch] [rbp-94h]
  bool v63; // [rsp+6Dh] [rbp-93h]
  __int16 v64; // [rsp+6Eh] [rbp-92h]
  enum POWER_MONITOR_REQUEST_REASON v65; // [rsp+70h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+78h] [rbp-88h] BYREF
  int *v67; // [rsp+98h] [rbp-68h]
  __int64 v68; // [rsp+A0h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+A8h] [rbp-58h] BYREF
  int *v70; // [rsp+C8h] [rbp-38h]
  __int64 v71; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+D8h] [rbp-28h] BYREF
  int *v73; // [rsp+F8h] [rbp-8h]
  __int64 v74; // [rsp+100h] [rbp+0h]

  gPowerDisplayState = gSessionId;
  dword_1C024B14C = dword_1C024B150;
  v64 = 0;
  v4 = 0xFFFFF78000000004uLL;
  v5 = 0xFFFFF78000000320uLL;
  dword_1C024B150 = a1 != 0;
  qword_1C024B118 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - qword_1C024B120;
  v6 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  qword_1C024B120 = *((_QWORD *)&v6 + 1);
  word_1C024B154 = gProtocolType == 0;
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
  v63 = gProtocolType == 0;
  InputBuffer = 19LL;
  v61 = gSessionId;
  v62 = a1;
  v65 = a2;
  ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x14u, 0LL, 0);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v58 = 1;
    v11 = PsGetCurrentThreadWin32Thread(v9);
    v57 = v11;
    if ( v11 && (*(int *)(v11 + 24) > 0 || *(_DWORD *)(v57 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v54 = v58;
        v68 = 4LL;
        v67 = &v54;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v66);
      }
    }
  }
  else
  {
    v57 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v57 && (*(_DWORD *)(v57 + 48) || *(int *)(v57 + 24) > 0) )
  {
    *(_DWORD *)(v57 + 44) = 1;
    *(GUID *)(v57 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v55 = v58;
        v71 = 4LL;
        v70 = &v55;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v69);
        v19 = dword_1C0244A70;
      }
      if ( v19 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v56 = v58;
        v74 = 4LL;
        v73 = &v56;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v72);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v12;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v22 = PsGetCurrentProcess(v21, v20),
        ProcessSessionId = PsGetProcessSessionIdEx(v22),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v29 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v29 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v30);
    if ( v29 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v29 + 488) & 0x1000000) != 0 )
        {
          v26 = *(_DWORD *)(v29 + 1232);
          if ( (v26 & 0x80u) == 0 && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v25, v27, v33);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v37, v38);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            while ( 1 )
            {
              v53 = (__int64 *)gpducstulHead;
              if ( !gpducstulHead )
                break;
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
              v47 = *v53;
              v53[2] = 0LL;
              if ( !*(_DWORD *)(v47 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v45, v46);
              v50 = (PERESOURCE *)GetDomainLockRef(12LL, v43, v45, v46);
              if ( v50 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v51, v52);
              ExReleaseResourceAndLeaveCriticalRegion(*v50);
              HMUnlockObject(*v53);
              tagDomLock::LockExclusive(v50);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  EtwTraceDisplayChange(v26, v25, v27);
  CitDisplayPowerChange((__int64)&gPowerDisplayState);
}
