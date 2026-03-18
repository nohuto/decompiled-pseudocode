/*
 * XREFs of ?VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023E4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F864 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_PRESENTHISTO.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkCreateHwQueueInternal @ 0x1C0270F98 (DxgkCreateHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateHwQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // si
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // r15d
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rax
  _BYTE v19[8]; // [rsp+20h] [rbp-50h] BYREF
  DXGPUSHLOCK *v20; // [rsp+28h] [rbp-48h]
  int v21; // [rsp+30h] [rbp-40h]
  __int128 v22; // [rsp+38h] [rbp-38h] BYREF
  __int128 v23; // [rsp+48h] [rbp-28h]
  __int128 v24; // [rsp+58h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v20);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v21 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 874LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
LABEL_4:
    v5 = 0;
    goto LABEL_5;
  }
  v8 = CastToVmBusCommand<DXGKVMB_COMMAND_PRESENTHISTORYTOKEN>((__int64)a1);
  v10 = v8;
  if ( !v8 )
    goto LABEL_4;
  v11 = *(unsigned int *)(v8 + 64);
  v12 = *((unsigned int *)a1 + 22) - 71LL;
  if ( v12 < v11 )
  {
    v6 = WdLogNewEntry5_WdError(v12, v9);
    *(_QWORD *)(v6 + 24) = *((unsigned int *)a1 + 22);
    *(_QWORD *)(v6 + 32) = 880LL;
    goto LABEL_3;
  }
  v13 = v11 + 71;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  *(_QWORD *)&v22 = *(_QWORD *)(v10 + 56);
  if ( *(_DWORD *)(v10 + 64) )
  {
    *(_QWORD *)&v23 = v10 + 68;
    DWORD2(v22) = *(_DWORD *)(v10 + 64);
  }
  v14 = DxgkCreateHwQueueInternal(&v22, 0LL);
  v17 = v14;
  *(_DWORD *)(v10 + 24) = v14;
  if ( v14 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v18 + 24) = v17;
    *(_QWORD *)(v18 + 32) = 914LL;
    WdLogEvent5_WdError(v18);
  }
  else
  {
    *(_QWORD *)(v10 + 28) = *((_QWORD *)&v23 + 1);
    *(_OWORD *)(v10 + 40) = v24;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), (void *)v10, v13);
LABEL_5:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return v5;
}
