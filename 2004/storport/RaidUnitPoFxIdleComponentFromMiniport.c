/*
 * XREFs of RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0031ED8
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007718 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitCompleteRequest @ 0x1C00089E0 (RaidUnitCompleteRequest.c)
 *     StorPortExtendedFunction @ 0x1C000DE00 (StorPortExtendedFunction.c)
 *     RaidPnPPassToMiniPort @ 0x1C001510C (RaidPnPPassToMiniPort.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00495B0 (RaidUnitCompleteResetRequest.c)
 *     RaWmiPassToMiniPort @ 0x1C0074424 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0006C44 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0007310 (RaidUnitCheckAndAcquirePoFx.c)
 */

__int64 __fastcall RaidUnitPoFxIdleComponentFromMiniport(__int64 a1, unsigned int a2)
{
  bool v3; // bl

  v3 = RaidUnitPoFxIdleComponent(a1, a2, 0, 0LL);
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  return !v3 ? 0xC100000C : 0;
}
