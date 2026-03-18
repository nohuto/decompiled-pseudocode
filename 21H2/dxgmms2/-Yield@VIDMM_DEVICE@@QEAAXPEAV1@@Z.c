/*
 * XREFs of ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C00DDD18
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00ABE70 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C002E6EC (McTemplateK0ppq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C002EB14 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A08E8 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A2BA8 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A2E24 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00DD934 (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::Yield(VIDMM_DEVICE *this, struct VIDMM_DEVICE *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  _QWORD *v14; // rax

  v5 = *((_DWORD *)this + 15) & 7;
  *((_QWORD *)this + 31) = a2;
  if ( v5 != 2 )
  {
    if ( v5 )
    {
      if ( v5 == 1 )
        VIDMM_DEVICE::SuspendPagingQueues(this);
    }
    else
    {
      VIDMM_DEVICE::SuspendSchedulerDevice(this);
      VIDMM_DEVICE::SuspendPagingQueues(this);
      v7 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)this + 30) = *((_QWORD *)this + 29) - v7 * KeQueryTimeIncrement();
    }
    VIDMM_DEVICE::MoveToPenaltyBoxBand((__int64)this, 2);
    if ( (byte_1C006E942 & 0x40) != 0 )
      McTemplateK0pq_EtwWriteTransfer(v8, &EventVidMmSuspendDevice, a3, *((_QWORD *)this + 3), 2);
  }
  VIDMM_DEVICE::FaultAllAllocations(this, (__int64)a2, a3, a4);
  v13 = *((_QWORD *)a2 + 29);
  *((_QWORD *)this + 28) = v13;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    v14[3] = this;
    v14[4] = *((_QWORD *)this + 31);
    v10 = v5;
    v14[5] = v5;
    v14[6] = 3LL;
    v14[7] = v13;
  }
  if ( (byte_1C006E942 & 0x40) != 0 )
    McTemplateK0ppq_EtwWriteTransfer(
      v10,
      &EventVidMmYieldDevice,
      v11,
      *((_QWORD *)this + 3),
      *((_QWORD *)a2 + 3),
      v13 - *(_DWORD *)(*(_QWORD *)this + 4632LL));
}
