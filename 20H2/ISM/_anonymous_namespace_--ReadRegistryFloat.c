/*
 * XREFs of _anonymous_namespace_::ReadRegistryFloat @ 0x1800C69C0
 * Callers:
 *     ?ReadPoseDataFromRegistry@SpatialInteractionDevices@@YAJPEAUHKEY__@@PEAUPoseData@1@@Z @ 0x1800C68E0 (-ReadPoseDataFromRegistry@SpatialInteractionDevices@@YAJPEAUHKEY__@@PEAUPoseData@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 */

LSTATUS __fastcall anonymous_namespace_::ReadRegistryFloat(HKEY a1, const WCHAR *a2, float *a3)
{
  LSTATUS result; // eax
  double v5; // xmm0_8
  float v6; // xmm1_4
  DWORD v7; // [rsp+40h] [rbp-38h] BYREF
  wchar_t String[16]; // [rsp+48h] [rbp-30h] BYREF

  v7 = 32;
  result = RegGetValueW(a1, 0LL, a2, 2u, 0LL, String, &v7);
  if ( result )
  {
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    v5 = _wtof(String);
    result = 0;
    v6 = v5;
    *a3 = v6;
  }
  return result;
}
