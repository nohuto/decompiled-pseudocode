/*
 * XREFs of ?VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0380300
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C664 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C0163360 (DxgkSetContextSchedulingPriority.c)
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1C0163E00 (DxgkSetContextInProcessSchedulingPriority.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetContextSchedulingPriority(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // eax
  _BYTE v10[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v11);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v12 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v13 = -1073741811;
    v4 = 0;
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
    if ( !v5 )
      goto LABEL_13;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 608LL) + 392LL) > 0x10u )
    {
      if ( *((_DWORD *)a1 + 36) < 0x28u )
      {
        WdLogSingleEntry1(2LL, 3107LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid packet size", 3107LL, 0LL, 0LL, 0LL, 0LL);
LABEL_12:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v13, 4u);
        v3 = 1;
        goto LABEL_13;
      }
      v4 = *(_BYTE *)(v5 + 32);
    }
    v7 = v5 + 24;
    if ( v4 )
      v8 = DxgkSetContextInProcessSchedulingPriority(v7, v5, v6);
    else
      v8 = DxgkSetContextSchedulingPriority(v7, v5, v6);
    v13 = v8;
    goto LABEL_12;
  }
  WdLogSingleEntry1(2LL, 3097LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    3097LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_13:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  return v3;
}
