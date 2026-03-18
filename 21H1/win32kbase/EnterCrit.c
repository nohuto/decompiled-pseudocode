/*
 * XREFs of EnterCrit @ 0x1C0084270
 * Callers:
 *     NtUserReportInertia @ 0x1C0003A80 (NtUserReportInertia.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004BE0 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserSetSysColors @ 0x1C00113D0 (NtUserSetSysColors.c)
 *     NtMITActivateInputProcessing @ 0x1C0036800 (NtMITActivateInputProcessing.c)
 *     NtUserLockCursor @ 0x1C0038FF0 (NtUserLockCursor.c)
 *     NtUserCreateActivationObject @ 0x1C003F6A0 (NtUserCreateActivationObject.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00421B8 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C0043870 (NtMITCoreMsgKOpenConnectionTo.c)
 *     NtUserToUnicodeEx @ 0x1C0058D30 (NtUserToUnicodeEx.c)
 *     NtUserEnumDisplayMonitors @ 0x1C00A6580 (NtUserEnumDisplayMonitors.c)
 *     NtUserClipCursor @ 0x1C00C5C80 (NtUserClipCursor.c)
 *     NtMapVisualRelativePoints @ 0x1C0124850 (NtMapVisualRelativePoints.c)
 *     NtConfigureInputSpace @ 0x1C0133A70 (NtConfigureInputSpace.c)
 *     NtMITInitMinuserThread @ 0x1C0135420 (NtMITInitMinuserThread.c)
 *     NtMITPostMouseInputMessage @ 0x1C0135F90 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1C01360B0 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1C01361D0 (NtMITPostWindowEventMessage.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C0136880 (NtMITSynthesizeKeyboardInput.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0136C20 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C0136DD0 (NtMITSynthesizeTouchInput.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C0137970 (NtSetPointerDeviceInputSpace.c)
 *     NtSetShellCursorState @ 0x1C0137B50 (NtSetShellCursorState.c)
 *     NtUserConfigureActivationObject @ 0x1C0137E60 (NtUserConfigureActivationObject.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C0137FF0 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0138610 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserDownlevelTouchpad @ 0x1C0138900 (NtUserDownlevelTouchpad.c)
 *     NtUserGetInputContainerId @ 0x1C0139430 (NtUserGetInputContainerId.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C013A820 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C013AB90 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C013ADF0 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C013AF60 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C013BBA0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C013BFC0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C013C3E0 (NtUserInjectPointerInput.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C013CBE0 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserPostKeyboardInputMessage @ 0x1C013D280 (NtUserPostKeyboardInputMessage.c)
 *     NtUserSetDisplayConfig @ 0x1C013DBA0 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C013E270 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C013E530 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C013EC10 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C013F7D0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v21; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 *i; // r14
  __int64 v27; // rax
  int ProcessSessionId; // ebx
  __int64 v29; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v31; // rax
  unsigned int v32; // r8d
  __int64 v33; // rax
  __int64 v34; // rcx
  PERESOURCE *v35; // rdi
  int v36; // [rsp+30h] [rbp-89h] BYREF
  int v37; // [rsp+34h] [rbp-85h] BYREF
  int v38; // [rsp+38h] [rbp-81h] BYREF
  __int64 v39; // [rsp+40h] [rbp-79h]
  unsigned __int8 v40; // [rsp+48h] [rbp-71h]
  GUID ActivityId; // [rsp+4Ch] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+60h] [rbp-59h] BYREF
  int *v43; // [rsp+80h] [rbp-39h]
  __int64 v44; // [rsp+88h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+90h] [rbp-29h] BYREF
  int *v46; // [rsp+B0h] [rbp-9h]
  __int64 v47; // [rsp+B8h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+C0h] [rbp+7h] BYREF
  int *v49; // [rsp+E0h] [rbp+27h]
  __int64 v50; // [rsp+E8h] [rbp+2Fh]

  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v40 = 1;
    v31 = PsGetCurrentThreadWin32Thread(v4);
    v39 = v31;
    if ( v31 && (*(int *)(v31 + 24) > 0 || *(_DWORD *)(v39 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v36 = v40;
        v44 = 4LL;
        v43 = &v36;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v42);
      }
    }
  }
  else
  {
    v39 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v39 && (*(_DWORD *)(v39 + 48) || *(int *)(v39 + 24) > 0) )
  {
    *(_DWORD *)(v39 + 44) = 1;
    *(GUID *)(v39 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v37 = v40;
        v47 = 4LL;
        v46 = &v37;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          &ActivityId,
          0LL,
          3u,
          &v45);
        v32 = dword_1C024C960;
      }
      if ( v32 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v38 = v40;
        v50 = 4LL;
        v49 = &v38;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199CD,
          &ActivityId,
          0LL,
          3u,
          &v48);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v13)
    || (v27 = PsGetCurrentProcess(v15, v14),
        ProcessSessionId = PsGetProcessSessionIdEx(v27),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v29),
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
      && (*(_DWORD *)(v17 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
        v33 = *i;
        i[2] = 0LL;
        if ( !*(_DWORD *)(v33 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
        v35 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v35 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v34);
        ExReleaseResourceAndLeaveCriticalRegion(*v35);
        HMUnlockObject(*i);
        tagDomLock::LockExclusive(v35);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return v6;
}
