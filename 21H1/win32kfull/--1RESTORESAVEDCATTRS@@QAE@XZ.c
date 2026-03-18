/*
 * XREFs of ??1RESTORESAVEDCATTRS@@QAE@XZ @ 0x1D6FE3
 * Callers:
 *     ?bEndDocInternal@@YGHPAUHDC__@@KG@Z @ 0xF6AD2 (-bEndDocInternal@@YGHPAUHDC__@@KG@Z.c)
 * Callees:
 *     ?SaveAttributesHelper@XDCOBJ@@AAEHXZ @ 0x5A4BA (-SaveAttributesHelper@XDCOBJ@@AAEHXZ.c)
 */

void __thiscall RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(XDCOBJ **this)
{
  XDCOBJ *v1; // esi

  v1 = *this;
  if ( *this )
  {
    if ( XDCOBJ::SaveAttributesHelper(*this) )
      *(_DWORD *)(*(_DWORD *)v1 + 32) |= 2u;
  }
}
