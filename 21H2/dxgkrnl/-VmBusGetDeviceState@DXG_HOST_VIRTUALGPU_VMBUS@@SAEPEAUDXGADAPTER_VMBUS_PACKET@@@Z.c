/*
 * XREFs of ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036DE50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C604 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkGetDeviceState @ 0x1C017C680 (DxgkGetDeviceState.c)
 *     ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x1C0361210 (-ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetDeviceState(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  _BYTE v10[8]; // [rsp+58h] [rbp-9h] BYREF
  DXGPUSHLOCK *v11; // [rsp+60h] [rbp-1h]
  int v12; // [rsp+68h] [rbp+7h]
  _OWORD v13[3]; // [rsp+78h] [rbp+17h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+47h]
  __int64 v15; // [rsp+B0h] [rbp+4Fh]
  unsigned int v16; // [rsp+C8h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v11);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v12 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 608LL) + 392LL);
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
    if ( !v5 )
      goto LABEL_11;
    v15 = 0LL;
    v13[0] = *(_OWORD *)(v5 + 24);
    v13[1] = *(_OWORD *)(v5 + 40);
    v13[2] = *(_OWORD *)(v5 + 56);
    v14 = *(_QWORD *)(v5 + 72);
    if ( v4 >= 0x20 && *(_DWORD *)(v5 + 28) == 4 && (*(_BYTE *)(v5 + 80) & 1) != 0 )
    {
      v7 = *(unsigned int *)(v5 + 32);
      v8 = *(unsigned int *)(v5 + 24);
      v16 = 0;
      LODWORD(v15) = DXG_HOST_VIRTUALGPU_VMBUS::ConvertHostVidPnTargetIdToVidPnSourceId(v8, v7, &v16, v6);
      if ( (int)v15 < 0 )
      {
        WdLogSingleEntry1(2LL, 4294LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Fail to locate VidPnSourceId",
          4294LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_10;
      }
      DWORD2(v13[0]) = v16;
    }
    LODWORD(v15) = DxgkGetDeviceState((__int64)v13);
LABEL_10:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v13, 0x40u);
    v3 = 1;
    goto LABEL_11;
  }
  WdLogSingleEntry1(2LL, 4272LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    4272LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_11:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  return v3;
}
