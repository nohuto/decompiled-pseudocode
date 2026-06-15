/*
 * XREFs of ??1?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAA@XZ @ 0x1800470C0
 * Callers:
 *     _CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector_::_1_::dtor$0 @ 0x180077D62 (_CEndpointCharacteristics--CanBuildProcessingModesOnRawConnector_--_1_--dtor$0.c)
 *     _GetDeviceDefaults_::_1_::dtor$13 @ 0x180078130 (_GetDeviceDefaults_--_1_--dtor$13.c)
 *     _CreateSaDevice_::_1_::dtor$64 @ 0x180078840 (_CreateSaDevice_--_1_--dtor$64.c)
 *     _CreateSaDevice_::_1_::dtor$303 @ 0x180079290 (_CreateSaDevice_--_1_--dtor$303.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$0 @ 0x180079C52 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$0.c)
 *     _EffectPolicy::GetAECInsertionPolicy_::_1_::dtor$0 @ 0x180079C64 (_EffectPolicy--GetAECInsertionPolicy_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$2 @ 0x180079C76 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$2.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$3 @ 0x180079C88 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$3.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$1 @ 0x18007A91B (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$1.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$1_0 @ 0x18007A942 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$1_0.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$2 @ 0x18007A978 (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$3 @ 0x18007A98A (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$3.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$4 @ 0x18007A99C (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$5 @ 0x18007A9AE (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$6 @ 0x18007AAC2 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$6.c)
 *     __lambda_6391a63ce46c606b78be3aee92140f1a_::operator()_::_1_::dtor$1 @ 0x1801199EF (__lambda_6391a63ce46c606b78be3aee92140f1a_--operator()_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor$1 @ 0x18011AF8D (_CEndpointCharacteristics--DiscoverConnectorProcessingModeCharacteristics_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::InitializeAPOInfo_::_1_::dtor$0 @ 0x18011D880 (_CEndpointCharacteristics--InitializeAPOInfo_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::InitializeAPOInfo_::_1_::dtor$2 @ 0x18011D898 (_CEndpointCharacteristics--InitializeAPOInfo_--_1_--dtor$2.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$4 @ 0x1801233FC (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>(
        __int64 a1)
{
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(a1);
}
