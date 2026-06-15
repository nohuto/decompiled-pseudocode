/*
 * XREFs of _GetDeviceDefaults_::_1_::dtor$14 @ 0x180078C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119BF4 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall GetDeviceDefaults_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~2u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 256));
  }
}
