/*
 * XREFs of ?_WorkItemSetDeviceFailedRestartAlways@FxPkgPnp@@CAXPEAX@Z @ 0x1C0089070
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z @ 0x1C0088A74 (-SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z.c)
 */

void __fastcall FxPkgPnp::_WorkItemSetDeviceFailedRestartAlways(FxPkgPnp *Parameter)
{
  FxPkgPnp::SetDeviceFailedAttemptRestart(Parameter, 1u);
}
