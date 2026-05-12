/*
 * XREFs of RaUnitHwFirmwareActivateIoctl @ 0x1C0046240
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B8F8 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 */

NTSTATUS __fastcall RaUnitHwFirmwareActivateIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v4; // r8d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Create.Options >= 0x10 )
  {
    if ( ((__int64)a2->AssociatedIrp.MasterIrp->MdlAddress & 1) != 0 )
    {
      ++a2->CurrentLocation;
      a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
    }
    v4 = -1073741808;
  }
  else
  {
    v4 = -1073741820;
  }
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v4);
}
