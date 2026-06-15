/*
 * XREFs of _UseSupportedConnectorMode_::_1_::dtor$17 @ 0x180077E50
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180118F64 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall UseSupportedConnectorMode_::_1_::dtor_17(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~2u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 424));
  }
}
