/*
 * XREFs of ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00251CC
 * Callers:
 *     DxgkGetPresentHistoryInternal @ 0x1C00D7510 (DxgkGetPresentHistoryInternal.c)
 *     DxgkGetCachedHybridQueryValue @ 0x1C014CDB0 (DxgkGetCachedHybridQueryValue.c)
 *     DxgkCacheHybridQueryValue @ 0x1C014E110 (DxgkCacheHybridQueryValue.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0234F84 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C02B3CD0 (NtDxgkRegisterVailProcess.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C02B46C0 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGPROCESSMUTEX *__fastcall DXGPROCESSMUTEX::DXGPROCESSMUTEX(DXGPROCESSMUTEX *this, struct DXGFASTMUTEX *const *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, a2[13], 0);
  return this;
}
