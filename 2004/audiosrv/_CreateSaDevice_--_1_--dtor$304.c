/*
 * XREFs of _CreateSaDevice_::_1_::dtor$304 @ 0x180079D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119BF4 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CreateSaDevice_::_1_::dtor_304(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 0x10000000) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~0x10000000u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 2952));
  }
}
