/*
 * XREFs of _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$70 @ 0x18007AD41
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180118F64 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor_70(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 344) & 0x2000) != 0 )
  {
    *(_DWORD *)(a2 + 344) &= ~0x2000u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 144));
  }
}
