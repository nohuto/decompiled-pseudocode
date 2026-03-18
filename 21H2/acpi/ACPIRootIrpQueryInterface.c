/*
 * XREFs of ACPIRootIrpQueryInterface @ 0x1C0091E90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001660 (ACPIDispatchForwardIrp.c)
 *     ACPIDebugGetIrpText @ 0x1C0001908 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     AcpiPccEjectInterface @ 0x1C005AA64 (AcpiPccEjectInterface.c)
 *     ACPIEjectPnpLocationInterface @ 0x1C00922E0 (ACPIEjectPnpLocationInterface.c)
 *     AcpiIrqLibEjectArbiterInterface @ 0x1C00A1890 (AcpiIrqLibEjectArbiterInterface.c)
 *     IrqTranslatorEjectInterface @ 0x1C00A1A70 (IrqTranslatorEjectInterface.c)
 */

__int64 __fastcall ACPIRootIrpQueryInterface(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v5; // r15
  __int64 v6; // rcx
  unsigned __int8 MinorFunction; // r12
  unsigned int EaLength; // ebp
  GUID *SecurityContext; // rbx
  GUID *v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  char *IrpText; // rax
  const char *v14; // r8
  const char *v15; // r10
  char v16; // r11
  unsigned int Status; // ebx
  int v19; // eax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = 1;
  ACPIInternalGetDeviceExtension(BugCheckParameter3);
  MinorFunction = CurrentStackLocation->MinorFunction;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( (SecurityContext == &GUID_ARBITER_INTERFACE_STANDARD
     || RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16)
    && EaLength == 2 )
  {
    v12 = AcpiIrqLibEjectArbiterInterface(v6, Irp);
    goto LABEL_10;
  }
  v10 = &GUID_TRANSLATOR_INTERFACE_STANDARD;
  if ( (SecurityContext == &GUID_TRANSLATOR_INTERFACE_STANDARD
     || RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16)
    && EaLength == 2 )
  {
    v12 = IrqTranslatorEjectInterface(*(_QWORD *)(RootDeviceExtension + 784), v10, Irp);
    goto LABEL_10;
  }
  if ( SecurityContext == &GUID_PCC_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    v19 = AcpiPccEjectInterface(BugCheckParameter3, (__int64)Irp);
    Irp->IoStatus.Status = v19;
    v11 = v19 + 0x80000000;
    if ( (int)v11 >= 0 && v19 != -1073741637 )
      v5 = 0;
  }
  else if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
         || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    v12 = ACPIEjectPnpLocationInterface(BugCheckParameter3, Irp);
LABEL_10:
    Irp->IoStatus.Status = v12;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v11, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x14u,
      (__int64)&WPP_15e34f0648cb3b62da1476f0e646a08b_Traceguids,
      (char)Irp,
      IrpText,
      Irp->IoStatus.Status,
      v16,
      v14,
      v15);
  }
  if ( v5 )
  {
    return (unsigned int)ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
  }
  else
  {
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
  }
  return Status;
}
