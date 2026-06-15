/*
 * XREFs of _AtmosCheck::UpdateEndpointUnderLock_::_1_::dtor$0_0 @ 0x180138598
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AtmosCheck::UpdateEndpointUnderLock_::_1_::dtor_0_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((struct _RTL_CRITICAL_SECTION **)(a2 + 32));
}
