/*
 * XREFs of UserActivateMITInputProcessing @ 0x1C0005888
 * Callers:
 *     NtMITActivateInputProcessing @ 0x1C0005800 (NtMITActivateInputProcessing.c)
 * Callees:
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C0005EE0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C000760C (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C0007A28 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ApiSetEditionActivateMitInput @ 0x1C0007C10 (ApiSetEditionActivateMitInput.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?ActivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C00A843C (-ActivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ?EnumerateAllGroups@CActivationObjectManager@@QEAAXXZ @ 0x1C00B6C34 (-EnumerateAllGroups@CActivationObjectManager@@QEAAXXZ.c)
 *     rimScheduleUserModeRimPnpRegistration @ 0x1C00B9678 (rimScheduleUserModeRimPnpRegistration.c)
 *     IOCPDispatcher_Destroy @ 0x1C00BB030 (IOCPDispatcher_Destroy.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C00BB05C (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserActivateMITInputProcessing(struct IOCPDispatcher **a1, _QWORD *a2)
{
  _QWORD *v2; // r14
  int (*v3)(struct _InputHitTestRequest *, struct _InputHitTestResult *); // rbp
  unsigned int v4; // ebx
  __int64 v5; // rsi
  CActivationObjectManager *v6; // rcx
  CInputThread *v7; // rcx
  __int64 v8; // rcx
  __int64 (__fastcall **v9)(); // rdi
  int v10; // edx
  CBaseInput **v11; // rdi
  __int64 v12; // rbp
  char v13; // si
  int v15; // edx

  v2 = a2;
  v3 = (int (*)(struct _InputHitTestRequest *, struct _InputHitTestResult *))a1;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = (struct IOCPDispatcher **)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        2,
        10,
        (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids);
    }
  }
  if ( gpIOCPDispatcher )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  *v2 = 0LL;
  if ( (int)IOCPDispatcher::CreateInstance(a1) >= 0
    && (v5 = *((_QWORD *)gpIOCPDispatcher + 344)) != 0
    && (unsigned int)ApiSetEditionActivateMitInput() )
  {
    if ( gbNoMoreDITHitTest )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    CActivationObjectManager::EnumerateAllGroups(v6);
    CInputThread::ActivateInputProcessing(v7);
    InputExtensibilityCallout::OnInputThreadStateChanged(v8, 0LL);
    v9 = s_rgSensorMap;
    do
    {
      CBaseInput::HandleInputThreadStateChange(v9[3], 0LL);
      v9 += 6;
    }
    while ( v9 != (__int64 (__fastcall **)())&rgDeviceAccelerator );
    rimScheduleUserModeRimPnpRegistration();
    CSpatialProcessor::_spfnInputHitTestCallback = v3;
    v11 = &qword_1C023F018;
    v12 = 3LL;
    *v2 = v5;
    v13 = 1;
    do
    {
      if ( *((_DWORD *)v11 - 2) == 2 )
        CBaseInput::Read(*v11);
      v11 += 6;
      --v12;
    }
    while ( v12 );
  }
  else
  {
    IOCPDispatcher_Destroy();
    v13 = 0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v15,
      3,
      11,
      (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      2,
      12,
      (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids);
  }
LABEL_20:
  LOBYTE(v4) = v13 != 0;
  return v4;
}
