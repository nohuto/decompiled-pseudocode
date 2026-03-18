/*
 * XREFs of ?VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0244E10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RESERVEGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_RESERVEGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F82C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RESERVEGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_RESERVE.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C016F6C0 (DxgkReserveGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusReserveGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdi
  struct VMBPACKETCOMPLETION__ *v11; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-28h]
  _QWORD v16[2]; // [rsp+38h] [rbp-20h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v14);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v15 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_RESERVEGPUVIRTUALADDRESS>((__int64)a1);
    v10 = v7;
    if ( v7 && (int)DxgkReserveGpuVirtualAddress(v7 + 24, v8, v9) >= 0 )
    {
      v11 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      v16[1] = *(_QWORD *)(v10 + 88);
      v16[0] = *(_QWORD *)(v10 + 80);
      VmBusCompletePacket(v11, v16, 0x10u);
      v5 = 1;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 4762LL;
    WdLogEvent5_WdError(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v5;
}
