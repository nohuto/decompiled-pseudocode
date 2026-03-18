/*
 * XREFs of ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007EA30
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006F50 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007440 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C003C114 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C0065D04 (-AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0074C34 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C007DED0 (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FL.c)
 *     VidSchFlushDevice @ 0x1C0080500 (VidSchFlushDevice.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0082650 (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0086D94 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E00 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0083098 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::EnsureSchedulable(VIDMM_DEVICE *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // rax

  if ( !(_BYTE)a2 || *((_BYTE *)this + 48) )
  {
    v4 = *(_QWORD *)this;
    *((_BYTE *)this + 48) = 1;
    v5 = v4 + 44472;
    if ( v5 && *(struct _KTHREAD **)(v5 + 8) == KeGetCurrentThread() )
    {
      v9 = WdLogNewEntry5_WdAssertion(this, a2, a3);
      *(_QWORD *)(v9 + 24) = 1569LL;
      WdLogEvent5_WdAssertion(v9);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v8 = *(_DWORD *)(v5 + 24);
        if ( v8 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v6, &EventBlockThread, v7, v8);
      }
      ExAcquirePushLockExclusiveEx(v5, 0LL);
    }
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    if ( (*((_DWORD *)this + 13) & 7) == 4 )
    {
      VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(this, 3LL);
      KeSetEvent(*(PRKEVENT *)(**(_QWORD **)this + 176LL), 0, 0);
    }
    *(_QWORD *)(v5 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
