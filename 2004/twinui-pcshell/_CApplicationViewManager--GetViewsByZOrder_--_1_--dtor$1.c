/*
 * XREFs of _CApplicationViewManager::GetViewsByZOrder_::_1_::dtor$1 @ 0x18018F312
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationViewManager::GetViewsByZOrder_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 136));
}
