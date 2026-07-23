/*
 * XREFs of MiReferenceOwningSession @ 0x140215E5C
 * Callers:
 *     MiLockStealSystemVm @ 0x1402150E4 (MiLockStealSystemVm.c)
 *     MiCapturePfnVm @ 0x1403682B0 (MiCapturePfnVm.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x140215EF8 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiGetTopLevelPfn @ 0x140258490 (MiGetTopLevelPfn.c)
 *     MiSelectSessionAttachProcess @ 0x1402AAEAC (MiSelectSessionAttachProcess.c)
 */

__int64 __fastcall MiReferenceOwningSession(ULONG_PTR a1)
{
  __int64 TopLevelPfn; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rbx
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
