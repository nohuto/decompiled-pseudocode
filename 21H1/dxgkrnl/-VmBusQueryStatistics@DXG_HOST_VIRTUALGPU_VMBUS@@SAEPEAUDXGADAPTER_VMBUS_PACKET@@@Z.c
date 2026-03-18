/*
 * XREFs of ?VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0241460
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_QUERYSTATISTICS@@@@YAPEAUDXGKVMB_COMMAND_QUERYSTATISTICS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003E9E4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_QUERYSTATISTICS@@@@YAPEAUDXGKVMB_COMMAND_QUERYSTATISTICS@.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003F9E8 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02216A8 (DxgkQueryStatisticsInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryStatistics(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // si
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rbx
  int StatisticsInternal; // eax
  __int64 v12; // rcx
  _OWORD *v13; // rax
  char *v14; // rdx
  __int128 v15; // xmm1
  struct VMBPACKETCOMPLETION__ *v16; // rcx
  _BYTE v17[8]; // [rsp+20h] [rbp-338h] BYREF
  DXGPUSHLOCK *v18; // [rsp+28h] [rbp-330h]
  int v19; // [rsp+30h] [rbp-328h]
  _DWORD v20[2]; // [rsp+38h] [rbp-320h] BYREF
  char v21; // [rsp+40h] [rbp-318h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v18);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v19 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 4859LL;
    WdLogEvent5_WdError(v6);
LABEL_3:
    v5 = 0;
    goto LABEL_4;
  }
  v8 = CastToVmBusCommand<DXGKVMB_COMMAND_QUERYSTATISTICS>((__int64)a1);
  v10 = v8;
  if ( !v8 || *(_QWORD *)(v8 + 40) )
    goto LABEL_3;
  *(_QWORD *)(v8 + 28) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 316LL);
  v20[1] = 0;
  StatisticsInternal = DxgkQueryStatisticsInternal(v8 + 24, 0, v9);
  v12 = 6LL;
  v20[0] = StatisticsInternal;
  v13 = (_OWORD *)(v10 + 48);
  v14 = &v21;
  do
  {
    *(_OWORD *)v14 = *v13;
    *((_OWORD *)v14 + 1) = v13[1];
    *((_OWORD *)v14 + 2) = v13[2];
    *((_OWORD *)v14 + 3) = v13[3];
    *((_OWORD *)v14 + 4) = v13[4];
    *((_OWORD *)v14 + 5) = v13[5];
    *((_OWORD *)v14 + 6) = v13[6];
    v14 += 128;
    v15 = v13[7];
    v13 += 8;
    *((_OWORD *)v14 - 1) = v15;
    --v12;
  }
  while ( v12 );
  v16 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
  *(_QWORD *)v14 = *(_QWORD *)v13;
  VmBusCompletePacket(v16, v20, 0x310u);
LABEL_4:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v5;
}
