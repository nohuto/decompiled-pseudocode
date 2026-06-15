/*
 * XREFs of _CreateSaDevice_::_1_::dtor$391 @ 0x180079700
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180118F64 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CreateSaDevice_::_1_::dtor_391(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 116) & 0x80) != 0 )
  {
    *(_DWORD *)(a2 + 116) &= ~0x80u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 3024));
  }
}
