/*
 * XREFs of ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x1C00AF9AC
 * Callers:
 *     VidMmDeInitGlobals @ 0x1C0022960 (VidMmDeInitGlobals.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1C00241FC (McGenEventUnregister_EtwUnregister.c)
 *     ??_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z @ 0x1C0025BDC (--_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z.c)
 *     ?wil_UninitializeFeatureStaging@@YAXXZ @ 0x1C005E190 (-wil_UninitializeFeatureStaging@@YAXXZ.c)
 *     TlgUnregisterAggregateProvider @ 0x1C00D5E60 (TlgUnregisterAggregateProvider.c)
 */

void VIDMM_GLOBAL::DeInitGlobals(void)
{
  if ( VIDMM_GLOBAL::PerfCounterSetEngineRegistered )
    PcwUnregister(GpuPerformanceCounterSetEngine);
  if ( VIDMM_GLOBAL::PerfCounterSetProcessMemoryRegistered )
    PcwUnregister(GpuPerformanceCounterSetProcessMemory);
  if ( VIDMM_GLOBAL::PerfCounterSetAdapterMemoryRegistered )
    PcwUnregister(GpuPerformanceCounterSetAdapterMemory);
  if ( VIDMM_GLOBAL::PerfCounterSetLocalAdapterMemoryRegistered )
    PcwUnregister(GpuPerformanceCounterSetLocalAdapterMemory);
  if ( VIDMM_GLOBAL::PerfCounterSetNonLocalAdapterMemoryRegistered )
    PcwUnregister(GpuPerformanceCounterSetNonLocalAdapterMemory);
  operator delete(VIDMM_PROCESS::_pDxProcessPerAdapterCount);
  if ( VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage )
    VIDMM_PROCESS_FENCE_STORAGE::`scalar deleting destructor'((VIDMM_PROCESS_FENCE_STORAGE *)VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage);
  VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage = 0LL;
  if ( VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock )
  {
    ExDeleteResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    operator delete(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock = 0LL;
  }
  if ( VIDMM_GLOBAL::_RotationHistory )
  {
    operator delete(VIDMM_GLOBAL::_RotationHistory);
    *(_OWORD *)&VIDMM_GLOBAL::_RotationHistory = 0LL;
  }
  TlgUnregisterAggregateProvider();
  McGenEventUnregister_EtwUnregister(&DxgkControlGuid_Context);
  DxgkControlGuid_Context = 0LL;
  if ( VIDMM_GLOBAL::KirEnabled )
  {
    wil_UninitializeFeatureStaging();
    VIDMM_GLOBAL::KirEnabled = 0;
  }
}
