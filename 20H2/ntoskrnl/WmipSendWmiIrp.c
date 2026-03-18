/*
 * XREFs of WmipSendWmiIrp @ 0x14075074C
 * Callers:
 *     WmipQueryAllData @ 0x140647730 (WmipQueryAllData.c)
 *     WmipRegisterOrUpdateDS @ 0x14074F9BC (WmipRegisterOrUpdateDS.c)
 *     WmipQuerySetExecuteSI @ 0x1407504A0 (WmipQuerySetExecuteSI.c)
 *     WmipEnableCollectionForNewGuid @ 0x140750CFC (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140751344 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipSendEnableDisableRequest @ 0x14077A220 (WmipSendEnableDisableRequest.c)
 *     WmipDereferenceEvent @ 0x140934C1C (WmipDereferenceEvent.c)
 *     WmipProcessLegacyEtwCallback @ 0x140935F60 (WmipProcessLegacyEtwCallback.c)
 * Callees:
 *     IoAllocateIrp @ 0x140204780 (IoAllocateIrp.c)
 *     IoFreeIrp @ 0x140218F40 (IoFreeIrp.c)
 *     WmipForwardWmiIrp @ 0x140647D4C (WmipForwardWmiIrp.c)
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
