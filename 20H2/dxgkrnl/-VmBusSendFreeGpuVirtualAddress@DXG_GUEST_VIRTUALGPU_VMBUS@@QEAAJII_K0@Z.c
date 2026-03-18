/*
 * XREFs of ?VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z @ 0x1C0247468
 * Callers:
 *     DxgkFreeGpuVirtualAddress @ 0x1C016FDF0 (DxgkFreeGpuVirtualAddress.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024C330 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFreeGpuVirtualAddress(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        struct _MDL *a4,
        unsigned __int64 a5)
{
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+28h] [rbp-40h]
  int v8; // [rsp+2Ch] [rbp-3Ch]
  int v9; // [rsp+30h] [rbp-38h]
  int v10; // [rsp+38h] [rbp-30h]
  struct _MDL *v11; // [rsp+40h] [rbp-28h]
  unsigned __int64 v12; // [rsp+48h] [rbp-20h]

  v6 = 0LL;
  v8 = 0;
  v7 = a2;
  v9 = 16;
  v10 = a3;
  v11 = a4;
  v12 = a5;
  return DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v6, 0x30u, a4);
}
