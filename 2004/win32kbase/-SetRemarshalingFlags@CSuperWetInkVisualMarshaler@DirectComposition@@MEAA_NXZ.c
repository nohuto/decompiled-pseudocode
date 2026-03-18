/*
 * XREFs of ?SetRemarshalingFlags@CSuperWetInkVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DBF10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E16E0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSuperWetInkVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CSuperWetInkVisualMarshaler *this)
{
  char v1; // di

  v1 = 0;
  if ( *((_QWORD *)this + 46) )
    *((_DWORD *)this + 94) |= 2u;
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this) || (*((_DWORD *)this + 94) & 2) != 0 )
    return 1;
  return v1;
}
