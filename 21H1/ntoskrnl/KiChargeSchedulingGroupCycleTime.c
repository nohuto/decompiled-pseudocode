/*
 * XREFs of KiChargeSchedulingGroupCycleTime @ 0x140333020
 * Callers:
 *     KiComputeGroupSchedulingRank @ 0x140332BC0 (KiComputeGroupSchedulingRank.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140332C70 (KiTransitionSchedulingGroupGeneration.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1403348C4 (KiCheckMaxOverQuotaTransition.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140334B94 (KiRecomputeGroupSchedulingRank.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
 */

_BOOL8 __fastcall KiChargeSchedulingGroupCycleTime(volatile signed __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8
  bool v3; // bl
  struct _KDPC *v5; // rax

  v2 = a2[5] - *a2;
  a2[5] = *a2;
  v3 = (__int64)(v2 + _InterlockedExchangeAdd64(a1 + 6, v2)) <= 0;
  if ( *((__int64 *)a1 + 4) > 0 && (__int64)(v2 + _InterlockedExchangeAdd64(a1 + 4, v2)) <= 0 )
  {
    v5 = (struct _KDPC *)_InterlockedExchange64(a1 + 9, 0LL);
    if ( v5 )
      KeInsertQueueDpc(v5, 0LL, 0LL);
  }
  return v3;
}
