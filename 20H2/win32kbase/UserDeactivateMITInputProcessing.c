/*
 * XREFs of UserDeactivateMITInputProcessing @ 0x1C0007434
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     NtMITDeactivateInputProcessing @ 0x1C012C170 (NtMITDeactivateInputProcessing.c)
 * Callees:
 *     ApiSetEditionDeactivateMitInput @ 0x1C0007570 (ApiSetEditionDeactivateMitInput.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C000760C (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00274F0 (RawInputManagerObjectResolveHandle.c)
 *     HMValidateHandleNoSecure @ 0x1C0032DF0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ @ 0x1C0087110 (-LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ.c)
 *     ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C00A84EC (-DeactivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ?CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ @ 0x1C00B9100 (-CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ.c)
 *     RIMFreePointerDevice @ 0x1C015DA4C (RIMFreePointerDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall UserDeactivateMITInputProcessing(CInputThread *a1)
{
  CInputThread *v1; // rsi
  unsigned int CurrentThreadId; // eax
  int v3; // ebx
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 (__fastcall **v9)(); // rbx
  InputExtensibilityCallout *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

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
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7, v8);
  v9 = s_rgSensorMap;
  do
  {
    CBaseInput::HandleInputThreadStateChange(v9[3], 1LL);
    v9 += 6;
  }
  while ( v9 != (__int64 (__fastcall **)())&rgDeviceAccelerator );
  CInpLockGuard::LeaveGuardOnThreadTermination((CTouchProcessor *)((char *)gpTouchProcessor + 40));
  ApiSetEditionDeactivateMitInput();
  if ( TouchExtensibility::ghInjectionDevice )
  {
    v13 = 0LL;
    if ( (int)RawInputManagerObjectResolveHandle(TouchExtensibility::ghInjectionDevice, 3LL, 0LL, &v13) >= 0 )
    {
      LOBYTE(v11) = 19;
      v12 = HMValidateHandleNoSecure(TouchExtensibility::hDeviceUser, v11);
      if ( v12 )
      {
        if ( *(_QWORD *)(v12 + 480) )
          RIMFreePointerDevice(v13);
      }
    }
    TouchExtensibility::ghInjectionDevice = 0LL;
  }
  v10 = gpInputExtensibilityCallout;
  *(_QWORD *)gpInputExtensibilityCallout = 0LL;
  InputExtensibilityCallout::CoreMsgCloseAllDestinations(v10);
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
