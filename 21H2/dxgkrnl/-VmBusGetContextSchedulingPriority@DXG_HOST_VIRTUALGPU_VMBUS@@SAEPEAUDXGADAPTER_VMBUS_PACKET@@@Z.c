/*
 * XREFs of ?VmBusGetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02417E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00405FC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkGetContextSchedulingPriority @ 0x1C00DF9D0 (DxgkGetContextSchedulingPriority.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C02594C0 (DxgkGetContextInProcessSchedulingPriority.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetContextSchedulingPriority(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  int ContextInProcessSchedulingPriority; // eax
  struct VMBPACKETCOMPLETION__ *v11; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-20h] BYREF
  DXGPUSHLOCK *v14; // [rsp+28h] [rbp-18h]
  int v15; // [rsp+30h] [rbp-10h]
  int v16; // [rsp+50h] [rbp+10h] BYREF
  int v17; // [rsp+54h] [rbp+14h]
  __int64 v18; // [rsp+58h] [rbp+18h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v14);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v15 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
    if ( v7 )
    {
      v18 = *(unsigned int *)(v7 + 24);
      if ( *(_BYTE *)(v7 + 28) )
        ContextInProcessSchedulingPriority = DxgkGetContextInProcessSchedulingPriority(&v18);
      else
        ContextInProcessSchedulingPriority = DxgkGetContextSchedulingPriority((__int64)&v18, v8, v9);
      v11 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      v16 = ContextInProcessSchedulingPriority;
      v17 = HIDWORD(v18);
      VmBusCompletePacket(v11, &v16, 8u);
      v5 = 1;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 2806LL;
    WdLogEvent5_WdError(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v5;
}
