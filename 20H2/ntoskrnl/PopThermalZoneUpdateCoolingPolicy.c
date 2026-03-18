/*
 * XREFs of PopThermalZoneUpdateCoolingPolicy @ 0x1408EA6DC
 * Callers:
 *     PopThermalCoolingPowerSettingCallback @ 0x14039AAC0 (PopThermalCoolingPowerSettingCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     IoCancelIrp @ 0x140318CD0 (IoCancelIrp.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 */

void PopThermalZoneUpdateCoolingPolicy()
{
  struct _KTHREAD *CurrentThread; // rax
  PIRP i; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = (PIRP)PopThermal; i != (PIRP)&PopThermal; i = *(PIRP *)&i->Type )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&i[2].Flags);
    IoCancelIrp((PIRP)i->IoStatus.Information);
    PopReleaseRwLock((ULONG_PTR)&i[2].Flags);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
