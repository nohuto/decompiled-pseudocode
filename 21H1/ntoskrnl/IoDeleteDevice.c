/*
 * XREFs of IoDeleteDevice @ 0x14033F890
 * Callers:
 *     RawMountVolume @ 0x140701B0C (RawMountVolume.c)
 *     RawDeleteVcb @ 0x1407028C8 (RawDeleteVcb.c)
 *     PiSwDestroyDeviceObject @ 0x14071EBF8 (PiSwDestroyDeviceObject.c)
 *     IoCreateDeviceSecure @ 0x140721BA0 (IoCreateDeviceSecure.c)
 *     IopInitializeDeviceInstanceKey @ 0x140737704 (IopInitializeDeviceInstanceKey.c)
 *     IopPnPDispatch @ 0x140738100 (IopPnPDispatch.c)
 *     IopLegacyResourceAllocation @ 0x14073BE24 (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x14073BF58 (IopRemoveLegacyDeviceNode.c)
 *     PiSwGetChildPdo @ 0x14075BACC (PiSwGetChildPdo.c)
 *     HalpAddDevice @ 0x140796620 (HalpAddDevice.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407B3058 (IopCreateRootEnumeratedDeviceObject.c)
 *     VrpRegistryUnload @ 0x14087E430 (VrpRegistryUnload.c)
 *     PiInitializeDevice @ 0x1408AF84C (PiInitializeDevice.c)
 *     RawShutdown @ 0x14090ABF0 (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x1409C5290 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x1409E1E84 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x1409E2290 (ViFilterDispatchPnp.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140A65750 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140A659B0 (WmipDriverEntry.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402033E4 (IopVerifierExAllocatePool.c)
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     PoRunDownDeviceObject @ 0x14033F9E8 (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x14033FAD0 (IopCompleteUnloadOrDelete.c)
 *     IopRemoveTimerFromTimerList @ 0x1403CA91C (IopRemoveTimerFromTimerList.c)
 *     ObQueryNameString @ 0x1405D9580 (ObQueryNameString.c)
 *     PnpFreeInterruptInformation @ 0x1407028F8 (PnpFreeInterruptInformation.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x140702FAC (EtwTiLogDeviceObjectLoadUnload.c)
 *     ObMakeTemporaryObject @ 0x140704430 (ObMakeTemporaryObject.c)
 *     IoUnregisterShutdownNotification @ 0x1409A7340 (IoUnregisterShutdownNotification.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     IovDeleteDevice @ 0x1409C2178 (IovDeleteDevice.c)
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
