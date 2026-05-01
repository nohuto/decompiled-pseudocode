/*
 * XREFs of wil::details::ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___::_ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___ @ 0x180332CD8
 * Callers:
 *     _XamlLauncherState::OnCortanaTransitionRequested_::_1_::dtor$0 @ 0x180104CF7 (_XamlLauncherState--OnCortanaTransitionRequested_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnCortanaTransitionRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180052870 (--$OnCortanaTransitionRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTeleme.c)
 */

char __fastcall wil::details::ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___::_ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___(
        __int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnCortanaTransitionRequested<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
