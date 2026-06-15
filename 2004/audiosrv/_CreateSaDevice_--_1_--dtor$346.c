/*
 * XREFs of _CreateSaDevice_::_1_::dtor$346 @ 0x180079FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119BF4 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CreateSaDevice_::_1_::dtor_346(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 116) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 116) &= ~2u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 2856));
  }
}
