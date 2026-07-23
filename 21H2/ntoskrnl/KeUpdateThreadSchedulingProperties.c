/*
 * XREFs of KeUpdateThreadSchedulingProperties @ 0x14029D6B8
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x14029D3A8 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14029D508 (KiRemoveThreadFromSchedulingGroup.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402D5640 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KeUpdateThreadSchedulingProperties(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v6; // r9
  char v7; // cl
  char IsThreadRankNonZero; // al
  __int64 v9; // rdx

  result = KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  if ( v6 == 2 && !*(_QWORD *)(a3 + 16) || v6 == 3 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 4) == 0
      || (IsThreadRankNonZero = KiIsThreadRankNonZero(a1, a3), v7 = 1, !IsThreadRankNonZero) )
    {
      v7 = *(_BYTE *)(a1 + 195);
    }
    **(_BYTE **)(a3 + 56) = v7;
    result = *(_QWORD *)(a3 + 33976);
    if ( result )
    {
      v9 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( a1 != *(_QWORD *)(a3 + 24) )
        v9 = (unsigned int)v7;
      return KiSetSchedulerAssistPriority(*(_QWORD *)(a3 + 33976), v9, 0LL);
    }
  }
  return result;
}
