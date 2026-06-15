/*
 * XREFs of _IsStreamFormatSupportedForMixFormat_::_1_::dtor$98 @ 0x180078500
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall IsStreamFormatSupportedForMixFormat_::_1_::dtor_98(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 68) & 0x200) != 0 )
  {
    *(_DWORD *)(a2 + 68) &= ~0x200u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 632));
  }
}
