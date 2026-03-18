/*
 * XREFs of KiChargeSchedulingGroupCycleTime @ 0x140291A50
 * Callers:
 *     KiRecomputeGroupSchedulingRank @ 0x140210178 (KiRecomputeGroupSchedulingRank.c)
 *     KiCheckMaxOverQuotaTransition @ 0x140242E70 (KiCheckMaxOverQuotaTransition.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140291710 (KiTransitionSchedulingGroupGeneration.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 */

bool __fastcall KiChargeSchedulingGroupCycleTime(volatile signed __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v3; // rcx
  bool v4; // bl
  struct _KDPC *v6; // rcx

  v3 = a2[5] - *a2;
  a2[5] = *a2;
  v4 = (__int64)(v3 + _InterlockedExchangeAdd64(a1 + 6, v3)) <= 0;
  if ( *((__int64 *)a1 + 4) > 0 && (__int64)(v3 + _InterlockedExchangeAdd64(a1 + 4, v3)) <= 0 )
  {
    v6 = (struct _KDPC *)_InterlockedExchange64(a1 + 9, 0LL);
    if ( v6 )
      KeInsertQueueDpc(v6, 0LL, 0LL);
  }
  return v4;
}
