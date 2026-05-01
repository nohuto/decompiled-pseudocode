/*
 * XREFs of ?AddRef@BrokeredViewTabConverterStatics@@UEAAKXZ @ 0x180262400
 * Callers:
 *     ?AddRef@BrokeredViewTabConverterStatics@@W7EAAKXZ @ 0x1800F6CD0 (-AddRef@BrokeredViewTabConverterStatics@@W7EAAKXZ.c)
 *     ?AddRef@BrokeredViewTabConverterStatics@@WCI@EAAKXZ @ 0x1800F6CE0 (-AddRef@BrokeredViewTabConverterStatics@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall BrokeredViewTabConverterStatics::AddRef(__int64 this, volatile int *a2)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
           this,
           a2);
}
