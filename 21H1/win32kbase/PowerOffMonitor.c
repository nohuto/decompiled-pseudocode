/*
 * XREFs of PowerOffMonitor @ 0x1C00C98F0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005BCE0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C8888 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00520FC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00523F4 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     PostWinlogonMessage @ 0x1C0052F60 (PostWinlogonMessage.c)
 *     SqmPowerState @ 0x1C0054580 (SqmPowerState.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0054924 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8250 (DrvDxgkLogCodePointPacket.c)
 *     DrvSetMonitorPowerState @ 0x1C00C82D0 (DrvSetMonitorPowerState.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C0125CB0 (-SetProximityBlocking@@YAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PowerOffMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2)
{
  char v2; // r13
  int v3; // ebx
  __int64 v4; // rdi
  int v6; // r12d
  int v7; // r15d
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v15; // rbx
  struct tagTHREADINFO **v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  PVOID CurrentProcess; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int ProcessSessionId; // ebx
  __int64 v27; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v34; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 *v38; // rsi
  int v39; // eax
  __int64 v40; // rax
  unsigned int v41; // r8d
  __int64 v42; // rax
  __int64 v43; // rcx
  PERESOURCE *v44; // rdi
  __int64 v45; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+48h] [rbp-B8h]
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v48; // [rsp+54h] [rbp-ACh] BYREF
  int v49; // [rsp+58h] [rbp-A8h]
  int v50; // [rsp+5Ch] [rbp-A4h] BYREF
  int v51; // [rsp+60h] [rbp-A0h] BYREF
  int v52; // [rsp+64h] [rbp-9Ch] BYREF
  int v53; // [rsp+68h] [rbp-98h] BYREF
  int v54; // [rsp+6Ch] [rbp-94h]
  int v55; // [rsp+70h] [rbp-90h] BYREF
  __int64 v56; // [rsp+78h] [rbp-88h]
  unsigned __int8 v57; // [rsp+80h] [rbp-80h]
  GUID ActivityId; // [rsp+84h] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+98h] [rbp-68h] BYREF
  int *v60; // [rsp+B8h] [rbp-48h]
  __int64 v61; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+C8h] [rbp-38h] BYREF
  int *v63; // [rsp+E8h] [rbp-18h]
  __int64 v64; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+F8h] [rbp-8h] BYREF
  int *v66; // [rsp+118h] [rbp+18h]
  __int64 v67; // [rsp+120h] [rbp+20h]

  v2 = gPowerTransitionsState;
  v46 = a2;
  v3 = 0;
  v49 = 0;
  v4 = a2;
  v48 = 0;
  v45 = 0LL;
  v6 = 0;
  v47 = 0;
  v54 = gPowerTransitionsState;
  if ( gPowerTransitionsState || qword_1C02531AC )
  {
    if ( !gProtocolType )
    {
      if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      {
        v50 = 2;
        ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v50, 4LL, 0LL, 0LL, 0, 0);
        v49 = 1;
      }
      UserSessionSwitchBlock_Start();
      v7 = -1073741637;
      if ( gfIsFadingInProgress
        || !grpdeskRitInput
        || ((v6 = 1, gfIsFadingInProgress = 1, !qword_1C0258430) ? (v8 = -1073741637) : (v8 = qword_1C0258430()), v8 < 0) )
      {
        v10 = v45;
      }
      else
      {
        if ( qword_1C0258438 )
          v9 = qword_1C0258438(&v48, &v45, &v47);
        else
          v9 = -1073741637;
        v10 = v45;
        if ( v9 < 0 )
          v10 = 0LL;
        v45 = v10;
      }
      if ( v47 )
      {
        if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
        UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
        if ( qword_1C0258440 )
          v11 = qword_1C0258440();
        else
          v11 = -1073741637;
        if ( v11 >= 0 && qword_1C0258448 )
          qword_1C0258448(v48, v45, 167LL, 0LL);
        DrvDxgkLogCodePointPacket(14, v45 != 0, 0, 0);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        ActivityId = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v57 = 1;
          v40 = PsGetCurrentThreadWin32Thread(v13);
          v56 = v40;
          if ( v40 && (*(int *)(v40 + 24) > 0 || *(_DWORD *)(v56 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v51 = v57;
              v61 = 4LL;
              v60 = &v51;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199F7,
                &ActivityId,
                0LL,
                3u,
                &v59);
            }
          }
        }
        else
        {
          v56 = 0LL;
        }
        v15 = 0LL;
        while ( 1 )
        {
          v16 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v16 )
            v15 = *v16;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v18, v17);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v21, v20) == gpepCSRSS && v15 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v15 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          if ( v56 )
          {
            v21 = *(unsigned int *)(v56 + 24);
            if ( *(_DWORD *)(v56 + 48) || (int)v21 > 0 )
            {
              *(_DWORD *)(v56 + 44) = 1;
              *(GUID *)(v56 + 28) = ActivityId;
              if ( (unsigned int)dword_1C024C960 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
                {
                  v52 = v57;
                  v64 = 4LL;
                  v63 = &v52;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024C960,
                    (unsigned __int8 *)dword_1C02199A0,
                    &ActivityId,
                    0LL,
                    3u,
                    &v62);
                  v41 = dword_1C024C960;
                }
                if ( v41 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
                {
                  v53 = v57;
                  v67 = 4LL;
                  v66 = &v53;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024C960,
                    (unsigned __int8 *)dword_1C02199CD,
                    &ActivityId,
                    0LL,
                    3u,
                    &v65);
                }
              }
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit(v21);
        gptiCurrent = v15;
        gbValidateHandleForIL = 1;
        if ( !(unsigned __int8)KeIsAttachedProcess(v22)
          || (v25 = PsGetCurrentProcess(v24, v23),
              ProcessSessionId = PsGetProcessSessionIdEx(v25),
              CurrentThreadProcess = PsGetCurrentThreadProcess(v27),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          CurrentThread = KeGetCurrentThread();
          v30 = 0LL;
          if ( !IsThreadCrossSessionAttached(v24) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v30 = *ThreadWin32Thread;
          }
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
          if ( v30
            && CurrentProcessWin32Process
            && (*(_DWORD *)(v30 + 480) & 0x1000000) != 0
            && (*(_DWORD *)(v30 + 1216) & 0x80u) == 0
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v34);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v38 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v38[2];
                v42 = *v38;
                v38[2] = 0LL;
                if ( !*(_DWORD *)(v42 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v37);
                v44 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v44 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v43);
                ExReleaseResourceAndLeaveCriticalRegion(*v44);
                HMUnlockObject(*v38);
                tagDomLock::LockExclusive(v44);
                v38 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v2 = v54;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
          v4 = v46;
        }
      }
      else
      {
        DrvDxgkLogCodePointPacket(14, v10 != 0, 0, 0);
      }
      if ( qword_1C0258450 )
        v39 = qword_1C0258450();
      else
        v39 = -1073741637;
      if ( v39 >= 0 && qword_1C0258458 )
        qword_1C0258458();
      DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16), 4u, 1, v4);
      if ( v45 )
      {
        if ( qword_1C0258480 )
          v7 = qword_1C0258480();
        if ( v7 >= 0 && qword_1C0258488 )
          qword_1C0258488();
      }
      if ( v6 )
        gfIsFadingInProgress = 0;
      if ( gSqmIsOptedIn )
        SqmPowerState();
      UserSessionSwitchBlock_End();
      v3 = v49;
    }
    if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      qword_1C0253128 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    UpdateDisplayState(0, a1, v2);
    if ( gppiScreenSaver )
      PostWinlogonMessage(1029LL, 0);
    if ( v3 )
    {
      v55 = 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v55, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else if ( a1 == MonitorRequestReasonNearProximity )
  {
    SetProximityBlocking();
  }
}
