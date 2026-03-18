/*
 * XREFs of WmipSendWmiIrp @ 0x140741B6C
 * Callers:
 *     WmipQueryAllData @ 0x140646140 (WmipQueryAllData.c)
 *     WmipRegisterOrUpdateDS @ 0x140740DDC (WmipRegisterOrUpdateDS.c)
 *     WmipQuerySetExecuteSI @ 0x1407418C0 (WmipQuerySetExecuteSI.c)
 *     WmipEnableCollectionForNewGuid @ 0x14074211C (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140742764 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipSendEnableDisableRequest @ 0x14076B460 (WmipSendEnableDisableRequest.c)
 *     WmipDereferenceEvent @ 0x14092EDEC (WmipDereferenceEvent.c)
 *     WmipProcessLegacyEtwCallback @ 0x140930130 (WmipProcessLegacyEtwCallback.c)
 * Callees:
 *     IoAllocateIrp @ 0x140271820 (IoAllocateIrp.c)
 *     IoFreeIrp @ 0x140290A30 (IoFreeIrp.c)
 *     WmipForwardWmiIrp @ 0x14064675C (WmipForwardWmiIrp.c)
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
