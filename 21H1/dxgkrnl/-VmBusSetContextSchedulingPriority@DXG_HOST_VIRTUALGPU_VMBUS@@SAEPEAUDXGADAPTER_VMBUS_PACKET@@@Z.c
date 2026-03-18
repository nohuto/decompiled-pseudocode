/*
 * XREFs of ?VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024A310
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003E87C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003F9E8 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C00D97A0 (DxgkSetContextSchedulingPriority.c)
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1C00D9D50 (DxgkSetContextInProcessSchedulingPriority.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetContextSchedulingPriority(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  char v7; // si
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  _BYTE v15[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+30h] [rbp-18h]
  int v18; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v16);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v17 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v18 = -1073741811;
    v7 = 0;
    v8 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
    if ( !v8 )
      goto LABEL_13;
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 7) + 496LL);
    if ( *(_DWORD *)(v10 + 352) > 0x10u )
    {
      if ( *((_DWORD *)a1 + 22) < 0x28u )
      {
        v11 = WdLogNewEntry5_WdError(v10, v8);
        *(_QWORD *)(v11 + 24) = 2747LL;
        WdLogEvent5_WdError(v11);
LABEL_12:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v18, 4u);
        v5 = 1;
        goto LABEL_13;
      }
      v7 = *(_BYTE *)(v8 + 32);
    }
    v12 = v8 + 24;
    if ( v7 )
      v13 = DxgkSetContextInProcessSchedulingPriority(v12, v8, v9);
    else
      v13 = DxgkSetContextSchedulingPriority(v12, v8, v9);
    v18 = v13;
    goto LABEL_12;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 2737LL;
  WdLogEvent5_WdError(v6);
LABEL_13:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v5;
}
