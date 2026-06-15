/*
 * XREFs of _CreateSaDevice_::_1_::dtor$45 @ 0x1800787A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180118F64 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CreateSaDevice_::_1_::dtor_45(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~4u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 3264));
  }
}
