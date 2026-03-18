/*
 * XREFs of ?SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E7500
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DF8A0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CCursorVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CCursorVisualMarshaler *this)
{
  if ( *((_QWORD *)this + 48) )
    *((_DWORD *)this + 98) |= 8u;
  if ( *((_DWORD *)this + 92) )
    *((_DWORD *)this + 98) |= 1u;
  if ( *((_DWORD *)this + 93) )
    *((_DWORD *)this + 98) |= 2u;
  if ( *((_BYTE *)this + 376) )
    *((_DWORD *)this + 98) |= 4u;
  DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  return 1;
}
