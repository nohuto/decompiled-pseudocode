/*
 * XREFs of KeUpdateThreadSchedulingProperties @ 0x1403116F4
 * Callers:
 *     KiRemoveThreadFromSchedulingGroup @ 0x140311544 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetThreadSchedulingGroup @ 0x14035B1E8 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14026D220 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiIsThreadRankNonZero @ 0x140334690 (KiIsThreadRankNonZero.c)
 *     KiSetSchedulerAssistPriority @ 0x14051AE54 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KeUpdateThreadSchedulingProperties(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  char v6; // r9
  char v7; // cl
  char IsThreadRankNonZero; // al
  __int64 v9; // rdx

  LOBYTE(v5) = KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  if ( v6 == 2 && !*(_QWORD *)(a3 + 16) || v6 == 3 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 4) == 0
      || (IsThreadRankNonZero = KiIsThreadRankNonZero(a1, a3), v7 = 1, !IsThreadRankNonZero) )
    {
      v7 = *(_BYTE *)(a1 + 195);
    }
    **(_BYTE **)(a3 + 56) = v7;
    v5 = *(_QWORD *)(a3 + 33976);
    if ( v5 )
    {
      v9 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( a1 != *(_QWORD *)(a3 + 24) )
        v9 = (unsigned int)v7;
      LOBYTE(v5) = KiSetSchedulerAssistPriority(*(_QWORD *)(a3 + 33976), v9, 0LL);
    }
  }
  return v5;
}
