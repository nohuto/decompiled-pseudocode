/*
 * XREFs of wil::details::ScopeExitFn__lambda_1dc06cf7010d4ad9b4df65633a63c040___::_ScopeExitFn__lambda_1dc06cf7010d4ad9b4df65633a63c040___ @ 0x180332B20
 * Callers:
 *     _XamlLauncherState::OnStartHidden_::_1_::dtor$0 @ 0x1801060B0 (_XamlLauncherState--OnStartHidden_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180052500 (--$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 */

char __fastcall wil::details::ScopeExitFn__lambda_1dc06cf7010d4ad9b4df65633a63c040___::_ScopeExitFn__lambda_1dc06cf7010d4ad9b4df65633a63c040___(
        __int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnStartHidden<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
