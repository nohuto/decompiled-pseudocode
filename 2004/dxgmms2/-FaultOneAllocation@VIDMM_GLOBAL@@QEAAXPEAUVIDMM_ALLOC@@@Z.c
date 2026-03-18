/*
 * XREFs of ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006345C
 * Callers:
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00633D4 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066220 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0083648 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IW4_VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA_KPEA_N@Z @ 0x1C00B909C (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IW4_VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BAF0C (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z @ 0x1C00C960C (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00CA80C (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0024290 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0063520 (-FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C006492C (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C006FCE4 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FaultOneAllocation(VIDMM_GLOBAL *this, VIDMM_DEVICE **a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  VIDMM_DEVICE *v9; // rcx
  char v10; // [rsp+20h] [rbp-28h]

  v4 = *(_QWORD *)*a2;
  VIDMM_DEVICE::RemoveCommitment(a2[1], (struct VIDMM_ALLOC *)a2, 0);
  if ( !*(_DWORD *)(v4 + 152) )
  {
    v6 = *(_DWORD **)(v4 + 496);
    if ( (*v6 & 0x40000000) == 0 && !v6[3] && (**(_DWORD **)(v4 + 496) & 0x20000) == 0 )
    {
      VIDMM_SEGMENT::MarkResourcesForEviction(*(VIDMM_SEGMENT **)(v4 + 128), (struct _VIDMM_GLOBAL_ALLOC *)v4, 0LL, 0LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0p_EtwWriteTransfer(v7, &EventMarkAllocation, v5, a2);
      v8 = *(_QWORD *)(v4 + 16);
      ++*((_DWORD *)this + 1814);
      *((_QWORD *)this + 908) += v8;
    }
  }
  v9 = (VIDMM_DEVICE *)*((_QWORD *)a2[1] + 1);
  if ( (*((_DWORD *)v9 + 28) & 2) != 0 && *(_DWORD *)(v4 + 120) == 1 )
  {
    LOBYTE(v5) = 1;
    v10 = 0;
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, char, _QWORD))(**(_QWORD **)(v4 + 128) + 48LL))(
      *(_QWORD *)(v4 + 128),
      v4,
      v5,
      0LL,
      v10,
      0LL);
  }
  VIDMM_DEVICE::FaultCommitment(v9, (struct VIDMM_ALLOC *)a2);
}
