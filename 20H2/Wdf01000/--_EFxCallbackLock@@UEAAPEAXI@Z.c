/*
 * XREFs of ??_EFxCallbackLock@@UEAAPEAXI@Z @ 0x1C004CC40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxCallbackLock *__fastcall FxCallbackLock::`vector deleting destructor'(FxCallbackLock *this, char a2)
{
  this->__vftable = (FxCallbackLock_vtbl *)FxCallbackLock::`vftable';
  if ( (a2 & 1) != 0 )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
