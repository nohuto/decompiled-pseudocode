/*
 * XREFs of PopFanSxExit @ 0x140398C88
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 */

void PopFanSxExit()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = PopFans; (__int64 *)i != &PopFans; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive(i + 400);
    if ( *(_BYTE *)(i + 88) )
    {
      *(_QWORD *)(i + 208) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(i + 200) = 0;
    }
    PopReleaseRwLock(i + 400);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
