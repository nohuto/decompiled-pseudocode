/*
 * XREFs of _CApplicationViewManager::GetApplicationViewsById_::_1_::dtor$1 @ 0x18016ADCB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationViewManager::GetApplicationViewsById_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 48));
}
