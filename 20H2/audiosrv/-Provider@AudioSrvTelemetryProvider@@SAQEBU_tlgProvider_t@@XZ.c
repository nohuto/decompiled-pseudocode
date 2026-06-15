/*
 * XREFs of ?Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x180054398
 * Callers:
 *     DllMain @ 0x18006D5AC (DllMain.c)
 *     ?SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z @ 0x18006E934 (-SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z.c)
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x18006EB70 (AudioServerSetDuckingOptionsForCurrentStream.c)
 *     _lambda_5f3c57522b2025466ab3412ccff4c793_::operator() @ 0x18006FAA0 (_lambda_5f3c57522b2025466ab3412ccff4c793_--operator().c)
 *     asm_GetApplicationSubmixContextForExcludedProcessTree @ 0x1800713F0 (asm_GetApplicationSubmixContextForExcludedProcessTree.c)
 *     asm_AudioServerInitializeStream @ 0x1800F1940 (asm_AudioServerInitializeStream.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 */

const struct _tlgProvider_t *__fastcall AudioSrvTelemetryProvider::Provider(__int64 a1)
{
  return (const struct _tlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                      a1,
                                                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                        + 1);
}
