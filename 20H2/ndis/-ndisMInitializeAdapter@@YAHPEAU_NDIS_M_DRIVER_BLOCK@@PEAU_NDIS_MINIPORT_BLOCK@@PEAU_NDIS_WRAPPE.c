/*
 * XREFs of ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012F258
 * Callers:
 *     ?ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x1C0034FD4 (-ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRI.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0012BE8 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0013F10 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001914C (WPP_RECORDER_SF_d.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001982C (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019D3C (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019E74 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001BB1C (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     ?ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0020BF8 (-ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisInitializeTimer @ 0x1C00233E0 (NdisInitializeTimer.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0023444 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x1C0024864 (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0025E60 (WPP_RECORDER_SF_dd_ea_1C0025E60.c)
 *     NdisWriteConfiguration @ 0x1C00272F0 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C0028340 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C0028580 (NdisCloseConfiguration.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A744 (WPP_RECORDER_SF_Zq.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C002BC30 (NdisConvertNtStatusToNdisStatus.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C002CEB0 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C002CFD4 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     ?EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z @ 0x1C002FAA0 (-EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002FC3C (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x1C0030B40 (-ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 *     ?ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0031318 (-ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0031520 (-ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0032E74 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0035168 (-ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0038794 (-ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCreateNdisSupportedOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0038AD8 (-ndisCreateNdisSupportedOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C0038D40 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00397D0 (-ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0039E60 (-ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z @ 0x1C0039F24 (-ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisGetPciDeviceCustomProperties@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES@@@Z @ 0x1C003A418 (-ndisGetPciDeviceCustomProperties@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PCI_DEVICE_CUSTOM_PROP.c)
 *     ?ndisMReadPciPropertiesFromConfigSpace@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003A884 (-ndisMReadPciPropertiesFromConfigSpace@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x1C003ADD0 (-ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXP.c)
 *     ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003B030 (-ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003D220 (-ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C003E518 (-ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C005F724 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005F9AC (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060078 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     NdisWriteErrorLogEntry @ 0x1C006C690 (NdisWriteErrorLogEntry.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C006CC60 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0070F04 (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C007126C (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0077514 (-ndisIovDeleteDefaultNicSwitch@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0078754 (-ndisIovTeardownVf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z @ 0x1C008E810 (-nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z.c)
 *     ?DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008F420 (-DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0095160 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB73C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FD314 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00FD39C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FD7BC (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FDA50 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00FDA84 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FDCB0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisMInitializeInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FF8A0 (-ndisMInitializeInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x1C00FF8FC (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C0106810 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0106A2C (-ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0106B40 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C010711C (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0107AE8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0109FBC (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010A6D4 (-ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010B54C (-ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0113C94 (-ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDARD@@@Z @ 0x1C0115D98 (-ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDA.c)
 *     ?ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0116D04 (-ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializePDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E698 (-ndisMInitializePDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E6DC (-ndisMRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01210DC (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YA_NPEAX_J@Z @ 0x1C01215F8 (-ndisWaitForKernelObject@@YA_NPEAX_J@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0123200 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C012A010 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C012BA8C (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 *     ?ndisQueueMiniportOnDriver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C012F140 (-ndisQueueMiniportOnDriver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C01379DC (-ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0137C08 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

__int64 __fastcall ndisMInitializeAdapter(
        struct _NDIS_M_DRIVER_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_WRAPPER_CONFIGURATION_HANDLE *a3,
        struct _UNICODE_STRING *a4,
        void *a5)
{
  char v8; // r13
  unsigned __int8 MajorNdisVersion; // bl
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *GeneralAttributes; // r8
  NTSTATUS v11; // eax
  int ReenumerateSelfInterface; // esi
  unsigned int v13; // ebx
  _NDIS_MINIPORT_STATS *PoolWithTag; // rax
  _NDIS_M_DRIVER_BLOCK *v15; // rcx
  unsigned __int8 v16; // bl
  void (__fastcall *ShutdownHandlerEx)(void *, _NDIS_SHUTDOWN_ACTION); // rax
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  void (__fastcall *ReturnNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int); // rcx
  PNDIS_PER_PROCESSOR_SLOT__ *PerProcessorSlot; // rax
  unsigned int v21; // r8d
  unsigned int v22; // edx
  __int64 v23; // rcx
  int v24; // eax
  struct _NDIS_M_DRIVER_BLOCK *v25; // r14
  char v26; // r12
  _DEVICE_RESET_INTERFACE_STANDARD *v27; // rax
  unsigned int v28; // ebx
  NDIS_STATUS v29; // eax
  bool v30; // cf
  __int64 BaseMiniport; // rcx
  int v32; // ebx
  _CM_RESOURCE_LIST *AllocatedResources; // rax
  _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES *PciDeviceCustomProperties; // rax
  int v35; // eax
  struct _NDIS_MINIPORT_BLOCK **p_BaseMiniport; // rdx
  unsigned __int8 v37; // bl
  _NDIS_MINIPORT_INTERRUPT *Interrupt; // rax
  _NDIS_MEDIUM MediaType; // edx
  int v40; // eax
  _NDIS_IF_BLOCK *v41; // rax
  _NDIS_PHYSICAL_PERFORMANCE_COUNTERS *PhysicalPerformanceCounters; // rcx
  char v43; // r15
  char v44; // si
  char v45; // bl
  int v46; // edx
  unsigned __int8 v47; // al
  KIRQL v48; // dl
  int v49; // ecx
  __int64 v50; // rcx
  _NDIS_MINIPORT_OFFLOAD *Offload; // rdx
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int DefaultNicSwitch; // r14d
  unsigned int PnPFlags; // r9d
  unsigned int v57; // r8d
  int v58; // ecx
  unsigned __int8 v59; // al
  unsigned int PnPCapabilities; // r8d
  unsigned int v61; // edx
  unsigned __int32 v62; // ecx
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // ecx
  bool v64; // zf
  bool v65; // cc
  unsigned int v66; // eax
  KIRQL v67; // dl
  unsigned __int8 Filter; // al
  __int64 v69; // rcx
  char v70; // al
  $6E6EC041ADA69F2B12F51A8773885DA4 *v71; // rbx
  unsigned __int8 v72; // al
  NTSTATUS v73; // eax
  char v74; // bl
  NTSTATUS v75; // ebx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  NTSTATUS v77; // ebx
  struct _NDIS_IF_BLOCK *v78; // rdx
  int updated; // ebx
  _NDIS_PHYSICAL_PERFORMANCE_COUNTERS *v80; // rax
  __int64 v81; // rcx
  int OidList; // ebx
  _NDIS_MINIPORT_OFFLOAD *v83; // rax
  _NDIS_MINIPORT_OFFLOAD *v84; // rax
  _NDIS_OFFLOAD *p_TopCapabilities; // rcx
  _NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6> v86; // xmm1
  _NDIS_MINIPORT_OFFLOAD *v87; // rcx
  enum Ndis::ReadBindingsOptions::Flags v88; // r8d
  int v89; // edx
  int v90; // edx
  struct _NDIS_MINIPORT_BLOCK *v91; // rdx
  int v92; // edx
  unsigned int Flags; // eax
  void (__fastcall *v94)(void *, _NDIS_PACKET **, unsigned int); // rax
  unsigned __int8 (__fastcall *v95)(_NDIS_MINIPORT_BLOCK *); // rax
  KIRQL v96; // dl
  unsigned int v97; // ecx
  unsigned int v98; // eax
  unsigned int v99; // eax
  char v100; // bl
  _NDIS_IF_BLOCK *IfBlock; // rax
  _UNICODE_STRING *pAdapterInstanceName; // r9
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  KIRQL v104; // dl
  KIRQL v105; // dl
  _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v106; // rcx
  ULONG OutputBufferLength[2]; // [rsp+20h] [rbp-E0h]
  char v109[8]; // [rsp+28h] [rbp-D8h]
  char v110[8]; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v111; // [rsp+40h] [rbp-C0h] BYREF
  KIRQL NewIrql; // [rsp+41h] [rbp-BFh] BYREF
  char v113; // [rsp+42h] [rbp-BEh]
  char v114; // [rsp+43h] [rbp-BDh]
  unsigned __int8 v115; // [rsp+44h] [rbp-BCh]
  bool v116; // [rsp+45h] [rbp-BBh]
  char v117; // [rsp+46h] [rbp-BAh]
  char v118[4]; // [rsp+48h] [rbp-B8h] BYREF
  char v119; // [rsp+4Ch] [rbp-B4h]
  char v120; // [rsp+4Dh] [rbp-B3h]
  char v121; // [rsp+4Eh] [rbp-B2h]
  char v122; // [rsp+4Fh] [rbp-B1h]
  char i; // [rsp+50h] [rbp-B0h]
  char v124; // [rsp+51h] [rbp-AFh]
  struct _NDIS_M_DRIVER_BLOCK *v125; // [rsp+58h] [rbp-A8h]
  int v126; // [rsp+60h] [rbp-A0h] BYREF
  int v127; // [rsp+64h] [rbp-9Ch]
  int Status; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v129; // [rsp+6Ch] [rbp-94h] BYREF
  BOOL v130; // [rsp+70h] [rbp-90h] BYREF
  int v131; // [rsp+74h] [rbp-8Ch] BYREF
  PVOID ConfigurationHandle; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _DEVICE_OBJECT *InputBuffer; // [rsp+90h] [rbp-70h] BYREF
  int v135; // [rsp+98h] [rbp-68h]
  char v136; // [rsp+9Ch] [rbp-64h]
  char v137; // [rsp+9Dh] [rbp-63h]
  __int16 v138; // [rsp+9Eh] [rbp-62h]
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING Keyword; // [rsp+B8h] [rbp-48h] BYREF
  struct _X_FILTER *v141[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v142; // [rsp+D8h] [rbp-28h]
  struct _NDIS_MINIPORT_INIT_PARAMETERS v143; // [rsp+F0h] [rbp-10h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+130h] [rbp+30h] BYREF
  struct _KEVENT Event; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v146[2]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v147; // [rsp+170h] [rbp+70h]
  char v148[160]; // [rsp+180h] [rbp+80h] BYREF
  char v149[160]; // [rsp+220h] [rbp+120h] BYREF
  char v150[160]; // [rsp+2C0h] [rbp+1C0h] BYREF
  char v151[160]; // [rsp+360h] [rbp+260h] BYREF
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES v152; // [rsp+400h] [rbp+300h] BYREF
  _DWORD v153[6]; // [rsp+4E0h] [rbp+3E0h] BYREF
  GUID InterfaceClassGuid; // [rsp+4F8h] [rbp+3F8h] BYREF
  GUID v155; // [rsp+508h] [rbp+408h] BYREF
  _OWORD v156[3]; // [rsp+518h] [rbp+418h] BYREF
  __int64 v157; // [rsp+548h] [rbp+448h]
  int v158; // [rsp+550h] [rbp+450h]
  char v159; // [rsp+560h] [rbp+460h] BYREF

  v125 = a1;
  memset(&v143, 0, sizeof(v143));
  v131 = 0;
  *(_OWORD *)v141 = 0LL;
  v142 = 0LL;
  DestinationString = 0LL;
  *(_DWORD *)v118 = 1;
  v8 = 0;
  v126 = 1;
  v130 = 0;
  InterfaceClassGuid = GUID_NDIS_LAN_CLASS;
  v129 = 0;
  NewIrql = 0;
  memset(v156, 0, sizeof(v156));
  v117 = 0;
  v122 = 0;
  v113 = 0;
  v111 = 0;
  v114 = 0;
  v120 = 0;
  v124 = 0;
  i = 0;
  v119 = 0;
  v116 = 0;
  LOBYTE(v127) = 0;
  v157 = 0LL;
  v158 = 0;
  memset(&v152, 0, sizeof(v152));
  v121 = 0;
  v155 = GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      13LL,
      0xDu,
      0xDu,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  ndisIfEnsureNsiInitialized();
  MajorNdisVersion = a1->MajorNdisVersion;
  v115 = MajorNdisVersion;
  if ( !ndisReferenceDriver(a1, 2u)
    || (v117 = 1,
        DestinationString.Buffer = (wchar_t *)&v159,
        *(_DWORD *)&DestinationString.Length = 0x1000000,
        RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr),
        RtlAppendUnicodeStringToString(&DestinationString, &a2->BaseName) < 0) )
  {
    v25 = a1;
    goto LABEL_38;
  }
  v11 = IoCreateSymbolicLink(&DestinationString, &a2->FdoName);
  ReenumerateSelfInterface = v11;
  v116 = v11 >= 0 || v11 == -1073741771;
  a2->DeviceContext = a5;
  a2->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
  a2->SavedPacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
  a2->TopIndicateNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferLists;
  a2->TopIndicateLoopbackNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferLists;
  a2->EthRxIndicateHandler = EthFilterDprIndicateReceive;
  a2->EthRxCompleteHandler = EthFilterDprIndicateReceiveComplete;
  a2->SendCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int))NdisMSendComplete;
  a2->SendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))NdisMSendNetBufferListsComplete;
  a2->TDCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int, unsigned int))NdisMTransferDataComplete;
  a2->ResetCompleteHandler = (void (__fastcall *)(void *, int, unsigned __int8))NdisMResetComplete;
  a2->StatusHandler = (void (__fastcall *)(void *, int, void *, unsigned int))NdisMIndicateStatus;
  a2->StatusCompleteHandler = (void (__fastcall *)(void *))NdisQueryOffloadState;
  a2->SendResourcesHandler = (void (__fastcall *)(void *))NdisMSendResourcesAvailable;
  a2->QueryCompleteHandler = (void (__fastcall *)(void *, int))NdisMQueryInformationComplete;
  a2->SetCompleteHandler = (void (__fastcall *)(void *, int))NdisMSetInformationComplete;
  a2->WanSendCompleteHandler = (void (__fastcall *)(void *, void *, int))ndisMWanSendCompleteInternal;
  a2->WanRcvHandler = (void (__fastcall *)(int *, void *, void *, unsigned __int8 *, unsigned int))NdisMWanIndicateReceive;
  a2->WanRcvCompleteHandler = (void (__fastcall *)(void *, void *))NdisMWanIndicateReceiveComplete;
  a2->NormalTopReceive = 1;
  a2->NoFilter.SendNetBufferListsCompleteTracker = (NDIS_NBL_TRACKER_HANDLE__ *)48;
  a2->Next.SendNetBufferListsCompleteTracker = (NDIS_NBL_TRACKER_HANDLE__ *)48;
  a2->NoFilter.SendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisMSendCompleteNetBufferListsInternal;
  a2->NoFilter.SendNetBufferListsCompleteContext = a2;
  a2->NoFilter.SendNetBufferListsCompleteObject = &a2->Header;
  a2->Next.SendNetBufferListsCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisMSendCompleteNetBufferListsInternal;
  a2->Next.SendNetBufferListsCompleteContext = a2;
  a2->Next.SendNetBufferListsCompleteObject = &a2->Header;
  a2->NoFilter.RequestHandle = a2;
  a2->NoFilter.DirectRequestHandle = a2;
  a2->Next.RequestHandle = a2;
  a2->Next.DirectRequestHandle = a2;
  a2->TimeOfInitialization.QuadPart = MEMORY[0xFFFFF78000000014];
  if ( MajorNdisVersion >= 6u )
  {
    DriverHandle = a2->DriverHandle;
    a2->Miniport5HasNdis6Component = 1;
    ReturnNetBufferListsHandler = DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler;
    a2->NoFilter.ReturnNetBufferListsContext = a2->MiniportAdapterContext;
    a2->NoFilter.ReturnNetBufferListsTracker = a2->NblTracker;
    a2->SynchronousReturnPacketHandler = (void (__fastcall *)(void *, _NDIS_PACKET *))ndisSynchReturnPacketsForTranslation;
    a2->NoFilter.ReturnNetBufferListsHandler = ReturnNetBufferListsHandler;
    a2->NoFilter.ReturnNetBufferListsObject = &a2->Header;
    a2->SynchronousReturnPacketContext = a2;
    if ( a1->CoSendNetBufferListsHandler )
      a2->Flags |= 0x20000u;
  }
  else
  {
    v13 = 112 * ndisMaxNumberOfProcessors;
    PoolWithTag = (_NDIS_MINIPORT_STATS *)ExAllocatePoolWithTag(
                                            NonPagedPoolNx,
                                            112 * ndisMaxNumberOfProcessors,
                                            0x2020444Eu);
    a2->BottomIfStats = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_37:
      v25 = a1;
      goto LABEL_38;
    }
    memset(PoolWithTag, 0, v13);
    v15 = a2->DriverHandle;
    v16 = v115;
    a2->DeferredSendHandler = ndisMDeferredSend;
    a2->DisableInterruptHandler = v15->MiniportCharacteristics.Ndis50Chars.DisableInterruptHandler;
    a2->EnableInterruptHandler = v15->MiniportCharacteristics.Ndis50Chars.EnableInterruptHandler;
    a2->NoFilter.ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))ndisReturnNetBufferListsToPackets;
    a2->NoFilter.ReturnNetBufferListsTracker = (NDIS_NBL_TRACKER_HANDLE__ *)64;
    a2->NoFilter.ReturnNetBufferListsContext = a2;
    a2->NoFilter.ReturnNetBufferListsObject = &a2->Header;
    a2->SendHandler = v15->MiniportCharacteristics.Ndis50Chars.SendHandler;
    if ( v16 >= 4u )
    {
      if ( a1->MiniportDriverCharacteristics.DevicePnPEventNotifyHandler )
        a2->InfoFlags |= 0x10u;
      a2->SynchronousReturnPacketHandler = v15->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
      a2->MiniportReturnPacketHandler = v15->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
      a2->SynchronousReturnPacketContext = a2->MiniportAdapterContext;
      if ( a1->MiniportDriverCharacteristics.ShutdownHandlerEx )
      {
        a2->SendFlags |= 1u;
        a2->DeferredSendHandler = ndisMDeferredSendPackets;
        ShutdownHandlerEx = a1->MiniportDriverCharacteristics.ShutdownHandlerEx;
        a2->InfoFlags |= 0x8000000u;
        a2->WSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ShutdownHandlerEx;
      }
      if ( v16 >= 5u )
      {
        a2->InfoFlags |= 0x200u;
        if ( a1->MiniportCharacteristics.Ndis50Chars.CoSendPacketsHandler )
        {
          a2->Flags |= 0x20000u;
          a1->CoOidRequestHandler = (int (__fastcall *)(void *, void *, _NDIS_OID_REQUEST *))ndisMCoOidRequestToRequest;
          a2->NextCoOidRequestHandle = a2;
        }
      }
    }
  }
  ndisReferenceMiniportNoCheck(a2, 0x18u);
  v122 = 1;
  if ( a2->CurrentDevicePowerState == PowerDeviceUnspecified )
  {
    a2->CurrentDevicePowerState = PowerDeviceD0;
    a2->DriverPowerState = PowerDeviceD0;
  }
  ndisQueryPowerCapabilities(a2);
  ndisMInitializeInitMode((char *)a2);
  a2->NblTracker = (NDIS_NBL_TRACKER_HANDLE__ *)NdisNblTrackerRegisterComponent(
                                                  0,
                                                  (__int64)a2,
                                                  (__int64)a2->pAdapterInstanceName);
  PerProcessorSlot = ndisAllocatePerProcessorSlot(0x527374u);
  a2->PeriodicReceivesNblCountIndex = PerProcessorSlot;
  if ( !PerProcessorSlot )
    goto LABEL_37;
  v21 = ndisMaxNumberOfProcessors;
  v22 = 0;
  for ( i = 1; v22 < v21; *(_DWORD *)((char *)a2->PeriodicReceivesNblCountIndex + v23) = 6 )
    v23 = v22++ << 12;
  a2->Flags = a2->Flags & 0xDFFFFFFC | 0x20000002;
  if ( (a1->Flags & 2) != 0 )
  {
    a2->PnPFlags |= 0x100000u;
    if ( !ndisDriverTrackAlloc || (v64 = ndisMiniportTrackAlloc == 0LL, ndisMiniportTrackAlloc = a2, !v64) )
      ndisMiniportTrackAlloc = 0LL;
  }
  if ( ndisDatapathVerifierMode == 1 )
  {
    if ( (a2->PnPFlags & 0x100000) == 0 )
      goto LABEL_34;
  }
  else if ( ndisDatapathVerifierMode != 2 )
  {
    goto LABEL_34;
  }
  a2->DriverVerifyFlags |= 0x800u;
LABEL_34:
  v24 = ndisRssV2Initialize((char *)a2);
  if ( v24 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v110 = v24;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xEu,
        (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
        (char)a2,
        *(_QWORD *)v110);
    }
    goto LABEL_37;
  }
  if ( a1->ReenumerateFailedAdapterHandler && !a2->ReenumerateSelfInterface )
  {
    ReenumerateSelfInterface = ndisQueryReenumerateSelfInterface(
                                 a2->NextDeviceObject,
                                 (PVOID *)&a2->ReenumerateSelfInterface);
    if ( ReenumerateSelfInterface >= 0 )
    {
      v27 = a2->ReenumerateSelfInterface;
      *((_DWORD *)&ConfigObject.Header + 1) = 0;
      *(&ConfigObject.Flags + 1) = 0;
      ConfigurationHandle = 0LL;
      v28 = (v27->SupportedResetTypes >> 1) & 1;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v110 = v27->SupportedResetTypes & 1;
        WPP_RECORDER_SF_dd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)&WPP_RECORDER_INITIALIZED,
          1u,
          0x10u,
          (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
          (v27->SupportedResetTypes & 2) != 0,
          *(_QWORD *)v110);
      }
      ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
      ConfigObject.NdisHandle = a2;
      ConfigObject.Flags = 0;
      v29 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
      Status = v29;
      if ( v29 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v109 = v29;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            1u,
            0x11u,
            (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
            *(_QWORD *)v109);
        }
      }
      else
      {
        *(_QWORD *)&Keyword.Length = 1966108LL;
        memset(&ParameterValue, 0, sizeof(ParameterValue));
        Keyword.Buffer = L"PldrCapability";
        ParameterValue.ParameterData.IntegerData = v28;
        NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
        if ( Status && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v109 = Status;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            1u,
            0x12u,
            (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
            *(_QWORD *)v109);
        }
        NdisCloseConfiguration(ConfigurationHandle);
      }
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v110 = ReenumerateSelfInterface;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          0xFu,
          (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
          (char)a2,
          *(_QWORD *)v110);
      }
      ReenumerateSelfInterface = 0;
    }
  }
  v30 = v115 < 6u;
  a2->State = NdisMiniportInitializing;
  v152.Header.Revision = 2;
  if ( v30 )
  {
    v32 = ((__int64 (__fastcall *)(int *, unsigned int *, PVOID, __int64, struct _NDIS_MINIPORT_BLOCK *, struct _NDIS_WRAPPER_CONFIGURATION_HANDLE *))a1->MiniportDriverCharacteristics.PauseHandler)(
            &v131,
            &v129,
            ndisMediumArray,
            15LL,
            a2,
            a3);
    if ( a2->BusType == PCIBus )
      ReenumerateSelfInterface = ndisGetPciDeviceCustomProperties(a2, &a2->PciDeviceCustomProperties);
  }
  else
  {
    ndisReadMiniportDefaultPortAuthStates(a2);
    v153[1] = a2->DefaultPortSendControlState;
    v153[2] = a2->DefaultPortRcvControlState;
    v153[3] = a2->DefaultPortSendAuthorizationState;
    v153[4] = a2->DefaultPortRcvAuthorizationState;
    AllocatedResources = a2->AllocatedResources;
    v153[0] = 1311104;
    v143.Header = (_NDIS_OBJECT_HEADER)4194689;
    if ( AllocatedResources )
      v143.AllocatedResources = &AllocatedResources->List[0].PartialResourceList;
    v64 = a2->BusType == PCIBus;
    v143.IMDeviceInstanceContext = a2->DeviceContext;
    v143.MiniportAddDeviceContext = a2->AddDeviceContext;
    v143.DefaultPortAuthStates = (_NDIS_PORT_AUTHENTICATION_PARAMETERS *)v153;
    v143.NetLuid.Value = a2->NetLuid.Value;
    v143.IfIndex = a2->IfIndex;
    if ( v64 )
    {
      ReenumerateSelfInterface = ndisGetPciDeviceCustomProperties(a2, &a2->PciDeviceCustomProperties);
      PciDeviceCustomProperties = v143.PciDeviceCustomProperties;
      if ( ReenumerateSelfInterface >= 0 )
        PciDeviceCustomProperties = &a2->PciDeviceCustomProperties;
      v143.PciDeviceCustomProperties = PciDeviceCustomProperties;
    }
    if ( (a2->Flags & 0x100) != 0 )
      v35 = ndisLWMInitializeHandler(a2);
    else
      v35 = ndisMInvokeInitialize(a2, &v143);
    v32 = v35;
    if ( a2->BusType == PCIBus )
      ndisMReadPciPropertiesFromConfigSpace((char *)a2);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v110 = v32;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x13u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)a2,
      *(_QWORD *)v110);
  }
  if ( (byte_1C00E61C2 & 8) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer(
      BaseMiniport,
      &InitializeAdapterInfo,
      &a2->InterfaceGuid,
      (__int64)&a2->InterfaceGuid,
      a2->IfIndex,
      a2->NetLuid.Value,
      1,
      v32);
  a2->Flags &= ~2u;
  if ( v32 )
  {
    a2->State = NdisMiniportHalted;
    *(_QWORD *)&a2->OperStatus = 2LL;
    IfBlock = a2->IfBlock;
    if ( IfBlock && IfBlock->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
    {
      IfBlock->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
      a2->IfBlock->ifOperStatusFlags = a2->OperStatusFlags;
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    if ( a2->InvalidateBlockIoctlVf )
      ndisIovTeardownVf(a2);
    ndisMDeregisterBugCheckHandler(a2);
    *(_DWORD *)v118 = v32;
    if ( !a2->TimerQueue )
    {
      if ( a2->Interrupt )
        goto LABEL_327;
      if ( !a2->InterruptEx )
      {
        v100 = v117;
        v25 = a1;
LABEL_325:
        v8 = 0;
        v114 = 0;
        v120 = 0;
        v119 = 0;
        v121 = 0;
        v122 = v100;
        v124 = v100;
        i = v100;
        goto LABEL_38;
      }
    }
    if ( !a2->Interrupt )
    {
      pAdapterInstanceName = a2->pAdapterInstanceName;
      if ( a2->InterruptEx )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          pAdapterInstanceName,
          "Init failed without deregistering interrupt");
        KeBugCheckEx(0x7Cu, 0xBuLL, (ULONG_PTR)a2, (ULONG_PTR)a2->InterruptEx, 0LL);
      }
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        pAdapterInstanceName,
        "Init failed without canceling timer");
      KeBugCheckEx(0x7Cu, 0xCuLL, (ULONG_PTR)a2, (ULONG_PTR)a2->TimerQueue, 0LL);
    }
LABEL_327:
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      a2->pAdapterInstanceName,
      "Init failed without deregistering interrupt");
    KeBugCheckEx(0x7Cu, 0xBuLL, (ULONG_PTR)a2, (ULONG_PTR)a2->Interrupt, 0LL);
  }
  p_BaseMiniport = &a2->BaseMiniport;
  v8 = 1;
  if ( (a2->PnPFlags & 0x8000000) != 0 )
  {
    ndisReferenceMiniportByName(a2->BindPaths->Paths, p_BaseMiniport, 1, 0x1Fu);
    BaseMiniport = (__int64)a2->BaseMiniport;
    if ( BaseMiniport )
      ndisDereferenceMiniportRef((struct _NDIS_MINIPORT_BLOCK *)BaseMiniport, 0x1Fu);
  }
  else
  {
    *p_BaseMiniport = a2;
  }
  v37 = v115;
  if ( v115 >= 6u )
  {
    MediaType = a2->MediaType;
  }
  else
  {
    Interrupt = a2->Interrupt;
    if ( !Interrupt || Interrupt->IsrRequested || Interrupt->SharedInterrupt )
      a2->Flags &= ~1u;
    else
      a2->Flags |= 1u;
    if ( !a2->ShutdownHandler )
    {
      a2->ShutdownHandler = a1->MiniportCharacteristics.AdapterShutdownHandler;
      a2->ShutdownContext = a2->MiniportAdapterContext;
    }
    BaseMiniport = v129;
    MediaType = *((_DWORD *)ndisMediumArray + v129);
    v152.MediaType = MediaType;
    a2->MediaType = MediaType;
    a2->MiniportMediaType = MediaType;
  }
  a2->State = NdisMiniportPaused;
  if ( (unsigned int)MediaType > NdisMedium1394 || (v40 = 8390, !_bittest(&v40, MediaType)) )
  {
    ndisMRegisterBugCheckHandler((char *)a2);
    if ( a2->MediaType == NdisMediumWan )
    {
      if ( v37 <= 4u )
      {
        if ( (a2->Flags & 0x20000) == 0 )
          a2->DeferredSendHandler = ndisMStartWanSends;
      }
      else if ( (a2->Flags & 0x20000) == 0 )
      {
        *(_DWORD *)v118 = 32;
        v111 = 1;
        v25 = a1;
        goto LABEL_96;
      }
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &NewIrql);
    v47 = ndisSetWakeUpTimer(a2);
    v48 = NewIrql;
    v49 = (unsigned __int8)v127;
    if ( v47 )
      v49 = 1;
    a2->MiniportThread = 0LL;
    v127 = v49;
    KeReleaseSpinLock(&a2->Lock, v48);
    ndisMStartInitMode(a2);
    if ( (unsigned int)ndisCreateNdisSupportedOidList(a2) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v110 = ReenumerateSelfInterface;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x15u,
          (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
          (char)a2,
          *(_QWORD *)v110);
      }
      if ( (byte_1C00E61C2 & 0x10) != 0 )
        McTemplateK0jqxqq_EtwWriteTransfer(
          v50,
          &InitializeAdapterFailed,
          &a2->InterfaceGuid,
          (__int64)&a2->InterfaceGuid,
          a2->IfIndex,
          a2->NetLuid.Value,
          2,
          ReenumerateSelfInterface);
      *(_DWORD *)v118 = 36;
      goto LABEL_95;
    }
    if ( v37 >= 6u )
    {
      v53 = v126;
      if ( a2->MP6SupportPM )
        v53 = 0;
      v126 = v53;
      v52 = 0;
    }
    else
    {
      v152.PowerManagementCapabilitiesEx = (_NDIS_PM_CAPABILITIES *)v156;
      a2->GeneralAttributes = &v152;
      if ( (unsigned int)ndisGetMiniportInfo(a2, &v152, (int *)v118, &v111, &v126)
        || ndisMSetGeneralAttributes(a2, a2->GeneralAttributes) )
      {
        goto LABEL_332;
      }
      Offload = a2->Offload;
      if ( !Offload )
      {
LABEL_134:
        if ( (a2->Flags & 0x180) != 0
          || (v54 = ndisCheckNetworkInterfaceDataMismatch(a2, a2->GeneralAttributes),
              !(unsigned int)NdisConvertNtStatusToNdisStatus(v54)) )
        {
          DefaultNicSwitch = ndisIovCreateDefaultNicSwitch(a2);
          if ( !DefaultNicSwitch )
          {
            ndisMNotifyMachineName(a2);
            PnPFlags = a2->PnPFlags;
            if ( (PnPFlags & 0x8001) != 0 )
            {
              v58 = 1;
            }
            else
            {
              v57 = a2->PnPFlags;
              v58 = DefaultNicSwitch + 1;
              if ( (a2->DriverHandle->Flags & (unsigned __int8)(DefaultNicSwitch + 1)) == 0 )
                goto LABEL_146;
            }
            v57 = a2->PnPFlags;
            if ( a2->MediaType < (unsigned int)NdisMediumMax )
            {
              if ( v126 )
                v57 = PnPFlags & 0xFFFFFFFE;
              else
                v57 = v58 | PnPFlags;
              a2->PnPFlags = v57;
            }
LABEL_146:
            if ( ((v57 & 0x200000) != 0 && ndisAoAcCapable || (a2->FilterPnPFlags & 0x200) != 0)
              && (unsigned int)(a2->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2
              && (a2->PMAdminConfig.Value & 0xC) == 0 )
            {
              DisableMagicPacketKeyword(a2);
            }
            NdisInitializeTimer(&a2->MediaDisconnectTimer, (PNDIS_TIMER_FUNCTION)ndisMediaDisconnectTimeout, a2);
            KeInitializeEvent(&a2->WaitWakeIrpCompleted, NotificationEvent, 1u);
            if ( ((a2->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a2->FilterPnPFlags & 0x200) != 0)
              && ndisEnforceDisconnectedStandby )
            {
              a2->PnPCapabilities |= 0x10u;
            }
            ndisUpdatePMCurrentCapabilities(a2);
            if ( (a2->PnPFlags & 1) != 0 )
            {
              v59 = ndisCheckMiniportWakeUpCapable(a2);
              PnPCapabilities = a2->PnPCapabilities;
              if ( (PnPCapabilities & 8) == 0 )
              {
                v61 = a2->PnPFlags | 0x20;
                v62 = a2->PMAdvertisedCapabilities.MinLinkChangeWakeUp - 2;
                a2->PnPFlags = v61;
                if ( v62 <= 2 )
                  a2->PMCurrentParameters.WakeUpFlags |= 1u;
                if ( (PnPCapabilities & 0x10) == 0 && v59 )
                {
                  MinPatternWakeUp = a2->PMAdvertisedCapabilities.MinPatternWakeUp;
                  if ( (unsigned int)(MinPatternWakeUp - 2) <= 1 || MinPatternWakeUp == NdisDeviceStateD3 )
                  {
                    v61 |= 0x40u;
                    a2->PnPFlags = v61;
                  }
                  if ( (unsigned int)(a2->PMAdvertisedCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
                  {
                    a2->PMCurrentParameters.EnabledWoLPacketPatterns |= 2u;
                    v64 = a2->MajorNdisVersion == 6;
                    v65 = a2->MajorNdisVersion <= 6u;
                    a2->PnPFlags = v61 | 0x40;
                    if ( !v65 || v64 && a2->MinorNdisVersion >= 0x14u )
                    {
                      DefaultNicSwitch = ndisAddWoLMagicPacket(a2);
                      if ( DefaultNicSwitch )
                      {
                        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                        {
                          *(_DWORD *)v110 = DefaultNicSwitch;
                          WPP_RECORDER_SF_qL(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            2u,
                            1u,
                            0x16u,
                            (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
                            (char)a2,
                            *(_QWORD *)v110);
                        }
                      }
                    }
                  }
                }
                if ( (a2->Flags & 0x80u) == 0 )
                {
                  v66 = a2->PnPFlags;
                  if ( (v66 & 0x40) != 0 )
                  {
                    if ( !a2->WaitWakeIrp )
                    {
                      a2->PnPFlags = v66 & 0xFFFFFBFF;
                      DefaultNicSwitch = ndisRequestWaitWake(a2, (PREQUEST_POWER_COMPLETE)ndisGenericWaitWakeCallback);
                    }
                  }
                  else
                  {
                    ndisCancelWaitWake(a2);
                  }
                }
              }
            }
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &NewIrql);
            if ( a2->MediaConnectState == MediaConnectStateDisconnected )
              ndisSetMediaDisconnectTimer(a2);
            v67 = NewIrql;
            a2->MiniportThread = 0LL;
            KeReleaseSpinLock(&a2->Lock, v67);
            a2->D0CompleteSignalWorkItem.WorkItem.Context = a2;
            a2->D0CompleteSignalWorkItem.WorkItem.Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisSignalD0CompleteWorkItem;
            a2->DevicePowerOnWorkItem.Workitem.WorkerRoutine = (void (__fastcall *)(void *))ndisDevicePowerOn;
            a2->DevicePowerOnWorkItem.Workitem.Parameter = &a2->DevicePowerOnWorkItem;
            a2->DevicePowerOnWorkItem.Workitem.List.Flink = 0LL;
            a2->DevicePowerDownWorkItem.Workitem.WorkerRoutine = (void (__fastcall *)(void *))ndisDevicePowerDown;
            a2->DevicePowerDownWorkItem.Workitem.Parameter = &a2->DevicePowerDownWorkItem;
            a2->DevicePowerDownWorkItem.Workitem.List.Flink = 0LL;
            if ( (a2->PMAdvertisedCapabilities.Flags & 6) != 0 )
              ndisSelectiveSuspendInitialize(a2);
            if ( (a2->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a2->FilterPnPFlags & 0x200) != 0 )
            {
              ndisAoAcInitialize(a2);
              ndisReadModernStandyWoLMagicPacketKeywords(a2);
              ndisMRegisterPDCTaskClient(a2);
              ndisMInitializePDCTaskClient((char *)a2);
            }
            if ( a2->MediaType )
            {
              Filter = nullCreateFilter(v141);
              v69 = 0LL;
              if ( !Filter )
              {
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    3u,
                    1u,
                    0x18u,
                    (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
                    a2);
                *(_DWORD *)v118 = 30;
                v111 = 1;
                if ( (byte_1C00E61C2 & 0x10) != 0 )
                  McTemplateK0jqxqq_EtwWriteTransfer(
                    30LL,
                    &InitializeAdapterFailed,
                    &a2->InterfaceGuid,
                    (__int64)&a2->InterfaceGuid,
                    a2->IfIndex,
                    a2->NetLuid.Value,
                    6,
                    30);
LABEL_197:
                v69 = 0LL;
LABEL_199:
                if ( a2->MiniportMediaType == NdisMediumNative802_11 && v37 >= 6u )
                {
                  v71 = &a2->600;
                  v72 = nullCreateFilter((struct _X_FILTER **)&a2->600);
                  v69 = 0LL;
                  if ( !v72 )
                  {
                    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      WPP_RECORDER_SF_q(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        3u,
                        1u,
                        0x19u,
                        (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
                        a2);
                    v71->Reserved1 = 0LL;
                    *(_DWORD *)v118 = 30;
                    v111 = 1;
                    if ( (byte_1C00E61C2 & 0x10) == 0 )
                      goto LABEL_95;
                    McTemplateK0jqxqq_EtwWriteTransfer(
                      30LL,
                      &InitializeAdapterFailed,
                      &a2->InterfaceGuid,
                      (__int64)&a2->InterfaceGuid,
                      a2->IfIndex,
                      a2->NetLuid.Value,
                      7,
                      30);
                    goto LABEL_206;
                  }
                  *(_QWORD *)(v71->Reserved1 + 296) = a2;
                }
                if ( a2->MediaType == NdisMedium802_3 )
                  a2->CheckPacketFilters = 1;
                if ( (a2->Flags & 0x180) == 0 )
                {
                  v73 = IoWMIRegistrationControl(a2->DeviceObject, 1u);
                  v69 = 0LL;
                  v74 = v73;
                  if ( v73 < 0 )
                  {
                    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    {
                      *(_DWORD *)v110 = v73;
                      WPP_RECORDER_SF_qL(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        3u,
                        1u,
                        0x1Au,
                        (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
                        (char)a2,
                        *(_QWORD *)v110);
                    }
                    if ( (byte_1C00E61C2 & 0x10) != 0 )
                      McTemplateK0jqxqq_EtwWriteTransfer(
                        v69,
                        &InitializeAdapterFailed,
                        &a2->InterfaceGuid,
                        (__int64)&a2->InterfaceGuid,
                        a2->IfIndex,
                        a2->NetLuid.Value,
                        8,
                        v74);
                    *(_DWORD *)v118 = 31;
                    v111 = 1;
                    goto LABEL_219;
                  }
                  v120 = 1;
                }
                if ( v111 )
                {
LABEL_219:
                  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    *(_DWORD *)v110 = v111;
                    WPP_RECORDER_SF_qL(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      3u,
                      1u,
                      0x1Bu,
                      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
                      (char)a2,
                      *(_QWORD *)v110);
                  }
                  OutputBufferLength[0] = *(_DWORD *)v118;
                  NdisWriteErrorLogEntry(a2, 0xC000138D, 2u, 4278255360LL, *(_QWORD *)OutputBufferLength);
LABEL_206:
                  v25 = v125;
                  goto LABEL_38;
                }
                v64 = (a2->Flags & 0x100) == 0;
                *(_DWORD *)v118 = 1;
                if ( v64 )
                {
                  v26 = 0;
                  v75 = IoRegisterDeviceInterface(
                          a2->PhysicalDeviceObject,
                          &InterfaceClassGuid,
                          &a2->BaseName,
                          &a2->SymbolicLinkName);
                  if ( v75 < 0 )
                  {
                    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    {
                      *(_DWORD *)v110 = v75;
                      WPP_RECORDER_SF_qL(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        2u,
                        1u,
                        0x1Cu,
                        (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
                        (char)a2,
                        *(_QWORD *)v110);
                    }
                    if ( (byte_1C00E61C2 & 0x10) != 0 )
                      McTemplateK0jqxqq_EtwWriteTransfer(
                        v69,
                        &InitializeAdapterFailed,
                        &a2->InterfaceGuid,
                        (__int64)&a2->InterfaceGuid,
                        a2->IfIndex,
                        a2->NetLuid.Value,
                        10,
                        v75);
                    *(_DWORD *)v118 = 35;
LABEL_229:
                    v25 = v125;
                    goto LABEL_97;
                  }
                  SriovCurrentCapabilities = a2->SriovCurrentCapabilities;
                  v114 = 1;
                  if ( SriovCurrentCapabilities && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
                  {
                    v77 = IoRegisterDeviceInterface(
                            a2->PhysicalDeviceObject,
                            &v155,
                            0LL,
                            &a2->DevinterfaceVirtSymbolicLinkName);
                    if ( DefaultNicSwitch < 0 )
                    {
                      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      {
                        *(_DWORD *)v110 = v77;
                        WPP_RECORDER_SF_qL(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          2u,
                          1u,
                          0x1Du,
                          (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
                          (char)a2,
                          *(_QWORD *)v110);
                      }
                      if ( (byte_1C00E61C2 & 0x10) != 0 )
                        McTemplateK0jqxqq_EtwWriteTransfer(
                          v69,
                          &InitializeAdapterFailed,
                          &a2->InterfaceGuid,
                          (__int64)&a2->InterfaceGuid,
                          a2->IfIndex,
                          a2->NetLuid.Value,
                          0,
                          v77);
                      *(_DWORD *)v118 = 34;
                      v111 = 1;
                      goto LABEL_229;
                    }
                    v121 = 1;
                  }
                  a2->DeviceObject->Flags &= ~0x80u;
                }
                GeneralAttributes = a2->GeneralAttributes;
                if ( GeneralAttributes )
                {
                  v78 = a2->IfBlock;
                  if ( !v78 )
                  {
                    updated = -1073741823;
LABEL_246:
                    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    {
                      *(_DWORD *)v110 = updated;
                      WPP_RECORDER_SF_qL(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        2u,
                        1u,
                        0x1Eu,
                        (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
                        (char)a2,
                        *(_QWORD *)v110);
                    }
                    if ( (byte_1C00E61C2 & 0x10) != 0 )
                      McTemplateK0jqxqq_EtwWriteTransfer(
                        v69,
                        &InitializeAdapterFailed,
                        &a2->InterfaceGuid,
                        (__int64)&a2->InterfaceGuid,
                        a2->IfIndex,
                        a2->NetLuid.Value,
                        11,
                        updated);
                    goto LABEL_94;
                  }
                  updated = ndisIfUpdateInterfaceOnInitialize(a2, v78, GeneralAttributes);
                }
                else
                {
                  updated = -1073741823;
                }
                if ( updated )
                  goto LABEL_246;
                v64 = (a2->PnPFlags & 0x200000) == 0;
                v119 = 1;
                if ( !v64 )
                {
                  v80 = (_NDIS_PHYSICAL_PERFORMANCE_COUNTERS *)ExAllocatePoolWithTag(
                                                                 NonPagedPoolNx,
                                                                 0x20uLL,
                                                                 0x7763444Eu);
                  a2->PhysicalPerformanceCounters = v80;
                  if ( v80 )
                  {
                    *(_OWORD *)&v80->DevicePowerState = 0LL;
                    *(_OWORD *)&v80->Uptime100ns = 0LL;
                  }
                }
                if ( !a2->OidList )
                {
                  v146[0] = 0LL;
                  v146[1] = a2;
                  v147 = 0LL;
                  OidList = ndisQueryOidList((struct _NDIS_USER_OPEN_CONTEXT *)v146);
                  if ( OidList )
                  {
                    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    {
                      *(_DWORD *)v110 = OidList;
                      WPP_RECORDER_SF_qL(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        2u,
                        1u,
                        0x1Fu,
                        (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
                        (char)a2,
                        *(_QWORD *)v110);
                    }
                    if ( (byte_1C00E61C2 & 0x10) != 0 )
                      McTemplateK0jqxqq_EtwWriteTransfer(
                        v81,
                        &InitializeAdapterFailed,
                        &a2->InterfaceGuid,
                        (__int64)&a2->InterfaceGuid,
                        a2->IfIndex,
                        a2->NetLuid.Value,
                        12,
                        OidList);
                  }
                }
                v83 = a2->Offload;
                if ( v83 )
                {
                  if ( v83->SupportsOffload == 1 )
                  {
                    v83->SupportsTopOffload = 1;
                    v84 = a2->Offload;
                    p_TopCapabilities = &v84->TopCapabilities;
                    v84 = (_NDIS_MINIPORT_OFFLOAD *)((char *)v84 + 8);
                    *(_OWORD *)&p_TopCapabilities->Header.Type = *(_OWORD *)&v84->SupportsOffload;
                    *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&v84->MiniportCurrentConfig.Checksum.IPv4Transmit
                                                                                                  + 4);
                    *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&v84->MiniportCurrentConfig.Checksum.IPv6Transmit
                                                                                                  + 4);
                    *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)&v84->MiniportCurrentConfig.LsoV1.IPv4.MaxOffLoadSize;
                    *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options = *(_OWORD *)&v84->MiniportCurrentConfig.IPsecV1.Supported.AhEspCombined;
                    *(_OWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation = *(_OWORD *)&v84->MiniportCurrentConfig.IPsecV1.IPv4AH;
                    *(_OWORD *)&p_TopCapabilities->LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&v84->MiniportCurrentConfig.LsoV2.IPv4.MinSegmentCount;
                    p_TopCapabilities = (_NDIS_OFFLOAD *)((char *)p_TopCapabilities + 128);
                    v86 = *(_NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6> *)((char *)&v84->MiniportCurrentConfig.LsoV2.IPv6
                                                                                 + 12);
                    v84 = (_NDIS_MINIPORT_OFFLOAD *)((char *)v84 + 128);
                    p_TopCapabilities[-1].UdpSegmentation.IPv6 = v86;
                    *(_OWORD *)&p_TopCapabilities->Header.Type = *(_OWORD *)&v84->SupportsOffload;
                    *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&v84->MiniportCurrentConfig.Checksum.IPv4Transmit
                                                                                                  + 4);
                    *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&v84->MiniportCurrentConfig.Checksum.IPv6Transmit
                                                                                                  + 4);
                    *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)&v84->MiniportCurrentConfig.LsoV1.IPv4.MaxOffLoadSize;
                    *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options = *(_OWORD *)&v84->MiniportCurrentConfig.IPsecV1.Supported.AhEspCombined;
                    *(_QWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation = *(_QWORD *)&v84->MiniportCurrentConfig.IPsecV1.IPv4AH;
                    ndisMergeOffloadCapsAndRegistry(a2, &a2->Offload->TopCapabilities);
                    v83 = a2->Offload;
                  }
                  if ( v83->SupportsTcpConnectionOffload == 1 )
                  {
                    v83->SupportsTopTcpConnectionOffload = 1;
                    v87 = a2->Offload;
                    *(_OWORD *)&v87->TopTcpConnectionOffloadCapabilities.Header.Type = *(_OWORD *)&v87->MiniportTcpConnectionOffloadCurrentConfig.Header.Type;
                    v87->TopTcpConnectionOffloadCapabilities.Flags = v87->MiniportTcpConnectionOffloadCurrentConfig.Flags;
                  }
                }
                v25 = v125;
                if ( ndisQueueMiniportOnDriver(a2, v125) )
                {
                  v26 = 1;
                  ndisSetDeviceInterfaceState(a2, 1u);
                  if ( (int)Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, v88) < 0 )
                  {
                    *(_DWORD *)v118 = 39;
                    v111 = 1;
                    goto LABEL_97;
                  }
                  ndisPcwNotifyMiniportCreation(a2);
                  Ndis::BindEngine::BeginPolicyUpdates(&a2->BindEngine);
                  if ( Ndis::BindState::SetBinding(
                         &a2->Bindings.Miniport,
                         BindingDisabled,
                         Reason_MiniportDeviceNotStarted) )
                  {
                    memset(v148, 0, sizeof(v148));
                    if ( (unsigned __int8)byte_1C00E448B >= 4u )
                    {
                      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v148);
                      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                        WPP_RECORDER_SF_Zq(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v89,
                          0x1Cu,
                          0x20u,
                          (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
                          *(unsigned __int16 **)&v148[8],
                          *(_QWORD *)v148);
                    }
                  }
                  if ( Ndis::BindState::SetPause(&a2->Bindings.Miniport, DatapathRunning, PauseReason_InitialPause) )
                  {
                    memset(v149, 0, sizeof(v149));
                    if ( (unsigned __int8)byte_1C00E448B >= 4u )
                    {
                      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v149);
                      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                        WPP_RECORDER_SF_Zq(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v90,
                          0x1Cu,
                          0x21u,
                          (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
                          *(unsigned __int16 **)&v149[8],
                          *(_QWORD *)v149);
                    }
                  }
                  if ( Ndis::BindState::SetPause(&a2->Bindings.Miniport, DatapathRunning, PauseReason_RemovingMiniport) )
                  {
                    memset(v150, 0, sizeof(v150));
                    if ( (unsigned __int8)byte_1C00E448B >= 4u )
                    {
                      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v150);
                      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                        WPP_RECORDER_SF_Zq(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          (int)v91,
                          0x1Cu,
                          0x22u,
                          (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
                          *(unsigned __int16 **)&v150[8],
                          *(_QWORD *)v150);
                    }
                  }
                  if ( (a2->Flags & 0x10000) == 0
                    && Ndis::BindState::SetBinding(&a2->Bindings.Miniport, BindingDisabled, Reason_DefaultPortNotActive) )
                  {
                    memset(v151, 0, sizeof(v151));
                    if ( (unsigned __int8)byte_1C00E448B >= 4u )
                    {
                      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v151);
                      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                        WPP_RECORDER_SF_Zq(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          (int)v91,
                          0x1Cu,
                          0x23u,
                          (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
                          *(unsigned __int16 **)&v151[8],
                          *(_QWORD *)v151);
                    }
                  }
                  Ndis::BindEngine::EndPolicyUpdates(&a2->BindEngine, v91);
                  Ndis::BindEngine::ApplyBindChanges(&a2->BindEngine, RunSynchronous, 0);
                  if ( (a2->Flags & 0x100) == 0 )
                  {
                    v130 = (_BYTE)ndisAcOnLine == 1;
                    ndisNotifyMiniports(a2, v92, &v130);
                  }
                  v30 = v115 < 6u;
                  a2->EthDB = v141[0];
                  if ( v30 )
                  {
                    a2->SendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPackets;
                    Flags = a2->Flags;
                    if ( (Flags & 0x40000) != 0 )
                    {
                      v94 = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsXToMiniport;
                    }
                    else
                    {
                      if ( (Flags & 0x40) != 0 )
                      {
                        a2->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsSGToMiniport;
                        a2->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsSGToMiniport;
                        v95 = ndisMDeferredSendPacketsSG;
                        if ( !v25->MiniportDriverCharacteristics.ShutdownHandlerEx )
                          v95 = ndisMDeferredSendSG;
                        a2->DeferredSendHandler = v95;
                        goto LABEL_296;
                      }
                      v94 = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToMiniport;
                    }
                    a2->FinalSendPacketsHandler = v94;
                    a2->NextSendPacketsHandler = v94;
                  }
                  else
                  {
                    a2->NextSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToNetBufferLists;
                    a2->FinalSendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMSendPacketsToNetBufferLists;
                  }
LABEL_296:
                  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &NewIrql);
                  ndisMSetIndicatePacketHandler(a2);
                  v96 = NewIrql;
                  a2->MiniportThread = 0LL;
                  KeReleaseSpinLock(&a2->Lock, v96);
                  if ( ndisEnforceDisconnectedStandby )
                  {
                    if ( (v97 = a2->PnPFlags, (v97 & 0x200000) != 0) && ndisAoAcCapable
                      || (a2->FilterPnPFlags & 0x200) != 0 )
                    {
                      v98 = a2->PnPCapabilities;
                      if ( (v98 & 0x10) == 0 )
                      {
                        a2->PnPFlags = v97 & 0xFFFFFFBF;
                        a2->PnPCapabilities = v98 | 0x10;
                        ndisUpdateAndIndicatePMCapabilities(a2);
                      }
                    }
                  }
                  if ( ((a2->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a2->FilterPnPFlags & 0x200) != 0)
                    && a2->PhysicalMediumType == NdisPhysicalMedium802_3 )
                  {
                    v64 = a2->PMHardwareCapabilities.Header.Revision == 2;
                    InputBuffer = a2->PhysicalDeviceObject;
                    v138 = 0;
                    v135 = 4;
                    v136 = 1;
                    if ( !v64
                      || (a2->PMHardwareCapabilities.SupportedWoLPacketPatterns & 1) == 0
                      || a2->PMHardwareCapabilities.NumTotalWoLPatterns < 0x10
                      || a2->PMHardwareCapabilities.MaxWoLPatternSize < 0x4A
                      || (unsigned int)(a2->PMHardwareCapabilities.MinPatternWakeUp - 3) > 1
                      || (a2->PMHardwareCapabilities.SupportedWakeUpEvents & 1) == 0
                      || (v99 = a2->PMHardwareCapabilities.SupportedProtocolOffloads & 3, v137 = 1, (_BYTE)v99 != 3) )
                    {
                      v137 = 0;
                    }
                    ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
                  }
                  ndisPktMonMiniportRegister(a2);
                  v100 = 0;
                  *(_DWORD *)v118 = 0;
                  v117 = 0;
                  v116 = 0;
                  goto LABEL_325;
                }
LABEL_38:
                v26 = 0;
                if ( !*(_DWORD *)v118 )
                  goto LABEL_98;
                goto LABEL_97;
              }
            }
            else
            {
              v70 = EthCreateFilter(
                      a2->GeneralAttributes->MaxMulticastListSize,
                      a2->GeneralAttributes->CurrentMacAddress,
                      v141);
              v69 = 0LL;
              if ( !v70 )
              {
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    3u,
                    1u,
                    0x17u,
                    (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
                    a2);
                *(_DWORD *)v118 = 9;
                v111 = 1;
                if ( (byte_1C00E61C2 & 0x10) != 0 )
                  McTemplateK0jqxqq_EtwWriteTransfer(
                    9LL,
                    &InitializeAdapterFailed,
                    &a2->InterfaceGuid,
                    (__int64)&a2->InterfaceGuid,
                    a2->IfIndex,
                    a2->NetLuid.Value,
                    4,
                    9);
                goto LABEL_197;
              }
            }
            v141[0]->Miniport = a2;
            goto LABEL_199;
          }
        }
LABEL_332:
        v25 = v125;
        goto LABEL_38;
      }
      v52 = ndisMSetOffloadAttributes(a2, &Offload->MiniportInitialConfig, &Offload->MiniportInitialConfig, 0LL, 0LL);
    }
    if ( v52 )
      goto LABEL_332;
    goto LABEL_134;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x14u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      a2);
  if ( (byte_1C00E61C3 & 0x10) != 0 )
    McTemplateK0jqxd_EtwWriteTransfer(
      BaseMiniport,
      &UnsupportedMiniportMediaType,
      &a2->InterfaceGuid,
      (__int64)&a2->InterfaceGuid,
      a2->IfIndex,
      a2->NetLuid.Value,
      a2->MediaType);
LABEL_94:
  *(_DWORD *)v118 = 32;
  v111 = 1;
LABEL_95:
  v25 = v125;
LABEL_96:
  v26 = v113;
LABEL_97:
  Ndis::BindRegistry::Reload((Ndis::BindRegistry *)a2, 0LL, (enum Ndis::ReadBindingsOptions::Flags)GeneralAttributes);
  ndisNotifyBindFailureOnUnboundProtocols(a2);
LABEL_98:
  if ( v119 )
  {
    *(_QWORD *)&a2->OperStatus = 2LL;
    v41 = a2->IfBlock;
    if ( v41->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
    {
      v41->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
      a2->IfBlock->ifOperStatusFlags = a2->OperStatusFlags;
      ndisNsiSyncMiniportOperStatusNotification(a2);
    }
    PhysicalPerformanceCounters = a2->PhysicalPerformanceCounters;
    if ( PhysicalPerformanceCounters )
    {
      ExFreePoolWithTag(PhysicalPerformanceCounters, 0);
      a2->PhysicalPerformanceCounters = 0LL;
    }
  }
  v43 = v120;
  if ( v120 )
  {
    IoWMIRegistrationControl(a2->DeviceObject, 2u);
    v43 = 0;
  }
  v44 = v114;
  if ( v114 )
  {
    IoSetDeviceInterfaceState(&a2->DevinterfaceNetSymbolicLinkName, 0);
    v44 = 0;
  }
  v45 = v121;
  if ( v121 )
  {
    IoSetDeviceInterfaceState(&a2->DevinterfaceVirtSymbolicLinkName, 0);
    RtlFreeUnicodeString(&a2->DevinterfaceVirtSymbolicLinkName);
    a2->DevinterfaceVirtSymbolicLinkName.Buffer = 0LL;
    v45 = 0;
  }
  if ( v8 )
  {
    ndisIovDeleteDefaultNicSwitch(a2);
    v30 = (_BYTE)v127 != 0;
    LOBYTE(v127) = -(char)v127;
    v46 = (v44 != 0 ? 0x40 : 0) | (v43 != 0 ? 130 : 128) | (v30 ? 8 : 0) | (v45 != 0 ? 0x100 : 0);
    v30 = v114 != 0;
    v114 = -v114;
    ndisMCommonHaltMiniport(a2, (v30 ? 4 : 0) | v46);
    ndisMDeregisterBugCheckHandler(a2);
  }
  if ( v124 )
  {
    if ( (a2->Flags & 0x40) != 0 )
    {
      MiniportSGDmaBlock = a2->MiniportSGDmaBlock;
      if ( MiniportSGDmaBlock )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            1u,
            0x24u,
            (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
            a2);
          MiniportSGDmaBlock = a2->MiniportSGDmaBlock;
        }
        ndisDereferenceDmaAdapter(MiniportSGDmaBlock);
      }
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &NewIrql);
    if ( a2->MiniportSGDmaBlock )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v104 = NewIrql;
      a2->MiniportSGDmaBlock->DmaResourcesReleasedEvent = &Event;
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v104);
      if ( !ndisWaitForKernelObject(&Event, 30000LL) )
        goto LABEL_344;
    }
    else
    {
      v105 = NewIrql;
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v105);
    }
    a2->Flags &= ~0x40u;
  }
LABEL_344:
  if ( v26 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0x25u,
        (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
        a2);
    ndisDeQueueMiniportOnDriver(a2, v25);
  }
  if ( v116 )
    IoDeleteSymbolicLink(&DestinationString);
  if ( v122 )
    ndisDereferenceMiniportRef(a2, 0x18u);
  if ( v117 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0x26u,
        (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
        a2);
    ndisDereferenceDriver(v25, 0, 2u);
  }
  v106 = a2->GeneralAttributes;
  if ( v106 )
  {
    if ( v115 >= 6u )
      ExFreePoolWithTag(v106, 0);
    a2->GeneralAttributes = 0LL;
  }
  if ( i )
  {
    ndisFreePerProcessorSlot((ULONG_PTR)a2->PeriodicReceivesNblCountIndex, 0x527374uLL);
    a2->PeriodicReceivesNblCountIndex = 0LL;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v110 = *(_DWORD *)v118;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x27u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)a2,
      *(_QWORD *)v110);
  }
  return *(unsigned int *)v118;
}
