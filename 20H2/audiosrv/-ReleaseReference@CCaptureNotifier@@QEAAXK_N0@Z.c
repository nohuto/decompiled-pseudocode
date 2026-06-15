/*
 * XREFs of ?ReleaseReference@CCaptureNotifier@@QEAAXK_N0@Z @ 0x1800EF6C0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VCCaptureReference@@@std@@EEAAXXZ @ 0x1800EF8C0 (-_Destroy@-$_Ref_count_obj@VCCaptureReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z @ 0x1800EF768 (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CCaptureNotifier::ReleaseReference(_Mtx_t this, unsigned int a2, char a3, char a4)
{
  int v8; // eax
  __int64 v9; // r9
  int v10; // eax
  char v11; // [rsp+20h] [rbp-18h]

  v8 = _Mtx_lock(this);
  if ( v8 )
    std::_Throw_C_error(v8);
  v11 = a4;
  LOBYTE(v9) = a3;
  CCaptureNotifier::UpdateAudioCaptureStatus(this, 1LL, a2, v9, v11);
  v10 = _Mtx_unlock(this);
  if ( v10 )
    std::_Throw_C_error(v10);
}
