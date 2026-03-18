/*
 * XREFs of PowerOffMonitor @ 0x1C00C8920
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0070400 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C78B0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     SqmPowerState @ 0x1C0071F00 (SqmPowerState.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0074424 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     PostWinlogonMessage @ 0x1C0074F10 (PostWinlogonMessage.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00BA148 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00BB4C0 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     DrvSetMonitorPowerState @ 0x1C00C91C0 (DrvSetMonitorPowerState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C9780 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C011D9D0 (-SetProximityBlocking@@YAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v30; // r8
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v36; // rdx
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 *v51; // rsi
  int v52; // eax
  __int64 v53; // rax
  unsigned int v54; // r8d
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  PERESOURCE *v58; // rdi
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+48h] [rbp-B8h]
  int v63; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v64; // [rsp+54h] [rbp-ACh] BYREF
  int v65; // [rsp+58h] [rbp-A8h]
  int v66; // [rsp+5Ch] [rbp-A4h] BYREF
  int v67; // [rsp+60h] [rbp-A0h] BYREF
  int v68; // [rsp+64h] [rbp-9Ch] BYREF
  int v69; // [rsp+68h] [rbp-98h] BYREF
  int v70; // [rsp+6Ch] [rbp-94h]
  int v71; // [rsp+70h] [rbp-90h] BYREF
  __int64 v72; // [rsp+78h] [rbp-88h]
  unsigned __int8 v73; // [rsp+80h] [rbp-80h]
  GUID ActivityId; // [rsp+84h] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+98h] [rbp-68h] BYREF
  int *v76; // [rsp+B8h] [rbp-48h]
  __int64 v77; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+C8h] [rbp-38h] BYREF
  int *v79; // [rsp+E8h] [rbp-18h]
  __int64 v80; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+F8h] [rbp-8h] BYREF
  int *v82; // [rsp+118h] [rbp+18h]
  __int64 v83; // [rsp+120h] [rbp+20h]

  v2 = gPowerTransitionsState;
  v62 = a2;
  v3 = 0;
  v65 = 0;
  v4 = a2;
  v64 = 0;
  v61 = 0LL;
  v6 = 0;
  v63 = 0;
  v70 = gPowerTransitionsState;
  if ( gPowerTransitionsState || qword_1C024B1AC )
  {
    if ( !gProtocolType )
    {
      if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      {
        v66 = 2;
        ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v66, 4LL, 0LL, 0LL, 0, 0);
        v65 = 1;
      }
      UserSessionSwitchBlock_Start();
      v10 = -1073741637;
      if ( gfIsFadingInProgress
        || !grpdeskRitInput
        || ((v6 = 1, gfIsFadingInProgress = 1, !qword_1C0250470) ? (v11 = -1073741637) : (v11 = qword_1C0250470()),
            v11 < 0) )
      {
        v13 = v61;
      }
      else
      {
        if ( qword_1C0250478 )
          v12 = qword_1C0250478(&v64, &v61, &v63);
        else
          v12 = -1073741637;
        v13 = v61;
        if ( v12 < 0 )
          v13 = 0LL;
        v61 = v13;
      }
      if ( v63 )
      {
        if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
        UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v7, v8, v9);
        if ( qword_1C0250480 )
          v14 = qword_1C0250480();
        else
          v14 = -1073741637;
        if ( v14 >= 0 && qword_1C0250488 )
          qword_1C0250488(v64, v61, 167LL, 0LL);
        DrvDxgkLogCodePointPacket(14LL, v61 != 0, 0LL, 0LL);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        ActivityId = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v73 = 1;
          v53 = PsGetCurrentThreadWin32Thread(v16);
          v72 = v53;
          if ( v53 && (*(int *)(v53 + 24) > 0 || *(_DWORD *)(v72 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
            {
              v67 = v73;
              v77 = 4LL;
              v76 = &v67;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0244A70,
                (unsigned __int8 *)dword_1C0211E87,
                &ActivityId,
                0LL,
                3u,
                &v75);
            }
          }
        }
        else
        {
          v72 = 0LL;
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
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v72
          && (*(_DWORD *)(v72 + 48) || *(int *)(v72 + 24) > 0) )
        {
          *(_DWORD *)(v72 + 44) = 1;
          *(GUID *)(v72 + 28) = ActivityId;
          if ( (unsigned int)dword_1C0244A70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
            {
              v68 = v73;
              v80 = 4LL;
              v79 = &v68;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0244A70,
                (unsigned __int8 *)dword_1C0211E30,
                &ActivityId,
                0LL,
                3u,
                &v78);
              v54 = dword_1C0244A70;
            }
            if ( v54 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
            {
              v69 = v73;
              v83 = 4LL;
              v82 = &v69;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0244A70,
                (unsigned __int8 *)dword_1C0211E5D,
                &ActivityId,
                0LL,
                3u,
                &v81);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v18;
        gbValidateHandleForIL = 1;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (v27 = PsGetCurrentProcess(v26, v25),
              ProcessSessionId = PsGetProcessSessionIdEx(v27),
              CurrentThreadProcess = PsGetCurrentThreadProcess(),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          CurrentThread = KeGetCurrentThread();
          v32 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v32 = *ThreadWin32Thread;
          }
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33);
          if ( v32
            && CurrentProcessWin32Process
            && (*(_DWORD *)(v32 + 488) & 0x1000000) != 0
            && (*(_DWORD *)(v32 + 1232) & 0x80u) == 0
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v36, v30, v37);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v41, v42);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v45, v46);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v51 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v51[2];
                v55 = *v51;
                v51[2] = 0LL;
                if ( !*(_DWORD *)(v55 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v49, v50);
                v58 = (PERESOURCE *)GetDomainLockRef(12LL, v47, v49, v50);
                if ( v58 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v56, v59, v60);
                ExReleaseResourceAndLeaveCriticalRegion(*v58);
                HMUnlockObject(*v51);
                tagDomLock::LockExclusive(v58);
                v51 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v2 = v70;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
          v4 = v62;
        }
      }
      else
      {
        DrvDxgkLogCodePointPacket(14LL, v13 != 0, 0LL, 0LL);
      }
      if ( qword_1C0250490 )
        v52 = qword_1C0250490();
      else
        v52 = -1073741637;
      if ( v52 >= 0 && qword_1C0250498 )
        qword_1C0250498();
      LOBYTE(v30) = 1;
      DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16), 4LL, v30, v4);
      if ( v61 )
      {
        if ( qword_1C02504C0 )
          v10 = qword_1C02504C0();
        if ( v10 >= 0 && qword_1C02504C8 )
          qword_1C02504C8();
      }
      if ( v6 )
        gfIsFadingInProgress = 0;
      if ( gSqmIsOptedIn )
        SqmPowerState();
      UserSessionSwitchBlock_End();
      v3 = v65;
    }
    if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      qword_1C024B128 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    UpdateDisplayState(0, a1, v2);
    if ( gppiScreenSaver )
      PostWinlogonMessage(1029LL, 0);
    if ( v3 )
    {
      v71 = 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v71, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else if ( a1 == MonitorRequestReasonNearProximity )
  {
    SetProximityBlocking();
  }
}
