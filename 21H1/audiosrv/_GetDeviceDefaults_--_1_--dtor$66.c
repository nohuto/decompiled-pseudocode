/*
 * XREFs of _GetDeviceDefaults_::_1_::dtor$66 @ 0x180078CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall GetDeviceDefaults_::_1_::dtor_66(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 0x100) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~0x100u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 336));
  }
}
