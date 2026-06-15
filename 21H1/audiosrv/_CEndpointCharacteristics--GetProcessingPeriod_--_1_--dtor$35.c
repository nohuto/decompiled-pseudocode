/*
 * XREFs of _CEndpointCharacteristics::GetProcessingPeriod_::_1_::dtor$35 @ 0x1800789F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::GetProcessingPeriod_::_1_::dtor_35(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~8u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 416));
  }
}
