/*
 * XREFs of ?VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0244B40
 * Callers:
 *     <none>
 * Callees:
 *     DXGKCALLONEXIT__lambda_d7c4861ef0734605370a98f05df27570___ @ 0x1C0019EE8 (DXGKCALLONEXIT__lambda_d7c4861ef0734605370a98f05df27570___.c)
 *     _DXGKCALLONEXIT__lambda_622e88c23de365a187dafee9f06769d2____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C002670C (_DXGKCALLONEXIT__lambda_622e88c23de365a187dafee9f06769d2____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     Feature_VAIL_Opm_Projection__private_ReportDeviceUsage @ 0x1C0026864 (Feature_VAIL_Opm_Projection__private_ReportDeviceUsage.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00405D4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpmRequest(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // r10
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  __int128 v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v9; // [rsp+40h] [rbp-40h]
  char *v10; // [rsp+48h] [rbp-38h]
  _BYTE v11[48]; // [rsp+50h] [rbp-30h] BYREF
  char v12; // [rsp+98h] [rbp+18h] BYREF
  char v13; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+28h] BYREF

  v1 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  if ( v1 )
  {
    v14 = 0LL;
    *(_QWORD *)&v8 = &v13;
    v7 = 0LL;
    *((_QWORD *)&v8 + 1) = &v14;
    v9 = &v7;
    v12 = 0;
    v13 = 0;
    v10 = &v12;
    DXGKCALLONEXIT__lambda_d7c4861ef0734605370a98f05df27570_((__int64)v11, &v8);
    Feature_VAIL_Opm_Projection__private_ReportDeviceUsage();
    v4 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v4 + 24) = 7064LL;
    WdLogEvent5_WdError(v4);
    DXGKCALLONEXIT__lambda_622e88c23de365a187dafee9f06769d2____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v11);
    LOBYTE(v1) = v5;
  }
  return v1;
}
