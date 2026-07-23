/*
 * XREFs of IoDeleteDevice @ 0x140203350
 * Callers:
 *     RawDeleteVcb @ 0x1405D914C (RawDeleteVcb.c)
 *     RawMountVolume @ 0x1405D9E90 (RawMountVolume.c)
 *     PiSwDestroyDeviceObject @ 0x14072E988 (PiSwDestroyDeviceObject.c)
 *     IopInitializeDeviceInstanceKey @ 0x140748194 (IopInitializeDeviceInstanceKey.c)
 *     IopPnPDispatch @ 0x140748B90 (IopPnPDispatch.c)
 *     IopLegacyResourceAllocation @ 0x14074C8B4 (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x14074C9E8 (IopRemoveLegacyDeviceNode.c)
 *     IoCreateDeviceSecure @ 0x14075B430 (IoCreateDeviceSecure.c)
 *     PiSwGetChildPdo @ 0x14076C61C (PiSwGetChildPdo.c)
 *     HalpAddDevice @ 0x1407A5700 (HalpAddDevice.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407C49F8 (IopCreateRootEnumeratedDeviceObject.c)
 *     VrpRegistryUnload @ 0x140885270 (VrpRegistryUnload.c)
 *     PiInitializeDevice @ 0x1408B669C (PiInitializeDevice.c)
 *     RawShutdown @ 0x140911AD0 (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x1409CB2C0 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x1409E7F04 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x1409E8310 (ViFilterDispatchPnp.c)
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140A6C400 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140A6C660 (WmipDriverEntry.c)
 * Callees:
 *     PoRunDownDeviceObject @ 0x1402034A8 (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x140203590 (IopCompleteUnloadOrDelete.c)
 *     IopVerifierExAllocatePool @ 0x14020AC94 (IopVerifierExAllocatePool.c)
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 *     IopRemoveTimerFromTimerList @ 0x1403CE31C (IopRemoveTimerFromTimerList.c)
 *     ObMakeTemporaryObject @ 0x1405D6DB0 (ObMakeTemporaryObject.c)
 *     PnpFreeInterruptInformation @ 0x1405D917C (PnpFreeInterruptInformation.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x1405D982C (EtwTiLogDeviceObjectLoadUnload.c)
 *     ObQueryNameString @ 0x140634AC0 (ObQueryNameString.c)
 *     IoUnregisterShutdownNotification @ 0x1409AE110 (IoUnregisterShutdownNotification.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     IovDeleteDevice @ 0x1409C81A8 (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  ULONG Flags; // eax
  _OBJECT_NAME_INFORMATION *v2; // rsi
  _OBJECT_NAME_INFORMATION *v3; // rdi
  PIO_TIMER Timer; // rdi
  KIRQL v6; // al
  _OBJECT_NAME_INFORMATION *Pool; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  Flags = DeviceObject->Flags;
  v2 = 0LL;
  ReturnLength = 0;
  v3 = 0LL;
  if ( (Flags & 0x40) != 0 && ObQueryNameString(DeviceObject, 0LL, 0, &ReturnLength) == -1073741820 )
  {
    Pool = (_OBJECT_NAME_INFORMATION *)IopVerifierExAllocatePool(1LL, ReturnLength);
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
