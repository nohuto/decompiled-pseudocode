/*
 * XREFs of WPP_IFR_SF_ @ 0x1C0028B14
 * Callers:
 *     ?GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C0001A4C (-GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C0001C3C (-GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C0003A40 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C00049B4 (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0004BB0 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C00066D0 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x1C00074E0 (-FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C000FE78 (-HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?HandleQueryCapabilities@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C000FFE0 (-HandleQueryCapabilities@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C00109B0 (-HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0011378 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ResumeIdleWorker @ 0x1C0011760 (ResumeIdleWorker.c)
 *     ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C001311C (-EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     imp_WdfCollectionCreate @ 0x1C0014740 (imp_WdfCollectionCreate.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C0014B80 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0017820 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C00188A0 (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C00199A0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C001A074 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C001AF84 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C001BAE0 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C001C3B0 (-_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C001C83C (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C001D298 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C001D6D0 (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     imp_WdfPdoInitAllocate @ 0x1C001F300 (imp_WdfPdoInitAllocate.c)
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C00205C8 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C00217C0 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0021924 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C0025AA0 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0027270 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfDriverCreate @ 0x1C0027650 (imp_WdfDriverCreate.c)
 *     ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C0028A10 (-FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z.c)
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C00291F4 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     ?AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ @ 0x1C00298B0 (-AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ.c)
 *     imp_WdfDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C002AEA0 (imp_WdfDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C002D7CC (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C002FF30 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     imp_WdfDeviceInitSetPnpPowerEventCallbacks @ 0x1C0030D60 (imp_WdfDeviceInitSetPnpPowerEventCallbacks.c)
 *     imp_WdfFdoInitSetDefaultChildListConfig @ 0x1C0030DD0 (imp_WdfFdoInitSetDefaultChildListConfig.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C00312A0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0031E78 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0032010 (-_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     imp_WdfPdoInitSetEventCallbacks @ 0x1C0032300 (imp_WdfPdoInitSetEventCallbacks.c)
 *     imp_WdfPdoInitSetDefaultLocale @ 0x1C0033770 (imp_WdfPdoInitSetDefaultLocale.c)
 *     imp_WdfDeviceInitSetPowerPolicyEventCallbacks @ 0x1C0034840 (imp_WdfDeviceInitSetPowerPolicyEventCallbacks.c)
 *     imp_WdfDeviceInitSetRemoveLockOptions @ 0x1C0034CB0 (imp_WdfDeviceInitSetRemoveLockOptions.c)
 *     imp_WdfFdoInitSetEventCallbacks @ 0x1C0035200 (imp_WdfFdoInitSetEventCallbacks.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C0035380 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     imp_WdfFdoInitWdmGetPhysicalDevice @ 0x1C0035520 (imp_WdfFdoInitWdmGetPhysicalDevice.c)
 *     imp_WdfFdoInitSetFilter @ 0x1C0035670 (imp_WdfFdoInitSetFilter.c)
 *     ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C005CEA8 (-FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxIFRReplay@@YAX_K@Z @ 0x1C005D25C (-FxIFRReplay@@YAX_K@Z.c)
 *     imp_WdfWmiProviderCreate @ 0x1C005DDA0 (imp_WdfWmiProviderCreate.c)
 *     ?QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z @ 0x1C005E710 (-QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z.c)
 *     imp_WdfCompanionTargetSendTaskSynchronously @ 0x1C00604D0 (imp_WdfCompanionTargetSendTaskSynchronously.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0060714 (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 *     imp_WdfControlDeviceInitSetShutdownNotification @ 0x1C0061BB0 (imp_WdfControlDeviceInitSetShutdownNotification.c)
 *     imp_WdfFileObjectGetInitiatorProcessId @ 0x1C0063870 (imp_WdfFileObjectGetInitiatorProcessId.c)
 *     ?CopyCompletionParams@FxRequest@@QEAAXPEAU_WDF_REQUEST_COMPLETION_PARAMS@@@Z @ 0x1C0064074 (-CopyCompletionParams@FxRequest@@QEAAXPEAU_WDF_REQUEST_COMPLETION_PARAMS@@@Z.c)
 *     imp_WdfCxDeviceInitSetPnpPowerEventCallbacks @ 0x1C00659C0 (imp_WdfCxDeviceInitSetPnpPowerEventCallbacks.c)
 *     imp_WdfCxDeviceInitSetPowerPolicyEventCallbacks @ 0x1C0065BD0 (imp_WdfCxDeviceInitSetPowerPolicyEventCallbacks.c)
 *     ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C00675D8 (-GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C0067904 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C006D554 (-AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z @ 0x1C006D668 (-DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006DC28 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0075364 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0075D60 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C00768B0 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C007A5E4 (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C007C358 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C007C744 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C007C984 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C0082280 (-_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z.c)
 *     imp_WdfInterruptSetExtendedPolicy @ 0x1C0082F90 (imp_WdfInterruptSetExtendedPolicy.c)
 *     ?PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0083580 (-PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?PnpEventQueryRemoveAskDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084290 (-PnpEventQueryRemoveAskDriver@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueryStopAskDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00844F0 (-PnpEventQueryStopAskDriver@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C0084F24 (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 *     ?_WatchdogDpc@FxWatchdog@@SAXPEAU_KDPC@@PEAX11@Z @ 0x1C0088FC0 (-_WatchdogDpc@FxWatchdog@@SAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C008A3A4 (-_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVF.c)
 *     ?PowerPolSleepingWakeRevertArmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B080 (-PowerPolSleepingWakeRevertArmWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeRevertArmWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B0D0 (-PowerPolSleepingWakeRevertArmWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C008C854 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 *     ??1FxInterrupt@@UEAA@XZ @ 0x1C008CD58 (--1FxInterrupt@@UEAA@XZ.c)
 *     ?ReportActive@FxInterrupt@@QEAAXE@Z @ 0x1C008D7B0 (-ReportActive@FxInterrupt@@QEAAXE@Z.c)
 *     ?ReportInactive@FxInterrupt@@QEAAXE@Z @ 0x1C008D88C (-ReportInactive@FxInterrupt@@QEAAXE@Z.c)
 *     ?QueryForDsfInterface@FxPkgFdo@@AEAAJXZ @ 0x1C008E8C4 (-QueryForDsfInterface@FxPkgFdo@@AEAAJXZ.c)
 *     ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x1C008EC50 (-_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7E0C (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C000B6B0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C005B6FC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid)
{
  int v9; // eax
  unsigned __int64 v10; // rbx

  v9 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v9, (flags - 1) & 0x1F) )
  {
    v10 = (unsigned __int64)flags >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v10 + 1) >= level )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v10),
        0x2Bu,
        traceGuid,
        id,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, 0LL);
}
