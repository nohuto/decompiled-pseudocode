/*
 * XREFs of ?VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0250830
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F7C4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     _lambda_30de2fb5eb4f6d1d827b6d0e4acdd9ca_::operator() @ 0x1C00D6C68 (_lambda_30de2fb5eb4f6d1d827b6d0e4acdd9ca_--operator().c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusVsyncControl(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  __int64 *v3[3]; // [rsp+20h] [rbp-18h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v4 = a1;
  v1 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v6 = v1;
  if ( v1 )
  {
    v3[0] = &v6;
    v3[1] = (__int64 *)&v4;
    v5 = lambda_30de2fb5eb4f6d1d827b6d0e4acdd9ca_::operator()(v3);
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v4 + 9), &v5, 4u);
    LOBYTE(v1) = 1;
  }
  return v1;
}
