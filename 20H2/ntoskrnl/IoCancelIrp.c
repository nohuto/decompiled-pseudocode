/*
 * XREFs of IoCancelIrp @ 0x140318CD0
 * Callers:
 *     PopThermalZoneDpc @ 0x1402010E0 (PopThermalZoneDpc.c)
 *     IopCancelIrpsInFileObjectList @ 0x14031892C (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x140318B84 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalPollingPowerSettingCallback @ 0x1403CF000 (PopThermalPollingPowerSettingCallback.c)
 *     FsRtlpWaitOnIrp @ 0x1404EF150 (FsRtlpWaitOnIrp.c)
 *     PopThermalZoneTimerCallback @ 0x14056E100 (PopThermalZoneTimerCallback.c)
 *     IoCancelThreadIo @ 0x1406835B4 (IoCancelThreadIo.c)
 *     FsRtlSetKernelEaFile @ 0x1406B41A0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406B4340 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B4540 (FsRtlKernelFsControlFile.c)
 *     NtCancelIoFile @ 0x1406C2770 (NtCancelIoFile.c)
 *     PopBatteryWorker @ 0x14077BA30 (PopBatteryWorker.c)
 *     FsRtlQueryInformationFile @ 0x14088ECE0 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x140893ABC (IopCancelAlertedRequest.c)
 *     IopCancelPendingEject @ 0x1408B53A8 (IopCancelPendingEject.c)
 *     PopThermalReadCounters @ 0x1408EA470 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x1408EA580 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x1408EA6DC (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopBatteryRemove @ 0x1408EFE20 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1408F3F30 (PopFanRemove.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     IovCancelIrp @ 0x1409C7F6C (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x1409D33E0 (IovpCancelRoutine.c)
 */

BOOLEAN __stdcall IoCancelIrp(PIRP Irp)
{
  KIRQL v2; // al
  void (__fastcall *v3)(PDEVICE_OBJECT, PIRP); // rdi
  KIRQL v4; // si
  bool v5; // zf

  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFAFFFFF) != 0 || (VfRuleClasses & 0x200000000LL) != 0
                                          || (VfRuleClasses & 0x400000000LL) != 0) )
  {
    IovCancelIrp();
  }
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
    if ( !v5
      && ((VfRuleClasses & 0xFFAFFFFF) != 0
       || (VfRuleClasses & 0x200000000LL) != 0
       || (VfRuleClasses & 0x400000000LL) != 0) )
    {
      IovpCancelRoutine(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp, v3);
    }
    else
    {
      v3(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp);
    }
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
