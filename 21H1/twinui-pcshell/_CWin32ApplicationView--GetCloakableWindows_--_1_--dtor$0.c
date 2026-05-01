/*
 * XREFs of _CWin32ApplicationView::GetCloakableWindows_::_1_::dtor$0 @ 0x18016FE36
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWin32ApplicationView::GetCloakableWindows_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((RTL_SRWLOCK **)(a2 + 64));
}
