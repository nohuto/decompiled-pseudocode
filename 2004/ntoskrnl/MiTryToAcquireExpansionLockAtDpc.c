/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x14031D910
 * Callers:
 *     MiLockStealUserVm @ 0x14031D3F8 (MiLockStealUserVm.c)
 *     MiReferenceOwningSession @ 0x1403205AC (MiReferenceOwningSession.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x14031DB64 (KxTryToAcquireQueuedSpinLock.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  a1[1] = &SpinLock;
  *a1 = 0LL;
  return (unsigned int)KxTryToAcquireQueuedSpinLock(a1, &SpinLock, a3, a4) != 0;
}
