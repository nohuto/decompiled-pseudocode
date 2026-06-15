/*
 * XREFs of _GetDeviceDefaults_::_1_::dtor$60 @ 0x180078D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119BF4 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall GetDeviceDefaults_::_1_::dtor_60(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 0x80) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~0x80u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 360));
  }
}
