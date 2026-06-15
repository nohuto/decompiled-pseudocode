/*
 * XREFs of _UseSupportedConnectorMode_::_1_::dtor$30 @ 0x180078840
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall UseSupportedConnectorMode_::_1_::dtor_30(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~4u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 400));
  }
}
