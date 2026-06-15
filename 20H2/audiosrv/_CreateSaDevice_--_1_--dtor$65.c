/*
 * XREFs of _CreateSaDevice_::_1_::dtor$65 @ 0x180078860
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180118F64 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CreateSaDevice_::_1_::dtor_65(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~0x10u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 3216));
  }
}
