/*
 * XREFs of _CreateSaDevice_::_1_::dtor$331 @ 0x180079430
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180118F64 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CreateSaDevice_::_1_::dtor_331(__int64 a1, __int64 a2)
{
  if ( *(int *)(a2 + 112) < 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~0x80000000;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 2880));
  }
}
