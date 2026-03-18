/*
 * XREFs of MiReferenceOwningSession @ 0x140340E64
 * Callers:
 *     MiLockStealSystemVm @ 0x140321C88 (MiLockStealSystemVm.c)
 *     MiCapturePfnVm @ 0x140367E50 (MiCapturePfnVm.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSelectSessionAttachProcess @ 0x14029748C (MiSelectSessionAttachProcess.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1403412CC (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiGetTopLevelPfn @ 0x140341C10 (MiGetTopLevelPfn.c)
 */

_QWORD *__fastcall MiReferenceOwningSession(ULONG_PTR a1)
{
  __int64 TopLevelPfn; // rax
  unsigned __int64 v3; // rbx
  _QWORD *v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  TopLevelPfn = MiGetTopLevelPfn(a1);
  if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v3 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned int)MiTryToAcquireExpansionLockAtDpc(&LockHandle) )
    {
      v4 = MiSelectSessionAttachProcess(v3);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      return v4;
    }
  }
  return 0LL;
}
