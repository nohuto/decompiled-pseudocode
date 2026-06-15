/*
 * XREFs of _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$106 @ 0x18007B7E5
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor_106(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 344) & 0x2000000) != 0 )
  {
    *(_DWORD *)(a2 + 344) &= ~0x2000000u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 240));
  }
}
