/*
 * XREFs of ?vDone@RESTORESAVEDCATTRS@@QAEXXZ @ 0x1D885B
 * Callers:
 *     ?bEndDocInternal@@YGHPAUHDC__@@KG@Z @ 0xF6AD2 (-bEndDocInternal@@YGHPAUHDC__@@KG@Z.c)
 * Callees:
 *     ?SaveAttributesHelper@XDCOBJ@@AAEHXZ @ 0x5A4BA (-SaveAttributesHelper@XDCOBJ@@AAEHXZ.c)
 */

void __thiscall RESTORESAVEDCATTRS::vDone(XDCOBJ **this)
{
  XDCOBJ *v2; // esi

  v2 = *this;
  if ( *this && XDCOBJ::SaveAttributesHelper(*this) )
    *(_DWORD *)(*(_DWORD *)v2 + 32) |= 2u;
  *this = 0;
}
