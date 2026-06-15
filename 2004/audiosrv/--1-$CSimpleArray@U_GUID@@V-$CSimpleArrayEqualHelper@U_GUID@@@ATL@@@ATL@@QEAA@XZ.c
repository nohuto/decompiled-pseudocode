/*
 * XREFs of ??1?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAA@XZ @ 0x180047880
 * Callers:
 *     _CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector_::_1_::dtor$0 @ 0x180078822 (_CEndpointCharacteristics--CanBuildProcessingModesOnRawConnector_--_1_--dtor$0.c)
 *     _GetDeviceDefaults_::_1_::dtor$13 @ 0x180078BF0 (_GetDeviceDefaults_--_1_--dtor$13.c)
 *     _CreateSaDevice_::_1_::dtor$64 @ 0x180079300 (_CreateSaDevice_--_1_--dtor$64.c)
 *     _CreateSaDevice_::_1_::dtor$303 @ 0x180079D50 (_CreateSaDevice_--_1_--dtor$303.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$0 @ 0x18007A712 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$0.c)
 *     _EffectPolicy::GetAECInsertionPolicy_::_1_::dtor$0 @ 0x18007A724 (_EffectPolicy--GetAECInsertionPolicy_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$2 @ 0x18007A736 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$2.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$3 @ 0x18007A748 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$3.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$1 @ 0x18007B3DB (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$1.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$1_0 @ 0x18007B402 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$1_0.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$2 @ 0x18007B438 (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$3 @ 0x18007B44A (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$3.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$4 @ 0x18007B45C (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$5 @ 0x18007B46E (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$6 @ 0x18007B582 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$6.c)
 *     __lambda_6391a63ce46c606b78be3aee92140f1a_::operator()_::_1_::dtor$1 @ 0x18011A67F (__lambda_6391a63ce46c606b78be3aee92140f1a_--operator()_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor$1 @ 0x18011BC1D (_CEndpointCharacteristics--DiscoverConnectorProcessingModeCharacteristics_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::InitializeAPOInfo_::_1_::dtor$0 @ 0x18011E510 (_CEndpointCharacteristics--InitializeAPOInfo_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::InitializeAPOInfo_::_1_::dtor$2 @ 0x18011E528 (_CEndpointCharacteristics--InitializeAPOInfo_--_1_--dtor$2.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$4 @ 0x18012408C (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>(
        __int64 a1)
{
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(a1);
}
