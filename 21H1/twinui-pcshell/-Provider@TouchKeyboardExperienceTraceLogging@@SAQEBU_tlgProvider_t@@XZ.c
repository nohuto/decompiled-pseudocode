/*
 * XREFs of ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18032E008
 * Callers:
 *     ??$OnTouchEvent@IAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N1@Z @ 0x1800A0328 (--$OnTouchEvent@IAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N1@Z.c)
 *     ??$HandleDisplayChanged@AEB_NAEB_NAEB_NAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEB_N00AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800A4A7C (--$HandleDisplayChanged@AEB_NAEB_NAEB_NAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Touch.c)
 *     ??$HandleInputModalityInfoChanged@AEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800A4B84 (--$HandleInputModalityInfoChanged@AEAU-$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Wind.c)
 *     ??$HandleInputPaneTryShow@AEAIAEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEA_NAEA_NAEA_NAEA_NAEA_NAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEA_N2222AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800A4C4C (--$HandleInputPaneTryShow@AEAIAEAU-$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@.c)
 *     ?MonitorInfoUsedForCreatingOptions_@TouchKeyboardExperienceTelemetryLogger@@QEBAX_KAEAURect@Foundation@Windows@@I01I01I_N2@Z @ 0x1800A5044 (-MonitorInfoUsedForCreatingOptions_@TouchKeyboardExperienceTelemetryLogger@@QEBAX_KAEAURect@Foun.c)
 *     ?MonitorInfoUsedForShowRequest_@TouchKeyboardExperienceTelemetryLogger@@QEBAX_KAEAURect@Foundation@Windows@@I01I01I_N2@Z @ 0x1800A51F4 (-MonitorInfoUsedForShowRequest_@TouchKeyboardExperienceTelemetryLogger@@QEBAX_KAEAURect@Foundati.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x180335D94 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

const struct _tlgProvider_t *__fastcall TouchKeyboardExperienceTraceLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                                             a1,
                                             _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                                         + 8);
}
