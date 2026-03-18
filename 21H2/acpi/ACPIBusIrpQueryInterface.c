/*
 * XREFs of ACPIBusIrpQueryInterface @ 0x1C0005A80
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     AcpiDeviceResetInterface @ 0x1C002CBD0 (AcpiDeviceResetInterface.c)
 *     AcpiFanEjectInterface @ 0x1C002DC64 (AcpiFanEjectInterface.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     AcpiPccEjectInterface @ 0x1C005AA64 (AcpiPccEjectInterface.c)
 *     ACPICacheCoherencyInterface @ 0x1C0090A3C (ACPICacheCoherencyInterface.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1C0090C3C (ACPIBusReenumerateSelfInterface.c)
 *     IsPciBus @ 0x1C0091898 (IsPciBus.c)
 *     ACPIEjectPnpLocationInterface @ 0x1C00922E0 (ACPIEjectPnpLocationInterface.c)
 *     ACPIBusIommuBusInterface @ 0x1C00923D0 (ACPIBusIommuBusInterface.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C0093610 (ACPIInternalSendSynchronousIrp.c)
 *     TranslateEjectInterface @ 0x1C0097130 (TranslateEjectInterface.c)
 *     PciBusEjectInterface @ 0x1C00A1458 (PciBusEjectInterface.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C00A1918 (AcpiEjectBusNumberTranslator.c)
 *     AcpiArblibEjectInterface @ 0x1C00ABEA0 (AcpiArblibEjectInterface.c)
 *     ACPIEjectPartitionUnitInterface @ 0x1C00AF728 (ACPIEjectPartitionUnitInterface.c)
 *     AcpiSdevIdentifierInterface @ 0x1C00B4CE0 (AcpiSdevIdentifierInterface.c)
 */

__int64 __fastcall ACPIBusIrpQueryInterface(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int Status; // ebx
  __int64 DeviceExtension; // rax
  GUID *SecurityContext; // rdi
  unsigned int EaLength; // r13d
  __int64 v9; // r15
  unsigned int v10; // eax
  unsigned int v12; // ebx
  const void *v13; // rdx
  _QWORD *v14; // rdi
  __int64 v15; // rax
  struct _DEVICE_OBJECT *v16; // rcx
  unsigned int Size; // ebx
  _QWORD *QuadPart; // rdi

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = -1073741637;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  v9 = DeviceExtension;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = 88;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
      Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(QuadPart, &ACPIInterfaceTable, Size);
    if ( Size > 0x10 )
      QuadPart[1] = a1;
    goto LABEL_52;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v12 = 88;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
      v12 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v13 = &ACPIInterfaceTable2;
    goto LABEL_50;
  }
  if ( SecurityContext == &GUID_TRANSLATOR_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( ((EaLength - 1) & 0xFFFFFFF9) != 0 || EaLength == 5 )
    {
      if ( EaLength == 6 && (unsigned __int8)IsPciBus(a1) && (AcpiOverrideAttributes & 0x1000) == 0 )
      {
        v10 = AcpiEjectBusNumberTranslator(a1, a2);
        goto LABEL_38;
      }
    }
    else if ( (unsigned __int8)IsPciBus(a1) )
    {
      v10 = TranslateEjectInterface(a1, a2);
      goto LABEL_38;
    }
    goto LABEL_39;
  }
  if ( SecurityContext == &GUID_PCI_BUS_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD, 0x10uLL) == 16
    || SecurityContext == &GUID_PCI_BUS_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    if ( (unsigned __int8)IsPciBus(a1) )
    {
      v10 = PciBusEjectInterface(a1, a2);
      goto LABEL_38;
    }
    goto LABEL_39;
  }
  if ( SecurityContext == &GUID_BUS_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_BUS_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    a2->IoStatus.Status = -1073741127;
    v15 = *(_QWORD *)(v9 + 792);
    if ( v15 )
    {
      v16 = *(struct _DEVICE_OBJECT **)(v15 + 768);
      if ( v16 )
      {
        if ( v15 == RootDeviceExtension )
          CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)a1;
        a2->IoStatus.Status = ACPIInternalSendSynchronousIrp(v16);
      }
    }
    goto LABEL_35;
  }
  if ( SecurityContext == &GUID_ARBITER_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( _bittest64((const signed __int64 *)(v9 + 8), 0x25u) && *(_BYTE *)(v9 + 184) )
    {
      v10 = AcpiArblibEjectInterface(a1, a2);
      goto LABEL_37;
    }
    goto LABEL_39;
  }
  if ( SecurityContext == &GUID_PARTITION_UNIT_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PARTITION_UNIT_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( _bittest64((const signed __int64 *)(v9 + 8), 0x25u) )
    {
      v10 = ACPIEjectPartitionUnitInterface(a1, a2);
      goto LABEL_37;
    }
    goto LABEL_39;
  }
  if ( SecurityContext == &GUID_PCC_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    v10 = AcpiPccEjectInterface(a1, a2);
    goto LABEL_37;
  }
  if ( SecurityContext == &GUID_D3COLD_SUPPORT_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) == 16 )
  {
    v12 = 72;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x48u )
      v12 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v13 = &D3Interface;
LABEL_50:
    v14 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v14, v13, v12);
    if ( v12 > 0x10 )
      v14[1] = v9;
LABEL_52:
    Status = 0;
    goto LABEL_40;
  }
  if ( SecurityContext != &GUID_THERMAL_COOLING_INTERFACE
    && RtlCompareMemory(SecurityContext, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) != 16 )
  {
    if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
      || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
    {
      v10 = ACPIEjectPnpLocationInterface(a1, a2);
    }
    else if ( SecurityContext == &GUID_DMA_CACHE_COHERENCY_INTERFACE
           || RtlCompareMemory(SecurityContext, &GUID_DMA_CACHE_COHERENCY_INTERFACE, 0x10uLL) == 16 )
    {
      v10 = ACPICacheCoherencyInterface(v9, CurrentStackLocation);
    }
    else if ( SecurityContext == &GUID_DEVICE_RESET_INTERFACE_STANDARD
           || RtlCompareMemory(SecurityContext, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      v10 = AcpiDeviceResetInterface(a1, a2, 0LL, 0LL);
    }
    else if ( SecurityContext == &GUID_REENUMERATE_SELF_INTERFACE_STANDARD
           || RtlCompareMemory(SecurityContext, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      v10 = ACPIBusReenumerateSelfInterface(v9, CurrentStackLocation);
    }
    else
    {
      if ( SecurityContext != &GUID_IOMMU_BUS_INTERFACE
        && RtlCompareMemory(SecurityContext, &GUID_IOMMU_BUS_INTERFACE, 0x10uLL) != 16 )
      {
        if ( SecurityContext != &GUID_SDEV_IDENTIFIER_INTERFACE
          && RtlCompareMemory(SecurityContext, &GUID_SDEV_IDENTIFIER_INTERFACE, 0x10uLL) != 16 )
        {
          goto LABEL_35;
        }
        v10 = AcpiSdevIdentifierInterface(a1, CurrentStackLocation);
        goto LABEL_38;
      }
      v10 = ACPIBusIommuBusInterface(a1, a2);
    }
    goto LABEL_37;
  }
  if ( _bittest64((const signed __int64 *)(v9 + 1000), 0x21u) )
  {
    v10 = AcpiFanEjectInterface(a1, a2);
LABEL_37:
    a2->IoStatus.Status = v10;
LABEL_38:
    Status = v10;
  }
LABEL_39:
  if ( Status != -1073741637 )
  {
LABEL_40:
    a2->IoStatus.Status = Status;
    goto LABEL_41;
  }
LABEL_35:
  Status = a2->IoStatus.Status;
LABEL_41:
  IofCompleteRequest(a2, 0);
  return Status;
}
