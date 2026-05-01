/*
 * XREFs of _CVirtualDesktopComponent::UnsubscribeFromServices_::_1_::dtor$0 @ 0x18040E5D9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopComponent::UnsubscribeFromServices_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((RTL_SRWLOCK **)(a2 + 96));
}
