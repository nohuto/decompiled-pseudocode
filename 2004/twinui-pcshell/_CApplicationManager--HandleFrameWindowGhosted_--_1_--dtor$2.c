/*
 * XREFs of _CApplicationManager::HandleFrameWindowGhosted_::_1_::dtor$2 @ 0x18014CCFA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::HandleFrameWindowGhosted_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 64));
}
