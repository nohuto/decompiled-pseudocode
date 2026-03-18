/*
 * XREFs of VideoPortCalloutThread @ 0x1C011F704
 * Callers:
 *     xxxCreateSystemThreads @ 0x1C00852C0 (xxxCreateSystemThreads.c)
 * Callees:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C000AE20 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C000DF90 (UserRemoteConnectedSessionUsingWddm.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     UserIsWddmConnectedSession @ 0x1C0053270 (UserIsWddmConnectedSession.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IszzzUpdateCursorImageSupported @ 0x1C006F274 (IszzzUpdateCursorImageSupported.c)
 *     xxxResetDisplayDevice @ 0x1C006F460 (xxxResetDisplayDevice.c)
 *     xxxDwmControl @ 0x1C0074EA0 (xxxDwmControl.c)
 *     PostWinlogonMessage @ 0x1C0074F10 (PostWinlogonMessage.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x1C0075250 (IsxxxDwmStopRedirectionSupported.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x1C0095A14 (UpdateExternalMonitorConnectedStatus.c)
 *     InitSystemThread @ 0x1C00B8540 (InitSystemThread.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00BAAC0 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C9780 (DrvDxgkLogCodePointPacket.c)
 *     DCompositionForceRender @ 0x1C00CB0E4 (DCompositionForceRender.c)
 *     IsSetPointerSupported @ 0x1C00CB83C (IsSetPointerSupported.c)
 *     SafeEnableMDEV @ 0x1C00CB980 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00CBA00 (SafeDisableMDEV.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011E0D4 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011E460 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C01229E0 (xxxDisplayDiagBlackScreenDetected.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C012810C (McTemplateK0dq_EtwWriteTransfer.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1C0149088 (DrvProcessDxgkDisplayCallout.c)
 *     DCompositionDDAChange @ 0x1C01CC1A4 (DCompositionDDAChange.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x1C01F6828 (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C01F6854 (IsxxxSetCsrssThreadDesktopSupported.c)
 *     IsxxxUserResetDisplayDeviceSupported @ 0x1C01F6880 (IsxxxUserResetDisplayDeviceSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v25; // rdx
  __int64 v26; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 *v46; // r14
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  PERESOURCE *v50; // rdi
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  bool v54; // zf
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // eax
  __int64 v60; // rcx
  int v61; // ebx
  int CurrentProcessSessionId; // eax
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  unsigned int v65; // ecx
  unsigned int v66; // ecx
  __int64 Param_low; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // eax
  struct _MDEV *v73; // rcx
  CInputConfig *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  int v77; // eax
  void (*v78)(void); // rax
  unsigned int v79; // ecx
  unsigned int v80; // ecx
  char v81; // al
  char v83; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v84; // [rsp+49h] [rbp-BFh]
  char v85; // [rsp+4Bh] [rbp-BDh] BYREF
  int v86; // [rsp+4Ch] [rbp-BCh] BYREF
  int v87; // [rsp+50h] [rbp-B8h] BYREF
  int v88; // [rsp+54h] [rbp-B4h] BYREF
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS **v89; // [rsp+58h] [rbp-B0h]
  _QWORD v90[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v91; // [rsp+70h] [rbp-98h]
  unsigned __int8 ActivityId_4; // [rsp+78h] [rbp-90h]
  GUID ActivityId_8; // [rsp+7Ch] [rbp-8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+90h] [rbp-78h] BYREF
  int *v95; // [rsp+B0h] [rbp-58h]
  __int64 v96; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+C0h] [rbp-48h] BYREF
  int *v98; // [rsp+E0h] [rbp-28h]
  __int64 v99; // [rsp+E8h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+F0h] [rbp-18h] BYREF
  int *v101; // [rsp+110h] [rbp+8h]
  __int64 v102; // [rsp+118h] [rbp+10h]

  v1 = *a1;
  v2 = a1;
  v89 = a1;
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
      v91 = v11;
      if ( v11 && (*(int *)(v11 + 24) > 0 || *(_DWORD *)(v91 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId_8);
        if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v86 = ActivityId_4;
          v96 = 4LL;
          v95 = &v86;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E87,
            &ActivityId_8,
            0LL,
            3u,
            &v94);
        }
      }
    }
    else
    {
      v91 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v91 && (*(_DWORD *)(v91 + 48) || *(int *)(v91 + 24) > 0) )
    {
      *(_DWORD *)(v91 + 44) = 1;
      *(GUID *)(v91 + 28) = ActivityId_8;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v87 = ActivityId_4;
          v99 = 4LL;
          v98 = &v87;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E30,
            &ActivityId_8,
            0LL,
            3u,
            &v97);
          v19 = dword_1C0244A70;
        }
        if ( v19 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v88 = ActivityId_4;
          v102 = 4LL;
          v101 = &v88;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E5D,
            &ActivityId_8,
            0LL,
            3u,
            &v100);
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
      v28 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
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
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v25, v32, v26);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v36, v37);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v46 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v46[2];
            v47 = *v46;
            v46[2] = 0LL;
            if ( !*(_DWORD *)(v47 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v44, v45);
            v50 = (PERESOURCE *)GetDomainLockRef(12LL, v42, v44, v45);
            if ( v50 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v51, v52);
            ExReleaseResourceAndLeaveCriticalRegion(*v50);
            HMUnlockObject(*v46);
            tagDomLock::LockExclusive(v50);
            v46 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v2 = v89;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    v53 = (unsigned int)v1->CalloutType;
    v54 = (_DWORD)v53 == 7;
    if ( (_DWORD)v53 == 7 )
    {
      gbInVideoPnpCallout = 1;
      v53 = (unsigned int)v1->CalloutType;
      v54 = (_DWORD)v53 == 7;
    }
    LOBYTE(v25) = v54;
    if ( (((_DWORD)v53 - 7) & 0xFFFFFFFC) != 0 || (v54 = (_DWORD)v53 == 9, LOBYTE(v53) = 1, v54) )
      LOBYTE(v53) = 0;
    xxxWaitForVideoPortCalloutReady(v53, v25, v4, v26);
    if ( qword_1C0250F50 )
      v59 = qword_1C0250F50(v56, v55);
    else
      v59 = 0;
    if ( v59 )
    {
      if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
      {
        if ( v1->CalloutType > (unsigned int)VideoDesktopDuplicationChange )
          goto LABEL_68;
        v60 = 33920LL;
        if ( !_bittest((const int *)&v60, v1->CalloutType) )
          goto LABEL_68;
      }
    }
    if ( gfSwitchInProgress )
    {
      v61 = (unsigned __int16)gProtocolType;
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      DrvDxgkLogCodePointPacket(107, v1->CalloutType, CurrentProcessSessionId, v61);
    }
    v63 = v1->CalloutType;
    if ( v1->CalloutType > VideoRepaintDesktop )
    {
      v79 = v63 - 13;
      if ( v79 )
      {
        v80 = v79 - 1;
        if ( !v80 )
        {
          Param_low = 0LL;
          v68 = 1LL;
          v69 = 0LL;
          goto LABEL_79;
        }
        v60 = v80 - 1;
        if ( !(_DWORD)v60 )
        {
          DCompositionDDAChange();
          goto LABEL_140;
        }
        if ( (_DWORD)v60 != 1 )
          goto LABEL_68;
        LOBYTE(v57) = v1->Param;
        v81 = v57 & 1;
        LOBYTE(v57) = (v57 & 2) != 0;
        LOBYTE(v55) = v81;
        xxxDisplayDiagBlackScreenDetected(8, v55, v57, 0, 0LL);
LABEL_139:
        v1->Status = 0;
        goto LABEL_140;
      }
      if ( (int)IsSetPointerSupported() < 0 || (int)IszzzUpdateCursorImageSupported() < 0 )
        goto LABEL_139;
      if ( qword_1C02504D8 )
        qword_1C02504D8(1LL);
      v78 = (void (*)(void))qword_1C0250B00;
    }
    else
    {
      if ( v63 != 12 )
      {
        v64 = v63 - 4;
        if ( v64 )
        {
          v65 = v64 - 3;
          if ( !v65 )
          {
            v1->Status = Win32kPnpNotify(v1, v4);
            goto LABEL_140;
          }
          v66 = v65 - 1;
          if ( !v66 )
          {
            v90[1] = 0LL;
            v90[0] = 0LL;
            if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
              || (PVOID)PsGetCurrentProcess(v71, v70) != gpepCSRSS
              || (v60 = (__int64)grpdeskRitInput) != 0
              && (!qword_1C0250518 ? (v72 = -1073741637) : (v72 = qword_1C0250518(grpdeskRitInput, v90)), v72 >= 0) )
            {
              v83 = 1;
              do
              {
                v84 = 0;
                v73 = *(struct _MDEV **)(gpDispInfo + 16);
                v85 = 0;
                if ( (int)DrvProcessDxgkDisplayCallout(v73, (__int64)&v85, (__int64)&v83) < 0 )
                {
                  v83 = 0;
                }
                else
                {
                  if ( (_BYTE)v84 )
                  {
                    GreIncrementDisplaySettingsUniqueness();
                    xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0);
                  }
                  else if ( HIBYTE(v84) )
                  {
                    CInputConfig::OnDisplayStateChange(v74);
                  }
                  if ( v85 )
                    PostWinlogonMessage(1027LL, 0);
                }
              }
              while ( !v83 );
              v1->Status = 0;
              if ( (unsigned int)UserIsWddmConnectedSession() )
                UpdateExternalMonitorConnectedStatus(0);
              if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0
                && (PVOID)PsGetCurrentProcess(v60, v55) == gpepCSRSS
                && qword_1C0250528 )
              {
                qword_1C0250528(v90, 0LL);
              }
            }
            goto LABEL_140;
          }
          v60 = v66 - 2;
          if ( (_DWORD)v60 )
          {
            if ( (_DWORD)v60 != 1 )
            {
LABEL_68:
              v1->Status = -1073741823;
LABEL_140:
              if ( v1->CalloutType == VideoPnpNotifyCallout )
                gbInVideoPnpCallout = 0;
              UserSessionSwitchLeaveCrit(v60, v55, v57, v58);
              goto LABEL_143;
            }
            Param_low = LODWORD(v1->Param);
            v68 = 0LL;
            v69 = 1LL;
LABEL_79:
            DCompositionForceRender(0LL, v69, Param_low, v68);
            goto LABEL_140;
          }
        }
        if ( v1->Param )
        {
          if ( (unsigned int)UserIsWddmConnectedSession() )
            SafeEnableMDEV(1u);
          if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
            xxxDwmControl(1035LL, 0);
          if ( (int)IsxxxUserResetDisplayDeviceSupported() >= 0 && qword_1C0250538 )
            qword_1C0250538(v76, v75);
          if ( qword_1C0250540 )
            v77 = qword_1C0250540();
          else
            v77 = -1073741637;
          if ( v77 >= 0 && qword_1C0250548 )
            qword_1C0250548();
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
      v78 = (void (*)(void))qword_1C0250538;
    }
    if ( v78 )
      v78();
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
