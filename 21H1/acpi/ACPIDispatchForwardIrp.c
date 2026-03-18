/*
 * XREFs of ACPIDispatchForwardIrp @ 0x1C0001E60
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C000B4E0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIDispatchWmiLog @ 0x1C0030830 (ACPIDispatchWmiLog.c)
 *     ACPIDispatchForwardIrpWithExceptions @ 0x1C0052C20 (ACPIDispatchForwardIrpWithExceptions.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0098C40 (ACPIRootIrpQueryInterface.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C0098E60 (ACPIFilterIrpQueryInterface.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0099450 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C009C110 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIFilterIrpQueryId @ 0x1C00A23B0 (ACPIFilterIrpQueryId.c)
 *     ACPIThermalWmi @ 0x1C00A3290 (ACPIThermalWmi.c)
 *     ACPIEcOtherIrpDispatch @ 0x1C00AE400 (ACPIEcOtherIrpDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDispatchForwardIrp(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  KIRQL v4; // al
  __int64 v5; // rdi
  unsigned int Status; // edi

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v5 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( v5 && *(_DWORD *)(v5 + 16) != 1599293264 )
    KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  if ( *(_QWORD *)(v5 + 736) )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 736), Irp);
  }
  else
  {
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
  }
  return Status;
}
