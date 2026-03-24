/*
 * XREFs of IoDeleteDevice @ 0x140360D90
 * Callers:
 *     RawDeleteVcb @ 0x14071B46C (RawDeleteVcb.c)
 *     RawMountVolume @ 0x14071C1B0 (RawMountVolume.c)
 *     PiSwDestroyDeviceObject @ 0x140732CF8 (PiSwDestroyDeviceObject.c)
 *     IoCreateDeviceSecure @ 0x14073C480 (IoCreateDeviceSecure.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074ED50 (IopInitializeDeviceInstanceKey.c)
 *     IopPnPDispatch @ 0x14074F750 (IopPnPDispatch.c)
 *     IopLegacyResourceAllocation @ 0x140753474 (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x1407535A8 (IopRemoveLegacyDeviceNode.c)
 *     PiSwGetChildPdo @ 0x14077093C (PiSwGetChildPdo.c)
 *     HalpAddDevice @ 0x1407AE4B0 (HalpAddDevice.c)
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407C8CB8 (IopCreateRootEnumeratedDeviceObject.c)
 *     VrpRegistryUnload @ 0x140882810 (VrpRegistryUnload.c)
 *     PiInitializeDevice @ 0x1408B3C6C (PiInitializeDevice.c)
 *     RawShutdown @ 0x14090F280 (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x1409C82B0 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x1409E4EF4 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x1409E5300 (ViFilterDispatchPnp.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140A69840 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140A69AA0 (WmipDriverEntry.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x14022C9E0 (IopVerifierExAllocatePool.c)
 *     KeReleaseQueuedSpinLock @ 0x140310BD0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140310C70 (KeAcquireQueuedSpinLock.c)
 *     PoRunDownDeviceObject @ 0x140360EE8 (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x140360FD0 (IopCompleteUnloadOrDelete.c)
 *     IopRemoveTimerFromTimerList @ 0x1403CED08 (IopRemoveTimerFromTimerList.c)
 *     ObMakeTemporaryObject @ 0x14062C010 (ObMakeTemporaryObject.c)
 *     ObQueryNameString @ 0x140718930 (ObQueryNameString.c)
 *     PnpFreeInterruptInformation @ 0x14071B49C (PnpFreeInterruptInformation.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14071BB4C (EtwTiLogDeviceObjectLoadUnload.c)
 *     IoUnregisterShutdownNotification @ 0x1409AB010 (IoUnregisterShutdownNotification.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     IovDeleteDevice @ 0x1409C5198 (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  ULONG Flags; // eax
  struct _OBJECT_NAME_INFORMATION *v2; // rsi
  struct _OBJECT_NAME_INFORMATION *v3; // rdi
  PIO_TIMER Timer; // rdi
  KIRQL v6; // al
  struct _OBJECT_NAME_INFORMATION *Pool; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  Flags = DeviceObject->Flags;
  v2 = 0LL;
  ReturnLength = 0;
  v3 = 0LL;
  if ( (Flags & 0x40) != 0 && ObQueryNameString(DeviceObject, 0LL, 0, &ReturnLength) == -1073741820 )
  {
    Pool = (struct _OBJECT_NAME_INFORMATION *)IopVerifierExAllocatePool(PagedPool, ReturnLength);
    v3 = Pool;
    if ( Pool )
    {
      if ( ObQueryNameString(DeviceObject, Pool, ReturnLength, &ReturnLength) >= 0 )
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
