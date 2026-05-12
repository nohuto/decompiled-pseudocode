/*
 * XREFs of RaUnitStorageDiagnosticIoctl @ 0x1C007A06C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B8F8 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 */

NTSTATUS __fastcall RaUnitStorageDiagnosticIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v3; // r8d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( a2->AssociatedIrp.MasterIrp )
  {
    if ( CurrentStackLocation->Parameters.Create.Options >= 0x14 && CurrentStackLocation->Parameters.Read.Length >= 0x24 )
    {
      ++a2->CurrentLocation;
      a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
    }
    v3 = -1073741820;
  }
  else
  {
    v3 = -1073741811;
  }
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v3);
}
