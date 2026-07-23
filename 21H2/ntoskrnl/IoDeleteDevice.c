/*
 * XREFs of IoDeleteDevice @ 0x1402A5DF0
 * Callers:
 *     RawMountVolume @ 0x1406C90C8 (RawMountVolume.c)
 *     RawDeleteVcb @ 0x1406C98D8 (RawDeleteVcb.c)
 *     PiSwDestroyDeviceObject @ 0x140732EB8 (PiSwDestroyDeviceObject.c)
 *     IoCreateDeviceSecure @ 0x14073C640 (IoCreateDeviceSecure.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074EF10 (IopInitializeDeviceInstanceKey.c)
 *     IopPnPDispatch @ 0x14074F910 (IopPnPDispatch.c)
 *     IopLegacyResourceAllocation @ 0x140753634 (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x140753768 (IopRemoveLegacyDeviceNode.c)
 *     PiSwGetChildPdo @ 0x140770AFC (PiSwGetChildPdo.c)
 *     HalpAddDevice @ 0x1407AE6B0 (HalpAddDevice.c)
 *     IoReportDetectedDevice @ 0x1407AEB10 (IoReportDetectedDevice.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407C8FD8 (IopCreateRootEnumeratedDeviceObject.c)
 *     VrpRegistryUnload @ 0x140882970 (VrpRegistryUnload.c)
 *     PiInitializeDevice @ 0x1408B3DCC (PiInitializeDevice.c)
 *     RawShutdown @ 0x14090F3E0 (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x1409C92B0 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x1409E5EF4 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x1409E6300 (ViFilterDispatchPnp.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140A6A840 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140A6AAA0 (WmipDriverEntry.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     PoRunDownDeviceObject @ 0x1402A5F48 (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x1402A6030 (IopCompleteUnloadOrDelete.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     IopRemoveTimerFromTimerList @ 0x1403CEE78 (IopRemoveTimerFromTimerList.c)
 *     ObMakeTemporaryObject @ 0x14061C330 (ObMakeTemporaryObject.c)
 *     ObQueryNameString @ 0x1406C6F80 (ObQueryNameString.c)
 *     PnpFreeInterruptInformation @ 0x1406C9908 (PnpFreeInterruptInformation.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x1406C9FBC (EtwTiLogDeviceObjectLoadUnload.c)
 *     IoUnregisterShutdownNotification @ 0x1409ABF40 (IoUnregisterShutdownNotification.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     IovDeleteDevice @ 0x1409C6198 (IovDeleteDevice.c)
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
    Pool = (_OBJECT_NAME_INFORMATION *)IopVerifierExAllocatePool(PagedPool, ReturnLength);
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
