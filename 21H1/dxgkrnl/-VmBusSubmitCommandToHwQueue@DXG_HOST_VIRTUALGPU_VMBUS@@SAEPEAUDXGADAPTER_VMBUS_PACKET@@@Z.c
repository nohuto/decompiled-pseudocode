/*
 * XREFs of ?VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024B960
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003E82C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003F9E8 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C026D408 (DxgkSubmitCommandToHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommandToHwQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  struct VMBPACKETCOMPLETION__ *v16; // rcx
  _BYTE v18[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v19; // [rsp+28h] [rbp-20h]
  int v20; // [rsp+30h] [rbp-18h]
  int v21; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v19);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v20 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
    v9 = v7;
    if ( !v7 )
      goto LABEL_13;
    v10 = *(_DWORD *)(v7 + 64);
    if ( v10 <= 0x10 )
    {
      v13 = *((unsigned int *)a1 + 22);
      v14 = 4 * v10;
      if ( v13 - 80 >= v14 )
      {
        v15 = v13 - v14 - 80;
        if ( v15 >= *(unsigned int *)(v9 + 52) )
        {
          *(_QWORD *)(v9 + 72) = v9 + 80;
          *(_QWORD *)(v9 + 56) = v14 + v9 + 80;
          v12 = DxgkSubmitCommandToHwQueueInternal((struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)(v9 + 24));
          goto LABEL_12;
        }
        v11 = WdLogNewEntry5_WdError(v9, v15);
        *(_QWORD *)(v11 + 24) = *((unsigned int *)a1 + 22);
        *(_QWORD *)(v11 + 32) = 4492LL;
      }
      else
      {
        v11 = WdLogNewEntry5_WdError(v9, v13);
        *(_QWORD *)(v11 + 24) = *((unsigned int *)a1 + 22);
      }
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v11 + 24) = 4477LL;
    }
    WdLogEvent5_WdError(v11);
    v12 = -1073741811;
LABEL_12:
    v16 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    v21 = v12;
    VmBusCompletePacket(v16, &v21, 4u);
    v5 = 1;
    goto LABEL_13;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 4468LL;
  WdLogEvent5_WdError(v6);
LABEL_13:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return v5;
}
