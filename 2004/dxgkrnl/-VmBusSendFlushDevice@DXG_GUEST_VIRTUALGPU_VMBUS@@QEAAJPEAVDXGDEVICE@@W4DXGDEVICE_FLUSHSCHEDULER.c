/*
 * XREFs of ?VmBusSendFlushDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGDEVICE@@W4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0248454
 * Callers:
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00E4748 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024D3DC (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushDevice(DXG_VMBUS_CHANNEL_BASE *a1, __int64 a2, int a3)
{
  struct _MDL *v3; // r9
  int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+2Ch] [rbp-1Ch]
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+3Ch] [rbp-Ch]

  v3 = (struct _MDL *)*(unsigned int *)(*(_QWORD *)(a2 + 40) + 424LL);
  v6 = 0LL;
  v4 = *(_DWORD *)(a2 + 440);
  v7 = (int)v3;
  v8 = 0;
  v9 = 42;
  v10 = v4;
  v11 = a3;
  return DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(a1, (struct DXGKVMB_COMMAND_BASE *)&v6, 0x20u, v3);
}
