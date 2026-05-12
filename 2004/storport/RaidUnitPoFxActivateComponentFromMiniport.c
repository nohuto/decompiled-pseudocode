/*
 * XREFs of RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0036EC8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000DE00 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0006D14 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0007310 (RaidUnitCheckAndAcquirePoFx.c)
 */

__int64 __fastcall RaidUnitPoFxActivateComponentFromMiniport(__int64 a1, unsigned int a2, unsigned int a3)
{
  char v4; // bl

  v4 = RaidUnitPoFxActivateComponent(a1, a2, a3, 0LL);
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  return v4 == 0 ? 0xC100000C : 0;
}
