/*
 * XREFs of WmipSetTraceNotify @ 0x14077CF78
 * Callers:
 *     IoWMIRegistrationControl @ 0x14074E0D0 (IoWMIRegistrationControl.c)
 * Callees:
 *     IoAllocateIrp @ 0x140204780 (IoAllocateIrp.c)
 *     IoFreeIrp @ 0x140218F40 (IoFreeIrp.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140240290 (KeReleaseMutex.c)
 *     IoWMIDeviceObjectToProviderId @ 0x140370890 (IoWMIDeviceObjectToProviderId.c)
 *     WmipForwardWmiIrp @ 0x140647D4C (WmipForwardWmiIrp.c)
 */

void __fastcall WmipSetTraceNotify(PDEVICE_OBJECT DeviceObject, int a2)
{
  __int64 *v3; // rax
  CCHAR v4; // bl
  PIRP Irp; // rax
  IRP *v6; // rbx
  ULONG v7; // eax
  __int64 v8[2]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)v8 = 0LL;
  switch ( a2 )
  {
    case 0x100000:
      v3 = &EtwpDiskIoNotifyRoutines;
LABEL_3:
      LODWORD(v8[0]) = 1;
LABEL_4:
      v8[1] = (__int64)v3;
      break;
    case 0x200000:
      v3 = (__int64 *)EtwpTdiIoNotify;
      goto LABEL_3;
    case 0x400000:
      LODWORD(v8[0]) = 2;
      v3 = (__int64 *)&EtwpFileIoNotifyRoutines;
      goto LABEL_4;
    case 0x800000:
      v3 = &EtwpSplitIoNotifyRoutines;
      goto LABEL_3;
  }
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = WmipServiceDeviceObject->StackSize + 1;
  KeReleaseMutex(&WmipSMMutex, 0);
  Irp = IoAllocateIrp(v4, 0);
  v6 = Irp;
  if ( Irp )
  {
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
    v7 = IoWMIDeviceObjectToProviderId(DeviceObject);
    WmipForwardWmiIrp(v6, 0xDu, v7, 0LL, 0x10u, (__int64)v8);
    IoFreeIrp(v6);
  }
}
