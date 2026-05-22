/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18004B690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback,Microsoft::WRL::FtmBase>::AddRef(
        __int64 a1)
{
  return Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::AddRef((Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *)(a1 - 8));
}
