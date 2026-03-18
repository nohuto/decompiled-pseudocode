/*
 * XREFs of ?QueryInterface@FxIoQueue@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0010E60
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0010EB0 (-QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

int __fastcall FxIoQueue::QueryInterface(FxIoQueue *this, FxQueryInterfaceParams *Params)
{
  unsigned __int16 Type; // ax

  Type = Params->Type;
  if ( Type != 4099 )
  {
    if ( Type != 5379 )
      return FxObject::QueryInterface(this, Params);
    this = (FxIoQueue *)((unsigned __int64)&this->IFxHasCallbacks & -(__int64)(this != 0LL));
  }
  *Params->Object = this;
  return 0;
}
