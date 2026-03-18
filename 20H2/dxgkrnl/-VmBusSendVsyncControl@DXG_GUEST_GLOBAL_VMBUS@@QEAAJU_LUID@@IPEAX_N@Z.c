/*
 * XREFs of ?VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z @ 0x1C024CA6C
 * Callers:
 *     ?StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C02FF6D0 (-StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?StopVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAXXZ @ 0x1C02FF8F0 (-StopVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024C01C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendVsyncControl(
        struct _KTHREAD **this,
        struct _LUID a2,
        int a3,
        void *a4,
        bool a5)
{
  __int64 result; // rax
  unsigned int v6; // [rsp+30h] [rbp-50h] BYREF
  __int64 v7; // [rsp+38h] [rbp-48h] BYREF
  int v8; // [rsp+40h] [rbp-40h]
  int v9; // [rsp+44h] [rbp-3Ch]
  int v10; // [rsp+48h] [rbp-38h]
  struct _LUID v11; // [rsp+50h] [rbp-30h]
  int v12; // [rsp+58h] [rbp-28h]
  void *v13; // [rsp+60h] [rbp-20h]
  BOOL v14; // [rsp+68h] [rbp-18h]
  char v15[8]; // [rsp+70h] [rbp-10h] BYREF

  v7 = 0LL;
  v8 = 0;
  v14 = a5;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  v9 = 1;
  v10 = 1016;
  v6 = 8;
  result = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v7, 56LL, v15, &v6);
  if ( (int)result >= 0 )
  {
    result = 3221225473LL;
    if ( v6 >= 4 )
      return *(unsigned int *)v15;
  }
  return result;
}
