/*
 * XREFs of ACPIFilterIrpQueryInterface @ 0x1C00920A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001660 (ACPIDispatchForwardIrp.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     ACPIFilterIrpQueryPnpLocationInterface @ 0x1C0091C18 (ACPIFilterIrpQueryPnpLocationInterface.c)
 *     ACPIFilterIrpQueryIommuInterface @ 0x1C0091D14 (ACPIFilterIrpQueryIommuInterface.c)
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C009EABC (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 *     AcpiSdevIdentifierInterface @ 0x1C00B4CE0 (AcpiSdevIdentifierInterface.c)
 */

__int64 __fastcall ACPIFilterIrpQueryInterface(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v6; // r14
  GUID *SecurityContext; // rbx
  unsigned int v9; // ebx
  _QWORD *v10; // rbp
  unsigned int Size; // ebx
  _QWORD *QuadPart; // rbp
  int v13; // ebx
  unsigned int v14; // ebx
  _QWORD *v15; // rbp

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = 88;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
      Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(QuadPart, &ACPIInterfaceTable, Size);
    if ( Size > 0x10 )
      QuadPart[1] = DeviceObject;
    goto LABEL_28;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v14 = 88;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
      v14 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v15 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v15, &ACPIInterfaceTable2, v14);
    if ( v14 > 0x10 )
      v15[1] = v6;
LABEL_28:
    v13 = 0;
LABEL_29:
    Irp->IoStatus.Status = v13;
    if ( v13 < 0 )
    {
      IofCompleteRequest(Irp, 0);
      return (unsigned int)v13;
    }
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  if ( SecurityContext == &GUID_D3COLD_SUPPORT_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) == 16 )
  {
    v9 = 72;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x48u )
      v9 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v10 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v10, &D3Interface, v9);
    if ( v9 > 0x10 )
      v10[1] = v6;
    Irp->IoStatus.Status = 0;
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    return ACPIFilterIrpQueryPnpLocationInterface((ULONG_PTR)DeviceObject, Irp);
  }
  if ( SecurityContext == &GUID_DEVICE_RESET_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    return ACPIIrpSetPagableCompletionRoutineAndForward(DeviceObject, Irp, 1, 1, 1);
  }
  if ( SecurityContext == &GUID_SDEV_IDENTIFIER_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_SDEV_IDENTIFIER_INTERFACE, 0x10uLL) == 16 )
  {
    v13 = AcpiSdevIdentifierInterface(DeviceObject, CurrentStackLocation);
    if ( v13 == -1073741637 )
      return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
    goto LABEL_29;
  }
  if ( SecurityContext != &GUID_IOMMU_BUS_INTERFACE
    && RtlCompareMemory(SecurityContext, &GUID_IOMMU_BUS_INTERFACE, 0x10uLL) != 16 )
  {
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  return ACPIFilterIrpQueryIommuInterface((ULONG_PTR)DeviceObject, Irp);
}
