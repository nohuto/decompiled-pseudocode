/*
 * XREFs of ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0243B58
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0116AA0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C011B820 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 * Callees:
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0248DD4 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(DXG_GUEST_GLOBAL_VMBUS *this, int a2, int a3)
{
  struct _MDL *v3; // [rsp+28h] [rbp-30h]
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]
  int v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+48h] [rbp-10h]

  v4 = 0LL;
  v5 = a2;
  v8 = a3;
  v6 = 1;
  v7 = 1003;
  DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v4, 0x20u, 0LL, 0LL, v3);
}
