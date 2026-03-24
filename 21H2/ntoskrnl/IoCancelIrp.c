/*
 * XREFs of IoCancelIrp @ 0x1402BB2C0
 * Callers:
 *     PopThermalZoneDpc @ 0x1402010F0 (PopThermalZoneDpc.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402BAF1C (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x1402BB174 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalPollingPowerSettingCallback @ 0x1403CF970 (PopThermalPollingPowerSettingCallback.c)
 *     FsRtlpWaitOnIrp @ 0x1404F0CF0 (FsRtlpWaitOnIrp.c)
 *     PopThermalZoneTimerCallback @ 0x14056FB10 (PopThermalZoneTimerCallback.c)
 *     IoCancelThreadIo @ 0x14064C9B0 (IoCancelThreadIo.c)
 *     FsRtlSetKernelEaFile @ 0x140689CB0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140689E50 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x14068A050 (FsRtlKernelFsControlFile.c)
 *     NtCancelIoFile @ 0x14069D970 (NtCancelIoFile.c)
 *     PopBatteryWorker @ 0x14077F810 (PopBatteryWorker.c)
 *     FsRtlQueryInformationFile @ 0x14088C280 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x14089108C (IopCancelAlertedRequest.c)
 *     IopCancelPendingEject @ 0x1408B2978 (IopCancelPendingEject.c)
 *     PopThermalReadCounters @ 0x1408E7C70 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x1408E7D80 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x1408E7EDC (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopBatteryRemove @ 0x1408ED620 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1408F1730 (PopFanRemove.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140310BD0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140310C70 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     IovCancelIrp @ 0x1409C4F5C (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x1409D03D0 (IovpCancelRoutine.c)
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
