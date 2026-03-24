/*
 * XREFs of ?Load@?$CRegistryKeyLoader@I@details@@SAIPEBGIW4DwmRegistrySubkey@@@Z @ 0x1800B2C08
 * Callers:
 *     _dynamic_initializer_for__CCommonRegistryData::OverlayDisqualifyCount__ @ 0x180003130 (_dynamic_initializer_for__CCommonRegistryData--OverlayDisqualifyCount__.c)
 *     _dynamic_initializer_for__CCommonRegistryData::OverlayQualifyCount__ @ 0x180003190 (_dynamic_initializer_for__CCommonRegistryData--OverlayQualifyCount__.c)
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x1800B2ED4 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 __fastcall details::CRegistryKeyLoader<unsigned int>::Load(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  if ( (unsigned __int8)RegGetDwmDwordHelper(a1, &v5, 0LL) )
    return v5;
  return a2;
}
