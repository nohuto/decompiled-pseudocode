/*
 * XREFs of IoDeleteDevice @ 0x14026F700
 * Callers:
 *     RawDeleteVcb @ 0x140634218 (RawDeleteVcb.c)
 *     RawMountVolume @ 0x140635500 (RawMountVolume.c)
 *     PiSwDestroyDeviceObject @ 0x140720998 (PiSwDestroyDeviceObject.c)
 *     IopInitializeDeviceInstanceKey @ 0x140739284 (IopInitializeDeviceInstanceKey.c)
 *     IopPnPDispatch @ 0x140739C80 (IopPnPDispatch.c)
 *     IopLegacyResourceAllocation @ 0x14073D9A4 (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x14073DAD8 (IopRemoveLegacyDeviceNode.c)
 *     IoCreateDeviceSecure @ 0x14074C850 (IoCreateDeviceSecure.c)
 *     PiSwGetChildPdo @ 0x14075DFAC (PiSwGetChildPdo.c)
 *     HalpAddDevice @ 0x1407963D0 (HalpAddDevice.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407B61C8 (IopCreateRootEnumeratedDeviceObject.c)
 *     VrpRegistryUnload @ 0x14087F720 (VrpRegistryUnload.c)
 *     PiInitializeDevice @ 0x1408B0B6C (PiInitializeDevice.c)
 *     RawShutdown @ 0x14090BEA0 (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x1409C52A0 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x1409E1EE4 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x1409E22F0 (ViFilterDispatchPnp.c)
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140A65130 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140A65390 (WmipDriverEntry.c)
 * Callees:
 *     PoRunDownDeviceObject @ 0x14026F858 (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x14026F940 (IopCompleteUnloadOrDelete.c)
 *     IopVerifierExAllocatePool_0 @ 0x14027C6F4 (IopVerifierExAllocatePool_0.c)
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
 *     IopRemoveTimerFromTimerList @ 0x1403CB6FC (IopRemoveTimerFromTimerList.c)
 *     PnpFreeInterruptInformation @ 0x140634248 (PnpFreeInterruptInformation.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x1406348FC (EtwTiLogDeviceObjectLoadUnload.c)
 *     ObQueryNameString @ 0x14065F880 (ObQueryNameString.c)
 *     ObMakeTemporaryObject @ 0x14070AFD0 (ObMakeTemporaryObject.c)
 *     IoUnregisterShutdownNotification @ 0x1409A81A0 (IoUnregisterShutdownNotification.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     IovDeleteDevice @ 0x1409C2188 (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  ULONG Flags; // eax
  _OBJECT_NAME_INFORMATION *v2; // rsi
  _OBJECT_NAME_INFORMATION *v3; // rdi
  PIO_TIMER Timer; // rdi
  KIRQL v6; // al
  _OBJECT_NAME_INFORMATION *Pool_0; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  Flags = DeviceObject->Flags;
  v2 = 0LL;
  ReturnLength = 0;
  v3 = 0LL;
  if ( (Flags & 0x40) != 0 && ObQueryNameString(DeviceObject, 0LL, 0, &ReturnLength) == -1073741820 )
  {
    Pool_0 = (_OBJECT_NAME_INFORMATION *)IopVerifierExAllocatePool_0(1LL, ReturnLength);
    v3 = Pool_0;
    if ( Pool_0 )
    {
      if ( ObQueryNameString(DeviceObject, Pool_0, ReturnLength, &ReturnLength) >= 0 )
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
