/*
 * XREFs of _IsStreamFormatSupportedForMixFormat_::_1_::dtor$109 @ 0x180078680
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119BF4 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall IsStreamFormatSupportedForMixFormat_::_1_::dtor_109(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 68) & 0x400) != 0 )
  {
    *(_DWORD *)(a2 + 68) &= ~0x400u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 608));
  }
}
