/*
 * XREFs of _CreateSaDevice_::_1_::dtor$212 @ 0x180078E70
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180118F64 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CreateSaDevice_::_1_::dtor_212(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 0x80000) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~0x80000u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 2504));
  }
}
