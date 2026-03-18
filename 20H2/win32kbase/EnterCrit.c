/*
 * XREFs of EnterCrit @ 0x1C0045880
 * Callers:
 *     NtUserReportInertia @ 0x1C0003BD0 (NtUserReportInertia.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004D30 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtMITActivateInputProcessing @ 0x1C0005800 (NtMITActivateInputProcessing.c)
 *     NtUserEnumDisplayMonitors @ 0x1C002F1C0 (NtUserEnumDisplayMonitors.c)
 *     NtUserToUnicodeEx @ 0x1C00898B0 (NtUserToUnicodeEx.c)
 *     NtUserSetSysColors @ 0x1C008B8D0 (NtUserSetSysColors.c)
 *     NtUserLockCursor @ 0x1C00A73F0 (NtUserLockCursor.c)
 *     NtUserCreateActivationObject @ 0x1C00AD380 (NtUserCreateActivationObject.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00AFE08 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C00B1A30 (NtMITCoreMsgKOpenConnectionTo.c)
 *     NtUserClipCursor @ 0x1C00C5610 (NtUserClipCursor.c)
 *     NtMapVisualRelativePoints @ 0x1C011BE80 (NtMapVisualRelativePoints.c)
 *     NtConfigureInputSpace @ 0x1C012B730 (NtConfigureInputSpace.c)
 *     NtMITInitMinuserThread @ 0x1C012D0E0 (NtMITInitMinuserThread.c)
 *     NtMITPostMouseInputMessage @ 0x1C012DC50 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1C012DD70 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1C012DE90 (NtMITPostWindowEventMessage.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C012E540 (NtMITSynthesizeKeyboardInput.c)
 *     NtMITSynthesizeMouseInput @ 0x1C012E8E0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C012EA90 (NtMITSynthesizeTouchInput.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C012F630 (NtSetPointerDeviceInputSpace.c)
 *     NtSetShellCursorState @ 0x1C012F810 (NtSetShellCursorState.c)
 *     NtUserConfigureActivationObject @ 0x1C012FB20 (NtUserConfigureActivationObject.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C012FCB0 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C01302D0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserDownlevelTouchpad @ 0x1C01305C0 (NtUserDownlevelTouchpad.c)
 *     NtUserGetInputContainerId @ 0x1C0131440 (NtUserGetInputContainerId.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C0132830 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0132BA0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0132E00 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C0132F70 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0133BB0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C0133FD0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C01343F0 (NtUserInjectPointerInput.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C0134BF0 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserPostKeyboardInputMessage @ 0x1C0135290 (NtUserPostKeyboardInputMessage.c)
 *     NtUserSetDisplayConfig @ 0x1C0135BB0 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0136280 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0136540 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0136C20 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C01377E0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagTHREADINFO *__fastcall EnterCrit(int a1, int a2)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rsi
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *i; // r14
  __int64 v38; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  PERESOURCE *v49; // rdi
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // [rsp+30h] [rbp-89h] BYREF
  int v53; // [rsp+34h] [rbp-85h] BYREF
  int v54; // [rsp+38h] [rbp-81h] BYREF
  __int64 v55; // [rsp+40h] [rbp-79h]
  unsigned __int8 v56; // [rsp+48h] [rbp-71h]
  GUID ActivityId; // [rsp+4Ch] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+60h] [rbp-59h] BYREF
  int *v59; // [rsp+80h] [rbp-39h]
  __int64 v60; // [rsp+88h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+90h] [rbp-29h] BYREF
  int *v62; // [rsp+B0h] [rbp-9h]
  __int64 v63; // [rsp+B8h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+C0h] [rbp+7h] BYREF
  int *v65; // [rsp+E0h] [rbp+27h]
  __int64 v66; // [rsp+E8h] [rbp+2Fh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v56 = 1;
    v41 = PsGetCurrentThreadWin32Thread();
    v55 = v41;
    if ( v41 && (*(int *)(v41 + 24) > 0 || *(_DWORD *)(v55 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v42, v43) )
        {
          v52 = v56;
          v60 = 4LL;
          v59 = &v52;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E87, (int)&ActivityId, 0, 3u, &v58);
        }
      }
    }
  }
  else
  {
    v55 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( a1
      || (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && a2 && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v55 && (*(_DWORD *)(v55 + 48) || *(int *)(v55 + 24) > 0) )
  {
    *(_DWORD *)(v55 + 44) = 1;
    *(GUID *)(v55 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v12) )
      {
        v53 = v56;
        v63 = 4LL;
        v62 = &v53;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E30, (int)&ActivityId, 0, 3u, &v61);
        v44 = (unsigned int)dword_1C0244A70;
      }
      if ( (unsigned int)v44 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v44, v45) )
      {
        v54 = v56;
        v66 = 4LL;
        v65 = &v54;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E5D, (int)&ActivityId, 0, 3u, &v64);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v38 = PsGetCurrentProcess(v14, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(v38),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18, v17, v19, v20);
    if ( v16
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v16 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v16 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v26, v27);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
        v46 = *i;
        i[2] = 0LL;
        if ( !*(_DWORD *)(v46 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34, v35);
        v49 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v49 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v50, v51);
        ExReleaseResourceAndLeaveCriticalRegion(*v49);
        HMUnlockObject(*i);
        tagDomLock::LockExclusive((tagDomLock *)v49);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return v5;
}
