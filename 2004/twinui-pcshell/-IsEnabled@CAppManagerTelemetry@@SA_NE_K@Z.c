/*
 * XREFs of ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x18014DDB4
 * Callers:
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x180143C08 (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 *     ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x180177C6C (-_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOC.c)
 *     ?_LogVisibilityTelemetry@CTaskWindow@@AEAAX_N@Z @ 0x180186DA4 (-_LogVisibilityTelemetry@CTaskWindow@@AEAAX_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAAPEAVCAppManagerTelemetry@@P6AXXZ@Z @ 0x180159A94 (-get@-$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAAPEAVCAppManagerTelemetry@@P6AXXZ@Z.c)
 */

char __fastcall CAppManagerTelemetry::IsEnabled(__int64 a1)
{
  wil::TraceLoggingProvider *v1; // rax

  v1 = (wil::TraceLoggingProvider *)wil::details::static_lazy<CAppManagerTelemetry>::get(
                                      a1,
                                      _lambda_8127ed7c5a5c4820bb697a3afc89f3a5_::_lambda_invoker_cdecl_);
  return wil::TraceLoggingProvider::IsEnabled_(v1, 0);
}
