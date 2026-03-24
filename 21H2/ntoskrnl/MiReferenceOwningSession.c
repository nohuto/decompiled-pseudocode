/*
 * XREFs of MiReferenceOwningSession @ 0x14029947C
 * Callers:
 *     MiLockStealSystemVm @ 0x140298704 (MiLockStealSystemVm.c)
 *     MiCapturePfnVm @ 0x140368100 (MiCapturePfnVm.c)
 * Callees:
 *     MiSelectSessionAttachProcess @ 0x14020657C (MiSelectSessionAttachProcess.c)
 *     MiGetTopLevelPfn @ 0x14026A4F0 (MiGetTopLevelPfn.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x140299518 (MiTryToAcquireExpansionLockAtDpc.c)
 */

_QWORD *__fastcall MiReferenceOwningSession(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 TopLevelPfn; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  TopLevelPfn = MiGetTopLevelPfn(a1, a2, a3, a4);
  v6 = *(_QWORD *)(TopLevelPfn + 24) >> 62;
  if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v7 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned int)MiTryToAcquireExpansionLockAtDpc(&LockHandle, v6) )
    {
      v8 = MiSelectSessionAttachProcess(v7);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      return v8;
    }
  }
  return 0LL;
}
