/*
 * XREFs of IoCancelIrp @ 0x14030AD00
 * Callers:
 *     PopThermalZoneDpc @ 0x1402010E0 (PopThermalZoneDpc.c)
 *     IopCancelIrpsInFileObjectList @ 0x14030A95C (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x14030ABB4 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalPollingPowerSettingCallback @ 0x1403CB620 (PopThermalPollingPowerSettingCallback.c)
 *     FsRtlpWaitOnIrp @ 0x1404EB290 (FsRtlpWaitOnIrp.c)
 *     PopThermalZoneTimerCallback @ 0x14056A080 (PopThermalZoneTimerCallback.c)
 *     FsRtlSetKernelEaFile @ 0x1406BAD10 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406BAEB0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406BB0B0 (FsRtlKernelFsControlFile.c)
 *     NtCancelIoFile @ 0x1406CD550 (NtCancelIoFile.c)
 *     IoCancelThreadIo @ 0x140706F10 (IoCancelThreadIo.c)
 *     PopBatteryWorker @ 0x14076A860 (PopBatteryWorker.c)
 *     FsRtlQueryInformationFile @ 0x140887E70 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x14088CC4C (IopCancelAlertedRequest.c)
 *     IopCancelPendingEject @ 0x1408AE558 (IopCancelPendingEject.c)
 *     PopThermalReadCounters @ 0x1408E35E0 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x1408E36F0 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x1408E384C (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopBatteryRemove @ 0x1408E8F90 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1408ED030 (PopFanRemove.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     IovCancelIrp @ 0x1409C1F3C (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x1409CD3B0 (IovpCancelRoutine.c)
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
