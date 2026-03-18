/*
 * XREFs of ?PnpEventRestartHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011B20 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C007B148 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventRestartHardwareAvailable(FxPkgPnp *This)
{
  unsigned __int8 v2; // r8
  unsigned __int8 matched; // [rsp+38h] [rbp+10h] BYREF
  FxCxCallbackProgress progress; // [rsp+40h] [rbp+18h] BYREF

  matched = 0;
  progress = FxCxCallbackProgressInitialized;
  if ( FxPkgPnp::PnpPrepareHardware(This, &matched, &progress) >= 0 )
  {
    FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolStart, v2);
    return 314LL;
  }
  else if ( matched && progress )
  {
    return 298LL;
  }
  else
  {
    return 299LL;
  }
}
