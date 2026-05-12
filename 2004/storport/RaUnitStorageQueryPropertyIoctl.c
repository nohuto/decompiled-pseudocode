/*
 * XREFs of RaUnitStorageQueryPropertyIoctl @ 0x1C00710A8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000BEE8 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0029448 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C00482C0 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceNumaPropertyIoctl @ 0x1C0048424 (RaUnitStorageQueryDeviceNumaPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C00484AC (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C00485FC (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C00487C0 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C00711D4 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C0074760 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0074AA4 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C0074B7C (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 */

NTSTATUS __fastcall RaUnitStorageQueryPropertyIoctl(__int64 a1, PIRP Irp)
{
  int v4; // eax
  __int64 v6; // rcx
  int Status; // [rsp+20h] [rbp-38h]
  GUID v8; // [rsp+30h] [rbp-28h] BYREF

  if ( Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 8 )
  {
    Irp->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(Irp, 0, 0xC00000EF);
  }
  else
  {
    v4 = *(_DWORD *)Irp->AssociatedIrp.MasterIrp;
    if ( v4 )
    {
      switch ( v4 )
      {
        case 2:
          return RaUnitStorageQueryDeviceIdPropertyIoctl(a1);
        case 12:
          return RaUnitStorageQueryDevicePowerPropertyIoctl(a1);
        case 48:
          return RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl(a1);
        case 50:
          return RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl(a1, Irp);
        case 52:
          return RaUnitStorageQueryDeviceTemperaturePropertyIoctl(a1, Irp);
        case 54:
          return RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl(a1, Irp);
        case 59:
          return RaUnitStorageQueryDeviceNumaPropertyIoctl(a1, Irp);
        case 62:
          return RaUnitStorageQueryDeviceEndurancePropertyIoctl(a1, Irp);
        default:
          if ( StorEtwLoggingEnabled )
          {
            v8 = 0LL;
            IoGetActivityIdIrp(Irp, &v8);
            if ( (byte_1C0068842 & 0x10) != 0 )
            {
              Status = Irp->IoStatus.Status;
              McTemplateK0pd_EtwWriteTransfer(v6, &EventNonReadWriteRequestComplete, &v8, Irp, Status);
            }
          }
          ++Irp->CurrentLocation;
          ++Irp->Tail.Overlay.CurrentStackLocation;
          return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), Irp);
      }
    }
    else
    {
      return RaUnitStorageQueryDevicePropertyIoctl(a1);
    }
  }
}
