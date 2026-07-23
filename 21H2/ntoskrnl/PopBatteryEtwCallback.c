/*
 * XREFs of PopBatteryEtwCallback @ 0x1408ED2E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140399A98 (PopBatteryTraceSystemBatteryStatus.c)
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
