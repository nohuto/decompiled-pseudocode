/*
 * XREFs of _DerivePeriodicityForStream_::_1_::dtor$11 @ 0x180078050
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall DerivePeriodicityForStream_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~1u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 192));
  }
}
