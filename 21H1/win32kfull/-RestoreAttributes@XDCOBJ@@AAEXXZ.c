/*
 * XREFs of ?RestoreAttributes@XDCOBJ@@AAEXXZ @ 0x5E6E4
 * Callers:
 *     _GreRealizePalette@4 @ 0xBF88E (_GreRealizePalette@4.c)
 *     _NtGdiResizePalette@8 @ 0x21E909 (_NtGdiResizePalette@8.c)
 * Callees:
 *     ?RestoreAttributesHelper@XDCOBJ@@AAEXXZ @ 0x5E708 (-RestoreAttributesHelper@XDCOBJ@@AAEXXZ.c)
 */

void __thiscall XDCOBJ::RestoreAttributes(XDCOBJ *this)
{
  if ( *((_DWORD *)this + 1) )
  {
    if ( (*(_BYTE *)(*(_DWORD *)this + 32) & 2) != 0 )
    {
      XDCOBJ::RestoreAttributesHelper(this);
      *(_DWORD *)(*(_DWORD *)this + 32) &= ~2u;
      *((_DWORD *)this + 1) = 0;
    }
  }
}
