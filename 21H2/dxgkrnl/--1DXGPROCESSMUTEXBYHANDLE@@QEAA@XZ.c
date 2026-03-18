/*
 * XREFs of ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0334C04
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C015CDF0 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C01DF640 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C01ECBE0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02D3654 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02D78DC (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C0337AF0 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C0337D40 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C0338100 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C03386A0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C0339230 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C01641F0 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE(DXGPROCESSMUTEXBYHANDLE *this)
{
  if ( *((_BYTE *)this + 28) )
    DXGPROCESSMUTEXBYHANDLE::Release(this);
}
