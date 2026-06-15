/*
 * XREFs of _CxxThrowException_0 @ 0x14001F427
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x1400067D0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BD20 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000CA20 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000E150 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000E8C0 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     _ATL::CAtlMap_IUnknown___GraphStreamingResourceManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown____ATL::CElementTraits_GraphStreamingResourceManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x14002151A (_ATL--CAtlMap_IUnknown___GraphStreamingResourceManager--DeviceRegistrations--ListValue_ATL--CEle.c)
 *     _ATL::CAtlMap_IUnknown___GraphStreamingResourceManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown____ATL::CElementTraits_GraphStreamingResourceManager::DeviceRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x140021544 (_ATL--CAtlMap_IUnknown___GraphStreamingResourceManager--DeviceRegistrations--ListVa_ea_140021544.c)
 *     _ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x140021FF2 (_ATL--CAtlMap_unsigned_long_GraphStreamingResourceManager--HandleRegistrations--ListValue_ATL--C.c)
 *     _ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x140022020 (_ATL--CAtlMap_unsigned_long_GraphStreamingResourceManager--HandleRegistrations--Lis_ea_140022020.c)
 *     ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x140031228 (-RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z.c)
 *     ?ResultFromCaughtExceptionInternal@details@wil@@YAJPEAG_KPEA_N@Z @ 0x1400315B0 (-ResultFromCaughtExceptionInternal@details@wil@@YAJPEAG_KPEA_N@Z.c)
 *     ?Rethrow@details@wil@@YAXXZ @ 0x140031830 (-Rethrow@details@wil@@YAXXZ.c)
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x140031E30 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1400336CC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _ATL::CAtlMap_unsigned_long_CpuManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_CpuManager::HandleRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x14003570B (_ATL--CAtlMap_unsigned_long_CpuManager--HandleRegistrations--ListValue_ATL--CElementTraits_unsig.c)
 *     _ATL::CAtlMap_IUnknown___CpuManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown____ATL::CElementTraits_CpuManager::DeviceRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x140035832 (_ATL--CAtlMap_IUnknown___CpuManager--DeviceRegistrations--ListValue_ATL--CElementTraits_IUnknown.c)
 *     _ATL::CAtlMap_unsigned_long_CpuManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_CpuManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x140036502 (_ATL--CAtlMap_unsigned_long_CpuManager--HandleRegistrations--ListValue_ATL--CElemen_ea_140036502.c)
 *     _ATL::CAtlMap_IUnknown___CpuManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown____ATL::CElementTraits_CpuManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x1400365A0 (_ATL--CAtlMap_IUnknown___CpuManager--DeviceRegistrations--ListValue_ATL--CElementTr_ea_1400365A0.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003C10C (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003C564 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     _ATL::CAtlMap_unsigned___int64_ATL::CAtlList_CDisplayNode___ATL::CElementTraits_CDisplayNode______ATL::CElementTraits_unsigned___int64__ATL::CElementTraits_ATL::CAtlList_CDisplayNode___ATL::CElementTraits_CDisplayNode_________::NewNode_::_1_::catch$0 @ 0x14004235B (_ATL--CAtlMap_unsigned___int64_ATL--CAtlList_CDisplayNode___ATL--CElementTraits_CDi_ea_14004235B.c)
 *     _ATL::CAtlMap_unsigned___int64_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy__ATL::CElementTraits_unsigned___int64__ATL::CElementTraits_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy_____::NewNode_::_1_::catch$0 @ 0x1400458CC (_ATL--CAtlMap_unsigned___int64_wil--com_ptr_t_ICPAudioHistoryControl_wil--err_retur_ea_1400458CC.c)
 *     _ATL::CAtlMap_unsigned___int64_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy__ATL::CElementTraits_unsigned___int64__ATL::CElementTraits_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy_____::SetAt_::_1_::catch$0 @ 0x140045CF3 (_ATL--CAtlMap_unsigned___int64_wil--com_ptr_t_ICPAudioHistoryControl_wil--err_retur_ea_140045CF3.c)
 *     ??$?0V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@$0A@@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAA@AEBV?$weak_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@1@@Z @ 0x14005FB10 (--$-0V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@$0A@@-$shared_ptr@V-$AtomicOb.c)
 *     _std::shared_ptr_util::AtomicObj_ClockingSection_util::ReaderLockPolicy___::_Setp_util::AtomicObj_ClockingSection_util::ReaderLockPolicy____::_1_::catch$1 @ 0x14005FD18 (_std--shared_ptr_util--AtomicObj_ClockingSection_util--ReaderLockPolicy___--_Setp_util--AtomicOb.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall __noreturn CxxThrowException_0(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _CxxThrowException(pExceptionObject, pThrowInfo);
}
