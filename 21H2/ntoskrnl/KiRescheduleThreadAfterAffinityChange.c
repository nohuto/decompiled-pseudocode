/*
 * XREFs of KiRescheduleThreadAfterAffinityChange @ 0x14020EE7C
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14020E464 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x14020EC24 (KiSetAffinityThread.c)
 *     KiUpdateThreadCpuSets @ 0x1403D3170 (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140210C14 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14028F83C (KiPrepareReadyThreadForRescheduling.c)
 *     KiInsertDeferredReadyList @ 0x1402F6970 (KiInsertDeferredReadyList.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     KiSelectNextThread @ 0x14035C3FC (KiSelectNextThread.c)
 */

__int64 __fastcall KiRescheduleThreadAfterAffinityChange(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r8
  __int64 v10; // r8
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
    if ( a3 == 3 && !(unsigned int)KeCheckProcessorAffinityEx(a2, *(unsigned int *)(a4 + 36)) )
    {
      KiSelectNextThread(a4, a6, v10);
      KiInsertDeferredReadyList(a6, a1);
    }
    return 0LL;
  }
  if ( (unsigned int)KeCheckProcessorAffinityEx(a2, *(unsigned int *)(a4 + 36)) )
    return 0LL;
  if ( *(_BYTE *)(a1 + 388) != 2 )
  {
    *(_BYTE *)(a1 + 112) |= 8u;
    return 0LL;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
  if ( *(_QWORD *)(a4 + 16) )
    return 0LL;
  KiSelectNextThread(a4, a6, v8);
  return 1LL;
}
