/*
 * XREFs of ?SetRemarshalingFlags@CRedirectVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01F4D10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E7660 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CRedirectVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CRedirectVisualMarshaler *this)
{
  char v1; // bl
  char v2; // di

  v1 = 0;
  v2 = 0;
  if ( *((_QWORD *)this + 46) )
  {
    *((_DWORD *)this + 94) |= 1u;
    v2 = 1;
  }
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this) || v2 )
    return 1;
  return v1;
}
