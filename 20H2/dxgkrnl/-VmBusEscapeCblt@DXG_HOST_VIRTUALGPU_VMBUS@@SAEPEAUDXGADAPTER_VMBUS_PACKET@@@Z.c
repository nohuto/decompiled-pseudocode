/*
 * XREFs of ?VmBusEscapeCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D71C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0039C38 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F674 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkEscape @ 0x1C00F72C0 (DxgkEscape.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEscapeCblt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  char v15; // r14
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rax
  _BYTE v22[24]; // [rsp+20h] [rbp-40h] BYREF
  _DWORD v23[4]; // [rsp+38h] [rbp-28h] BYREF
  void *v24; // [rsp+48h] [rbp-18h]
  unsigned int v25; // [rsp+50h] [rbp-10h]
  int v26; // [rsp+54h] [rbp-Ch]

  v1 = ((unsigned __int64)a1 - 40) & -(__int64)(a1 != 0LL);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v22,
    (struct _KTHREAD **)(*(_QWORD *)(v1 + 0x50) + 232LL));
  v4 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(v1 + 80) + 165LL) )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = 1675LL;
LABEL_22:
    WdLogEvent5_WdError(v5);
    goto LABEL_23;
  }
  v6 = v1 + 40;
  if ( !v1 )
    v6 = 0LL;
  v9 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>(v6);
  if ( !v9 )
    goto LABEL_23;
  if ( *(_BYTE *)(*(_QWORD *)(v1 + 80) + 153LL) && (v9[8] || (v9[9] & 0x40) == 0) )
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v10);
    *(_QWORD *)(v11 + 24) = (int)v9[8];
    WdLogEvent5_WdWarning(v11);
LABEL_23:
    v15 = 0;
    goto LABEL_24;
  }
  v12 = *(unsigned int *)(v1 + 128) - 55LL;
  if ( v12 < (unsigned int)v9[10] )
  {
    v5 = WdLogNewEntry5_WdError(v12, v7);
    v13 = *(unsigned int *)(v1 + 128);
LABEL_21:
    *(_QWORD *)(v5 + 24) = v13;
    goto LABEL_22;
  }
  v14 = v9[8];
  if ( v14 < 0 || (v15 = 1, v14 > 1) && v14 != 3 && v14 != 8 && (unsigned int)(v14 - 28) > 1 )
  {
    v5 = WdLogNewEntry5_WdError(v12, v7);
    v13 = (int)v9[8];
    *(_QWORD *)(v5 + 32) = 1707LL;
    goto LABEL_21;
  }
  v23[0] = v9[6];
  v23[3] = v9[9];
  v23[1] = v9[7];
  v26 = v9[11];
  v23[2] = v9[8];
  v25 = v9[10];
  v24 = v9 + 12;
  v16 = DxgkEscape(v23);
  v19 = v16;
  if ( v16 >= 0 )
  {
    VmBusCompletePacket(*(struct VMBPACKETCOMPLETION__ **)(v1 + 112), v24, v25);
LABEL_24:
    v4 = v15;
    goto LABEL_25;
  }
  v20 = WdLogNewEntry5_WdError(v18, v17);
  *(_QWORD *)(v20 + 24) = v19;
  WdLogEvent5_WdError(v20);
LABEL_25:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  return v4;
}
