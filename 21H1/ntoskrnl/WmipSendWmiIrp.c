/*
 * XREFs of WmipSendWmiIrp @ 0x14073FFEC
 * Callers:
 *     WmipQueryAllData @ 0x1406812A0 (WmipQueryAllData.c)
 *     WmipRegisterOrUpdateDS @ 0x14073F25C (WmipRegisterOrUpdateDS.c)
 *     WmipQuerySetExecuteSI @ 0x14073FD40 (WmipQuerySetExecuteSI.c)
 *     WmipEnableCollectionForNewGuid @ 0x14074059C (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140740BE4 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipSendEnableDisableRequest @ 0x140769080 (WmipSendEnableDisableRequest.c)
 *     WmipDereferenceEvent @ 0x14092DB3C (WmipDereferenceEvent.c)
 *     WmipProcessLegacyEtwCallback @ 0x14092EE80 (WmipProcessLegacyEtwCallback.c)
 * Callees:
 *     IoFreeIrp @ 0x1402541B0 (IoFreeIrp.c)
 *     IoAllocateIrp @ 0x1402E0EB0 (IoAllocateIrp.c)
 *     WmipForwardWmiIrp @ 0x1406818BC (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrp(
        unsigned __int8 a1,
        unsigned int a2,
        UNICODE_STRING *a3,
        unsigned int a4,
        __int64 a5,
        _OWORD *a6)
{
  PIRP Irp; // rax
  PIRP v11; // rbx
  unsigned int v12; // edi

  while ( 1 )
  {
    Irp = IoAllocateIrp(WmipServiceDeviceObject->StackSize + 1, 0);
    v11 = Irp;
    if ( !Irp )
      break;
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)a5;
    v12 = WmipForwardWmiIrp(Irp, a1, a2, a3, a4, a5);
    *a6 = *(_OWORD *)&v11->IoStatus.Status;
    IoFreeIrp(v11);
    if ( v12 != -1073741160 )
      return v12;
  }
  return 3221225626LL;
}
