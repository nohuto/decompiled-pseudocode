/*
 * XREFs of ?VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVICEASERROR@@@Z @ 0x1C024597C
 * Callers:
 *     ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C0252284 (-Reset@DXGDEVICE@@QEAAXXZ.c)
 *     DxgkMarkDeviceAsError @ 0x1C02553A0 (DxgkMarkDeviceAsError.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C02490EC (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02809D4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMarkDeviceAsError(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        const struct _D3DKMT_MARKDEVICEASERROR *a4)
{
  struct _MDL *v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  unsigned int HostProcess; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+2Ch] [rbp-1Ch]
  int v17; // [rsp+30h] [rbp-18h]
  __int64 v18; // [rsp+38h] [rbp-10h]

  v14 = 0LL;
  v16 = 0;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v18 = (__int64)*a4;
  LODWORD(v18) = *((_DWORD *)a3 + 110);
  v17 = 29;
  v8 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v14, 0x20u, v7);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
  }
  return (unsigned int)v11;
}
