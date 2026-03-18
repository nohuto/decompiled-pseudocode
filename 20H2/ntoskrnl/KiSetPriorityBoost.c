/*
 * XREFs of KiSetPriorityBoost @ 0x14031A640
 * Callers:
 *     KiQuantumEnd @ 0x1402DAD50 (KiQuantumEnd.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402E9B80 (KiPrepareReadyThreadForRescheduling.c)
 * Callees:
 *     KiSetPriorityThread @ 0x140291A00 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x1402BE8B0 (KiUpdateThreadPriority.c)
 *     KiSetLockOwnershipQuantum @ 0x14031A698 (KiSetLockOwnershipQuantum.c)
 */

__int64 __fastcall KiSetPriorityBoost(__int64 a1, _BYTE *a2, char a3, __int64 a4)
{
  _SINGLE_LIST_ENTRY *v6; // r8

  a2[564] += 16 * (a3 - a2[195]);
  v6 = (_SINGLE_LIST_ENTRY *)(unsigned int)a3;
  if ( a1 )
    KiSetPriorityThread(a2, a1, (unsigned __int8)v6);
  else
    KiUpdateThreadPriority(0LL, (__int64)a2, v6, 0);
  return KiSetLockOwnershipQuantum(a2, a4);
}
