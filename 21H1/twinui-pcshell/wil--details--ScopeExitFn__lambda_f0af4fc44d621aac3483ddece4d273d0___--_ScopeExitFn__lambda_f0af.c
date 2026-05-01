/*
 * XREFs of wil::details::ScopeExitFn__lambda_f0af4fc44d621aac3483ddece4d273d0___::_ScopeExitFn__lambda_f0af4fc44d621aac3483ddece4d273d0___ @ 0x180311CA0
 * Callers:
 *     _XamlLauncherState::HideStartAndCortana_::_1_::dtor$0 @ 0x1803127E5 (_XamlLauncherState--HideStartAndCortana_--_1_--dtor$0.c)
 * Callees:
 *     ??$HideStartAndCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1803101EC (--$HideStartAndCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 */

char __fastcall wil::details::ScopeExitFn__lambda_f0af4fc44d621aac3483ddece4d273d0___::_ScopeExitFn__lambda_f0af4fc44d621aac3483ddece4d273d0___(
        __int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::HideStartAndCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
