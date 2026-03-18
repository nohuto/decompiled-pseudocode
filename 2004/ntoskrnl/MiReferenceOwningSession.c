/*
 * XREFs of MiReferenceOwningSession @ 0x1403205AC
 * Callers:
 *     MiLockStealSystemVm @ 0x140321188 (MiLockStealSystemVm.c)
 *     MiCapturePfnVm @ 0x140365E70 (MiCapturePfnVm.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSelectSessionAttachProcess @ 0x1402BE93C (MiSelectSessionAttachProcess.c)
 *     MiGetTopLevelPfn @ 0x1402D5600 (MiGetTopLevelPfn.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x14031D910 (MiTryToAcquireExpansionLockAtDpc.c)
 */

_QWORD *__fastcall MiReferenceOwningSession(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 TopLevelPfn; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  TopLevelPfn = MiGetTopLevelPfn(a1, a2, a3, a4);
  v8 = *(_QWORD *)(TopLevelPfn + 24) >> 62;
  if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v9 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( MiTryToAcquireExpansionLockAtDpc(&LockHandle, v8, v6, v7) )
    {
      v10 = MiSelectSessionAttachProcess(v9);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      return v10;
    }
  }
  return 0LL;
}
