/*
 * XREFs of ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C00052F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxIoContext@@UEAA@XZ @ 0x1C000528C (--1FxIoContext@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxIoContext *__fastcall FxIoContext::`scalar deleting destructor'(FxIoContext *this, char a2)
{
  FxIoContext::~FxIoContext(this);
  if ( (a2 & 1) != 0 && this )
    FxPoolFree(this);
  return this;
}
