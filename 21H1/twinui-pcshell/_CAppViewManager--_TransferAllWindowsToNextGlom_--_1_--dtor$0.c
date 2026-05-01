/*
 * XREFs of _CAppViewManager::_TransferAllWindowsToNextGlom_::_1_::dtor$0 @ 0x18014E93F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppViewManager::_TransferAllWindowsToNextGlom_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 32));
}
