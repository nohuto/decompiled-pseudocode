/*
 * XREFs of ?QueryInterface@FxIoTargetRemote@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0067580
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@FxIoTarget@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0065890 (-QueryInterface@FxIoTarget@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

__int64 __fastcall FxIoTargetRemote::QueryInterface(FxIoTargetRemote *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4609 )
    return FxIoTarget::QueryInterface(this, Params);
  *Params->Object = this;
  return 0LL;
}
