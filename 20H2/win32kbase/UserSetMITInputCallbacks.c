/*
 * XREFs of UserSetMITInputCallbacks @ 0x1C00A8F04
 * Callers:
 *     NtMITSetInputCallbacks @ 0x1C00A8BB0 (NtMITSetInputCallbacks.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C00A8330 (-DeclareThreadAsInput@CInputThread@@QEAA_NXZ.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C00A8FCC (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserSetMITInputCallbacks(InputExtensibilityCallout *a1, __int64 a2, __int64 a3, __int64 a4)
{
  InputExtensibilityCallout *v4; // rdi
  InputExtensibilityCallout *v5; // rbx
  __int64 v6; // rax
  int v7; // edx
  unsigned int v8; // ebx

  v4 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = (InputExtensibilityCallout *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        2,
        27,
        (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids);
    }
  }
  v5 = gpInputExtensibilityCallout;
  if ( *(_QWORD *)gpInputExtensibilityCallout )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = *((_QWORD *)v5 + 3);
  *(_QWORD *)v5 = v4;
  if ( !v6 )
  {
    InputExtensibilityCallout::CreateCoreMsgPort(a1);
    if ( !*((_QWORD *)v5 + 3) )
      KeBugCheck(0x164u);
  }
  if ( CInputThread::DeclareThreadAsInput(a1) )
  {
    v8 = 1;
  }
  else
  {
    v8 = 0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v8;
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v7,
      3,
      28,
      (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      2,
      29,
      (__int64)&WPP_1b76687e72d330938ce3b612b20aec46_Traceguids);
  }
  return v8;
}
