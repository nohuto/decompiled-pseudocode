/*
 * XREFs of _CEndpointCharacteristics::GetAliasedDeviceConnectorMode_::_1_::dtor$0 @ 0x1800780C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::GetAliasedDeviceConnectorMode_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 48));
  }
}
