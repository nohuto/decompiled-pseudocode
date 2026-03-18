/*
 * XREFs of KiRescheduleThreadAfterAffinityChange @ 0x1402F7C3C
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1402F754C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x1402F7A00 (KiSetAffinityThread.c)
 *     KiUpdateThreadCpuSets @ 0x1403C589C (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x14028D3E0 (KiInsertDeferredReadyList.c)
 *     KiPrcbInGroupAffinity @ 0x1402D8E00 (KiPrcbInGroupAffinity.c)
 *     KiSelectNextThread @ 0x1402D9A48 (KiSelectNextThread.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402E9B80 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1402E9BE0 (KiRemoveThreadFromAnyReadyQueue.c)
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
