/*
 * XREFs of ?QueryInterface@FxMemoryBufferPreallocated@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0052BA0
 * Callers:
 *     ?QueryInterface@FxRequestMemory@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0054F40 (-QueryInterface@FxRequestMemory@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 * Callees:
 *     ?QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0004510 (-QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

int __fastcall FxMemoryBufferPreallocated::QueryInterface(
        FxMemoryBufferPreallocated *this,
        FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4130 )
    return FxMemoryObject::QueryInterface(this, Params);
  *Params->Object = this;
  return 0;
}
