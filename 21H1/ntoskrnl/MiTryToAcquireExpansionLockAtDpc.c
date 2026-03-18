/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x1402EA0C8
 * Callers:
 *     MiReferenceOwningSession @ 0x1402EA02C (MiReferenceOwningSession.c)
 *     MiLockStealUserVm @ 0x14034C738 (MiLockStealUserVm.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1402EA31C (KxTryToAcquireQueuedSpinLock.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  a1[1] = &qword_140C4ED80;
  *a1 = 0LL;
  return (unsigned int)KxTryToAcquireQueuedSpinLock(a1, &qword_140C4ED80, a3, a4) != 0;
}
