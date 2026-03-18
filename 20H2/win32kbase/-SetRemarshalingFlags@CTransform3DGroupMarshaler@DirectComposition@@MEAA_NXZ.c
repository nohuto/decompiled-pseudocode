/*
 * XREFs of ?SetRemarshalingFlags@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D9E20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D9EC4 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CTransform3DGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CTransform3DGroupMarshaler *this)
{
  char v1; // di

  v1 = 0;
  if ( *((_QWORD *)this + 10) )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((_DWORD *)this + 24) = 0;
  }
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x80u) != 0 )
  {
    return 1;
  }
  return v1;
}
