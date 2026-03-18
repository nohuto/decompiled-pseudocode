/*
 * XREFs of ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A08E8
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00D5E64 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C00DDD18 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1C00DF3FC (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEAPEAV3@@Z @ 0x1C00DF4E0 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E95DC (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A0970 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::FaultAllAllocations(VIDMM_DEVICE *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  _QWORD **v6; // r14
  _QWORD *v7; // rsi
  struct VIDMM_ALLOC *v8; // rdx

  v4 = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( *((_DWORD *)this + 16) )
  {
    do
    {
      v6 = (_QWORD **)(*((_QWORD *)this + 5) + 56LL * v4 + 32);
      v7 = *v6;
      while ( v7 != v6 )
      {
        v8 = (struct VIDMM_ALLOC *)(v7 - 7);
        v7 = (_QWORD *)*v7;
        if ( (*(_DWORD *)(**(_QWORD **)v8 + 68LL) & 0x100) == 0 )
          VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)this, v8);
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 16) );
  }
}
