/*
 * XREFs of ?VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0245190
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00046F8 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00405D4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryAllocationResidency @ 0x1C022A470 (DxgkQueryAllocationResidency.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAllocationResidency(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rcx
  int *v19; // rdi
  __int64 v20; // r8
  int AllocationResidency; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  _BYTE v26[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v27; // [rsp+28h] [rbp-20h]
  int v28; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v27);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v28 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 2714LL;
LABEL_24:
    WdLogEvent5_WdError(v6);
    goto LABEL_25;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v9 = v7;
  if ( !v7 )
  {
LABEL_25:
    v5 = 0;
    goto LABEL_26;
  }
  v10 = *(unsigned int *)(v7 + 28);
  if ( (_DWORD)v10 )
    v11 = 0LL;
  else
    v11 = *(unsigned int *)(v7 + 40);
  v12 = 4 * v11;
  if ( v12 > 0xFFFFFFFF )
  {
    v6 = WdLogNewEntry5_WdError(v10, v8);
    *(_QWORD *)(v6 + 24) = 2721LL;
    goto LABEL_24;
  }
  v13 = (unsigned int)(v12 + 56);
  if ( (unsigned int)v12 >= 0xFFFFFFC8 )
  {
    v6 = WdLogNewEntry5_WdError(v10, v13);
    *(_QWORD *)(v6 + 24) = 2727LL;
    goto LABEL_24;
  }
  if ( (unsigned int)v13 > *((_DWORD *)a1 + 22) )
  {
    v6 = WdLogNewEntry5_WdError(v10, v13);
    *(_QWORD *)(v6 + 24) = 2732LL;
    goto LABEL_24;
  }
  v14 = 1LL;
  if ( !(_DWORD)v10 )
    v14 = *(unsigned int *)(v9 + 40);
  v15 = 4 * v14;
  if ( v15 > 0xFFFFFFFF )
  {
    v6 = WdLogNewEntry5_WdError(v10, v13);
    *(_QWORD *)(v6 + 24) = 2741LL;
    goto LABEL_24;
  }
  v16 = v15 + 4;
  if ( (unsigned int)v15 >= 0xFFFFFFFC )
  {
    v6 = WdLogNewEntry5_WdError(v10, v13);
    *(_QWORD *)(v6 + 24) = 2746LL;
    goto LABEL_24;
  }
  v19 = (int *)operator new(v16, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v19 )
  {
    v6 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v6 + 24) = 2753LL;
    goto LABEL_24;
  }
  *(_QWORD *)(v9 + 32) = v9 + 56;
  *(_QWORD *)(v9 + 48) = v19 + 1;
  AllocationResidency = DxgkQueryAllocationResidency(v9 + 24, v17, v20);
  *v19 = AllocationResidency;
  if ( AllocationResidency < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v24 + 24) = *v19;
    WdLogEvent5_WdError(v24);
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v19, v16);
  operator delete[](v19);
LABEL_26:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
  return v5;
}
