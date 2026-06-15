/*
 * XREFs of _GetDeviceDefaults_::_1_::dtor$26 @ 0x1800781B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180118F64 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall GetDeviceDefaults_::_1_::dtor_26(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~8u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 464));
  }
}
