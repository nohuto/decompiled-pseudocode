/*
 * XREFs of ?VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGINGQUEUE@@PEBVDXGALLOCATION@@PEAUD3DDDI_UPDATEALLOCPROPERTY@@@Z @ 0x1C024D68C
 * Callers:
 *     DxgkUpdateAllocationProperty @ 0x1C027C700 (DxgkUpdateAllocationProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024D0C8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateAllocationProperty(
        struct _KTHREAD **this,
        const struct DXGPROCESS *a2,
        const struct DXGPAGINGQUEUE *a3,
        const struct DXGALLOCATION *a4,
        struct D3DDDI_UPDATEALLOCPROPERTY *a5)
{
  int v5; // eax
  int v6; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rax
  unsigned int v14[4]; // [rsp+30h] [rbp-21h] BYREF
  __int64 v15; // [rsp+40h] [rbp-11h] BYREF
  int v16; // [rsp+48h] [rbp-9h]
  int v17; // [rsp+4Ch] [rbp-5h]
  int v18; // [rsp+50h] [rbp-1h]
  __int128 v19; // [rsp+58h] [rbp+7h]
  __int128 v20; // [rsp+68h] [rbp+17h]
  __int64 v21; // [rsp+78h] [rbp+27h]
  UINT64 v22; // [rsp+80h] [rbp+2Fh] BYREF
  int v23; // [rsp+88h] [rbp+37h]

  v5 = *((_DWORD *)a2 + 106);
  v15 = 0LL;
  v17 = 0;
  v16 = v5;
  v6 = *((_DWORD *)a3 + 7);
  v7 = *(_OWORD *)&a5->hPagingQueue;
  v18 = 56;
  v8 = *(_OWORD *)&a5->Flags.0;
  v14[0] = 16;
  v19 = v7;
  LODWORD(v19) = v6;
  *(_QWORD *)&v7 = *(_QWORD *)&a5->0;
  DWORD1(v19) = *((_DWORD *)a4 + 24);
  v20 = v8;
  v21 = v7;
  v11 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v15, 64LL, (char *)&v22, v14);
  if ( v11 < 0 || (v11 = -1073741823, v14[0] < 0x10) || (v11 = v23, v23 < 0) )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
  }
  else
  {
    a5->PagingFenceValue = v22;
  }
  return (unsigned int)v11;
}
