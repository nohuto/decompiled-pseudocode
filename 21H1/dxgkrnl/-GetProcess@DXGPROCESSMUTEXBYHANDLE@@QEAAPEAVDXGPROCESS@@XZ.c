/*
 * XREFs of ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0008130
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C00D6710 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C00D93F0 (DxgkSetProcessSchedulingPriorityClass.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C00DA1F0 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C015D840 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02216A8 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C0224FAC (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0262378 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x1C0263198 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C0281D60 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C0281FE0 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C02823F0 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C0282560 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C0282980 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C0283550 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     <none>
 */

struct DXGPROCESS *__fastcall DXGPROCESSMUTEXBYHANDLE::GetProcess(DXGPROCESSMUTEXBYHANDLE *this, __int64 a2)
{
  struct DXGPROCESS *result; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( !*((_BYTE *)this + 28) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 1564LL;
    WdLogEvent5_WdAssertion(v4);
  }
  result = (struct DXGPROCESS *)*((_QWORD *)this + 2);
  if ( !result )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 1565LL;
    WdLogEvent5_WdAssertion(v5);
    return (struct DXGPROCESS *)*((_QWORD *)this + 2);
  }
  return result;
}
