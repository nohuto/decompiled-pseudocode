/*
 * XREFs of _Windows::Internal::Shell::Chaining::ChainLink_ObjectWithIamLock_::AppendChainLink_::_1_::dtor$1 @ 0x18017AC98
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::Shell::Chaining::ChainLink_ObjectWithIamLock_::AppendChainLink_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 32));
}
