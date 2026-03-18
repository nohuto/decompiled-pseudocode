/*
 * XREFs of ??_GFxSelfManagedIoMachine@@QEAAPEAXI@Z @ 0x1C001FCFC
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0020990 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxSelfManagedIoMachine *__fastcall FxSelfManagedIoMachine::`scalar deleting destructor'(FxSelfManagedIoMachine *this)
{
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
