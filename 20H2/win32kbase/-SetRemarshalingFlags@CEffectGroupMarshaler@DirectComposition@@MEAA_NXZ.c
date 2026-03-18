/*
 * XREFs of ?SetRemarshalingFlags@CEffectGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D92F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D9EC4 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CEffectGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CEffectGroupMarshaler *this)
{
  char v2; // di

  if ( *((float *)this + 18) != 1.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  v2 = 0;
  if ( *((_DWORD *)this + 19) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x380) != 0 )
  {
    return 1;
  }
  return v2;
}
