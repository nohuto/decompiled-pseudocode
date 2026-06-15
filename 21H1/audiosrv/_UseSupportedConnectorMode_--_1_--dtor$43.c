/*
 * XREFs of _UseSupportedConnectorMode_::_1_::dtor$43 @ 0x1800788B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall UseSupportedConnectorMode_::_1_::dtor_43(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~8u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 376));
  }
}
