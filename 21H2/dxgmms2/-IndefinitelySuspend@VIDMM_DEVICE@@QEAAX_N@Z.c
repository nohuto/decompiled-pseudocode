/*
 * XREFs of ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00A28BC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1C00DF3FC (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     VidSchDeviceQueuesNotEmpty @ 0x1C0014EE8 (VidSchDeviceQueuesNotEmpty.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C002EB14 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00A2A18 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A2BA8 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A2E24 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C00A2E4C (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 */

void __fastcall VIDMM_DEVICE::IndefinitelySuspend(__int64 **this, char a2)
{
  unsigned int v4; // esi
  unsigned int v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // zf
  _QWORD *v13; // rax
  _BYTE v14[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-18h]

  VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
    (VIDMM_GLOBAL *)*this,
    (struct VIDMM_PROCESS *)this[1],
    (struct VIDMM_DEVICE *)this,
    0);
  v4 = 4;
  v5 = *((_DWORD *)this + 15) & 7;
  if ( !v5 )
    VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)this);
  VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)this);
  v6 = **this;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6 + 144, 0LL);
  *(_QWORD *)(v6 + 152) = KeGetCurrentThread();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)*this + 5560, 0);
  DXGPUSHLOCK::AcquireExclusive(v15);
  v16 = 2;
  if ( a2 == 1 && (VidSchDeviceQueuesNotEmpty((__int64)this[4]) || *((_DWORD *)this + 18)) )
    v4 = 3;
  VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(this, v4);
  v7 = **this + 144;
  *(_QWORD *)(v7 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  v12 = (*((_BYTE *)this + 58) & 4) == 0;
  *((_BYTE *)this + 56) = a2;
  if ( !v12 )
  {
    --*((_DWORD *)*this + 11156);
    *((_BYTE *)this + 58) &= ~4u;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v13[4] = v5;
    v13[5] = v4;
    v13[3] = this;
    v9 = (__int64)this[28];
    v13[6] = v9;
  }
  if ( (byte_1C006E942 & 0x40) != 0 )
    McTemplateK0pq_EtwWriteTransfer(v9, &EventVidMmSuspendDevice, v10, this[3], v4);
}
