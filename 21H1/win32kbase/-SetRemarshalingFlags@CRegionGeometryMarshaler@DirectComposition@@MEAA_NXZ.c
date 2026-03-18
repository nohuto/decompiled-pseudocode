/*
 * XREFs of ?SetRemarshalingFlags@CRegionGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E19B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01EAA40 (-SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CRegionGeometryMarshaler::SetRemarshalingFlags(
        DirectComposition::CRegionGeometryMarshaler *this)
{
  char v1; // di

  v1 = 0;
  if ( *((_DWORD *)this + 26) )
  {
    *((_DWORD *)this + 4) |= 0x800u;
    *((_DWORD *)this + 27) = 0;
  }
  if ( DirectComposition::CGeometryMarshaler::SetRemarshalingFlags(this) || (*((_DWORD *)this + 4) & 0x800) != 0 )
    return 1;
  return v1;
}
