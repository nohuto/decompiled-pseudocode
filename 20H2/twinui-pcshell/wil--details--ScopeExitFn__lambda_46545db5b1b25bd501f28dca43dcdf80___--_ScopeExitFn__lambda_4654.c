/*
 * XREFs of wil::details::ScopeExitFn__lambda_46545db5b1b25bd501f28dca43dcdf80___::_ScopeExitFn__lambda_46545db5b1b25bd501f28dca43dcdf80___ @ 0x180332B70
 * Callers:
 *     _XamlLauncherState::OnCortanaLaunchResult_::_1_::dtor$0 @ 0x1803350B4 (_XamlLauncherState--OnCortanaLaunchResult_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180331878 (--$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SA.c)
 */

char __fastcall wil::details::ScopeExitFn__lambda_46545db5b1b25bd501f28dca43dcdf80___::_ScopeExitFn__lambda_46545db5b1b25bd501f28dca43dcdf80___(
        __int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnCortanaLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
