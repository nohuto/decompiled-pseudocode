/*
 * XREFs of IoCancelIrp @ 0x14022D160
 * Callers:
 *     IopCancelIrpsInCurrentThreadList @ 0x14022CFE4 (IopCancelIrpsInCurrentThreadList.c)
 *     FsRtlpWaitOnIrp @ 0x140249470 (FsRtlpWaitOnIrp.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402A7370 (IopCancelIrpsInFileObjectList.c)
 *     PopThermalZoneDpc @ 0x140376100 (PopThermalZoneDpc.c)
 *     PopThermalPollingPowerSettingCallback @ 0x1403DEBE0 (PopThermalPollingPowerSettingCallback.c)
 *     PopThermalZoneTimerCallback @ 0x1405D09A0 (PopThermalZoneTimerCallback.c)
 *     IopCancelAlertedRequest @ 0x140661B8C (IopCancelAlertedRequest.c)
 *     FsRtlSetKernelEaFile @ 0x1406A3540 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A4870 (FsRtlQueryKernelEaFile.c)
 *     NtCancelIoFile @ 0x1406A4A70 (NtCancelIoFile.c)
 *     IoCancelThreadIo @ 0x14079FC78 (IoCancelThreadIo.c)
 *     PopBatteryWorker @ 0x1407EDFC0 (PopBatteryWorker.c)
 *     FsRtlQueryInformationFile @ 0x14092ED30 (FsRtlQueryInformationFile.c)
 *     IopCancelPendingEject @ 0x140958514 (IopCancelPendingEject.c)
 *     PopThermalReadCounters @ 0x140990634 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x140990740 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x14099089C (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopBatteryRemove @ 0x140995040 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1409991F0 (PopFanRemove.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IovpCancelRoutine @ 0x140A7EC2C (IovpCancelRoutine.c)
 *     IovCancelIrp @ 0x140A805A8 (IovCancelIrp.c)
 */

BOOLEAN __stdcall IoCancelIrp(PIRP Irp)
{
  KIRQL v2; // al
  void (__fastcall *v3)(PDEVICE_OBJECT, PIRP); // rdi
  KIRQL v4; // si
  bool v5; // zf

  if ( ViVerifierEnabled && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (VfRuleClasses & 0x200000000LL) != 0) )
    IovCancelIrp();
  v2 = KeAcquireQueuedSpinLock(7uLL);
  Irp->Cancel = 1;
  v3 = (void (__fastcall *)(PDEVICE_OBJECT, PIRP))_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL);
  v4 = v2;
  if ( v3 )
  {
    if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      KeBugCheckEx(0x48u, (ULONG_PTR)Irp, (ULONG_PTR)v3, 0LL, 0LL);
    v5 = ViVerifierEnabled == 0;
    Irp->CancelIrql = v2;
    if ( v5 || !VfXdvEnabled )
      v3(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp);
    else
      IovpCancelRoutine(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp, v3);
    if ( KeGetCurrentIrql() == 2 && v4 != 2 )
      KeBugCheckEx(0x11Bu, (ULONG_PTR)Irp, (ULONG_PTR)v3, 0LL, 0LL);
    return 1;
  }
  else
  {
    KeReleaseQueuedSpinLock(7uLL, v2);
    return 0;
  }
}
