/*
 * XREFs of KiRescheduleThreadAfterAffinityChange @ 0x14030BD5C
 * Callers:
 *     KiSetAffinityThread @ 0x14030BB20 (KiSetAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14032B6EC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x1403C312C (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiSelectNextThread @ 0x1402EB988 (KiSelectNextThread.c)
 *     KiPrcbInGroupAffinity @ 0x1402EF758 (KiPrcbInGroupAffinity.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14032BA58 (KiPrepareReadyThreadForRescheduling.c)
 *     KiInsertDeferredReadyList @ 0x14032BAB8 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14032BAE8 (KiRemoveThreadFromAnyReadyQueue.c)
 */

__int64 __fastcall KiRescheduleThreadAfterAffinityChange(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v10; // rcx
  unsigned int v11; // ebx

  if ( a3 == 1 )
  {
    v11 = *(char *)(a1 + 195);
    KiRemoveThreadFromAnyReadyQueue(a4, a5, a1, v11);
    KiPrepareReadyThreadForRescheduling(a1, v11, a6);
    return 0LL;
  }
  if ( a3 != 2 )
  {
    if ( a3 == 3 && !KiPrcbInGroupAffinity(a4, a2) )
    {
      KiSelectNextThread(v10, a6);
      KiInsertDeferredReadyList(a6, a1);
    }
    return 0LL;
  }
  if ( KiPrcbInGroupAffinity(a4, a2) )
    return 0LL;
  if ( *(_BYTE *)(a1 + 388) != 2 )
  {
    *(_BYTE *)(a1 + 112) |= 8u;
    return 0LL;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
  if ( *(_QWORD *)(v8 + 16) )
    return 0LL;
  KiSelectNextThread(v7, a6);
  return 1LL;
}
