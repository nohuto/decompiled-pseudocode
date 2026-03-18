/*
 * XREFs of ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00DA3E0
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C00D6710 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C00DA1F0 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C015D840 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02216A8 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C0224FAC (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C0281D60 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C0281FE0 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C02823F0 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C0282980 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C0283550 (DxgkTrimProcessCommitment.c)
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
