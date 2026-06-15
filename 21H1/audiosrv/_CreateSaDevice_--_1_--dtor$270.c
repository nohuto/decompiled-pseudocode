/*
 * XREFs of _CreateSaDevice_::_1_::dtor$270 @ 0x180079AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CreateSaDevice_::_1_::dtor_270(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 0x1000000) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~0x1000000u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 2736));
  }
}
