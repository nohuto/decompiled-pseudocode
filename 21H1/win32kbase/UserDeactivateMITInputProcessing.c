/*
 * XREFs of UserDeactivateMITInputProcessing @ 0x1C0038434
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 *     NtMITDeactivateInputProcessing @ 0x1C01344B0 (NtMITDeactivateInputProcessing.c)
 * Callees:
 *     ?LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ @ 0x1C000F2F0 (-LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ.c)
 *     ApiSetEditionDeactivateMitInput @ 0x1C0038570 (ApiSetEditionDeactivateMitInput.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C003860C (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C003A33C (-DeactivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ?CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ @ 0x1C004B8D8 (-CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00A16E0 (RawInputManagerObjectResolveHandle.c)
 *     RIMFreePointerDevice @ 0x1C01662FC (RIMFreePointerDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall UserDeactivateMITInputProcessing(CInputThread *a1)
{
  CInputThread *v1; // rsi
  unsigned int CurrentThreadId; // eax
  int v3; // ebx
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 (__fastcall **v6)(); // rbx
  InputExtensibilityCallout *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = (CInputThread *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        18,
        (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids);
  }
  CInputThread::DeactivateInputProcessing(a1);
  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v3 = *((_DWORD *)v1 + 10);
  v4 = CurrentThreadId;
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 != v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  v6 = s_rgSensorMap;
  do
  {
    CBaseInput::HandleInputThreadStateChange(v6[3], 1LL);
    v6 += 6;
  }
  while ( v6 != (__int64 (__fastcall **)())&rgDeviceAccelerator );
  CInpLockGuard::LeaveGuardOnThreadTermination((CTouchProcessor *)((char *)gpTouchProcessor + 40));
  ApiSetEditionDeactivateMitInput();
  if ( TouchExtensibility::ghInjectionDevice )
  {
    v10 = 0LL;
    if ( (int)RawInputManagerObjectResolveHandle(TouchExtensibility::ghInjectionDevice, 3LL, 0LL, &v10) >= 0 )
    {
      LOBYTE(v8) = 19;
      v9 = HMValidateHandleNoSecure(TouchExtensibility::hDeviceUser, v8);
      if ( v9 )
      {
        if ( *(_QWORD *)(v9 + 480) )
          RIMFreePointerDevice(v10);
      }
    }
    TouchExtensibility::ghInjectionDevice = 0LL;
  }
  v7 = gpInputExtensibilityCallout;
  *(_QWORD *)gpInputExtensibilityCallout = 0LL;
  InputExtensibilityCallout::CoreMsgCloseAllDestinations(v7);
  CSpatialProcessor::_spfnInputHitTestCallback = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        19,
        (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids);
  }
}
