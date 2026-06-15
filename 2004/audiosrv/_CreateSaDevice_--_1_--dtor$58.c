/*
 * XREFs of _CreateSaDevice_::_1_::dtor$58 @ 0x1800792D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119BF4 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CreateSaDevice_::_1_::dtor_58(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~8u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 3240));
  }
}
