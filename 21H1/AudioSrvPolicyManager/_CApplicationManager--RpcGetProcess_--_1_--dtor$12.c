/*
 * XREFs of _CApplicationManager::RpcGetProcess_::_1_::dtor$12 @ 0x180041B33
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::RpcGetProcess_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((RTL_SRWLOCK **)(a2 + 392));
}
