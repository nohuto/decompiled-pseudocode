/*
 * XREFs of _GetDeviceDefaults_::_1_::dtor$20 @ 0x180078B40
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall GetDeviceDefaults_::_1_::dtor_20(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~4u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 384));
  }
}
