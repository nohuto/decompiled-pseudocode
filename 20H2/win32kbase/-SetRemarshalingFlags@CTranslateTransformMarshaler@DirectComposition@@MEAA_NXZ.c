/*
 * XREFs of ?SetRemarshalingFlags@CTranslateTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D9E70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D9EC4 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CTranslateTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CTranslateTransformMarshaler *this)
{
  bool v2; // al
  char v3; // cl

  if ( *((float *)this + 18) != 0.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 19) != 0.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  v2 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*((_DWORD *)this + 4) & 0x180) != 0 )
    return 1;
  return v3;
}
