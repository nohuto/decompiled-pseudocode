/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCCaptureReference@@@std@@EEAAXXZ @ 0x1800F0490
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@CCaptureNotifier@@QEAAXK_N0@Z @ 0x1800F0290 (-ReleaseReference@CCaptureNotifier@@QEAAXK_N0@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Ref_count_obj<CCaptureReference>::_Destroy(__int64 a1)
{
  CCaptureNotifier::ReleaseReference(
    *(_Mtx_t *)(a1 + 16),
    *(_DWORD *)(a1 + 24),
    *(_BYTE *)(a1 + 28),
    *(_BYTE *)(a1 + 29));
}
