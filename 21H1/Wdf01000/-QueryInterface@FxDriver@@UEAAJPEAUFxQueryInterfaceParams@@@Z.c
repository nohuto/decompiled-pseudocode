/*
 * XREFs of ?QueryInterface@FxDriver@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0053EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0019380 (-QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

__int64 __fastcall FxDriver::QueryInterface(FxDriver *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4097 )
    return FxObject::QueryInterface(this, Params);
  *Params->Object = this;
  return 0LL;
}
