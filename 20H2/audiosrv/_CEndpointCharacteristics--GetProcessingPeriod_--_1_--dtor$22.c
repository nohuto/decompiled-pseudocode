/*
 * XREFs of _CEndpointCharacteristics::GetProcessingPeriod_::_1_::dtor$22 @ 0x180077FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180118F64 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::GetProcessingPeriod_::_1_::dtor_22(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~4u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 440));
  }
}
