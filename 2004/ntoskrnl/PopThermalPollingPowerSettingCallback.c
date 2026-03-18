/*
 * XREFs of PopThermalPollingPowerSettingCallback @ 0x1403CC3E0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140347600 (IoCancelIrp.c)
 */

__int64 PopThermalPollingPowerSettingCallback()
{
  char v0; // al
  struct _KTHREAD *CurrentThread; // rax
  PIRP i; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalLock);
  v0 = !PopPdcIdleResiliency || dword_140C238AC != 1;
  if ( PopThermalPollingMode && PopThermalPollingWakesAllowed != v0 )
  {
    PopThermalPollingWakesAllowed = v0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
    for ( i = (PIRP)PopThermal; i != (PIRP)&PopThermal; i = *(PIRP *)&i->Type )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&i[2].Flags);
      if ( i[1].AssociatedIrp.IrpCount || (i->PendingReturned & 1) != 0 && LODWORD(i->CancelRoutine) )
        IoCancelIrp((PIRP)i->IoStatus.Information);
      PopReleaseRwLock((ULONG_PTR)&i[2].Flags);
    }
    PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  }
  PopReleaseRwLock((ULONG_PTR)&PopThermalLock);
  return 0LL;
}
