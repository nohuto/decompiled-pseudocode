/*
 * XREFs of ?vInit@RESTORESAVEDCATTRS@@QAEXPAVXDCOBJ@@@Z @ 0x1D88B1
 * Callers:
 *     ?bEndDocInternal@@YGHPAUHDC__@@KG@Z @ 0xF6AD2 (-bEndDocInternal@@YGHPAUHDC__@@KG@Z.c)
 * Callees:
 *     ?RestoreAttributesHelper@XDCOBJ@@AAEXXZ @ 0x5E708 (-RestoreAttributesHelper@XDCOBJ@@AAEXXZ.c)
 */

void __thiscall RESTORESAVEDCATTRS::vInit(RESTORESAVEDCATTRS *this, struct XDCOBJ *a2)
{
  *(_DWORD *)this = a2;
  if ( a2 )
  {
    if ( (*(_BYTE *)(*(_DWORD *)a2 + 32) & 2) != 0 )
    {
      XDCOBJ::RestoreAttributesHelper(a2);
      *(_DWORD *)(*(_DWORD *)a2 + 32) &= ~2u;
    }
  }
}
