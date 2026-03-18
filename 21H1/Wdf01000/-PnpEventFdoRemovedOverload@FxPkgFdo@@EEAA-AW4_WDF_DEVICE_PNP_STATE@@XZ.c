/*
 * XREFs of ?PnpEventFdoRemovedOverload@FxPkgFdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C00842D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C007AF50 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgFdo::PnpEventFdoRemovedOverload(FxPkgFdo *this)
{
  FxPkgPnp::PnpEventRemovedCommonCode(this);
  return 309LL;
}
