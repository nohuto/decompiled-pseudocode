/*
 * XREFs of ExAllocateCallBack @ 0x140790980
 * Callers:
 *     KeRegisterBoundCallback @ 0x140512D60 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x1407903F0 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x1407904C0 (PsEstablishWin32Callouts.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x1407905A0 (PsSetLoadImageNotifyRoutineEx.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x1407907E4 (PspSetCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140790888 (PspSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExInitializePushLock @ 0x1402D6A50 (ExInitializePushLock.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
