/*
 * XREFs of ApiSetEditionGetExecutionEvironment @ 0x1C005B23C
 * Callers:
 *     ??0CKeyboardProcessor@@IEAA@XZ @ 0x1C000AD68 (--0CKeyboardProcessor@@IEAA@XZ.c)
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C000ADFC (--0CSpatialProcessor@@QEAA@XZ.c)
 *     xxxProcessKeyEvent @ 0x1C01AE000 (xxxProcessKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ApiSetEditionGetExecutionEvironment(PDEVICE_OBJECT a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        10,
        196,
        (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  if ( qword_1C0253248 )
    v4 = qword_1C0253248();
  else
    v4 = -1073741637;
  if ( v4 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( qword_1C0253250 )
    v5 = qword_1C0253250();
  else
    v5 = 0;
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      197,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v5;
}
