/*
 * XREFs of memmove @ 0x1C003F400
 * Callers:
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C0001008 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C00013B0 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     NdisGetDataBuffer @ 0x1C0007360 (NdisGetDataBuffer.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C0008BCC (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisOidPreEthAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0008DC0 (-ndisOidPreEthAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00098F0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0010E40 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisQueryGuidData @ 0x1C00123C0 (ndisQueryGuidData.c)
 *     ?ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E3@Z @ 0x1C0012F28 (-ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0013810 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C0014AFC (ndisNotifyDevicePowerStateChange.c)
 *     ?ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0017C50 (-ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     NdisFIndicateStatus @ 0x1C0018AC0 (NdisFIndicateStatus.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C0018E88 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001ACA4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x1C001BBFC (-ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATU.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C001D9C0 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     NdisWriteEventLogEntry @ 0x1C001DEE0 (NdisWriteEventLogEntry.c)
 *     ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1C001E20C (-ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z.c)
 *     ?ndisOidPreTimestampCapability@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001EAB0 (-ndisOidPreTimestampCapability@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C001EBF0 (-ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWA.c)
 *     ?ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C001FCD0 (-ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_A.c)
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x1C001FFC0 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 *     ?ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C0020054 (-ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_.c)
 *     ?ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x1C0020378 (-ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021344 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMSetMiniportAttributes @ 0x1C0022EF0 (NdisMSetMiniportAttributes.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0023484 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z @ 0x1C0023988 (-ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z.c)
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0023D28 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisRegisterDeviceEx @ 0x1C0023F40 (NdisRegisterDeviceEx.c)
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x1C00248A4 (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 *     NdisWriteConfiguration @ 0x1C00270B0 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C00276B0 (NdisOpenConfigurationKeyByName.c)
 *     NdisReadConfiguration @ 0x1C0028420 (NdisReadConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1C0028D90 (NdisOpenProtocolConfiguration.c)
 *     ndisWmiRegister @ 0x1C00290F0 (ndisWmiRegister.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C002A118 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C002A2A4 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C002A6DC (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x1C002B46C (ndisIfRegisterInterfaceEx.c)
 *     ?ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002BFF8 (-ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002C3B8 (-ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisOidPreRSSCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C002DB40 (-ndisOidPreRSSCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     NdisFRegisterFilterDriver @ 0x1C002F0E0 (NdisFRegisterFilterDriver.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002F9FC (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C002FE40 (-ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C002FF2C (-ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ndisQuerySupportedGuidToOidList @ 0x1C0030238 (ndisQuerySupportedGuidToOidList.c)
 *     ?ndisIndicateOffloadChangeInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z @ 0x1C0031040 (-ndisIndicateOffloadChangeInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z.c)
 *     ndisEtwRegisterGuids @ 0x1C0031F90 (ndisEtwRegisterGuids.c)
 *     ?ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z @ 0x1C0032870 (-ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z.c)
 *     NdisAllocateSharedMemory @ 0x1C0033A40 (NdisAllocateSharedMemory.c)
 *     ndisIfCreateCompartmentBlock @ 0x1C00345B0 (ndisIfCreateCompartmentBlock.c)
 *     ?ndisSaveParameters@@YAJPEA_WKPEAXK11@Z @ 0x1C0035A70 (-ndisSaveParameters@@YAJPEA_WKPEAXK11@Z.c)
 *     ?ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z @ 0x1C0035FD0 (-ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036620 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisGetProcessorInformationEx @ 0x1C0036E20 (NdisGetProcessorInformationEx.c)
 *     ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C003735C (-ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C0037A78 (-ndisPostSetOpenRSSParametersHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDI.c)
 *     ?ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0037B84 (-ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     InitializeTelemetryAssertsKM @ 0x1C0038F70 (InitializeTelemetryAssertsKM.c)
 *     ?ndisReadParameter@@YAJPEA_WKPEAXK11@Z @ 0x1C00397C0 (-ndisReadParameter@@YAJPEA_WKPEAXK11@Z.c)
 *     ?Grow@IfIndexRange@@AEAAJK@Z @ 0x1C0039898 (-Grow@IfIndexRange@@AEAAJK@Z.c)
 *     ?ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C003AA34 (-ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMAT.c)
 *     ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1C003B7B0 (-ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z.c)
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C003C170 (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x1C003C528 (-ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     ?ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003D1C0 (-ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisMSetPowerManagementCapabilities @ 0x1C003D278 (ndisMSetPowerManagementCapabilities.c)
 *     memcpy_s @ 0x1C003D520 (memcpy_s.c)
 *     ?ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003EAA0 (-ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReadUpperBindings @ 0x1C005E9AC (ndisReadUpperBindings.c)
 *     NdisMQueryAdapterResources @ 0x1C0060EA0 (NdisMQueryAdapterResources.c)
 *     ndisConvertIdentifierForNetworkInterface @ 0x1C00622C4 (ndisConvertIdentifierForNetworkInterface.c)
 *     ?EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z @ 0x1C0064374 (-EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z.c)
 *     ?EthQueryOpenFilterAddresses@@YAXPEAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@IPEAIPEAY05E@Z @ 0x1C0064418 (-EthQueryOpenFilterAddresses@@YAXPEAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@IPEAIPEAY05E@Z.c)
 *     ?ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x1C00644F8 (-ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z.c)
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00673E8 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     ?ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@EPEAEPEAU1@@Z @ 0x1C0067F8C (-ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     NdisEnumerateFilterModules @ 0x1C0069840 (NdisEnumerateFilterModules.c)
 *     ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C006AAC0 (-ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C006AD4C (-ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C006B3C4 (-ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     NdisWriteErrorLogEntry @ 0x1C006BFB0 (NdisWriteErrorLogEntry.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x1C006E8D4 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C006EB88 (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C006EC04 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C006EFA8 (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C0070470 (-ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIS.c)
 *     ?ndisMGetLogData@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00727F0 (-ndisMGetLogData@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisMWriteLogData @ 0x1C0072B40 (NdisMWriteLogData.c)
 *     ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0076348 (-ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z @ 0x1C0076730 (-ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z.c)
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0076A04 (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1C0077F04 (-ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z.c)
 *     ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007A490 (-ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovVFParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007AFD0 (-ndisOidPreIovVFParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C007CD58 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisOidPrePDQueryConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007CF80 (-ndisOidPrePDQueryConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     NdisMAllocatePort @ 0x1C00820F0 (NdisMAllocatePort.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00843A4 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0086300 (-ndisOidPreRcvFilterParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterQueueParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00864D0 (-ndisOidPreRcvFilterQueueParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreReceiveFilterCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00867E0 (-ndisOidPreReceiveFilterCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0086974 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z @ 0x1C0087C28 (-ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z.c)
 *     ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C00885DC (-ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0088B28 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS_V2@@2@Z @ 0x1C00896FC (-ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1C008CBE8 (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ?ndisTopTcpConnectionOffloadStatus@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008E93C (-ndisTopTcpConnectionOffloadStatus@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z @ 0x1C008F024 (-ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z.c)
 *     ?ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z @ 0x1C008F30C (-ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z.c)
 *     ?ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLOAD@@K@Z @ 0x1C008F4CC (-ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLO.c)
 *     ?ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@Z @ 0x1C008F58C (-ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@.c)
 *     ?ndisQueryWakeUpPatternList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0093598 (-ndisQueryWakeUpPatternList@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisQueryWolPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009374C (-ndisQueryWolPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0095240 (-ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009547C (-ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0095820 (-ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisXlateWakeUpPatternListToWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095B3C (-ndisXlateWakeUpPatternListToWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095E28 (-ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z @ 0x1C009A474 (-ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z.c)
 *     ?ndisOidPostMiniportStats@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009B770 (-ndisOidPostMiniportStats@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostTcpConnectionOffloadParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009BA10 (-ndisOidPostTcpConnectionOffloadParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreFriendlyName@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009BE40 (-ndisOidPreFriendlyName@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreMacAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009C340 (-ndisOidPreMacAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreQosGetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009CFD0 (-ndisOidPreQosGetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreQueryOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009D320 (-ndisOidPreQueryOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreQueryTcpConnectionParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C009D460 (-ndisOidPreQueryTcpConnectionParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PE.c)
 *     ?ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009E644 (-ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009E9A0 (-ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009F0F8 (-ndisSetRestoreMulticastList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisCopyPeriodicReceiveNbl @ 0x1C00A1D74 (ndisCopyPeriodicReceiveNbl.c)
 *     ndisNicAutoPowerInsertIntoSortedArray @ 0x1C00A56F0 (ndisNicAutoPowerInsertIntoSortedArray.c)
 *     ?ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A6124 (-ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSSUpdateOidCacheValue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A64A8 (-ndisSSUpdateOidCacheValue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00A9B90 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ?ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z @ 0x1C00AA578 (-ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z.c)
 *     ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1C00AD76C (-RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z.c)
 *     ?RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z @ 0x1C00AD864 (-RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z.c)
 *     ?RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z @ 0x1C00AD95C (-RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1C00B09D0 (NdisSetSessionCompartmentId.c)
 *     ?ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x1C00B1538 (-ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 *     ndisIfCreateCompartment @ 0x1C00B2058 (ndisIfCreateCompartment.c)
 *     ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00B2930 (-ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1C00B2F88 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1C00B31A4 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B3620 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B4560 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B4D50 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x1C00BE63C (-ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z.c)
 *     NdisCopyFromPacketToPacket @ 0x1C00C0E20 (NdisCopyFromPacketToPacket.c)
 *     NdisCopyFromPacketToPacketSafe @ 0x1C00C1020 (NdisCopyFromPacketToPacketSafe.c)
 *     NdisInitializeWrapper @ 0x1C00C1510 (NdisInitializeWrapper.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x1C00C2744 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     ndisLWM5IndicateReceive @ 0x1C00C44E0 (ndisLWM5IndicateReceive.c)
 *     Duplicate802_11AttachAttributesCommon @ 0x1C00C50EC (Duplicate802_11AttachAttributesCommon.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x1C00F8900 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1C00F8C10 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x1C00F97E0 (ndisNsiGetInterfaceRodInformation.c)
 *     ndisNsiGetInterfaceRosInformation @ 0x1C00F9C30 (ndisNsiGetInterfaceRosInformation.c)
 *     ndisNsiGetInterfaceRwInformation @ 0x1C00F9F50 (ndisNsiGetInterfaceRwInformation.c)
 *     ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z @ 0x1C00FD424 (--$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C00FEAB4 (-ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C0101178 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___ @ 0x1C0102078 (KRegKey--QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___.c)
 *     ?reserve@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C0102FF0 (-reserve@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0103DC0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisEnumerateFilterInstances@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@E$00@Rtl@@@Z @ 0x1C010509C (-ndisEnumerateFilterInstances@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@E$00@Rtl@@@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C0105778 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0105EBC (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x1C0109290 (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 *     ?reserve@?$KArray@E$00@Rtl@@QEAA_N_K@Z @ 0x1C010A17C (-reserve@-$KArray@E$00@Rtl@@QEAA_N_K@Z.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C010C254 (SeSddlSecurityDescriptorFromSDDL.c)
 *     ndisMoveUnicodeStringToNdisVarDataDesc @ 0x1C0117BF8 (ndisMoveUnicodeStringToNdisVarDataDesc.c)
 *     ndisSriovInterfaceReadVFConfig @ 0x1C01185C0 (ndisSriovInterfaceReadVFConfig.c)
 *     ndisSriovInterfaceReadVfConfigBlock @ 0x1C01187B0 (ndisSriovInterfaceReadVfConfigBlock.c)
 *     ndisSriovInterfaceWriteVFConfig @ 0x1C0118C70 (ndisSriovInterfaceWriteVFConfig.c)
 *     ndisSriovInterfaceWriteVfConfigBlock @ 0x1C0118E50 (ndisSriovInterfaceWriteVfConfigBlock.c)
 *     ?NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEAPEAUNDIS_PD_FILTER_HANDLE__@@@Z @ 0x1C011BA30 (-NdisPDPISetReceiveFilter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_FILTER_PARAMETERS@@PEA.c)
 *     WppTraceCallback @ 0x1C0121650 (WppTraceCallback.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C0122888 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C0123AD0 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1C01256A0 (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C0125E40 (NdisMRegisterWdiMiniportDriver.c)
 *     ndisIfUpdateStringIfNeeded @ 0x1C0126E08 (ndisIfUpdateStringIfNeeded.c)
 *     ndisNsiGetIfRcvAddressRodInformation @ 0x1C01278A4 (ndisNsiGetIfRcvAddressRodInformation.c)
 *     SepSddlAddAceToAcl @ 0x1C0127E50 (SepSddlAddAceToAcl.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C0128FF4 (CmRegUtilUcValueSetUcString.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012BDB8 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012CDE8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisEnumerateInterfaces @ 0x1C0131080 (ndisEnumerateInterfaces.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0135820 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x1C0135C84 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 *     NdisMRegisterDevice @ 0x1C0136BB0 (NdisMRegisterDevice.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013747C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisEnumerateInterfaces32 @ 0x1C0139240 (ndisEnumerateInterfaces32.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C0145124 (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C014573C (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisAddMediaTypeToArray@@_Y2INIT@@AJPEA_WKPEAXK11@Z @ 0x1C01471B0 (-ndisAddMediaTypeToArray@@_Y2INIT@@AJPEA_WKPEAXK11@Z.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  void *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  bool v7; // cf
  signed __int64 v8; // rdx
  char v9; // r11
  _BYTE *v10; // rcx
  char v11; // r11
  char *v12; // r11
  signed __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __m128 v17; // xmm1
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __m128 v23; // xmm4
  unsigned __int64 j; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  char *v31; // rcx
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  size_t v34; // r8
  _OWORD *v35; // r11
  __int128 v36; // xmm1
  size_t v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  size_t i; // r9
  size_t v43; // r8

  result = a1;
  if ( Size < 8 )
  {
    if ( Size )
    {
      v7 = Src < a1;
      v8 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 )
      {
        v10 = (char *)a1 + Size;
        do
        {
          v11 = v10[v8 - 1];
          --v10;
          --Size;
          *v10 = v11;
        }
        while ( Size );
      }
      else
      {
        do
        {
          v9 = *((_BYTE *)a1 + v8);
          a1 = (char *)a1 + 1;
          --Size;
          *((char *)a1 - 1) = v9;
        }
        while ( Size );
      }
    }
  }
  else if ( Size > 0x10 )
  {
    if ( Size > 0x20 )
    {
      v12 = (char *)Src + Size;
      v7 = Src < a1;
      v13 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 && v12 > a1 )
      {
        v31 = (char *)a1 + Size;
        v32 = *(_OWORD *)&v31[v13 - 16];
        v33 = (unsigned __int64)(v31 - 16);
        v34 = Size - 16;
        if ( (v33 & 0xF) != 0 )
        {
          v35 = (_OWORD *)v33;
          v33 &= 0xFFFFFFFFFFFFFFF0uLL;
          v36 = *(_OWORD *)(v33 + v13);
          *v35 = v32;
          v32 = v36;
          v34 = v33 - (_QWORD)result;
        }
        v37 = v34 >> 6;
        if ( v34 >> 6 )
        {
          v34 &= 0x3Fu;
          do
          {
            v38 = *(_OWORD *)(v33 + v13 - 16);
            v39 = *(_OWORD *)(v33 + v13 - 32);
            v40 = *(_OWORD *)(v33 + v13 - 48);
            v41 = *(_OWORD *)(v33 + v13 - 64);
            *(_OWORD *)v33 = v32;
            v33 -= 64LL;
            --v37;
            *(_OWORD *)(v33 + 48) = v38;
            *(_OWORD *)(v33 + 32) = v39;
            *(_OWORD *)(v33 + 16) = v40;
            v32 = v41;
          }
          while ( v37 );
        }
        for ( i = v34 >> 4; i; --i )
        {
          *(_OWORD *)v33 = v32;
          v32 = *(_OWORD *)(v33 + v13 - 16);
          v33 -= 16LL;
        }
        v43 = v34 & 0xF;
        if ( v43 )
          *(_OWORD *)(v33 - v43) = *(_OWORD *)(v33 - v43 + v13);
        *(_OWORD *)v33 = v32;
      }
      else
      {
        v14 = *(__m128 *)((char *)a1 + v13);
        v15 = (unsigned __int64)a1 + 16;
        if ( (v15 & 0xF) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = *(__m128 *)(v16 + v13);
          *(__m128 *)result = v14;
          v14 = v17;
          v15 = v16 + 16;
        }
        v18 = (unsigned __int64)result + Size - v15;
        v19 = v18 >> 6;
        if ( v18 >> 6 )
        {
          if ( v19 > 0x1000 )
          {
            v26 = v18 >> 6;
            v18 &= 0x3Fu;
            _mm_prefetch((const char *)(v15 + v13 + 64), 0);
            do
            {
              v27 = *(__m128 *)(v15 + v13);
              v28 = *(__m128 *)(v15 + v13 + 16);
              v29 = *(__m128 *)(v15 + v13 + 32);
              v30 = *(__m128 *)(v15 + v13 + 48);
              _mm_stream_ps((float *)(v15 - 16), v14);
              v15 += 64LL;
              _mm_prefetch((const char *)(v15 + v13 + 64), 0);
              --v26;
              _mm_stream_ps((float *)(v15 - 64), v27);
              _mm_stream_ps((float *)(v15 - 48), v28);
              _mm_stream_ps((float *)(v15 - 32), v29);
              v14 = v30;
            }
            while ( v26 );
            _mm_sfence();
          }
          else
          {
            v18 &= 0x3Fu;
            do
            {
              v20 = *(_OWORD *)(v15 + v13);
              v21 = *(_OWORD *)(v15 + v13 + 16);
              v22 = *(_OWORD *)(v15 + v13 + 32);
              v23 = *(__m128 *)(v15 + v13 + 48);
              *(__m128 *)(v15 - 16) = v14;
              v15 += 64LL;
              --v19;
              *(_OWORD *)(v15 - 64) = v20;
              *(_OWORD *)(v15 - 48) = v21;
              *(_OWORD *)(v15 - 32) = v22;
              v14 = v23;
            }
            while ( v19 );
          }
        }
        for ( j = v18 >> 4; j; --j )
        {
          *(__m128 *)(v15 - 16) = v14;
          v14 = *(__m128 *)(v15 + v13);
          v15 += 16LL;
        }
        v25 = v18 & 0xF;
        if ( v25 )
          *(_OWORD *)(v15 + v25 - 16) = *(_OWORD *)(v15 + v25 - 16 + v13);
        *(__m128 *)(v15 - 16) = v14;
      }
    }
    else
    {
      v6 = *(_OWORD *)((char *)Src + Size - 16);
      *(_OWORD *)a1 = *(_OWORD *)Src;
      *(_OWORD *)((char *)a1 + Size - 16) = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)Src;
    v5 = *(_QWORD *)((char *)Src + Size - 8);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)((char *)a1 + Size - 8) = v5;
  }
  return result;
}
