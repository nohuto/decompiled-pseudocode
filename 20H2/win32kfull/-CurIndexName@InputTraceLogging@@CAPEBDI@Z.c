/*
 * XREFs of ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x1C01D36C8
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0079CA4 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1C01D36F8 (-CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const char *__fastcall InputTraceLogging::CurIndexName(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)a1 < 0x13 )
    return `InputTraceLogging::CurIndexName'::`2'::typenames[(unsigned int)a1];
  MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  return "ERROR BAD INDEX";
}
