/*
 * XREFs of ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0
 * Callers:
 *     imp_WdfMemoryCreate @ 0x1C0005910 (imp_WdfMemoryCreate.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C00063C4 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     imp_WdfSpinLockCreate @ 0x1C0011040 (imp_WdfSpinLockCreate.c)
 *     imp_WdfObjectCreate @ 0x1C00112B0 (imp_WdfObjectCreate.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C00125E0 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfCollectionCreate @ 0x1C0014740 (imp_WdfCollectionCreate.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C0014B80 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfRegistryOpenKey @ 0x1C00156A0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfWorkItemCreate @ 0x1C0018C00 (imp_WdfWorkItemCreate.c)
 *     imp_WdfTimerCreate @ 0x1C0019000 (imp_WdfTimerCreate.c)
 *     imp_WdfInterruptCreate @ 0x1C001E960 (imp_WdfInterruptCreate.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0021414 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     imp_WdfWaitLockCreate @ 0x1C0023340 (imp_WdfWaitLockCreate.c)
 *     imp_WdfDeviceCreate @ 0x1C0023A20 (imp_WdfDeviceCreate.c)
 *     imp_WdfIoQueueCreate @ 0x1C0024AC0 (imp_WdfIoQueueCreate.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C0025C18 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0025E7C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfDriverCreate @ 0x1C0027650 (imp_WdfDriverCreate.c)
 *     imp_WdfCommonBufferCreate @ 0x1C0029DA0 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C0029EF0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfFdoInitAllocAndQueryProperty @ 0x1C002A240 (imp_WdfFdoInitAllocAndQueryProperty.c)
 *     imp_WdfFdoInitOpenRegistryKey @ 0x1C002A310 (imp_WdfFdoInitOpenRegistryKey.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x1C002A3C0 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x1C002A5A0 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfDeviceAllocAndQueryPropertyEx @ 0x1C002A6A0 (imp_WdfDeviceAllocAndQueryPropertyEx.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x1C002AC00 (imp_WdfDeviceOpenRegistryKey.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C002ACCC (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C002D190 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C002D5E0 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfIoTargetCreate @ 0x1C002DDF0 (imp_WdfIoTargetCreate.c)
 *     imp_WdfDpcCreate @ 0x1C002F1A0 (imp_WdfDpcCreate.c)
 *     imp_WdfStringCreate @ 0x1C002F6E0 (imp_WdfStringCreate.c)
 *     imp_WdfFdoInitSetDefaultChildListConfig @ 0x1C0030DD0 (imp_WdfFdoInitSetDefaultChildListConfig.c)
 *     imp_WdfRegistryCreateKey @ 0x1C0030EF0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfDeviceInitSetFileObjectConfig @ 0x1C0031890 (imp_WdfDeviceInitSetFileObjectConfig.c)
 *     imp_WdfDeviceInitSetRequestAttributes @ 0x1C0033D40 (imp_WdfDeviceInitSetRequestAttributes.c)
 *     imp_WdfDmaTransactionCreate @ 0x1C0054190 (imp_WdfDmaTransactionCreate.c)
 *     imp_WdfChildListCreate @ 0x1C005A720 (imp_WdfChildListCreate.c)
 *     imp_WdfFdoInitAllocAndQueryPropertyEx @ 0x1C0062250 (imp_WdfFdoInitAllocAndQueryPropertyEx.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C00631A0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C0065780 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     imp_WdfCxDeviceInitSetRequestAttributes @ 0x1C0065D70 (imp_WdfCxDeviceInitSetRequestAttributes.c)
 *     imp_WdfLookasideListCreate @ 0x1C0066A70 (imp_WdfLookasideListCreate.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C0066F20 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfDriverOpenPersistentStateRegistryKey @ 0x1C0067140 (imp_WdfDriverOpenPersistentStateRegistryKey.c)
 *     imp_WdfIoResourceListCreate @ 0x1C006F870 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C0070630 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C0075F20 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     imp_WdfUsbInterfaceSelectSetting @ 0x1C00777B0 (imp_WdfUsbInterfaceSelectSetting.c)
 *     FxUsbTargetDeviceCreate @ 0x1C0077950 (FxUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C0077EC0 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0078A20 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C007C744 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C007C984 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     VfAllocateContext @ 0x1C00C5428 (VfAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qLd @ 0x1C002C4F0 (WPP_IFR_SF_qLd.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00532C0 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qddd @ 0x1C0053A68 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qid @ 0x1C005A5D0 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x1C005CC6C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqddd @ 0x1C006CB20 (WPP_IFR_SF_qqddd.c)
 */

__int64 __fastcall FxValidateObjectAttributes(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        char Flags)
{
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *_a3; // rcx
  const void *ContextSizeOverride; // rax
  _WDF_EXECUTION_LEVEL ExecutionLevel; // eax
  _WDF_SYNCHRONIZATION_SCOPE SynchronizationScope; // ecx
  __int64 ContextSize; // rax
  void *ParentObject; // rcx
  unsigned __int64 v11; // r11
  unsigned int v12; // ebx

  if ( Attributes )
  {
    if ( Attributes->Size == 56 )
    {
      _a3 = Attributes->ContextTypeInfo;
      if ( !_a3 )
        goto LABEL_4;
      if ( ((_a3->Size - 24) & 0xFFFFFFEF) != 0 )
      {
        v12 = -1073741820;
        WPP_IFR_SF_qqddd(
          FxDriverGlobals,
          (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
          6u,
          0xCu,
          WPP_FxValidateFunctions_cpp_Traceguids,
          Attributes,
          _a3,
          _a3->Size,
          40,
          -1073741820);
        return v12;
      }
      ContextSize = _a3->ContextSize;
      if ( ContextSize && !_a3->ContextName )
      {
        v12 = -1071644151;
        WPP_IFR_SF_qqqd(
          FxDriverGlobals,
          2u,
          6u,
          0xDu,
          WPP_FxValidateFunctions_cpp_Traceguids,
          Attributes,
          _a3,
          ContextSize,
          -1071644151);
      }
      else
      {
LABEL_4:
        ContextSizeOverride = (const void *)Attributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          goto LABEL_5;
        if ( !_a3 )
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
        v11 = _a3->ContextSize;
        if ( (unsigned __int64)ContextSizeOverride < v11 )
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
            v11,
            -1071644151);
        }
        else
        {
LABEL_5:
          if ( (Flags & 1) == 0 )
          {
            if ( (Flags & 0x10) != 0 && !Attributes->ParentObject )
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
            goto LABEL_7;
          }
          ParentObject = Attributes->ParentObject;
          if ( !ParentObject )
          {
LABEL_7:
            ExecutionLevel = Attributes->ExecutionLevel;
            if ( ExecutionLevel == WdfExecutionLevelInvalid || ExecutionLevel > WdfExecutionLevelDispatch )
            {
              v12 = -1071644151;
              WPP_IFR_SF_qdd(
                FxDriverGlobals,
                2u,
                6u,
                0x12u,
                WPP_FxValidateFunctions_cpp_Traceguids,
                Attributes,
                ExecutionLevel,
                0xC0200209);
              return v12;
            }
            SynchronizationScope = Attributes->SynchronizationScope;
            if ( SynchronizationScope == WdfSynchronizationScopeInvalid
              || SynchronizationScope > WdfSynchronizationScopeNone )
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
              return v12;
            }
            if ( (Flags & 4) == 0
              && SynchronizationScope != WdfSynchronizationScopeInheritFromParent
              && SynchronizationScope != WdfSynchronizationScopeNone )
            {
              v12 = -1071644144;
              WPP_IFR_SF_qLd(
                FxDriverGlobals,
                (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
                6u,
                0x14u,
                WPP_FxValidateFunctions_cpp_Traceguids,
                Attributes,
                SynchronizationScope,
                -1071644144);
              return v12;
            }
            if ( (Flags & 2) == 0 && ExecutionLevel != WdfExecutionLevelInheritFromParent )
            {
              v12 = -1071644143;
              WPP_IFR_SF_qLd(
                FxDriverGlobals,
                (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
                6u,
                0x15u,
                WPP_FxValidateFunctions_cpp_Traceguids,
                Attributes,
                ExecutionLevel,
                -1071644143);
              return v12;
            }
            return 0LL;
          }
          v12 = -1071644145;
          WPP_IFR_SF_qqd(
            FxDriverGlobals,
            2u,
            6u,
            0x10u,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            ParentObject,
            -1071644145);
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
