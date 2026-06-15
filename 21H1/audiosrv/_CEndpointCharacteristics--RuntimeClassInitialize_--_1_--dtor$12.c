/*
 * XREFs of _CEndpointCharacteristics::RuntimeClassInitialize_::_1_::dtor$12 @ 0x18007B1E5
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::RuntimeClassInitialize_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 208) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 208) &= ~4u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 56));
  }
}
