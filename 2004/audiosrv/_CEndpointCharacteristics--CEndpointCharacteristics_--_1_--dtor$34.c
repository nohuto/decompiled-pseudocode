/*
 * XREFs of _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$34 @ 0x18007B72F
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119BF4 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor_34(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 344) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 344) &= ~2u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 48));
  }
}
