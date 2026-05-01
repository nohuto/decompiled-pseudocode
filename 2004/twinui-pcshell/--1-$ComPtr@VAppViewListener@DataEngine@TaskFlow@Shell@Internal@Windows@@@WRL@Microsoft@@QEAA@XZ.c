/*
 * XREFs of ??1?$ComPtr@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180238CCC
 * Callers:
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory::Create_::_1_::dtor$0 @ 0x180239186 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListenerFactory--Create_--_1_--dtor$0.c)
 *     _HolographicPositioner::_RaiseViewRemoved_::_1_::dtor$2 @ 0x180246448 (_HolographicPositioner--_RaiseViewRemoved_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::_RaiseViewEventWithPropertySet_::_1_::dtor$1 @ 0x1802AD720 (_ViewEventDispatcher--_RaiseViewEventWithPropertySet_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener>::~ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener>::InternalRelease(a1);
}
