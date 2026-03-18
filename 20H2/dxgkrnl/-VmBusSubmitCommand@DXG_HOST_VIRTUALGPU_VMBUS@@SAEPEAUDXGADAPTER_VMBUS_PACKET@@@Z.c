/*
 * XREFs of ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024EA30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F854 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00EF780 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v15; // r8
  int v16; // eax
  struct VMBPACKETCOMPLETION__ *v17; // rcx
  _BYTE v19[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v20; // [rsp+28h] [rbp-20h]
  int v21; // [rsp+30h] [rbp-18h]
  int v22; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v20);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v21 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_SUBMITCOMMAND>((__int64)a1);
    v9 = v7;
    if ( !v7 )
      goto LABEL_13;
    v10 = 4LL * *(unsigned int *)(v7 + 392);
    if ( v10 > 0xFFFFFFFF )
    {
      v12 = WdLogNewEntry5_WdError(0xFFFFFFFFLL, v8);
      *(_QWORD *)(v12 + 24) = 4546LL;
    }
    else
    {
      v11 = *((unsigned int *)a1 + 22);
      if ( v11 - 408 >= (unsigned __int64)(unsigned int)v10 )
      {
        v13 = v11 - (unsigned int)v10 - 408;
        if ( v13 >= *(unsigned int *)(v9 + 320) )
        {
          *(_QWORD *)(v9 + 400) = v9 + 408;
          *(_QWORD *)(v9 + 312) = (unsigned int)v10 + v9 + 408;
          Current = DXGPROCESS::GetCurrent(v13, (unsigned int)v10);
          v16 = DxgkSubmitCommandInternal((struct _D3DKMT_SUBMITCOMMAND *)(v9 + 24), Current, v15);
LABEL_12:
          v17 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
          v22 = v16;
          VmBusCompletePacket(v17, &v22, 4u);
          v5 = 1;
          goto LABEL_13;
        }
        v12 = WdLogNewEntry5_WdError(v13, (unsigned int)v10);
        *(_QWORD *)(v12 + 24) = *((unsigned int *)a1 + 22);
        *(_QWORD *)(v12 + 32) = 4558LL;
      }
      else
      {
        v12 = WdLogNewEntry5_WdError(v11, (unsigned int)v10);
        *(_QWORD *)(v12 + 24) = *((unsigned int *)a1 + 22);
      }
    }
    WdLogEvent5_WdError(v12);
    v16 = -1073741811;
    goto LABEL_12;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 4537LL;
  WdLogEvent5_WdError(v6);
LABEL_13:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return v5;
}
