/*
 * XREFs of _CreateSaDevice_::_1_::dtor$221 @ 0x1800799B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119BF4 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CreateSaDevice_::_1_::dtor_221(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 0x100000) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~0x100000u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 2480));
  }
}
