/*
 * XREFs of _CEndpointCharacteristics::GetProcessingPeriod_::_1_::dtor$47 @ 0x180078090
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180118F64 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::GetProcessingPeriod_::_1_::dtor_47(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~0x20u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 392));
  }
}
