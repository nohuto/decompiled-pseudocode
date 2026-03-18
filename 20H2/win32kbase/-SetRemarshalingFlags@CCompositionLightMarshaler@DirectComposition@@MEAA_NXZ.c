/*
 * XREFs of ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01EC010
 * Callers:
 *     ?SetRemarshalingFlags@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01EC0F0 (-SetRemarshalingFlags@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01EC280 (-SetRemarshalingFlags@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01ECC00 (-SetRemarshalingFlags@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01ED0E0 (-SetRemarshalingFlags@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionLightMarshaler *this)
{
  int v1; // edx
  bool result; // al
  int v3; // edx

  v1 = *((_DWORD *)this + 4);
  result = 1;
  *((_DWORD *)this + 17) = 0;
  v3 = v1 | 0x60;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 4) = v3;
  if ( *((_BYTE *)this + 88) != 1 )
    *((_DWORD *)this + 4) = v3 | 0x80;
  return result;
}
