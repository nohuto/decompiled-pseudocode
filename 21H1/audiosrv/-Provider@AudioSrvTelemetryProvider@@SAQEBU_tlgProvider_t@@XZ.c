/*
 * XREFs of ?Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x180054A38
 * Callers:
 *     DllMain @ 0x18006D728 (DllMain.c)
 *     ?SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z @ 0x18006F2F4 (-SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z.c)
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x18006F530 (AudioServerSetDuckingOptionsForCurrentStream.c)
 *     _lambda_5f3c57522b2025466ab3412ccff4c793_::operator() @ 0x180070460 (_lambda_5f3c57522b2025466ab3412ccff4c793_--operator().c)
 *     asm_GetApplicationSubmixContextForExcludedProcessTree @ 0x180071DB0 (asm_GetApplicationSubmixContextForExcludedProcessTree.c)
 *     asm_AudioServerInitializeStream @ 0x1800F2510 (asm_AudioServerInitializeStream.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 */

const struct _tlgProvider_t *__fastcall AudioSrvTelemetryProvider::Provider(__int64 a1)
{
  return (const struct _tlgProvider_t *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                          a1,
                                          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
}
