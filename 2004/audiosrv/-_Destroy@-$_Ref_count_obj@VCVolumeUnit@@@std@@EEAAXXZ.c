/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCVolumeUnit@@@std@@EEAAXXZ @ 0x18000BCC0
 * Callers:
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$25 @ 0x180076A10 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$25.c)
 *     _AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint_::_1_::dtor$3 @ 0x180076BF0 (_AtmosCheck--QueryLicenseForSpatialSubtypeAndEndpoint_--_1_--dtor$3.c)
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::dtor$1 @ 0x180076C30 (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_short_const___&_enum_APO_TYPE_&__GUID_const_&__::_1_::dtor$1 @ 0x180077170 (_Microsoft--WRL--Details--MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObjec_ea_180077170.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$112 @ 0x18007A480 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$112.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$51 @ 0x18007A660 (_CAudioResourceManager--DestroyStream_--_1_--dtor$51.c)
 *     _std::_Ref_count_obj_CStreamConnectionManagerImpl_::_Ref_count_obj_CStreamConnectionManagerImpl____::_1_::dtor$0 @ 0x18007A7A2 (_std--_Ref_count_obj_CStreamConnectionManagerImpl_--_Ref_count_obj_CStreamConnectionManagerImpl_.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Sarm::CSpatialAudioResourceManager_ISpatialAudioResourceManager_IAudioPolicyManager___&__::_1_::dtor$1 @ 0x18007A99D (_Microsoft--WRL--Details--MakeAndInitialize_Sarm--CSpatialAudioResourceManager_ISpa_ea_18007A99D.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVolumeStrip_IVolumeStrip_unsigned_short_const___&__::_1_::dtor$1 @ 0x18007A9C0 (_Microsoft--WRL--Details--MakeAndInitialize_CVolumeStrip_IVolumeStrip_unsigned_short_const___-__.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioSessionManager_CAudioSessionManager_unsigned_short_const___&__::_1_::dtor$1 @ 0x18007ADC4 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioSessionManager_CAudioSessionManager_unsigned_s.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_unsigned_short_const___&_int_&__::_1_::dtor$1 @ 0x18007B238 (_Microsoft--WRL--Details--MakeAndInitialize_CEndpointCharacteristics_CEndpointChara_ea_18007B238.c)
 *     _SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::dtor$4 @ 0x18007B966 (_SystemEffectChainDescriptor--MarkAsUnresolved_--_1_--dtor$4.c)
 *     _Microsoft::WRL::Details::Make_AtmosCheck__::_1_::dtor$2 @ 0x18007C21E (_Microsoft--WRL--Details--Make_AtmosCheck__--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_DynamicAudioEndpointManager_DynamicAudioEndpointManager__::_1_::dtor$1 @ 0x18007D209 (_Microsoft--WRL--Details--MakeAndInitialize_DynamicAudioEndpointManager_DynamicAudioEndpointMana.c)
 *     _CAggregateTelemetryClustered_enum_SarmErrorEvent_unsigned_int___0_0_::Clear_::_1_::dtor$0 @ 0x18007D464 (_CAggregateTelemetryClustered_enum_SarmErrorEvent_unsigned_int___0_0_--Clear_--_1_--dtor$0.c)
 *     _std::make_shared_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____unsigned_short_const____::_1_::dtor$2 @ 0x1800E3D54 (_std--make_shared_std--basic_string_unsigned_short_std--char_traits_unsigned_short__ea_1800E3D54.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::dtor$7 @ 0x1800E687A (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--dtor$7.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveModeListener_CExclusiveModeListener__::_1_::dtor$1 @ 0x180105E0E (_Microsoft--WRL--Details--MakeAndInitialize_CExclusiveModeListener_CExclusiveModeLi_ea_180105E0E.c)
 *     _CAggregateTelemetry_CAggregateValuesClusteredBase_enum_SarmErrorEvent_unsigned_int____enum_SarmErrorEvent_unsigned_int___0_0_::AddData_::_1_::dtor$0 @ 0x18010A840 (_CAggregateTelemetry_CAggregateValuesClusteredBase_enum_SarmErrorEvent_unsigned_int____enum_Sarm.c)
 *     _CAggregateTelemetryClustered_enum_SarmErrorEvent_unsigned_int___0_0_::AddData_::_1_::dtor$0 @ 0x18010A92B (_CAggregateTelemetryClustered_enum_SarmErrorEvent_unsigned_int___0_0_--AddData_--_1_--dtor$0.c)
 *     _CAggregateTelemetry_CAggregateValuesClusteredBase_enum_SarmErrorEvent_unsigned_int____enum_SarmErrorEvent_unsigned_int___0_0_::Log_::_1_::dtor$0 @ 0x18010A9DE (_CAggregateTelemetry_CAggregateValuesClusteredBase_enum_SarmErrorEvent_unsigned_int_ea_18010A9DE.c)
 *     _ATL::CComAggObject_CAPOWrapperSrv_::CComAggObject_CAPOWrapperSrv__::_1_::dtor$0 @ 0x180120BC2 (_ATL--CComAggObject_CAPOWrapperSrv_--CComAggObject_CAPOWrapperSrv__--_1_--dtor$0.c)
 *     ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x1801301A0 (--_GCSystemEffectWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void std::_Ref_count_obj<CVolumeUnit>::_Destroy()
{
  ;
}
