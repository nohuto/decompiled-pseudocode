/*
 * XREFs of ?SetRemarshalingFlags@CCompositionTextLineMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D9280
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CTextObjectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01D9D80 (-SetRemarshalingFlags@CTextObjectMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CCompositionTextLineMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionTextLineMarshaler *this)
{
  bool v2; // al
  char v3; // cl

  if ( *((float *)this + 20) != 0.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((float *)this + 21) != 0.0 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((float *)this + 22) != 0.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  v2 = DirectComposition::CTextObjectMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*((_DWORD *)this + 4) & 0x700) != 0 )
    return 1;
  return v3;
}
