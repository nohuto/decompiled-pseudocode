/*
 * XREFs of IoCancelIrp @ 0x140347600
 * Callers:
 *     PopThermalZoneDpc @ 0x1402010E0 (PopThermalZoneDpc.c)
 *     IopCancelIrpsInFileObjectList @ 0x14034725C (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x1403474B4 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalPollingPowerSettingCallback @ 0x1403CC3E0 (PopThermalPollingPowerSettingCallback.c)
 *     FsRtlpWaitOnIrp @ 0x1404EB8C0 (FsRtlpWaitOnIrp.c)
 *     PopThermalZoneTimerCallback @ 0x14056A6D0 (PopThermalZoneTimerCallback.c)
 *     IoCancelThreadIo @ 0x1406B1050 (IoCancelThreadIo.c)
 *     FsRtlSetKernelEaFile @ 0x1406DC020 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406DC1C0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406DC3C0 (FsRtlKernelFsControlFile.c)
 *     NtCancelIoFile @ 0x1406EE850 (NtCancelIoFile.c)
 *     PopBatteryWorker @ 0x14076D000 (PopBatteryWorker.c)
 *     FsRtlQueryInformationFile @ 0x140889190 (FsRtlQueryInformationFile.c)
 *     IopCancelAlertedRequest @ 0x14088DF6C (IopCancelAlertedRequest.c)
 *     IopCancelPendingEject @ 0x1408AF878 (IopCancelPendingEject.c)
 *     PopThermalReadCounters @ 0x1408E4860 (PopThermalReadCounters.c)
 *     PopThermalZoneRemove @ 0x1408E4970 (PopThermalZoneRemove.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x1408E4ACC (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopBatteryRemove @ 0x1408EA210 (PopBatteryRemove.c)
 *     PopFanRemove @ 0x1408EE320 (PopFanRemove.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     IovCancelIrp @ 0x1409C1F4C (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x1409CD3C0 (IovpCancelRoutine.c)
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
