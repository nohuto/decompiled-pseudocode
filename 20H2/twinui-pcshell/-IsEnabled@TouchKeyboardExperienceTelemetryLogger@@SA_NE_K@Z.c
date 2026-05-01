/*
 * XREFs of ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x18035DB0C
 * Callers:
 *     ??$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU123@AEAW44@_KAEAU123@AEAW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x1800B4774 (--$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_K.c)
 *     ??$MonitorInfoUsedForShowRequest@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU123@AEAW44@_KAEAU123@AEAW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x1800B4844 (--$MonitorInfoUsedForShowRequest@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU.c)
 *     ??$CoreInputViewOcclusionChanged@AEAIAEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@PEAGAEAURect@Foundation@5@AEAU675@AEAU675@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@$$QEAPEAGAEAURect@Foundation@5@33@Z @ 0x180356DCC (--$CoreInputViewOcclusionChanged@AEAIAEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Wind.c)
 *     ??$EditControlPositionChanged@PEAGAEAURect@Foundation@Windows@@AEAU123@AEAU123@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEAGAEAURect@Foundation@Windows@@11@Z @ 0x180357470 (--$EditControlPositionChanged@PEAGAEAURect@Foundation@Windows@@AEAU123@AEAU123@@TouchKeyboardExp.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180051D24 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??1Completer@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ @ 0x18035A488 (--1Completer@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5)
    && v4 )
  {
    v2 = &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_1805CC6F8;
    qword_1805CC6F8 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}
