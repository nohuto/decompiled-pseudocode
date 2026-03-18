/*
 * XREFs of ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0127440
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C000F968 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     RIMSyncWalkRimObjList @ 0x1C004E4F0 (RIMSyncWalkRimObjList.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C006F608 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?SessionInfo@Win32k@InputTraceLogging@@SAXXZ @ 0x1C0127490 (-SessionInfo@Win32k@InputTraceLogging@@SAXXZ.c)
 *     ?TraceCurrentState@CCursorClip@@SAXXZ @ 0x1C01A0038 (-TraceCurrentState@CCursorClip@@SAXXZ.c)
 */

void __fastcall InputCoreProviderCallback(const struct _GUID *a1)
{
  InputTraceLogging::Perf::s_userCritLoggingEnabled = InputTraceLogging::Enabled(0x2000);
  if ( gProtocolType != -1 )
  {
    InputTraceLogging::Win32k::SessionInfo();
    InputConfig::TraceCurrentConfig();
    CCursorClip::TraceCurrentState();
    RIMSyncWalkRimObjList(
      1,
      0LL,
      (void (__fastcall *)(_QWORD *, __int64))lambda_d1874fae19b79ef5393f0e0766cf3e96_::_lambda_invoker_cdecl_);
  }
}
