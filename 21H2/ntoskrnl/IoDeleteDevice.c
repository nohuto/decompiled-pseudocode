/*
 * XREFs of IoDeleteDevice @ 0x1402D3820
 * Callers:
 *     DifIoDeleteDeviceWrapper @ 0x14060E7A0 (DifIoDeleteDeviceWrapper.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406CF970 (IopInitializeDeviceInstanceKey.c)
 *     PiSwGetChildPdo @ 0x1406E32E4 (PiSwGetChildPdo.c)
 *     IoCreateDeviceSecure @ 0x1407435E0 (IoCreateDeviceSecure.c)
 *     RawMountVolume @ 0x14074C2EC (RawMountVolume.c)
 *     RawDeleteVcb @ 0x14074D308 (RawDeleteVcb.c)
 *     IopPnPDispatch @ 0x140763C50 (IopPnPDispatch.c)
 *     HalpAddDevice @ 0x14081E300 (HalpAddDevice.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IopLegacyResourceAllocation @ 0x14081F570 (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x14081F69C (IopRemoveLegacyDeviceNode.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x140859598 (IopCreateRootEnumeratedDeviceObject.c)
 *     VrpRegistryUnload @ 0x140926260 (VrpRegistryUnload.c)
 *     PiSwDestroyDeviceObject @ 0x140953508 (PiSwDestroyDeviceObject.c)
 *     PiInitializeDevice @ 0x14095975C (PiInitializeDevice.c)
 *     RawShutdown @ 0x1409B4E80 (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x140A834A0 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140A9E12C (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x140A9E540 (ViFilterDispatchPnp.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140B229D0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140B22C40 (WmipDriverEntry.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     PoRunDownDeviceObject @ 0x1402D3980 (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x1402D5CA8 (IopCompleteUnloadOrDelete.c)
 *     IopRemoveTimerFromTimerList @ 0x1403DE184 (IopRemoveTimerFromTimerList.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 *     ObQueryNameString @ 0x14070F640 (ObQueryNameString.c)
 *     PnpFreeInterruptInformation @ 0x14074D6AC (PnpFreeInterruptInformation.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14074F418 (EtwTiLogDeviceObjectLoadUnload.c)
 *     IoUnregisterShutdownNotification @ 0x140A65430 (IoUnregisterShutdownNotification.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     IovDeleteDevice @ 0x140A807E4 (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  ULONG Flags; // eax
  struct _OBJECT_NAME_INFORMATION *v2; // rsi
  struct _OBJECT_NAME_INFORMATION *v3; // rdi
  PIO_TIMER Timer; // rdi
  KIRQL v6; // al
  struct _OBJECT_NAME_INFORMATION *Pool2; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  Flags = DeviceObject->Flags;
  v2 = 0LL;
  ReturnLength = 0;
  v3 = 0LL;
  if ( (Flags & 0x40) != 0 && ObQueryNameString(DeviceObject, 0LL, 0, &ReturnLength) == -1073741820 )
  {
    Pool2 = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, ReturnLength, 538996553LL);
    v3 = Pool2;
    if ( Pool2 )
    {
      if ( ObQueryNameString(DeviceObject, Pool2, ReturnLength, &ReturnLength) >= 0 )
        v2 = v3;
    }
  }
  EtwTiLogDeviceObjectLoadUnload(0LL, &DeviceObject->DriverObject->DriverName, v2);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( (MmVerifierData & 0x90) != 0 )
    IovDeleteDevice(DeviceObject, retaddr);
  if ( (DeviceObject->Flags & 0x800) != 0 )
    IoUnregisterShutdownNotification(DeviceObject);
  Timer = DeviceObject->Timer;
  if ( Timer )
  {
    IopRemoveTimerFromTimerList(DeviceObject->Timer);
    ExFreePoolWithTag(Timer, 0);
  }
  if ( (DeviceObject->Flags & 0x40) != 0 )
    ObMakeTemporaryObject(DeviceObject);
  PoRunDownDeviceObject(DeviceObject);
  PnpFreeInterruptInformation(DeviceObject);
  v6 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceObject->DeviceObjectExtension->ExtensionFlags |= 2u;
  if ( DeviceObject->ReferenceCount )
    KeReleaseQueuedSpinLock(0xAuLL, v6);
  else
    IopCompleteUnloadOrDelete((ULONG_PTR)DeviceObject);
}
