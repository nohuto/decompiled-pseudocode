/*
 * XREFs of ACPIIoctlRegisterDeviceFirmwareLock @ 0x1C002DB1C
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001410 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     AcpiRegisterDeviceFirmwareLockHandler @ 0x1C00A12FC (AcpiRegisterDeviceFirmwareLockHandler.c)
 */

__int64 __fastcall ACPIIoctlRegisterDeviceFirmwareLock(void *a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // eax
  _IRP *MasterIrp; // rax
  unsigned int v6; // edi

  v3 = *(_DWORD *)(a3 + 16);
  a2->IoStatus.Information = 32LL;
  if ( v3 < 0x20 )
  {
    v6 = -1073741820;
  }
  else
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( *(_DWORD *)&MasterIrp->Type == 1382433857 && MasterIrp->AllocationProcessorNumber )
      v6 = AcpiRegisterDeviceFirmwareLockHandler(a1);
    else
      v6 = -1072431089;
  }
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 0);
  return v6;
}
