/*
 * XREFs of _GetDeviceDefaults_::_1_::dtor$32 @ 0x180078CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119BF4 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall GetDeviceDefaults_::_1_::dtor_32(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~0x10u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 440));
  }
}
