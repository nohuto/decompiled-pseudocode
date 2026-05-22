/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180067514
 * Callers:
 *     ?OnTargetWithFocusChanged@GameControllerRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x18001A150 (-OnTargetWithFocusChanged@GameControllerRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x180022324 (-Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x180022F0C (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18002308C (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x1800284D0 (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18002C61C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?RuntimeClassInitialize@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJXZ @ 0x18002C8E4 (-RuntimeClassInitialize@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180031F3C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x18003217C (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x180033F70 (-Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z.c)
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180034490 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x180038850 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 *     ?SetCallbackOnInputThreadEvent@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAX@Z @ 0x18003ACA0 (-SetCallbackOnInputThreadEvent@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inte.c)
 *     ??$init_once_nothrow@V_lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_@@PEA_N@Z @ 0x18004214C (--$init_once_nothrow@V_lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_l.c)
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18008E184 (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x180093008 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevice@@PEAX@Z @ 0x18009D4A0 (-RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevic.c)
 *     ?WriteOutputReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJPEAEK@Z @ 0x18009D6B0 (-WriteOutputReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJPEAEK@Z.c)
 *     ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z @ 0x18009F420 (-OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATU.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x18009F524 (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     ?Initialize@ConsumerControlManager@@AEAAJXZ @ 0x18009FFE0 (-Initialize@ConsumerControlManager@@AEAAJXZ.c)
 *     ?OpenInterface@PnpDevice@@QEAAJKK@Z @ 0x1800A098C (-OpenInterface@PnpDevice@@QEAAJKK@Z.c)
 *     ?OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z @ 0x1800A0AA4 (-OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z.c)
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A3310 (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     wil::init_once_nothrow__lambda_3ea8e1ac958ff1e75d916de58c44b505___ @ 0x1800A4834 (wil--init_once_nothrow__lambda_3ea8e1ac958ff1e75d916de58c44b505___.c)
 *     ?QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJV?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800D1EEC (-QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@.c)
 *     ?RuntimeClassInitialize@SpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@QEAAJXZ @ 0x1800D8B9C (-RuntimeClassInitialize@SpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@QEAAJX.c)
 *     wil::init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___ @ 0x1801458A8 (wil--init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___.c)
 *     wil::init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___ @ 0x180146D8C (wil--init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___.c)
 *     ?Cancel@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x180159EC0 (-Cancel@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@IEAAJXZ @ 0x1801618A4 (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@IEAAJXZ.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180162A58 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 *     ?RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUISpatialGraphPropertiesUpdatedCallback@234@@Z @ 0x180163420 (-RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJP.c)
 *     ?TrySetupImportExportOperation@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180166950 (-TrySetupImportExportOperation@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBU_.c)
 *     ?LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ @ 0x180189954 (-LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180191644 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180199820 (-OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x180066F24 (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr(this, a2, a3, a4, v5, retaddr);
}
