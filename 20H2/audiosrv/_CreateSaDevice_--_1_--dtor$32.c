/*
 * XREFs of _CreateSaDevice_::_1_::dtor$32 @ 0x180078730
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180118F64 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CreateSaDevice_::_1_::dtor_32(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~2u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 3288));
  }
}
