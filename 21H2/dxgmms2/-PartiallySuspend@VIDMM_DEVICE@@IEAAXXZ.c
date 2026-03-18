/*
 * XREFs of ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00DDA2C
 * Callers:
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00D5E64 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IW4_VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA_KPEA_N@Z @ 0x1C00DD6A4 (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IW4_VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00DF33C (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEAPEAV3@@Z @ 0x1C00DF4E0 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E95DC (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C002EB14 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A2E24 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C00A2E4C (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00DD934 (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::PartiallySuspend(VIDMM_GLOBAL **this)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  int v10; // [rsp+20h] [rbp-18h]

  VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(*this, this[1], (struct VIDMM_DEVICE *)this, 0);
  v2 = *((_DWORD *)this + 15) & 7;
  VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)this);
  v3 = MEMORY[0xFFFFF78000000320];
  this[30] = (VIDMM_GLOBAL *)((char *)this[29] - v3 * KeQueryTimeIncrement());
  VIDMM_DEVICE::MoveToPenaltyBoxBand((__int64)this, 1);
  v7 = *(_QWORD *)*this;
  v8 = *(_QWORD *)(v7 + 16);
  if ( v8 && (*(_DWORD *)(v8 + 60) & 7) != 0 )
    *((_BYTE *)this + 58) |= 0x10u;
  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v4, v5, v6);
    v7 = v2;
    v9[3] = this;
    v9[4] = v2;
    v9[5] = 1LL;
  }
  if ( (byte_1C006E942 & 0x40) != 0 )
  {
    v10 = 1;
    McTemplateK0pq_EtwWriteTransfer(v7, &EventVidMmSuspendDevice, v5, this[3], v10);
  }
}
