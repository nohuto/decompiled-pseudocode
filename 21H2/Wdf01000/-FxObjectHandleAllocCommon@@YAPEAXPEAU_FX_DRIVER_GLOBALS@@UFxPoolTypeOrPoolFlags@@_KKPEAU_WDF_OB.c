/*
 * XREFs of ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0003FB0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0005FF8 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C00063C4 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C000FBCC (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 *     imp_WdfSpinLockCreate @ 0x1C0011040 (imp_WdfSpinLockCreate.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0011378 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C00125E0 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfCollectionCreate @ 0x1C0014740 (imp_WdfCollectionCreate.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C0014B80 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfRegistryOpenKey @ 0x1C00156A0 (imp_WdfRegistryOpenKey.c)
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0018CCC (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 *     ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C001912C (-_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C00199A0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C001DCEC (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C001DE54 (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C001EB1C (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C001F4E4 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C001FD38 (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020D0C (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0021B30 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C0022804 (-_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_A.c)
 *     ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C0022C90 (-_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C00233E4 (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0023B1C (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023D98 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C002494C (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CONFIG@@PEAVFxDriver@@PEAVFxPkgIo@@EPEAPEAV1@@Z @ 0x1C0024E8C (-_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CON.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C0025908 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C0025C18 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0025E7C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C0026C24 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0027270 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfDriverCreate @ 0x1C0027650 (imp_WdfDriverCreate.c)
 *     ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00299D8 (-_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE.c)
 *     imp_WdfCommonBufferCreate @ 0x1C0029DA0 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C0029EF0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C002ACCC (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C002D190 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C002D5E0 (imp_WdfDmaEnablerCreate.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C002DEA4 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     ?_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C002F264 (-_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAV.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C002F4B0 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfStringCreate @ 0x1C002F6E0 (imp_WdfStringCreate.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C002FF30 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0030870 (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0030930 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0030A30 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfRegistryCreateKey @ 0x1C0030EF0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C00312A0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C00348A0 (imp_WdfPdoInitAssignContainerID.c)
 *     ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0057154 (-_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C005844C (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0058B0C (-_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C00631A0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfLookasideListCreate @ 0x1C0066A70 (imp_WdfLookasideListCreate.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C0066F20 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfDriverOpenPersistentStateRegistryKey @ 0x1C0067140 (imp_WdfDriverOpenPersistentStateRegistryKey.c)
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x1C0068F90 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 *     ?Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C006AE20 (-Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     FxCmResourceListInsertDescriptor @ 0x1C006F30C (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C006F410 (FxIoResourceListInsertDescriptor.c)
 *     imp_WdfIoResourceListCreate @ 0x1C006F870 (imp_WdfIoResourceListCreate.c)
 *     FxUsbTargetDeviceCreate @ 0x1C0077950 (FxUsbTargetDeviceCreate.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C007C358 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C007C744 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C007C984 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007D5CC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C007EA1C (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008078C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0083284 (-AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0087BE0 (-AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0087DCC (-AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     WPP_IFR_SF_DDid @ 0x1C006B36C (WPP_IFR_SF_DDid.c)
 */

_OWORD *__fastcall FxObjectHandleAllocCommon(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxPoolTypeOrPoolFlags *TypeOrFlags,
        unsigned __int64 Size,
        unsigned int Tag,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned __int16 ExtraSize,
        FxObjectType ObjectType)
{
  unsigned int v7; // r15d
  FxObjectType v11; // r12d
  __int64 v12; // r8
  unsigned __int64 flags; // rdx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  int id; // r12d
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  bool v21; // zf
  unsigned __int8 FxPoolTrackingOn; // cl
  void *v23; // rax
  _OWORD *v24; // rax
  _OWORD *v25; // rbx
  _QWORD *v26; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v27; // rax
  _POOL_TYPE PoolType; // eax
  unsigned __int64 ContextSizeOverride; // r8
  const _GUID *v31; // [rsp+20h] [rbp-68h]
  FxPoolTypeOrPoolFlags v32; // [rsp+50h] [rbp-38h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v7 = Tag;
  if ( !Tag )
    v7 = FxDriverGlobals->Tag;
  v11 = ObjectType;
  LODWORD(v12) = 65520;
  if ( ObjectType == FxObjectTypeInternal )
  {
    if ( !FxDriverGlobals->FxVerifierHandle )
    {
      v16 = Size;
      goto LABEL_18;
    }
    v16 = -1LL;
    if ( Size + 48 >= Size )
      v16 = Size + 48;
    id = Size + 48 < Size ? 0xC0000095 : 0;
  }
  else
  {
    flags = 0LL;
    if ( Attributes )
    {
      ContextTypeInfo = Attributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        flags = Attributes->ContextSizeOverride;
        if ( !flags )
          flags = ContextTypeInfo->ContextSize;
      }
    }
    v15 = (((unsigned int)ExtraSize + 15) & 0xFFF0LL) + (((int)Size + 15) & 0xFFF0LL);
    v16 = v15 + 48;
    if ( v15 + 48 < v15 )
    {
      v16 = -1LL;
      id = -1073741675;
      goto LABEL_45;
    }
    id = 0;
    v12 = -1LL;
    if ( !flags )
    {
LABEL_12:
      LOWORD(Tag) = v16;
      if ( !FxDriverGlobals->FxVerifierHandle )
        goto LABEL_16;
      v19 = v16 + 48;
      v20 = v16;
      if ( v16 + 48 >= v16 )
        v12 = v16 + 48;
      v16 = v12;
      id = v19 < v20 ? 0xC0000095 : 0;
      if ( v19 >= v20 )
        goto LABEL_16;
      goto LABEL_45;
    }
    v18 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v18 >= flags )
    {
      if ( v18 + v16 < v16 )
      {
        v16 = -1LL;
        id = -1073741675;
      }
      else
      {
        v16 += v18;
      }
      if ( id >= 0 )
        goto LABEL_12;
LABEL_45:
      WPP_IFR_SF_DDid(FxDriverGlobals, flags, v12, Tag, v31, (unsigned __int16)Size, ExtraSize, flags, id);
      goto LABEL_16;
    }
    id = -1073741675;
  }
LABEL_16:
  if ( id < 0 )
    return 0LL;
  v11 = ObjectType;
LABEL_18:
  v21 = TypeOrFlags->UsePoolType == 0;
  FxPoolTrackingOn = FxDriverGlobals->FxPoolTrackingOn;
  v32 = 0LL;
  if ( v21 )
  {
    v32.u.PoolFlags = TypeOrFlags->u.PoolFlags;
    if ( FxPoolTrackingOn )
    {
      v23 = retaddr;
      goto LABEL_21;
    }
  }
  else
  {
    PoolType = TypeOrFlags->u.PoolType;
    v32.UsePoolType = 1;
    v32.u.PoolType = PoolType;
    if ( FxPoolTrackingOn )
    {
      v23 = retaddr;
      goto LABEL_21;
    }
  }
  v23 = 0LL;
LABEL_21:
  v24 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v32, v16, v7, v23);
  v25 = v24;
  if ( v24 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      *v24 = 0LL;
      v24[1] = 0LL;
      v24[2] = 0LL;
      *((_DWORD *)v24 + 8) = 1146058822;
      v25 = v24 + 3;
    }
    if ( v11 == FxObjectTypeExternal )
    {
      v26 = (_QWORD *)((char *)v25 + (unsigned __int16)(((ExtraSize + 15) & 0xFFF0) + ((Size + 15) & 0xFFF0)));
      v26[1] = 0LL;
      v26[2] = 0LL;
      v26[3] = 0LL;
      v26[4] = 0LL;
      v26[5] = 0LL;
      *v26 = v25;
      if ( Attributes )
      {
        v27 = Attributes->ContextTypeInfo;
        if ( v27 )
        {
          ContextSizeOverride = Attributes->ContextSizeOverride;
          if ( !ContextSizeOverride )
            ContextSizeOverride = v27->ContextSize;
          memset(v26 + 6, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          v27 = Attributes->ContextTypeInfo;
        }
        v26[4] = v27;
      }
    }
  }
  return v25;
}
