/*
 * XREFs of ?add_ButtonsChangedDuringHomeGesture@MPCManagerClient@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18010C070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::add_ButtonsChangedDuringHomeGesture(
        __int64 a1,
        struct IUnknown *a2,
        struct IUnknown **a3)
{
  if ( a2 )
    return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCConstantManagerClient *,Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
             a1 + 1656,
             a2,
             a2->lpVtbl[1].QueryInterface,
             a3);
  else
    return 2147942487LL;
}
