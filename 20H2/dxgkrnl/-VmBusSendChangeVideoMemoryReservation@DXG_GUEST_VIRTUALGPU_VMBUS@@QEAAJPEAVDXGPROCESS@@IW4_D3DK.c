/*
 * XREFs of ?VmBusSendChangeVideoMemoryReservation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C02455F0
 * Callers:
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C0214584 (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024C330 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendChangeVideoMemoryReservation(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        struct _MDL *a4,
        unsigned __int64 a5)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+28h] [rbp-40h]
  int v14; // [rsp+2Ch] [rbp-3Ch]
  int v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+38h] [rbp-30h]
  __int128 v17; // [rsp+48h] [rbp-20h]

  v12 = 0LL;
  v5 = *((_DWORD *)a2 + 106);
  v14 = 0;
  v13 = v5;
  v16 = 0LL;
  v15 = 49;
  v17 = 0LL;
  DWORD2(v17) = a3;
  HIDWORD(v16) = (_DWORD)a4;
  *(_QWORD *)&v17 = a5;
  v6 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v12, 0x38u, a4);
  v9 = v6;
  if ( v6 < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdError(v10);
  }
  return (unsigned int)v9;
}
