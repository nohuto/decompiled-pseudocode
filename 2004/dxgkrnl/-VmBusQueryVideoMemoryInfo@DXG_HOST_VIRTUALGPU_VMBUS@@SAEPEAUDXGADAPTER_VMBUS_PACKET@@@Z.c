/*
 * XREFs of ?VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02458A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F83C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C00DE120 (DxgkQueryVideoMemoryInfo.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryVideoMemoryInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  struct VMBPACKETCOMPLETION__ *v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-29h] BYREF
  __int128 v11; // [rsp+30h] [rbp-19h]
  __int128 v12; // [rsp+40h] [rbp-9h]
  __int64 v13; // [rsp+50h] [rbp+7h]
  _BYTE v14[8]; // [rsp+58h] [rbp+Fh] BYREF
  DXGPUSHLOCK *v15; // [rsp+60h] [rbp+17h]
  int v16; // [rsp+68h] [rbp+1Fh]
  _OWORD v17[2]; // [rsp+70h] [rbp+27h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v15);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v16 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( v7 )
    {
      v10 = 0LL;
      v13 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      *((_QWORD *)&v10 + 1) = *(_QWORD *)(v7 + 24);
      LODWORD(v13) = *(_DWORD *)(v7 + 32);
      if ( (int)DxgkQueryVideoMemoryInfo(&v10) >= 0 )
      {
        v8 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
        v17[0] = v11;
        v17[1] = v12;
        VmBusCompletePacket(v8, v17, 0x20u);
        v5 = 1;
      }
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 4553LL;
    WdLogEvent5_WdError(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v5;
}
