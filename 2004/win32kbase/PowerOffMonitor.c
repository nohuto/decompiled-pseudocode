/*
 * XREFs of PowerOffMonitor @ 0x1C00C9F70
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00646C0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C8F0C (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PostWinlogonMessage @ 0x1C0060510 (PostWinlogonMessage.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00608E8 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     SqmPowerState @ 0x1C00611A0 (SqmPowerState.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00630F0 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00633E8 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8880 (DrvDxgkLogCodePointPacket.c)
 *     DrvSetMonitorPowerState @ 0x1C00C8900 (DrvSetMonitorPowerState.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C011FD20 (-SetProximityBlocking@@YAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PowerOffMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2)
{
  char v2; // r13
  int v3; // ebx
  __int64 v4; // rdi
  int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r15d
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v18; // rbx
  struct tagTHREADINFO **v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  PVOID CurrentProcess; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int ProcessSessionId; // ebx
  __int64 v30; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 *v53; // rsi
  int v54; // eax
  __int64 v55; // rax
  unsigned int v56; // r8d
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  PERESOURCE *v60; // rdi
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v64; // [rsp+48h] [rbp-B8h]
  int v65; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v66; // [rsp+54h] [rbp-ACh] BYREF
  int v67; // [rsp+58h] [rbp-A8h]
  int v68; // [rsp+5Ch] [rbp-A4h] BYREF
  int v69; // [rsp+60h] [rbp-A0h] BYREF
  int v70; // [rsp+64h] [rbp-9Ch] BYREF
  int v71; // [rsp+68h] [rbp-98h] BYREF
  int v72; // [rsp+6Ch] [rbp-94h]
  int v73; // [rsp+70h] [rbp-90h] BYREF
  __int64 v74; // [rsp+78h] [rbp-88h]
  unsigned __int8 v75; // [rsp+80h] [rbp-80h]
  GUID ActivityId; // [rsp+84h] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+98h] [rbp-68h] BYREF
  int *v78; // [rsp+B8h] [rbp-48h]
  __int64 v79; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+C8h] [rbp-38h] BYREF
  int *v81; // [rsp+E8h] [rbp-18h]
  __int64 v82; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+F8h] [rbp-8h] BYREF
  int *v84; // [rsp+118h] [rbp+18h]
  __int64 v85; // [rsp+120h] [rbp+20h]

  v2 = gPowerTransitionsState;
  v64 = a2;
  v3 = 0;
  v67 = 0;
  v4 = a2;
  v66 = 0;
  v63 = 0LL;
  v6 = 0;
  v65 = 0;
  v72 = gPowerTransitionsState;
  if ( gPowerTransitionsState || qword_1C024D19C )
  {
    if ( !gProtocolType )
    {
      if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      {
        v68 = 2;
        ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v68, 4LL, 0LL, 0LL, 0, 0);
        v67 = 1;
      }
      UserSessionSwitchBlock_Start();
      v10 = -1073741637;
      if ( gfIsFadingInProgress
        || !grpdeskRitInput
        || ((v6 = 1, gfIsFadingInProgress = 1, !qword_1C0252470) ? (v11 = -1073741637) : (v11 = qword_1C0252470()),
            v11 < 0) )
      {
        v13 = v63;
      }
      else
      {
        if ( qword_1C0252478 )
          v12 = qword_1C0252478(&v66, &v63, &v65);
        else
          v12 = -1073741637;
        v13 = v63;
        if ( v12 < 0 )
          v13 = 0LL;
        v63 = v13;
      }
      if ( v65 )
      {
        if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
        UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v7, v8, v9);
        if ( qword_1C0252480 )
          v14 = qword_1C0252480();
        else
          v14 = -1073741637;
        if ( v14 >= 0 && qword_1C0252488 )
          qword_1C0252488(v66, v63, 167LL, 0LL);
        DrvDxgkLogCodePointPacket(14, v63 != 0, 0, 0);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        ActivityId = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v75 = 1;
          v55 = PsGetCurrentThreadWin32Thread(v16);
          v74 = v55;
          if ( v55 && (*(int *)(v55 + 24) > 0 || *(_DWORD *)(v74 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v69 = v75;
              v79 = 4LL;
              v78 = &v69;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E87,
                &ActivityId,
                0LL,
                3u,
                &v77);
            }
          }
        }
        else
        {
          v74 = 0LL;
        }
        v18 = 0LL;
        while ( 1 )
        {
          v19 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v19 )
            v18 = *v19;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v21, v20);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v24, v23) == gpepCSRSS && v18 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v18 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          if ( v74 )
          {
            v24 = *(unsigned int *)(v74 + 24);
            if ( *(_DWORD *)(v74 + 48) || (int)v24 > 0 )
            {
              *(_DWORD *)(v74 + 44) = 1;
              *(GUID *)(v74 + 28) = ActivityId;
              if ( (unsigned int)dword_1C0246A70 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
                {
                  v70 = v75;
                  v82 = 4LL;
                  v81 = &v70;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0246A70,
                    (unsigned __int8 *)dword_1C0213E30,
                    &ActivityId,
                    0LL,
                    3u,
                    &v80);
                  v56 = dword_1C0246A70;
                }
                if ( v56 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
                {
                  v71 = v75;
                  v85 = 4LL;
                  v84 = &v71;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0246A70,
                    (unsigned __int8 *)dword_1C0213E5D,
                    &ActivityId,
                    0LL,
                    3u,
                    &v83);
                }
              }
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit(v24);
        gptiCurrent = v18;
        gbValidateHandleForIL = 1;
        if ( !(unsigned __int8)KeIsAttachedProcess(v25)
          || (v28 = PsGetCurrentProcess(v27, v26),
              ProcessSessionId = PsGetProcessSessionIdEx(v28),
              CurrentThreadProcess = PsGetCurrentThreadProcess(v30),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          CurrentThread = KeGetCurrentThread();
          v33 = 0LL;
          if ( !IsThreadCrossSessionAttached(v27) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v33 = *ThreadWin32Thread;
          }
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v34);
          if ( v33
            && CurrentProcessWin32Process
            && (*(_DWORD *)(v33 + 480) & 0x1000000) != 0
            && (*(_DWORD *)(v33 + 1224) & 0x80u) == 0
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v37, v38, v39);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v43, v44);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v47, v48);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v53 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v53[2];
                v57 = *v53;
                v53[2] = 0LL;
                if ( !*(_DWORD *)(v57 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51, v52);
                v60 = (PERESOURCE *)GetDomainLockRef(12LL, v49, v51, v52);
                if ( v60 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v58, v61, v62);
                ExReleaseResourceAndLeaveCriticalRegion(*v60);
                HMUnlockObject(*v53);
                tagDomLock::LockExclusive(v60);
                v53 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v2 = v72;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
          v4 = v64;
        }
      }
      else
      {
        DrvDxgkLogCodePointPacket(14, v13 != 0, 0, 0);
      }
      if ( qword_1C0252490 )
        v54 = qword_1C0252490();
      else
        v54 = -1073741637;
      if ( v54 >= 0 && qword_1C0252498 )
        qword_1C0252498();
      DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16), 4u, 1, v4);
      if ( v63 )
      {
        if ( qword_1C02524C0 )
          v10 = qword_1C02524C0();
        if ( v10 >= 0 && qword_1C02524C8 )
          qword_1C02524C8();
      }
      if ( v6 )
        gfIsFadingInProgress = 0;
      if ( gSqmIsOptedIn )
        SqmPowerState();
      UserSessionSwitchBlock_End();
      v3 = v67;
    }
    if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      qword_1C024D118 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    UpdateDisplayState(0, a1, v2);
    if ( gppiScreenSaver )
      PostWinlogonMessage(1029LL, 0);
    if ( v3 )
    {
      v73 = 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v73, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else if ( a1 == MonitorRequestReasonNearProximity )
  {
    SetProximityBlocking();
  }
}
