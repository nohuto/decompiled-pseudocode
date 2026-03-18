/*
 * XREFs of ?UpdateDXRefresh@CAnimationTracking@@QEAAXI@Z @ 0x180079E04
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007C608 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimationTracking::UpdateDXRefresh(CAnimationTracking *this, int a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx

  if ( *((_DWORD *)this + 6) )
  {
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)this + 8 * v3);
      if ( *(_QWORD *)(v4 + 56) )
      {
        if ( !*(_DWORD *)(v4 + 24) )
          *(_DWORD *)(v4 + 24) = a2;
        *(_DWORD *)(v4 + 28) = a2;
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *((_DWORD *)this + 6) );
  }
}
