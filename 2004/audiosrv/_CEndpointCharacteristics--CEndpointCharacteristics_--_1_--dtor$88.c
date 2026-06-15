/*
 * XREFs of _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$88 @ 0x18007B873
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119BF4 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor_88(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 344) & 0x80000) != 0 )
  {
    *(_DWORD *)(a2 + 344) &= ~0x80000u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 192));
  }
}
