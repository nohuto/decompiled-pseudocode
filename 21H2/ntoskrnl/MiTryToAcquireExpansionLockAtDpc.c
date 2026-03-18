/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x1402EB0E0
 * Callers:
 *     MiReferenceOwningSession @ 0x1402313B4 (MiReferenceOwningSession.c)
 *     MiLockStealUserVm @ 0x1402EACBC (MiLockStealUserVm.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1402EB110 (KxTryToAcquireQueuedSpinLock.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(_QWORD *a1)
{
  a1[1] = &SpinLock;
  *a1 = 0LL;
  return (unsigned int)KxTryToAcquireQueuedSpinLock() != 0;
}
