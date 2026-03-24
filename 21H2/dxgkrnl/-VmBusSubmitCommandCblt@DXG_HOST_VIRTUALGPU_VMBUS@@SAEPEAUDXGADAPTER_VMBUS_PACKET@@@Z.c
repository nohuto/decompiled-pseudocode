/*
 * XREFs of ?VmBusSubmitCommandCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DB670
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C003AB64 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00407B4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C00D7F94 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00F0B10 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommandCblt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // si
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  struct DXGPROCESS *Current; // rax
  int v14; // eax
  __int64 v15; // rdx
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF
  int v18; // [rsp+50h] [rbp+8h] BYREF

  v1 = ((unsigned __int64)a1 - 40) & -(__int64)(a1 != 0LL);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v17,
    (struct _KTHREAD **)(*(_QWORD *)(v1 + 0x50) + 232LL));
  v4 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(v1 + 80) + 165LL) )
  {
    v6 = CastToVmBusCommand<DXGKVMB_COMMAND_SUBMITCOMMAND>((v1 + 40) & -(__int64)(v1 != 0));
    v8 = v6;
    if ( !v6 )
      goto LABEL_15;
    v9 = 4LL * *(unsigned int *)(v6 + 392);
    if ( v9 > 0xFFFFFFFF )
    {
      v11 = WdLogNewEntry5_WdError(0xFFFFFFFFLL, v7);
      *(_QWORD *)(v11 + 24) = 1928LL;
    }
    else
    {
      v10 = *(unsigned int *)(v1 + 128);
      if ( v10 - 408 >= (unsigned __int64)(unsigned int)v9 )
      {
        v12 = v10 - (unsigned int)v9 - 408;
        if ( v12 >= *(unsigned int *)(v8 + 320) )
        {
          *(_QWORD *)(v8 + 400) = v8 + 408;
          *(_QWORD *)(v8 + 312) = v8 + (unsigned int)v9 + 408LL;
          Current = DXGPROCESS::GetCurrent();
          v14 = DxgkSubmitCommandInternal((const struct _D3DKMT_SUBMITCOMMAND *)(v8 + 24), Current);
          v15 = (unsigned int)v14;
          v18 = v14;
          if ( v14 >= 0 )
          {
LABEL_14:
            VmBusCompletePacket(*(struct VMBPACKETCOMPLETION__ **)(v1 + 112), &v18, 4u);
            v4 = 1;
            goto LABEL_15;
          }
LABEL_13:
          HandleAsyncCommandError((_QWORD *)v1, v15, *(_DWORD *)(v8 + 52), 1);
          goto LABEL_14;
        }
        v11 = WdLogNewEntry5_WdError(v12, (unsigned int)v9);
        *(_QWORD *)(v11 + 24) = *(unsigned int *)(v1 + 128);
        *(_QWORD *)(v11 + 32) = 1940LL;
      }
      else
      {
        v11 = WdLogNewEntry5_WdError(v10, (unsigned int)v9);
        *(_QWORD *)(v11 + 24) = *(unsigned int *)(v1 + 128);
      }
    }
    WdLogEvent5_WdError(v11);
    v15 = 3221225485LL;
    v18 = -1073741811;
    goto LABEL_13;
  }
  v5 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v5 + 24) = 1919LL;
  WdLogEvent5_WdError(v5);
LABEL_15:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v4;
}
