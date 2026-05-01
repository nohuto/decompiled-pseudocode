/*
 * XREFs of wil::details::ScopeExitFn__lambda_b3ff82e267487025180f4837c58bcdde___::_ScopeExitFn__lambda_b3ff82e267487025180f4837c58bcdde___ @ 0x1803336E8
 * Callers:
 *     _XamlLauncherState::OnStartLaunchResult_::_1_::dtor$0 @ 0x18033653E (_XamlLauncherState--OnStartLaunchResult_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180332920 (--$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 */

char __fastcall wil::details::ScopeExitFn__lambda_b3ff82e267487025180f4837c58bcdde___::_ScopeExitFn__lambda_b3ff82e267487025180f4837c58bcdde___(
        __int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnStartLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
