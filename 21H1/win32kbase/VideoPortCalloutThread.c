/*
 * XREFs of VideoPortCalloutThread @ 0x1C0127A34
 * Callers:
 *     xxxCreateSystemThreads @ 0x1C000CC90 (xxxCreateSystemThreads.c)
 * Callees:
 *     UpdateExternalMonitorConnectedStatus @ 0x1C0004F38 (UpdateExternalMonitorConnectedStatus.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     InitSystemThread @ 0x1C00349E0 (InitSystemThread.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C004CD60 (GreIncrementDisplaySettingsUniqueness.c)
 *     IszzzUpdateCursorImageSupported @ 0x1C00504B4 (IszzzUpdateCursorImageSupported.c)
 *     xxxDwmControl @ 0x1C0052EF0 (xxxDwmControl.c)
 *     PostWinlogonMessage @ 0x1C0052F60 (PostWinlogonMessage.c)
 *     IsxxxDwmStopRedirectionSupported @ 0x1C00532A0 (IsxxxDwmStopRedirectionSupported.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserIsWddmConnectedSession @ 0x1C0093360 (UserIsWddmConnectedSession.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C0096D70 (UserRemoteConnectedSessionUsingWddm.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00AAAD8 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     xxxResetDisplayDevice @ 0x1C00AB4F0 (xxxResetDisplayDevice.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8250 (DrvDxgkLogCodePointPacket.c)
 *     DCompositionForceRender @ 0x1C00CB6F0 (DCompositionForceRender.c)
 *     IsSetPointerSupported @ 0x1C00CBD7C (IsSetPointerSupported.c)
 *     SafeEnableMDEV @ 0x1C00CBEC0 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00CBF40 (SafeDisableMDEV.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01263B4 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0126740 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C012AD20 (xxxDisplayDiagBlackScreenDetected.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C013044C (McTemplateK0dq_EtwWriteTransfer.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1C01518A8 (DrvProcessDxgkDisplayCallout.c)
 *     DCompositionDDAChange @ 0x1C01D44A4 (DCompositionDDAChange.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x1C01FDB88 (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C01FDBB4 (IsxxxSetCsrssThreadDesktopSupported.c)
 *     IsxxxUserResetDisplayDeviceSupported @ 0x1C01FDBE0 (IsxxxUserResetDisplayDeviceSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v33; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 *v37; // r14
  __int64 v38; // rax
  __int64 v39; // rcx
  PERESOURCE *v40; // rdi
  __int64 v41; // rcx
  bool v42; // zf
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // r8d
  int v46; // eax
  __int64 v47; // rcx
  int v48; // ebx
  int CurrentProcessSessionId; // eax
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  int v56; // edx
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v59; // eax
  struct _MDEV *v60; // rcx
  CInputConfig *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // eax
  void (*v66)(void); // rax
  unsigned int v67; // ecx
  unsigned int v68; // ecx
  char v69; // al
  char v71; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v72; // [rsp+49h] [rbp-BFh]
  char v73; // [rsp+4Bh] [rbp-BDh] BYREF
  int v74; // [rsp+4Ch] [rbp-BCh] BYREF
  int v75; // [rsp+50h] [rbp-B8h] BYREF
  int v76; // [rsp+54h] [rbp-B4h] BYREF
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS **v77; // [rsp+58h] [rbp-B0h]
  _QWORD v78[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v79; // [rsp+70h] [rbp-98h]
  unsigned __int8 ActivityId_4; // [rsp+78h] [rbp-90h]
  GUID ActivityId_8; // [rsp+7Ch] [rbp-8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+90h] [rbp-78h] BYREF
  int *v83; // [rsp+B0h] [rbp-58h]
  __int64 v84; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+C0h] [rbp-48h] BYREF
  int *v86; // [rsp+E0h] [rbp-28h]
  __int64 v87; // [rsp+E8h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+F0h] [rbp-18h] BYREF
  int *v89; // [rsp+110h] [rbp+8h]
  __int64 v90; // [rsp+118h] [rbp+10h]

  v1 = *a1;
  v2 = a1;
  v77 = a1;
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
      v79 = v11;
      if ( v11 && (*(int *)(v11 + 24) > 0 || *(_DWORD *)(v79 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId_8);
        if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
        {
          v74 = ActivityId_4;
          v84 = 4LL;
          v83 = &v74;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId_8,
            0LL,
            3u,
            &v82);
        }
      }
    }
    else
    {
      v79 = 0LL;
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
      if ( v79 )
      {
        v18 = *(unsigned int *)(v79 + 24);
        if ( *(_DWORD *)(v79 + 48) || (int)v18 > 0 )
        {
          *(_DWORD *)(v79 + 44) = 1;
          *(GUID *)(v79 + 28) = ActivityId_8;
          if ( (unsigned int)dword_1C024C960 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v75 = ActivityId_4;
              v87 = 4LL;
              v86 = &v75;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199A0,
                &ActivityId_8,
                0LL,
                3u,
                &v85);
              v19 = dword_1C024C960;
            }
            if ( v19 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v76 = ActivityId_4;
              v90 = 4LL;
              v89 = &v76;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199CD,
                &ActivityId_8,
                0LL,
                3u,
                &v88);
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
      v29 = 0LL;
      if ( !IsThreadCrossSessionAttached(v22) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v29 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v30);
      if ( v29
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v29 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v29 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v35);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v37 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v37[2];
            v38 = *v37;
            v37[2] = 0LL;
            if ( !*(_DWORD *)(v38 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
            v40 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v40 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v39);
            ExReleaseResourceAndLeaveCriticalRegion(*v40);
            HMUnlockObject(*v37);
            tagDomLock::LockExclusive(v40);
            v37 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v2 = v77;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    v41 = (unsigned int)v1->CalloutType;
    v42 = (_DWORD)v41 == 7;
    if ( (_DWORD)v41 == 7 )
    {
      gbInVideoPnpCallout = 1;
      v41 = (unsigned int)v1->CalloutType;
      v42 = (_DWORD)v41 == 7;
    }
    LOBYTE(v27) = v42;
    if ( (((_DWORD)v41 - 7) & 0xFFFFFFFC) != 0 || (v42 = (_DWORD)v41 == 9, LOBYTE(v41) = 1, v42) )
      LOBYTE(v41) = 0;
    xxxWaitForVideoPortCalloutReady(v41, v27, v4);
    if ( qword_1C0258F10 )
      v46 = qword_1C0258F10(v44, v43);
    else
      v46 = 0;
    if ( v46 )
    {
      if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
      {
        if ( v1->CalloutType > (unsigned int)VideoDesktopDuplicationChange )
          goto LABEL_68;
        v47 = 33920LL;
        if ( !_bittest((const int *)&v47, v1->CalloutType) )
          goto LABEL_68;
      }
    }
    if ( gfSwitchInProgress )
    {
      v48 = (unsigned __int16)gProtocolType;
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      DrvDxgkLogCodePointPacket(107, v1->CalloutType, CurrentProcessSessionId, v48);
    }
    v50 = v1->CalloutType;
    if ( v1->CalloutType > VideoRepaintDesktop )
    {
      v67 = v50 - 13;
      if ( v67 )
      {
        v68 = v67 - 1;
        if ( !v68 )
        {
          v54 = 0;
          v55 = 1;
          v56 = 0;
          goto LABEL_79;
        }
        v47 = v68 - 1;
        if ( !(_DWORD)v47 )
        {
          DCompositionDDAChange();
          goto LABEL_140;
        }
        if ( (_DWORD)v47 != 1 )
          goto LABEL_68;
        LOBYTE(v45) = v1->Param;
        v69 = v45 & 1;
        LOBYTE(v45) = (v45 & 2) != 0;
        LOBYTE(v43) = v69;
        xxxDisplayDiagBlackScreenDetected(8, v43, v45, 0, 0LL);
LABEL_139:
        v1->Status = 0;
        goto LABEL_140;
      }
      if ( (int)IsSetPointerSupported() < 0 || (int)IszzzUpdateCursorImageSupported() < 0 )
        goto LABEL_139;
      if ( qword_1C0258498 )
        qword_1C0258498(1LL);
      v66 = (void (*)(void))qword_1C0258AC0;
    }
    else
    {
      if ( v50 != 12 )
      {
        v51 = v50 - 4;
        if ( v51 )
        {
          v52 = v51 - 3;
          if ( !v52 )
          {
            v1->Status = Win32kPnpNotify(v1, v4);
            goto LABEL_140;
          }
          v53 = v52 - 1;
          if ( !v53 )
          {
            v78[1] = 0LL;
            v78[0] = 0LL;
            if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
              || (PVOID)PsGetCurrentProcess(v58, v57) != gpepCSRSS
              || (v47 = (__int64)grpdeskRitInput) != 0
              && (!qword_1C02584D8 ? (v59 = -1073741637) : (v59 = qword_1C02584D8(grpdeskRitInput, v78)), v59 >= 0) )
            {
              v71 = 1;
              do
              {
                v72 = 0;
                v60 = *(struct _MDEV **)(gpDispInfo + 16);
                v73 = 0;
                if ( (int)DrvProcessDxgkDisplayCallout(v60, (__int64)&v73, (__int64)&v71) < 0 )
                {
                  v71 = 0;
                }
                else
                {
                  if ( (_BYTE)v72 )
                  {
                    GreIncrementDisplaySettingsUniqueness();
                    xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0);
                  }
                  else if ( HIBYTE(v72) )
                  {
                    CInputConfig::OnDisplayStateChange(v61);
                  }
                  if ( v73 )
                    PostWinlogonMessage(1027LL, 0);
                }
              }
              while ( !v71 );
              v1->Status = 0;
              if ( (unsigned int)UserIsWddmConnectedSession() )
                UpdateExternalMonitorConnectedStatus(0);
              if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0
                && (PVOID)PsGetCurrentProcess(v47, v62) == gpepCSRSS
                && qword_1C02584E8 )
              {
                qword_1C02584E8(v78, 0LL);
              }
            }
            goto LABEL_140;
          }
          v47 = v53 - 2;
          if ( (_DWORD)v47 )
          {
            if ( (_DWORD)v47 != 1 )
            {
LABEL_68:
              v1->Status = -1073741823;
LABEL_140:
              if ( v1->CalloutType == VideoPnpNotifyCallout )
                gbInVideoPnpCallout = 0;
              UserSessionSwitchLeaveCrit(v47);
              goto LABEL_143;
            }
            v54 = v1->Param;
            v55 = 0;
            v56 = 1;
LABEL_79:
            DCompositionForceRender(0LL, v56, v54, v55);
            goto LABEL_140;
          }
        }
        if ( v1->Param )
        {
          if ( (unsigned int)UserIsWddmConnectedSession() )
            SafeEnableMDEV(1u);
          if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
            xxxDwmControl(1035LL, 0);
          if ( (int)IsxxxUserResetDisplayDeviceSupported() >= 0 && qword_1C02584F8 )
            qword_1C02584F8(v64, v63);
          if ( qword_1C0258500 )
            v65 = qword_1C0258500();
          else
            v65 = -1073741637;
          if ( v65 >= 0 && qword_1C0258508 )
            qword_1C0258508();
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
      v66 = (void (*)(void))qword_1C02584F8;
    }
    if ( v66 )
      v66();
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
