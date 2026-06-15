/*
 * XREFs of ?IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ @ 0x18002CF40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006CEBC (IsGetDefaultSpatialRenderingModePresent.c)
 */

char __fastcall CSpatialAudioTech::IsLegacyVssRelevant(CSpatialAudioTech *this)
{
  bool v1; // bl
  CLSID pClsid; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  if ( byte_18019F4C6 )
    return byte_18019F4C7;
  byte_18019F4C6 = 1;
  if ( !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent(this)
    || (unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform() )
  {
    v1 = CoGetPSClsid(&GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065, &pClsid) >= 0;
    byte_18019F4C7 = v1;
  }
  else
  {
    byte_18019F4C7 = 0;
  }
  return v1;
}
