/*
 * XREFs of ?SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01E8160
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E7660 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CShapeVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CShapeVisualMarshaler *this)
{
  char result; // al

  result = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( *((_QWORD *)this + 46) )
  {
    *((_DWORD *)this + 98) |= 1u;
    result = 1;
  }
  if ( *((_DWORD *)this + 96) )
  {
    *((_DWORD *)this + 98) |= 2u;
    result = 1;
    *((_DWORD *)this + 97) = 0;
  }
  return result;
}
