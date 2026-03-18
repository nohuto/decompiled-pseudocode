/*
 * XREFs of PopAcquireUmpoPushLock @ 0x14071DE08
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140362144 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x1406FA358 (PopUmpoProcessMessage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopAcquireUmpoPushLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 )
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopUmpoPushLock, 0LL);
  else
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopUmpoPushLock, 0LL);
}
