/*
 * XREFs of UserSetMITInputCallbacks @ 0x1C003AA14
 * Callers:
 *     NtMITSetInputCallbacks @ 0x1C003A6C0 (NtMITSetInputCallbacks.c)
 * Callees:
 *     ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C003A180 (-DeclareThreadAsInput@CInputThread@@QEAA_NXZ.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C003AADC (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserSetMITInputCallbacks(InputExtensibilityCallout *a1)
{
  InputExtensibilityCallout *v1; // rdi
  InputExtensibilityCallout *v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // ebx

  v1 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = (InputExtensibilityCallout *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        27,
        (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids);
  }
  v2 = gpInputExtensibilityCallout;
  if ( *(_QWORD *)gpInputExtensibilityCallout )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v3 = *((_QWORD *)v2 + 3);
  *(_QWORD *)v2 = v1;
  if ( !v3 )
  {
    InputExtensibilityCallout::CreateCoreMsgPort(a1);
    if ( !*((_QWORD *)v2 + 3) )
      KeBugCheck(0x164u);
  }
  if ( CInputThread::DeclareThreadAsInput(a1) )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      3,
      28,
      (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      29,
      (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids);
  return v4;
}
