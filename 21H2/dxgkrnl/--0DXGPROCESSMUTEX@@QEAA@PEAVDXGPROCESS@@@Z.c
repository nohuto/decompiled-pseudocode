/*
 * XREFs of ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002C1E0
 * Callers:
 *     DxgkGetPresentHistoryInternal @ 0x1C0178B20 (DxgkGetPresentHistoryInternal.c)
 *     DxgkGetCachedHybridQueryValue @ 0x1C01DC8E0 (DxgkGetCachedHybridQueryValue.c)
 *     DxgkCacheHybridQueryValue @ 0x1C01DDFF0 (DxgkCacheHybridQueryValue.c)
 *     NtDxgkRegisterVailProcess @ 0x1C0353BC0 (NtDxgkRegisterVailProcess.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0354840 (NtDxgkVailPromoteCompositionSurface.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0362D5C (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGPROCESSMUTEX *__fastcall DXGPROCESSMUTEX::DXGPROCESSMUTEX(DXGPROCESSMUTEX *this, struct DXGPROCESS *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct DXGPROCESS *)((char *)a2 + 104), 0);
  return this;
}
