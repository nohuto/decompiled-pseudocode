/*
 * XREFs of ?VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0246D40
 * Callers:
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C0118770 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C0167090 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024C01C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyNtSharedObject(DXG_GUEST_GLOBAL_VMBUS *this, int a2)
{
  struct _MDL *v2; // [rsp+28h] [rbp-30h]
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]
  int v5; // [rsp+3Ch] [rbp-1Ch]
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+48h] [rbp-10h]

  v7 = a2;
  v3 = 0LL;
  v4 = 0;
  v5 = 1;
  v6 = 1005;
  DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v3, 0x20u, 0LL, 0LL, v2);
}
