/*
 * XREFs of PopBatteryEtwCallback @ 0x1408E9D70
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140397058 (PopBatteryTraceSystemBatteryStatus.c)
 */

void __fastcall PopBatteryEtwCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( ControlCode == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
    PopBatteryTraceSystemBatteryStatus(1);
    PopReleaseRwLock((ULONG_PTR)&PopCB);
    PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  }
}
