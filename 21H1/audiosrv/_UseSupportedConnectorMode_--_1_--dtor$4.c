/*
 * XREFs of _UseSupportedConnectorMode_::_1_::dtor$4 @ 0x1800787C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall UseSupportedConnectorMode_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 448));
  }
}
