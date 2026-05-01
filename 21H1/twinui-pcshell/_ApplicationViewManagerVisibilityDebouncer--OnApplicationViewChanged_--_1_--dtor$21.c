/*
 * XREFs of _ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor$21 @ 0x1800DC000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor_21(
        __int64 a1,
        __int64 a2)
{
  details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::~Iterator((void *)(a2 + 48));
}
