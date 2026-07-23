/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x140215EF8
 * Callers:
 *     MiReferenceOwningSession @ 0x140215E5C (MiReferenceOwningSession.c)
 *     MiLockStealUserVm @ 0x140258F74 (MiLockStealUserVm.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x14021614C (KxTryToAcquireQueuedSpinLock.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(_QWORD *a1)
{
  a1[1] = &SpinLock;
  *a1 = 0LL;
  return (unsigned int)KxTryToAcquireQueuedSpinLock() != 0;
}
