/*
 * XREFs of ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0283B9C
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C00DE120 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C00E2670 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C016D2A0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02258E8 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02291EC (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C0286200 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C0286480 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C0286890 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C0286E20 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C02879F0 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00E2880 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE(DXGPROCESSMUTEXBYHANDLE *this, __int64 a2)
{
  if ( *((_BYTE *)this + 28) )
    DXGPROCESSMUTEXBYHANDLE::Release(this, a2);
}
