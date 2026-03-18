/*
 * XREFs of ?UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C00D0CE8
 * Callers:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00D157C (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C018E7EC (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01A2CC8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::UnreferenceMsgDataFromGuard(__int64 a1, __int64 a2)
{
  CTouchProcessor *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // edx

  v2 = gpTouchProcessor;
  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      305,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(v2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  result = CTouchProcessor::UnreferenceMsgData(v2, v3, 8LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v6) = 5;
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               v6,
               7,
               306,
               (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
  }
  return result;
}
