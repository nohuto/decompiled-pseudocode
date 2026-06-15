/*
 * XREFs of _CreateSaDevice_::_1_::dtor$104 @ 0x180079470
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119BF4 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CreateSaDevice_::_1_::dtor_104(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 0x80) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~0x80u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 3144));
  }
}
