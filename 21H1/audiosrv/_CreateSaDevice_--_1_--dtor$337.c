/*
 * XREFs of _CreateSaDevice_::_1_::dtor$337 @ 0x180079E30
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CreateSaDevice_::_1_::dtor_337(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 116) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 116) &= ~1u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 3336));
  }
}
