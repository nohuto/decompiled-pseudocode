/*
 * XREFs of _CApplicationViewManager::AddWin32ApplicationView_::_1_::dtor$1 @ 0x180101408
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationViewManager::AddWin32ApplicationView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)(a2 + 32));
}
