/*
 * XREFs of _CreateSaDevice_::_1_::dtor$364 @ 0x1800795C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180118F64 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CreateSaDevice_::_1_::dtor_364(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 116) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 116) &= ~8u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 2808));
  }
}
