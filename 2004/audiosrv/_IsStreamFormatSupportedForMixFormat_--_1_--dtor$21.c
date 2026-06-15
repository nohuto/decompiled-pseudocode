/*
 * XREFs of _IsStreamFormatSupportedForMixFormat_::_1_::dtor$21 @ 0x180078350
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119BF4 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall IsStreamFormatSupportedForMixFormat_::_1_::dtor_21(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 68) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 68) &= ~4u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 800));
  }
}
