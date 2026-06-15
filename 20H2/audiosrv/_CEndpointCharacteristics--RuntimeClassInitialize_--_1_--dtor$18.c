/*
 * XREFs of _CEndpointCharacteristics::RuntimeClassInitialize_::_1_::dtor$18 @ 0x18007A858
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180118F64 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::RuntimeClassInitialize_::_1_::dtor_18(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 208) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 208) &= ~8u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 56));
  }
}
