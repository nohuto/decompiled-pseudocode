/*
 * XREFs of ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x1C005FD00
 * Callers:
 *     imp_WdfDeviceAddQueryInterface @ 0x1C002BCA0 (imp_WdfDeviceAddQueryInterface.c)
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x1C0033E80 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxQueryInterface@@QEAA@XZ @ 0x1C005FD2C (--1FxQueryInterface@@QEAA@XZ.c)
 */

FxQueryInterface *__fastcall FxQueryInterface::`scalar deleting destructor'(FxQueryInterface *this)
{
  FxQueryInterface::~FxQueryInterface(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
