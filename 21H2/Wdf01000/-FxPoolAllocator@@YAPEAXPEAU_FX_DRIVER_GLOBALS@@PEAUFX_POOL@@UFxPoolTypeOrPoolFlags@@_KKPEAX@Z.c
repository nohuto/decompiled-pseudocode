/*
 * XREFs of ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0
 * Callers:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C00066D0 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C001207C (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0014A1C (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00152DC (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C001AF84 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C001E730 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfPdoInitAllocate @ 0x1C001F300 (imp_WdfPdoInitAllocate.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C001F4E4 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C0020408 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 *     ?_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z @ 0x1C0020B34 (-_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z.c)
 *     ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020F60 (-Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0021414 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00225C0 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0022E2C (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C00231F8 (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023D98 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0024550 (-ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0026654 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     GetImageName @ 0x1C0026FBC (GetImageName.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00273A8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C00291F4 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     imp_WdfDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C002AEA0 (imp_WdfDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     imp_WdfDeviceAddQueryInterface @ 0x1C002BCA0 (imp_WdfDeviceAddQueryInterface.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002CAD0 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     imp_WdfRegistryQueryString @ 0x1C002CF70 (imp_WdfRegistryQueryString.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C002D190 (imp_WdfRegistryQueryMultiString.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C002F5F0 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C002F8F4 (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0031464 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x1C0032450 (imp_WdfPdoInitAddDeviceText.c)
 *     ?FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00325B4 (-FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?AllocateDmaEnablerList@FxPkgPnp@@QEAAJXZ @ 0x1C0033248 (-AllocateDmaEnablerList@FxPkgPnp@@QEAAJXZ.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0039266 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C00553E4 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x1C005B98C (-Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0060714 (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 *     imp_WdfDeviceInitRegisterPnpStateChangeCallback @ 0x1C0061CD0 (imp_WdfDeviceInitRegisterPnpStateChangeCallback.c)
 *     imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback @ 0x1C0061E50 (imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback.c)
 *     imp_WdfDeviceInitRegisterPowerStateChangeCallback @ 0x1C0061FE0 (imp_WdfDeviceInitRegisterPowerStateChangeCallback.c)
 *     imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C0065490 (imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C006749C (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C00699AC (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     ?_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z @ 0x1C0069BBC (-_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z.c)
 *     ??0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C006CCB0 (--0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z.c)
 *     ?CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C006CF54 (-CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAV.c)
 *     ?AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C006D554 (-AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CopyStackFrames@FxTagTracker@@AEAAXPEAPEAUFxTagTrackingStackFrames@@GPEAPEAX@Z @ 0x1C006E638 (-CopyStackFrames@FxTagTracker@@AEAAXPEAPEAUFxTagTrackingStackFrames@@GPEAPEAX@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C00701E0 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C0070460 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C0070630 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C00708F0 (imp_WdfRegistryQueryUnicodeString.c)
 *     FxGetDevicePropertyString @ 0x1C0071310 (FxGetDevicePropertyString.c)
 *     ?_IsAffectedByStateSeparationRegistryPolicy@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAE@Z @ 0x1C0071DD0 (-_IsAffectedByStateSeparationRegistryPolicy@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAE@Z.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C00720DC (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0075364 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C00797EC (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C0079B6C (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C007A47C (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@@Z @ 0x1C007B47C (-CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INT.c)
 *     ?AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x1C007BF4C (-AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C007C358 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007D5CC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C007DD10 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C007E4DC (-CreateSettings@FxUsbInterface@@QEAAJXZ.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C007EA1C (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C007EDA0 (-SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_D.c)
 *     ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C007EEEC (-SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C007F23C (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C007F4C4 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C007F720 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C007F964 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0080138 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0080A24 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C00811D0 (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 *     ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0083284 (-AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0087BE0 (-AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0087DCC (-AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C008A3A4 (-_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVF.c)
 *     ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x1C008A8C4 (-InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C008CE60 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 *     VfAllocateContext @ 0x1C00C5428 (VfAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C0069688 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?FxPoolInsertPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C006A6D0 (-FxPoolInsertPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ddi @ 0x1C006C6F8 (WPP_IFR_SF_ddi.c)
 *     WPP_IFR_SF_i @ 0x1C006C7F0 (WPP_IFR_SF_i.c)
 */

FX_POOL **__fastcall FxPoolAllocator(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FX_POOL *Pool,
        __m128i *TypeOrFlags,
        unsigned __int64 Size,
        ULONG Tag,
        void *Caller)
{
  FX_POOL **p_Pool; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int8 v11; // cl
  SIZE_T v12; // rdx
  _QWORD *Pool2; // rax
  SIZE_T v15; // rdx
  bool v16; // zf
  int WdfVerifierAllocateFailCount; // eax
  unsigned __int64 v18; // rax
  SIZE_T v19; // rdx
  FX_POOL_TRACKER *PoolWithTag; // rax
  FX_POOL_TRACKER *v21; // rdx
  __m128i v22; // xmm0
  char v23; // al
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  int globals; // [rsp+28h] [rbp-40h]
  int v26; // [rsp+30h] [rbp-38h]

  p_Pool = 0LL;
  v7 = Size;
  if ( !Size )
  {
    WPP_IFR_SF_(FxDriverGlobals, 2u, 0xAu, 0xAu, WPP_wdfpool_cpp_Traceguids);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return 0LL;
  }
  if ( FxDriverGlobals->FxPoolTrackingOn )
  {
    if ( FxDriverGlobals->FxVerifierOn )
    {
      WdfVerifierAllocateFailCount = FxDriverGlobals->WdfVerifierAllocateFailCount;
      if ( WdfVerifierAllocateFailCount != -1 )
      {
        if ( !WdfVerifierAllocateFailCount )
        {
          WPP_IFR_SF_(FxDriverGlobals, 2u, 0xAu, 0xBu, WPP_wdfpool_cpp_Traceguids);
          return 0LL;
        }
        _InterlockedDecrement(&FxDriverGlobals->WdfVerifierAllocateFailCount);
      }
    }
    if ( Size >= 0xFB0 )
    {
      v18 = 4096LL;
      if ( Size >= 0x1000 )
        v18 = Size;
      v16 = TypeOrFlags->m128i_i8[0] == 0;
      v15 = v18;
      goto LABEL_15;
    }
    v19 = Size + 80;
    if ( Size + 80 < Size )
    {
      WPP_IFR_SF_ddi(FxDriverGlobals, v19, (unsigned int)TypeOrFlags, Size, traceGuid, globals, v26, Size);
    }
    else
    {
      if ( TypeOrFlags->m128i_i8[0] )
        PoolWithTag = (FX_POOL_TRACKER *)ExAllocatePoolWithTag((POOL_TYPE)TypeOrFlags->m128i_i32[2], v19, Tag);
      else
        PoolWithTag = (FX_POOL_TRACKER *)ExAllocatePool2(TypeOrFlags->m128i_i64[1], v19, Tag);
      v21 = PoolWithTag;
      if ( PoolWithTag )
      {
        v22 = *TypeOrFlags;
        p_Pool = &PoolWithTag[1].Pool;
        PoolWithTag[1].Link.Flink = &PoolWithTag->Link;
        PoolWithTag[1].Link.Blink = &FxDriverGlobals->Linkage;
        if ( (unsigned __int8)_mm_cvtsi128_si32(v22) )
          v23 = (v22.m128i_i32[2] & 0xFFFFFEFF) == 1 || (v22.m128i_i32[2] & 0xFFFFFEFF) == 5;
        else
          v23 = v22.m128i_i8[9] & 1;
        if ( v23 )
          FxPoolInsertPagedAllocateTracker(Pool, v21, v7, Tag, Caller);
        else
          FxPoolInsertNonPagedAllocateTracker(Pool, v21, v7, Tag, Caller);
        return p_Pool;
      }
    }
    return 0LL;
  }
  if ( Size < 0x1000 )
  {
    if ( Size + 16 >= Size )
    {
      v7 = Size + 16;
      v11 = TypeOrFlags->m128i_i8[0];
      if ( Size + 16 < 0x1000 )
      {
        v12 = Size + 16;
        if ( v11 )
          Pool2 = ExAllocatePoolWithTag((POOL_TYPE)TypeOrFlags->m128i_i32[2], v12, Tag);
        else
          Pool2 = (_QWORD *)ExAllocatePool2(TypeOrFlags->m128i_i64[1], v12, Tag);
        if ( Pool2 )
        {
          *Pool2 = Pool2;
          p_Pool = (FX_POOL **)(Pool2 + 2);
          Pool2[1] = FxDriverGlobals;
        }
        return p_Pool;
      }
      goto LABEL_14;
    }
    WPP_IFR_SF_i(FxDriverGlobals, (unsigned __int8)Pool, 0xAu, 0xDu, WPP_wdfpool_cpp_Traceguids, Size);
    return 0LL;
  }
  v11 = TypeOrFlags->m128i_i8[0];
LABEL_14:
  v15 = v7;
  v16 = v11 == 0;
LABEL_15:
  if ( v16 )
    return (FX_POOL **)ExAllocatePool2(TypeOrFlags->m128i_i64[1], v15, Tag);
  else
    return (FX_POOL **)ExAllocatePoolWithTag((POOL_TYPE)TypeOrFlags->m128i_i32[2], v15, Tag);
}
