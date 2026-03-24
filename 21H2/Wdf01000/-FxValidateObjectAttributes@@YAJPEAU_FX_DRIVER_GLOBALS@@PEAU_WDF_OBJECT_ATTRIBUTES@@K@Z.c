/*
 * XREFs of ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0
 * Callers:
 *     imp_WdfRegistryOpenKey @ 0x1C0009970 (imp_WdfRegistryOpenKey.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C000B22C (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     imp_WdfMemoryCreate @ 0x1C000CE10 (imp_WdfMemoryCreate.c)
 *     imp_WdfWorkItemCreate @ 0x1C00142E0 (imp_WdfWorkItemCreate.c)
 *     imp_WdfObjectCreate @ 0x1C0014880 (imp_WdfObjectCreate.c)
 *     imp_WdfCollectionCreate @ 0x1C0014950 (imp_WdfCollectionCreate.c)
 *     imp_WdfTimerCreate @ 0x1C00159F0 (imp_WdfTimerCreate.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C0017080 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfSpinLockCreate @ 0x1C0019640 (imp_WdfSpinLockCreate.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C002EE20 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfDmaTransactionCreate @ 0x1C00300E0 (imp_WdfDmaTransactionCreate.c)
 *     imp_WdfCommonBufferCreate @ 0x1C0031100 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C00312A0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfDpcCreate @ 0x1C0037AA0 (imp_WdfDpcCreate.c)
 *     imp_WdfChildListCreate @ 0x1C00380A0 (imp_WdfChildListCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C003E4DC (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C003F120 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     imp_WdfDeviceInitSetFileObjectConfig @ 0x1C0044CE0 (imp_WdfDeviceInitSetFileObjectConfig.c)
 *     imp_WdfDeviceInitSetRequestAttributes @ 0x1C00453F0 (imp_WdfDeviceInitSetRequestAttributes.c)
 *     imp_WdfFdoInitAllocAndQueryProperty @ 0x1C00454A0 (imp_WdfFdoInitAllocAndQueryProperty.c)
 *     imp_WdfFdoInitAllocAndQueryPropertyEx @ 0x1C00455D0 (imp_WdfFdoInitAllocAndQueryPropertyEx.c)
 *     imp_WdfFdoInitOpenRegistryKey @ 0x1C0045760 (imp_WdfFdoInitOpenRegistryKey.c)
 *     imp_WdfFdoInitSetDefaultChildListConfig @ 0x1C0045AB0 (imp_WdfFdoInitSetDefaultChildListConfig.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x1C0047050 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfDeviceAllocAndQueryPropertyEx @ 0x1C00471D0 (imp_WdfDeviceAllocAndQueryPropertyEx.c)
 *     imp_WdfDeviceCreate @ 0x1C00478E0 (imp_WdfDeviceCreate.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0047E70 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x1C0048040 (imp_WdfDeviceOpenRegistryKey.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C0049960 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C004B520 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     imp_WdfCxDeviceInitSetRequestAttributes @ 0x1C004B970 (imp_WdfCxDeviceInitSetRequestAttributes.c)
 *     imp_WdfDriverCreate @ 0x1C004BEB0 (imp_WdfDriverCreate.c)
 *     imp_WdfLookasideListCreate @ 0x1C004C8E0 (imp_WdfLookasideListCreate.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C004CE50 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfDriverOpenPersistentStateRegistryKey @ 0x1C004D060 (imp_WdfDriverOpenPersistentStateRegistryKey.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C0050E14 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0056614 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     imp_WdfIoResourceListCreate @ 0x1C005C850 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfRegistryCreateKey @ 0x1C005DFD0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C005E240 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C005E500 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfWaitLockCreate @ 0x1C005EF30 (imp_WdfWaitLockCreate.c)
 *     imp_WdfStringCreate @ 0x1C005F4B0 (imp_WdfStringCreate.c)
 *     imp_WdfIoTargetCreate @ 0x1C00633F0 (imp_WdfIoTargetCreate.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x1C0064100 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C00688E0 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     imp_WdfUsbInterfaceSelectSetting @ 0x1C006A370 (imp_WdfUsbInterfaceSelectSetting.c)
 *     FxUsbTargetDeviceCreate @ 0x1C006A510 (FxUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C006AA70 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C006B670 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C006FF7C (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C00701BC (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     imp_WdfIoQueueCreate @ 0x1C0074190 (imp_WdfIoQueueCreate.c)
 *     imp_WdfInterruptCreate @ 0x1C00781D0 (imp_WdfInterruptCreate.c)
 *     VfAllocateContext @ 0x1C00C4430 (VfAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qqqd @ 0x1C002EB50 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qDd @ 0x1C002F728 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qddd @ 0x1C002F86C (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qid @ 0x1C002FD7C (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x1C003C938 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqddd @ 0x1C0059310 (WPP_IFR_SF_qqddd.c)
 */

__int64 __fastcall FxValidateObjectAttributes(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        char Flags)
{
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rcx
  const void *ContextSizeOverride; // rax
  _WDF_EXECUTION_LEVEL _a3; // eax
  _WDF_SYNCHRONIZATION_SCOPE SynchronizationScope; // ecx
  __int64 ContextSize; // rax
  unsigned __int64 v10; // r11
  void *ParentObject; // rcx
  unsigned int v12; // ebx

  if ( Attributes )
  {
    if ( Attributes->Size == 56 )
    {
      ContextTypeInfo = Attributes->ContextTypeInfo;
      if ( !ContextTypeInfo )
        goto LABEL_6;
      if ( ((ContextTypeInfo->Size - 24) & 0xFFFFFFEF) != 0 )
      {
        v12 = -1073741820;
        WPP_IFR_SF_qqddd(
          FxDriverGlobals,
          (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
          6u,
          0xCu,
          WPP_FxValidateFunctions_cpp_Traceguids,
          Attributes,
          ContextTypeInfo,
          ContextTypeInfo->Size,
          40,
          -1073741820);
        return v12;
      }
      ContextSize = ContextTypeInfo->ContextSize;
      if ( ContextSize && !ContextTypeInfo->ContextName )
      {
        v12 = -1071644151;
        WPP_IFR_SF_qqqd(
          FxDriverGlobals,
          2u,
          6u,
          0xDu,
          WPP_FxValidateFunctions_cpp_Traceguids,
          Attributes,
          ContextTypeInfo,
          ContextSize,
          -1071644151);
      }
      else
      {
LABEL_6:
        ContextSizeOverride = (const void *)Attributes->ContextSizeOverride;
        if ( ContextSizeOverride )
        {
          if ( !ContextTypeInfo )
          {
            v12 = -1071644151;
            WPP_IFR_SF_qid(
              FxDriverGlobals,
              2u,
              6u,
              0xEu,
              WPP_FxValidateFunctions_cpp_Traceguids,
              Attributes,
              (__int64)ContextSizeOverride,
              -1071644151);
            return v12;
          }
          v10 = ContextTypeInfo->ContextSize;
          if ( (unsigned __int64)ContextSizeOverride < v10 )
          {
            v12 = -1071644151;
            WPP_IFR_SF_qqqd(
              FxDriverGlobals,
              2u,
              6u,
              0xFu,
              WPP_FxValidateFunctions_cpp_Traceguids,
              Attributes,
              ContextSizeOverride,
              v10,
              -1071644151);
            return v12;
          }
        }
        if ( (Flags & 1) != 0 )
        {
          ParentObject = Attributes->ParentObject;
          if ( ParentObject )
          {
            v12 = -1071644145;
            WPP_IFR_SF_qid(
              FxDriverGlobals,
              2u,
              6u,
              0x10u,
              WPP_FxValidateFunctions_cpp_Traceguids,
              Attributes,
              (__int64)ParentObject,
              -1071644145);
            return v12;
          }
        }
        else if ( (Flags & 0x10) != 0 && !Attributes->ParentObject )
        {
          v12 = -1071644142;
          WPP_IFR_SF_qL(
            FxDriverGlobals,
            2u,
            0x12u,
            0x11u,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            0xC0200212);
          return v12;
        }
        _a3 = Attributes->ExecutionLevel;
        if ( _a3 && _a3 <= WdfExecutionLevelDispatch )
        {
          SynchronizationScope = Attributes->SynchronizationScope;
          if ( SynchronizationScope && SynchronizationScope <= WdfSynchronizationScopeNone )
          {
            if ( (Flags & 4) != 0
              || SynchronizationScope == WdfSynchronizationScopeInheritFromParent
              || SynchronizationScope == WdfSynchronizationScopeNone )
            {
              if ( (Flags & 2) != 0 || _a3 == WdfExecutionLevelInheritFromParent )
                return 0LL;
              v12 = -1071644143;
              WPP_IFR_SF_qDd(
                FxDriverGlobals,
                (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
                6u,
                0x15u,
                WPP_FxValidateFunctions_cpp_Traceguids,
                Attributes,
                _a3,
                0xC0200211);
            }
            else
            {
              v12 = -1071644144;
              WPP_IFR_SF_qDd(
                FxDriverGlobals,
                (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
                6u,
                0x14u,
                WPP_FxValidateFunctions_cpp_Traceguids,
                Attributes,
                SynchronizationScope,
                0xC0200210);
            }
          }
          else
          {
            v12 = -1071644151;
            WPP_IFR_SF_qdd(
              FxDriverGlobals,
              2u,
              6u,
              0x13u,
              WPP_FxValidateFunctions_cpp_Traceguids,
              Attributes,
              SynchronizationScope,
              0xC0200209);
          }
        }
        else
        {
          v12 = -1071644151;
          WPP_IFR_SF_qdd(
            FxDriverGlobals,
            2u,
            6u,
            0x12u,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            _a3,
            0xC0200209);
        }
      }
    }
    else
    {
      v12 = -1073741820;
      WPP_IFR_SF_qddd(
        FxDriverGlobals,
        (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
        6u,
        0xBu,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        56,
        Attributes->Size,
        -1073741820);
    }
  }
  else
  {
    if ( (Flags & 8) == 0 )
      return 0LL;
    v12 = -1071644142;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxValidateFunctions_cpp_Traceguids, -1071644142);
  }
  return v12;
}
