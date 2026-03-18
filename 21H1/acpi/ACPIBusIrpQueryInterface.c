/*
 * XREFs of ACPIBusIrpQueryInterface @ 0x1C00109F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     AcpiFanEjectInterface @ 0x1C00116E0 (AcpiFanEjectInterface.c)
 *     AcpiPccEjectInterface @ 0x1C00117AC (AcpiPccEjectInterface.c)
 *     AcpiDeviceResetInterface @ 0x1C0030F20 (AcpiDeviceResetInterface.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 *     AcpiPccGetInterfaceInformation @ 0x1C0059D4C (AcpiPccGetInterfaceInformation.c)
 *     PciBusEjectInterface @ 0x1C009864C (PciBusEjectInterface.c)
 *     ACPIEjectPnpLocationInterface @ 0x1C00990D0 (ACPIEjectPnpLocationInterface.c)
 *     ACPIBusIommuBusInterface @ 0x1C00992B4 (ACPIBusIommuBusInterface.c)
 *     IsPciBus @ 0x1C0099AE4 (IsPciBus.c)
 *     ACPICacheCoherencyInterface @ 0x1C0099DD4 (ACPICacheCoherencyInterface.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1C0099E38 (ACPIBusReenumerateSelfInterface.c)
 *     TranslateEjectInterface @ 0x1C0099F24 (TranslateEjectInterface.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C009DDBC (ACPIInternalSendSynchronousIrp.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C00A330C (AcpiEjectBusNumberTranslator.c)
 *     AcpiArblibEjectInterface @ 0x1C00ACE8C (AcpiArblibEjectInterface.c)
 *     ACPIEjectPartitionUnitInterface @ 0x1C00AFF58 (ACPIEjectPartitionUnitInterface.c)
 */

__int64 __fastcall ACPIBusIrpQueryInterface(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int Status; // ebx
  __int64 DeviceExtension; // rax
  GUID *SecurityContext; // rsi
  unsigned int EaLength; // r13d
  __int64 v9; // r14
  unsigned int InterfaceInformation; // eax
  __int64 v12; // rax
  struct _DEVICE_OBJECT *v13; // rcx
  unsigned int v14; // ebx
  const void *v15; // rdx
  _QWORD *v16; // rsi
  unsigned int Size; // ebx
  _QWORD *QuadPart; // rsi

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
    goto LABEL_64;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v14 = 88;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
      v14 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v15 = &ACPIInterfaceTable2;
    goto LABEL_62;
  }
  if ( SecurityContext == &GUID_TRANSLATOR_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( ((EaLength - 1) & 0xFFFFFFF9) != 0 || EaLength == 5 )
    {
      if ( EaLength == 6 && (unsigned __int8)IsPciBus(a1) && (AcpiOverrideAttributes & 0x1000) == 0 )
      {
        InterfaceInformation = AcpiEjectBusNumberTranslator(a1, a2);
        goto LABEL_29;
      }
    }
    else if ( (unsigned __int8)IsPciBus(a1) )
    {
      InterfaceInformation = TranslateEjectInterface(a1, a2);
      goto LABEL_29;
    }
    goto LABEL_30;
  }
  if ( SecurityContext == &GUID_PCI_BUS_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD, 0x10uLL) == 16
    || SecurityContext == &GUID_PCI_BUS_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    if ( (unsigned __int8)IsPciBus(a1) )
    {
      InterfaceInformation = PciBusEjectInterface(a1, a2);
      goto LABEL_29;
    }
    goto LABEL_30;
  }
  if ( SecurityContext == &GUID_BUS_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_BUS_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    a2->IoStatus.Status = -1073741127;
    v12 = *(_QWORD *)(v9 + 752);
    if ( v12 )
    {
      v13 = *(struct _DEVICE_OBJECT **)(v12 + 728);
      if ( v13 )
      {
        if ( v12 == RootDeviceExtension )
          CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)a1;
        a2->IoStatus.Status = ACPIInternalSendSynchronousIrp(v13);
      }
    }
    goto LABEL_41;
  }
  if ( SecurityContext == &GUID_ARBITER_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( (*(_QWORD *)(v9 + 8) & 0x2000000000LL) != 0 && *(_BYTE *)(v9 + 184) )
    {
      InterfaceInformation = AcpiArblibEjectInterface(a1, a2);
      goto LABEL_28;
    }
    goto LABEL_30;
  }
  if ( SecurityContext == &GUID_PARTITION_UNIT_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PARTITION_UNIT_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( (*(_QWORD *)(v9 + 8) & 0x2000000000LL) != 0 )
    {
      InterfaceInformation = ACPIEjectPartitionUnitInterface(a1, a2);
      goto LABEL_28;
    }
    goto LABEL_30;
  }
  if ( SecurityContext == &GUID_PCC_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    InterfaceInformation = AcpiPccEjectInterface(a1, a2);
    goto LABEL_28;
  }
  if ( SecurityContext == &GUID_PCC_INTERFACE_INTERNAL
    || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_INTERNAL, 0x10uLL) == 16 )
  {
    if ( (*(_QWORD *)(v9 + 8) & 0x1000000000LL) != 0 )
    {
      InterfaceInformation = AcpiPccGetInterfaceInformation(a1, a2);
      goto LABEL_28;
    }
    goto LABEL_30;
  }
  if ( SecurityContext == &GUID_D3COLD_SUPPORT_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) == 16 )
  {
    v14 = 72;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x48u )
      v14 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v15 = &D3Interface;
LABEL_62:
    v16 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v16, v15, v14);
    if ( v14 > 0x10 )
      v16[1] = v9;
LABEL_64:
    Status = 0;
    goto LABEL_31;
  }
  if ( SecurityContext != &GUID_THERMAL_COOLING_INTERFACE
    && RtlCompareMemory(SecurityContext, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) != 16 )
  {
    if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
      || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
    {
      InterfaceInformation = ACPIEjectPnpLocationInterface(a1, a2);
    }
    else if ( SecurityContext == &GUID_DMA_CACHE_COHERENCY_INTERFACE
           || RtlCompareMemory(SecurityContext, &GUID_DMA_CACHE_COHERENCY_INTERFACE, 0x10uLL) == 16 )
    {
      InterfaceInformation = ACPICacheCoherencyInterface(v9, CurrentStackLocation);
    }
    else if ( SecurityContext == &GUID_DEVICE_RESET_INTERFACE_STANDARD
           || RtlCompareMemory(SecurityContext, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      InterfaceInformation = AcpiDeviceResetInterface(a1, a2, 0LL, 0LL);
    }
    else if ( SecurityContext == &GUID_REENUMERATE_SELF_INTERFACE_STANDARD
           || RtlCompareMemory(SecurityContext, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      InterfaceInformation = ACPIBusReenumerateSelfInterface(v9, CurrentStackLocation);
    }
    else
    {
      if ( SecurityContext != &GUID_IOMMU_BUS_INTERFACE
        && RtlCompareMemory(SecurityContext, &GUID_IOMMU_BUS_INTERFACE, 0x10uLL) != 16 )
      {
        goto LABEL_41;
      }
      InterfaceInformation = ACPIBusIommuBusInterface(a1, a2);
    }
    goto LABEL_28;
  }
  if ( (*(_QWORD *)(v9 + 960) & 0x200000000LL) != 0 )
  {
    InterfaceInformation = AcpiFanEjectInterface(a1, a2);
LABEL_28:
    a2->IoStatus.Status = InterfaceInformation;
LABEL_29:
    Status = InterfaceInformation;
  }
LABEL_30:
  if ( Status == -1073741637 )
  {
LABEL_41:
    Status = a2->IoStatus.Status;
    goto LABEL_32;
  }
LABEL_31:
  a2->IoStatus.Status = Status;
LABEL_32:
  IofCompleteRequest(a2, 0);
  return Status;
}
