/*
 * XREFs of _CreateSaDevice_::_1_::dtor$398 @ 0x18007A140
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CreateSaDevice_::_1_::dtor_398(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 116) & 0x100) != 0 )
  {
    *(_DWORD *)(a2 + 116) &= ~0x100u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 3000));
  }
}
