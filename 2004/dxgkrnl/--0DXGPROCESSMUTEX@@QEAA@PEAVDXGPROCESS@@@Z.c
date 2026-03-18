/*
 * XREFs of ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002591C
 * Callers:
 *     DxgkGetPresentHistoryInternal @ 0x1C00F58B0 (DxgkGetPresentHistoryInternal.c)
 *     DxgkGetCachedHybridQueryValue @ 0x1C015AFA0 (DxgkGetCachedHybridQueryValue.c)
 *     DxgkCacheHybridQueryValue @ 0x1C015CF90 (DxgkCacheHybridQueryValue.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0239210 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C02B8210 (NtDxgkRegisterVailProcess.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C02B8C00 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGPROCESSMUTEX *__fastcall DXGPROCESSMUTEX::DXGPROCESSMUTEX(DXGPROCESSMUTEX *this, struct DXGFASTMUTEX *const *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, a2[13], 0);
  return this;
}
