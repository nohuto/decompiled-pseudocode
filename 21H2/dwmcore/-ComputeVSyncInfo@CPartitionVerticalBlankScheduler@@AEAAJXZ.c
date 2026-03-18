/*
 * XREFs of ?ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x18007C4E8
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18007ADD0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180079F40 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@.c)
 *     ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800F39F4 (-ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ComputeVSyncInfo(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  _QWORD *v8; // r9
  __int64 v9; // r8
  unsigned __int64 v10; // rdx

  v4 = *((_QWORD *)this + 564);
  v6 = 1LL;
  v7 = *(_QWORD *)(v4 + 256);
  if ( !*(_BYTE *)(v4 + 156) || *(_BYTE *)(v4 + 241) )
  {
    CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(this);
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    *(_QWORD *)(*((_QWORD *)this + 564) + 56LL) = *(_QWORD *)(*((_QWORD *)this + 564) + 144LL);
    *(_DWORD *)(*((_QWORD *)this + 564) + 44LL) = *(_DWORD *)(*((_QWORD *)this + 564) + 136LL);
  }
  v8 = (_QWORD *)*((_QWORD *)this + 565);
  v9 = *((_QWORD *)this + 564);
  if ( v8[7] )
    v6 = ((v7 >> 4) + *(_QWORD *)(v9 + 56) - v8[7]) / v7;
  *((_QWORD *)this + 566) = v6;
  v10 = *(_QWORD *)(v9 + 64);
  if ( *(_QWORD *)(v9 + 56) > v10
    || *(_BYTE *)(v9 + 156) && *(_QWORD *)(v9 + 128) < v8[8]
    || v10 - *(_QWORD *)(v9 + 56) > 2 * v7 )
  {
    *(_QWORD *)(v9 + 56) = v10;
    v9 = *((_QWORD *)this + 564);
    v8 = (_QWORD *)*((_QWORD *)this + 565);
  }
  *(_QWORD *)(v9 + 16) = *((_QWORD *)this + 566) + v8[2];
  return 0LL;
}
