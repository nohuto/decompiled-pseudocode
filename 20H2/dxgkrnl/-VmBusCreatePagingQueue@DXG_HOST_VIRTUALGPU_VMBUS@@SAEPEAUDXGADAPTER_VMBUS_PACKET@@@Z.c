/*
 * XREFs of ?VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023D960
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F674 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C00E545C (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreatePagingQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  _DWORD *v9; // rdi
  int PagingQueueInternal; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  struct VMBPACKETCOMPLETION__ *v14; // rcx
  _BYTE v16[8]; // [rsp+20h] [rbp-48h] BYREF
  DXGPUSHLOCK *v17; // [rsp+28h] [rbp-40h]
  int v18; // [rsp+30h] [rbp-38h]
  _DWORD v19[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v20; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+48h] [rbp-20h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v17);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v18 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 3899LL;
LABEL_7:
    WdLogEvent5_WdError(v6);
    goto LABEL_8;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v9 = (_DWORD *)v7;
  if ( v7 )
  {
    PagingQueueInternal = DxgkCreatePagingQueueInternal((struct _D3DKMT_CREATEPAGINGQUEUE *)(v7 + 24), 0, v8);
    v13 = PagingQueueInternal;
    if ( PagingQueueInternal < 0 )
    {
      v6 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v6 + 24) = v13;
      goto LABEL_7;
    }
    v14 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    v19[0] = v9[8];
    v19[1] = v9[9];
    v21 = (unsigned int)v9[10];
    v20 = *((_QWORD *)v9 + 5);
    VmBusCompletePacket(v14, v19, 0x18u);
    v5 = 1;
  }
LABEL_8:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v5;
}
