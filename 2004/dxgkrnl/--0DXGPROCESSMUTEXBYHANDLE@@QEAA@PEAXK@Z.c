/*
 * XREFs of ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00E2860
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
 *     <none>
 */

DXGPROCESSMUTEXBYHANDLE *__fastcall DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE(
        DXGPROCESSMUTEXBYHANDLE *this,
        void *a2,
        int a3)
{
  DXGPROCESSMUTEXBYHANDLE *result; // rax

  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_WORD *)this + 14) = 0;
  *((_BYTE *)this + 30) = 0;
  result = this;
  *((_DWORD *)this + 6) = a3;
  return result;
}
