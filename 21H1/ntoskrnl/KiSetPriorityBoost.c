/*
 * XREFs of KiSetPriorityBoost @ 0x14030BD14
 * Callers:
 *     KiQuantumEnd @ 0x1403312E0 (KiQuantumEnd.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140337BD0 (KiPrepareReadyThreadForRescheduling.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14026C6D0 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x14026D280 (KiUpdateThreadPriority.c)
 *     KiSetLockOwnershipQuantum @ 0x14030BD6C (KiSetLockOwnershipQuantum.c)
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
