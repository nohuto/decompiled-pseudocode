/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x1403412CC
 * Callers:
 *     MiReferenceOwningSession @ 0x140340E64 (MiReferenceOwningSession.c)
 *     MiLockStealUserVm @ 0x1403415B0 (MiLockStealUserVm.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x140341520 (KxTryToAcquireQueuedSpinLock.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  a1[1] = &qword_140C4ECC0;
  *a1 = 0LL;
  return (unsigned int)KxTryToAcquireQueuedSpinLock(a1, &qword_140C4ECC0, a3, a4) != 0;
}
