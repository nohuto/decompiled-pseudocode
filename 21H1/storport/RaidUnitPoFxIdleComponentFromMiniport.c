/*
 * XREFs of RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0031988
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007128 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitCompleteRequest @ 0x1C00083F0 (RaidUnitCompleteRequest.c)
 *     StorPortExtendedFunction @ 0x1C000D810 (StorPortExtendedFunction.c)
 *     RaidPnPPassToMiniPort @ 0x1C001329C (RaidPnPPassToMiniPort.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0048EA0 (RaidUnitCompleteResetRequest.c)
 *     RaWmiPassToMiniPort @ 0x1C00740E4 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0006784 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006D20 (RaidUnitCheckAndAcquirePoFx.c)
 */

__int64 __fastcall RaidUnitPoFxIdleComponentFromMiniport(__int64 a1, unsigned int a2)
{
  bool v3; // bl

  v3 = RaidUnitPoFxIdleComponent(a1, a2, 0, 0LL);
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  return !v3 ? 0xC100000C : 0;
}
