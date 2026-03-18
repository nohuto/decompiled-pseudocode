/*
 * XREFs of VideoPortCalloutThread @ 0x1C0121A54
 * Callers:
 *     xxxCreateSystemThreads @ 0x1C0021BD0 (xxxCreateSystemThreads.c)
 * Callees:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C000C504 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x1C002B904 (UpdateExternalMonitorConnectedStatus.c)
 *     InitSystemThread @ 0x1C0030EE0 (InitSystemThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C005A940 (GreIncrementDisplaySettingsUniqueness.c)
 *     IszzzUpdateCursorImageSupported @ 0x1C005DF74 (IszzzUpdateCursorImageSupported.c)
 *     xxxDwmControl @ 0x1C00604A0 (xxxDwmControl.c)
 *     PostWinlogonMessage @ 0x1C0060510 (PostWinlogonMessage.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x1C0060850 (IsxxxDwmStopRedirectionSupported.c)
 *     xxxResetDisplayDevice @ 0x1C0062740 (xxxResetDisplayDevice.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C00B39E0 (UserRemoteConnectedSessionUsingWddm.c)
 *     UserIsWddmConnectedSession @ 0x1C00B4A70 (UserIsWddmConnectedSession.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8880 (DrvDxgkLogCodePointPacket.c)
 *     DCompositionForceRender @ 0x1C00CBF84 (DCompositionForceRender.c)
 *     IsSetPointerSupported @ 0x1C00CC62C (IsSetPointerSupported.c)
 *     SafeEnableMDEV @ 0x1C00CC770 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00CC7F0 (SafeDisableMDEV.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0120424 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01207B0 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C0124D30 (xxxDisplayDiagBlackScreenDetected.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C012A45C (McTemplateK0dq_EtwWriteTransfer.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1C014B558 (DrvProcessDxgkDisplayCallout.c)
 *     DCompositionDDAChange @ 0x1C01CE524 (DCompositionDDAChange.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x1C01F8158 (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C01F8184 (IsxxxSetCsrssThreadDesktopSupported.c)
 *     IsxxxUserResetDisplayDeviceSupported @ 0x1C01F81B0 (IsxxxUserResetDisplayDeviceSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG __fastcall VideoPortCalloutThread(struct _VIDEO_WIN32K_CALLBACKS_PARAMS **a1)
{
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS *v1; // rsi
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS **v2; // r12
  ULONG_PTR *Param; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // r15
  int inited; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 CalloutType; // r9
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
  __int64 v28; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v34; // r8
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
  __int64 v55; // rcx
  bool v56; // zf
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // eax
  __int64 v62; // rcx
  int v63; // ebx
  int CurrentProcessSessionId; // eax
  unsigned int v65; // ecx
  unsigned int v66; // ecx
  unsigned int v67; // ecx
  unsigned int v68; // ecx
  int v69; // r8d
  int v70; // r9d
  int v71; // edx
  __int64 v72; // rdx
  __int64 v73; // rcx
  int v74; // eax
  struct _MDEV *v75; // rcx
  CInputConfig *v76; // rcx
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // eax
  void (*v81)(void); // rax
  unsigned int v82; // ecx
  unsigned int v83; // ecx
  char v84; // al
  char v86; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v87; // [rsp+49h] [rbp-BFh]
  char v88; // [rsp+4Bh] [rbp-BDh] BYREF
  int v89; // [rsp+4Ch] [rbp-BCh] BYREF
  int v90; // [rsp+50h] [rbp-B8h] BYREF
  int v91; // [rsp+54h] [rbp-B4h] BYREF
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS **v92; // [rsp+58h] [rbp-B0h]
  _QWORD v93[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v94; // [rsp+70h] [rbp-98h]
  unsigned __int8 ActivityId_4; // [rsp+78h] [rbp-90h]
  GUID ActivityId_8; // [rsp+7Ch] [rbp-8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+90h] [rbp-78h] BYREF
  int *v98; // [rsp+B0h] [rbp-58h]
  __int64 v99; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+C0h] [rbp-48h] BYREF
  int *v101; // [rsp+E0h] [rbp-28h]
  __int64 v102; // [rsp+E8h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR v103; // [rsp+F0h] [rbp-18h] BYREF
  int *v104; // [rsp+110h] [rbp+8h]
  __int64 v105; // [rsp+118h] [rbp+10h]

  v1 = *a1;
  v2 = a1;
  v92 = a1;
  Param = (ULONG_PTR *)v1->Param;
  v4 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)Param[1];
  v1->Param = *Param;
  inited = InitSystemThread(0LL);
  CalloutType = (unsigned int)v1->CalloutType;
  v1->Status = inited;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    McTemplateK0dq_EtwWriteTransfer(v6, &StartVideoPortCalloutThread, v7, CalloutType, inited);
    inited = v1->Status;
  }
  if ( inited >= 0 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId_8 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      ActivityId_4 = 1;
      v11 = PsGetCurrentThreadWin32Thread(v9);
      v94 = v11;
      if ( v11 && (*(int *)(v11 + 24) > 0 || *(_DWORD *)(v94 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId_8);
        if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v89 = ActivityId_4;
          v99 = 4LL;
          v98 = &v89;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId_8,
            0LL,
            3u,
            &v97);
        }
      }
    }
    else
    {
      v94 = 0LL;
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
      if ( v94 )
      {
        v18 = *(unsigned int *)(v94 + 24);
        if ( *(_DWORD *)(v94 + 48) || (int)v18 > 0 )
        {
          *(_DWORD *)(v94 + 44) = 1;
          *(GUID *)(v94 + 28) = ActivityId_8;
          if ( (unsigned int)dword_1C0246A70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v90 = ActivityId_4;
              v102 = 4LL;
              v101 = &v90;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E30,
                &ActivityId_8,
                0LL,
                3u,
                &v100);
              v19 = dword_1C0246A70;
            }
            if ( v19 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v91 = ActivityId_4;
              v105 = 4LL;
              v104 = &v91;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E5D,
                &ActivityId_8,
                0LL,
                3u,
                &v103);
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
      if ( v30
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v30 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v30 + 1224) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v27, v34, v28);
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
          v2 = v92;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    v55 = (unsigned int)v1->CalloutType;
    v56 = (_DWORD)v55 == 7;
    if ( (_DWORD)v55 == 7 )
    {
      gbInVideoPnpCallout = 1;
      v55 = (unsigned int)v1->CalloutType;
      v56 = (_DWORD)v55 == 7;
    }
    LOBYTE(v27) = v56;
    if ( (((_DWORD)v55 - 7) & 0xFFFFFFFC) != 0 || (v56 = (_DWORD)v55 == 9, LOBYTE(v55) = 1, v56) )
      LOBYTE(v55) = 0;
    xxxWaitForVideoPortCalloutReady(v55, v27, v4, v28);
    if ( qword_1C0252F50 )
      v61 = qword_1C0252F50(v58, v57);
    else
      v61 = 0;
    if ( v61 )
    {
      if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
      {
        if ( v1->CalloutType > (unsigned int)VideoDesktopDuplicationChange )
          goto LABEL_68;
        v62 = 33920LL;
        if ( !_bittest((const int *)&v62, v1->CalloutType) )
          goto LABEL_68;
      }
    }
    if ( gfSwitchInProgress )
    {
      v63 = (unsigned __int16)gProtocolType;
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      DrvDxgkLogCodePointPacket(107, v1->CalloutType, CurrentProcessSessionId, v63);
    }
    v65 = v1->CalloutType;
    if ( v1->CalloutType > VideoRepaintDesktop )
    {
      v82 = v65 - 13;
      if ( v82 )
      {
        v83 = v82 - 1;
        if ( !v83 )
        {
          v69 = 0;
          v70 = 1;
          v71 = 0;
          goto LABEL_79;
        }
        v62 = v83 - 1;
        if ( !(_DWORD)v62 )
        {
          DCompositionDDAChange();
          goto LABEL_140;
        }
        if ( (_DWORD)v62 != 1 )
          goto LABEL_68;
        LOBYTE(v59) = v1->Param;
        v84 = v59 & 1;
        LOBYTE(v59) = (v59 & 2) != 0;
        LOBYTE(v57) = v84;
        xxxDisplayDiagBlackScreenDetected(8, v57, v59, 0, 0LL);
LABEL_139:
        v1->Status = 0;
        goto LABEL_140;
      }
      if ( (int)IsSetPointerSupported() < 0 || (int)IszzzUpdateCursorImageSupported() < 0 )
        goto LABEL_139;
      if ( qword_1C02524D8 )
        qword_1C02524D8(1LL);
      v81 = (void (*)(void))qword_1C0252B00;
    }
    else
    {
      if ( v65 != 12 )
      {
        v66 = v65 - 4;
        if ( v66 )
        {
          v67 = v66 - 3;
          if ( !v67 )
          {
            v1->Status = Win32kPnpNotify(v1, v4);
            goto LABEL_140;
          }
          v68 = v67 - 1;
          if ( !v68 )
          {
            v93[1] = 0LL;
            v93[0] = 0LL;
            if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
              || (PVOID)PsGetCurrentProcess(v73, v72) != gpepCSRSS
              || (v62 = (__int64)grpdeskRitInput) != 0
              && (!qword_1C0252518 ? (v74 = -1073741637) : (v74 = qword_1C0252518(grpdeskRitInput, v93)), v74 >= 0) )
            {
              v86 = 1;
              do
              {
                v87 = 0;
                v75 = *(struct _MDEV **)(gpDispInfo + 16);
                v88 = 0;
                if ( (int)DrvProcessDxgkDisplayCallout(v75, (__int64)&v88, (__int64)&v86) < 0 )
                {
                  v86 = 0;
                }
                else
                {
                  if ( (_BYTE)v87 )
                  {
                    GreIncrementDisplaySettingsUniqueness();
                    xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0, v77);
                  }
                  else if ( HIBYTE(v87) )
                  {
                    CInputConfig::OnDisplayStateChange(v76);
                  }
                  if ( v88 )
                    PostWinlogonMessage(1027LL, 0);
                }
              }
              while ( !v86 );
              v1->Status = 0;
              if ( (unsigned int)UserIsWddmConnectedSession() )
                UpdateExternalMonitorConnectedStatus(0);
              if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0
                && (PVOID)PsGetCurrentProcess(v62, v57) == gpepCSRSS
                && qword_1C0252528 )
              {
                qword_1C0252528(v93, 0LL);
              }
            }
            goto LABEL_140;
          }
          v62 = v68 - 2;
          if ( (_DWORD)v62 )
          {
            if ( (_DWORD)v62 != 1 )
            {
LABEL_68:
              v1->Status = -1073741823;
LABEL_140:
              if ( v1->CalloutType == VideoPnpNotifyCallout )
                gbInVideoPnpCallout = 0;
              UserSessionSwitchLeaveCrit(v62, v57, v59, v60);
              goto LABEL_143;
            }
            v69 = v1->Param;
            v70 = 0;
            v71 = 1;
LABEL_79:
            DCompositionForceRender(0LL, v71, v69, v70);
            goto LABEL_140;
          }
        }
        if ( v1->Param )
        {
          if ( (unsigned int)UserIsWddmConnectedSession() )
            SafeEnableMDEV(1u);
          if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
            xxxDwmControl(1035LL, 0);
          if ( (int)IsxxxUserResetDisplayDeviceSupported() >= 0 && qword_1C0252538 )
            qword_1C0252538(v79, v78);
          if ( qword_1C0252540 )
            v80 = qword_1C0252540();
          else
            v80 = -1073741637;
          if ( v80 >= 0 && qword_1C0252548 )
            qword_1C0252548();
          ZwUpdateWnfStateData(&WNF_DXGK_ADAPTER_TDR_NOTIFICATION, 0LL, 0LL, 0LL, 0LL, 0, 0);
        }
        else
        {
          if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
            xxxDwmControl(1034LL, 0);
          if ( (unsigned int)UserIsWddmConnectedSession() )
            SafeDisableMDEV(1u);
        }
        goto LABEL_139;
      }
      if ( (int)IsxxxUserResetDisplayDeviceSupported() < 0 )
        goto LABEL_139;
      v81 = (void (*)(void))qword_1C0252538;
    }
    if ( v81 )
      v81();
    goto LABEL_139;
  }
LABEL_143:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(
      v6,
      &StopVideoPortCalloutThread,
      (unsigned int)v1->Status,
      (unsigned int)v1->CalloutType,
      v1->Status);
  return KeSetEvent((PRKEVENT)v2[1], 1, 0);
}
