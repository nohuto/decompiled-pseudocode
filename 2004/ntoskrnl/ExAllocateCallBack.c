/*
 * XREFs of ExAllocateCallBack @ 0x140782860
 * Callers:
 *     KeRegisterBoundCallback @ 0x14050F430 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x1407822D0 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x1407823A0 (PsEstablishWin32Callouts.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140782480 (PsSetLoadImageNotifyRoutineEx.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x1407826C4 (PspSetCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140782768 (PspSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExInitializePushLock @ 0x140267800 (ExInitializePushLock.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

KSPIN_LOCK *__fastcall ExAllocateCallBack(KSPIN_LOCK a1, KSPIN_LOCK a2)
{
  KSPIN_LOCK *PoolWithTag; // rax
  KSPIN_LOCK *v5; // rbx

  PoolWithTag = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x62726243u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = a1;
    PoolWithTag[2] = a2;
    ExInitializePushLock(PoolWithTag);
  }
  return v5;
}
