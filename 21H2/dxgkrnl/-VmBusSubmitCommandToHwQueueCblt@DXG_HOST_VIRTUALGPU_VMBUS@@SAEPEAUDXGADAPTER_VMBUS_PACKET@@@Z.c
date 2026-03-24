/*
 * XREFs of ?VmBusSubmitCommandToHwQueueCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DB840
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00269EC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C003AB64 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C00D7F94 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C0271B18 (DxgkSubmitCommandToHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommandToHwQueueCblt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // si
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  int v16; // eax
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF
  int v19; // [rsp+50h] [rbp+8h] BYREF

  v1 = ((unsigned __int64)a1 - 40) & -(__int64)(a1 != 0LL);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v18,
    (struct _KTHREAD **)(*(_QWORD *)(v1 + 0x50) + 232LL));
  v4 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(v1 + 80) + 165LL) )
  {
    v6 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((v1 + 40) & -(__int64)(v1 != 0));
    v9 = v6;
    if ( !v6 )
      goto LABEL_14;
    v10 = *(_DWORD *)(v6 + 64);
    if ( v10 <= 0x10 )
    {
      v13 = *(unsigned int *)(v1 + 128);
      v14 = 4 * v10;
      if ( v13 - 80 >= v14 )
      {
        v15 = v13 - v14 - 80;
        if ( v15 >= *(unsigned int *)(v9 + 52) )
        {
          *(_QWORD *)(v9 + 72) = v9 + 80;
          *(_QWORD *)(v9 + 56) = v14 + v9 + 80;
          v16 = DxgkSubmitCommandToHwQueueInternal((struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)(v9 + 24));
          v12 = (unsigned int)v16;
          v19 = v16;
          if ( v16 >= 0 )
          {
LABEL_13:
            VmBusCompletePacket(*(struct VMBPACKETCOMPLETION__ **)(v1 + 112), &v19, 4u);
            v4 = 1;
            goto LABEL_14;
          }
LABEL_12:
          HandleAsyncCommandError((_QWORD *)v1, v12, *(_DWORD *)(v9 + 24), 2);
          goto LABEL_13;
        }
        v11 = WdLogNewEntry5_WdError(v15, v14);
        *(_QWORD *)(v11 + 24) = *(unsigned int *)(v1 + 128);
        *(_QWORD *)(v11 + 32) = 1990LL;
      }
      else
      {
        v11 = WdLogNewEntry5_WdError(v13, v14);
        *(_QWORD *)(v11 + 24) = *(unsigned int *)(v1 + 128);
      }
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v11 + 24) = 1975LL;
    }
    WdLogEvent5_WdError(v11);
    v12 = 3221225485LL;
    v19 = -1073741811;
    goto LABEL_12;
  }
  v5 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v5 + 24) = 1966LL;
  WdLogEvent5_WdError(v5);
LABEL_14:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return v4;
}
