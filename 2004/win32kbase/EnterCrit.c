/*
 * XREFs of EnterCrit @ 0x1C008B340
 * Callers:
 *     NtUserReportInertia @ 0x1C0003BD0 (NtUserReportInertia.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004D30 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtMITActivateInputProcessing @ 0x1C0005800 (NtMITActivateInputProcessing.c)
 *     NtUserEnumDisplayMonitors @ 0x1C0010EF0 (NtUserEnumDisplayMonitors.c)
 *     NtUserToUnicodeEx @ 0x1C00190B0 (NtUserToUnicodeEx.c)
 *     NtUserSetSysColors @ 0x1C0024F00 (NtUserSetSysColors.c)
 *     NtUserLockCursor @ 0x1C0046100 (NtUserLockCursor.c)
 *     NtUserCreateActivationObject @ 0x1C004C0F0 (NtUserCreateActivationObject.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C004EE78 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C0050F70 (NtMITCoreMsgKOpenConnectionTo.c)
 *     NtUserClipCursor @ 0x1C00C63A0 (NtUserClipCursor.c)
 *     NtMapVisualRelativePoints @ 0x1C011E1C0 (NtMapVisualRelativePoints.c)
 *     NtConfigureInputSpace @ 0x1C012DA80 (NtConfigureInputSpace.c)
 *     NtMITInitMinuserThread @ 0x1C012F430 (NtMITInitMinuserThread.c)
 *     NtMITPostMouseInputMessage @ 0x1C012FFA0 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1C01300C0 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1C01301E0 (NtMITPostWindowEventMessage.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C0130890 (NtMITSynthesizeKeyboardInput.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0130C30 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C0130DE0 (NtMITSynthesizeTouchInput.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C0131980 (NtSetPointerDeviceInputSpace.c)
 *     NtSetShellCursorState @ 0x1C0131B60 (NtSetShellCursorState.c)
 *     NtUserConfigureActivationObject @ 0x1C0131E70 (NtUserConfigureActivationObject.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C0132000 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0132620 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserDownlevelTouchpad @ 0x1C0132910 (NtUserDownlevelTouchpad.c)
 *     NtUserGetInputContainerId @ 0x1C0133790 (NtUserGetInputContainerId.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C0134B80 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0134EF0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0135150 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C01352C0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0135F00 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C0136320 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0136740 (NtUserInjectPointerInput.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C0136F40 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserPostKeyboardInputMessage @ 0x1C01375E0 (NtUserPostKeyboardInputMessage.c)
 *     NtUserSetDisplayConfig @ 0x1C0137F00 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C01385D0 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0138890 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0138F70 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C0139B30 (NtUserSystemParametersInfo.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagTHREADINFO *__fastcall EnterCrit(__int64 a1, int a2)
{
  int v3; // edi
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rsi
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *i; // r14
  __int64 v36; // rax
  int ProcessSessionId; // ebx
  __int64 v38; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v40; // rax
  unsigned int v41; // r8d
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  PERESOURCE *v45; // rdi
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // [rsp+30h] [rbp-89h] BYREF
  int v49; // [rsp+34h] [rbp-85h] BYREF
  int v50; // [rsp+38h] [rbp-81h] BYREF
  __int64 v51; // [rsp+40h] [rbp-79h]
  unsigned __int8 v52; // [rsp+48h] [rbp-71h]
  GUID ActivityId; // [rsp+4Ch] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+60h] [rbp-59h] BYREF
  int *v55; // [rsp+80h] [rbp-39h]
  __int64 v56; // [rsp+88h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+90h] [rbp-29h] BYREF
  int *v58; // [rsp+B0h] [rbp-9h]
  __int64 v59; // [rsp+B8h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+C0h] [rbp+7h] BYREF
  int *v61; // [rsp+E0h] [rbp+27h]
  __int64 v62; // [rsp+E8h] [rbp+2Fh]

  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v52 = 1;
    v40 = PsGetCurrentThreadWin32Thread(v4);
    v51 = v40;
    if ( v40 && (*(int *)(v40 + 24) > 0 || *(_DWORD *)(v51 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v48 = v52;
        v56 = 4LL;
        v55 = &v48;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v54);
      }
    }
  }
  else
  {
    v51 = 0LL;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( v3
      || (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && a2 && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v51 && (*(_DWORD *)(v51 + 48) || *(int *)(v51 + 24) > 0) )
  {
    *(_DWORD *)(v51 + 44) = 1;
    *(GUID *)(v51 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v49 = v52;
        v59 = 4LL;
        v58 = &v49;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E30,
          &ActivityId,
          0LL,
          3u,
          &v57);
        v41 = dword_1C0246A70;
      }
      if ( v41 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v50 = v52;
        v62 = 4LL;
        v61 = &v50;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E5D,
          &ActivityId,
          0LL,
          3u,
          &v60);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v13)
    || (v36 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v36),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v38),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v17 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v17 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
    if ( v17
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v17 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v17 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v24, v25);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28, v29);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
        v42 = *i;
        i[2] = 0LL;
        if ( !*(_DWORD *)(v42 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
        v45 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v45 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v46, v47);
        ExReleaseResourceAndLeaveCriticalRegion(*v45);
        HMUnlockObject(*i);
        tagDomLock::LockExclusive((tagDomLock *)v45);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return v6;
}
