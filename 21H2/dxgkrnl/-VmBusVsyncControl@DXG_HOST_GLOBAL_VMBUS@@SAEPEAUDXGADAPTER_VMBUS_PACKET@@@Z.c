/*
 * XREFs of ?VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0383080
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C634 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     _lambda_908f0e8ad16bb8359ff8641d3c1ab648_::operator() @ 0x1C01572B4 (_lambda_908f0e8ad16bb8359ff8641d3c1ab648_--operator().c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusVsyncControl(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v6[3]; // [rsp+20h] [rbp-18h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v7 = a1;
  v1 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v9 = v1;
  if ( v1 )
  {
    v6[0] = &v9;
    v6[1] = (__int64 *)&v7;
    v8 = lambda_908f0e8ad16bb8359ff8641d3c1ab648_::operator()(v6, v2, v3, v4);
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v7 + 16), &v8, 4u);
    LOBYTE(v1) = 1;
  }
  return v1;
}
