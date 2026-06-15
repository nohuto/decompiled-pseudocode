/*
 * XREFs of _CEndpointCharacteristics::GetProcessingPeriod_::_1_::dtor$3 @ 0x180078940
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::GetProcessingPeriod_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 488));
  }
}
