/*
 * XREFs of _IsStreamFormatSupportedForMixFormat_::_1_::dtor$34 @ 0x1800782C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall IsStreamFormatSupportedForMixFormat_::_1_::dtor_34(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 68) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 68) &= ~8u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 776));
  }
}
