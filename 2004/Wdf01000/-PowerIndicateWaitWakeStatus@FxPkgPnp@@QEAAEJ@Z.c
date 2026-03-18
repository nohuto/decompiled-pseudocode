/*
 * XREFs of ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C007DEA4
 * Callers:
 *     ?IndicateWakeStatus@FxChildList@@QEAAXJ@Z @ 0x1C003B840 (-IndicateWakeStatus@FxChildList@@QEAAXJ@Z.c)
 *     imp_WdfDeviceIndicateWakeStatus @ 0x1C0049010 (imp_WdfDeviceIndicateWakeStatus.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0079F50 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C0088764 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0011740 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z @ 0x1C007E0B4 (-PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerIndicateWaitWakeStatus(FxPkgPnp *this, int WaitWakeStatus)
{
  unsigned int v4; // edx

  if ( !FxPkgPnp::PowerMakeWakeRequestNonCancelable(this, WaitWakeStatus) )
    return 0;
  if ( WaitWakeStatus == -1073741536 )
  {
    v4 = 32;
  }
  else
  {
    v4 = 16;
    if ( WaitWakeStatus >= 0 )
      v4 = 8;
  }
  FxPkgPnp::PowerProcessEvent(this, v4, 0);
  return 1;
}
