/*
 * XREFs of KiSetPriorityBoost @ 0x14032B9D0
 * Callers:
 *     KiQuantumEnd @ 0x1402EC1A0 (KiQuantumEnd.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14032BA58 (KiPrepareReadyThreadForRescheduling.c)
 * Callees:
 *     KiSetPriorityThread @ 0x140213680 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x140214230 (KiUpdateThreadPriority.c)
 *     KiSetLockOwnershipQuantum @ 0x14032BA28 (KiSetLockOwnershipQuantum.c)
 */

__int64 __fastcall KiSetPriorityBoost(__int64 a1, _KTHREAD *a2, char a3, __int64 a4)
{
  _SINGLE_LIST_ENTRY *v6; // r8

  a2->PriorityDecrement += 16 * (a3 - a2->Priority);
  v6 = (_SINGLE_LIST_ENTRY *)(unsigned int)a3;
  if ( a1 )
    KiSetPriorityThread(a2, a1, (unsigned __int8)v6);
  else
    KiUpdateThreadPriority(0LL, (__int64)a2, v6, 0);
  return KiSetLockOwnershipQuantum(a2, a4);
}
