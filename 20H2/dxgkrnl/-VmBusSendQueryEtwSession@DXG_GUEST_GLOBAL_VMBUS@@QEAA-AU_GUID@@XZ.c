/*
 * XREFs of ?VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA?AU_GUID@@XZ @ 0x1C0249D9C
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C026A04C (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024C01C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

struct _GUID *__fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendQueryEtwSession(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID v3; // xmm0
  struct _GUID *result; // rax
  struct _MDL *v5; // [rsp+28h] [rbp-50h]
  unsigned int v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+38h] [rbp-40h] BYREF
  int v8; // [rsp+40h] [rbp-38h]
  int v9; // [rsp+44h] [rbp-34h]
  int v10; // [rsp+48h] [rbp-30h]
  struct _GUID v11; // [rsp+50h] [rbp-28h] BYREF

  v7 = 0LL;
  v8 = 0;
  v9 = 1;
  v10 = 1009;
  v6 = 16;
  if ( DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v7, 0x18u, &v11, &v6, v5) < 0
    || v6 < 0x10 )
  {
    v3 = 0LL;
  }
  else
  {
    v3 = v11;
  }
  result = retstr;
  *retstr = v3;
  return result;
}
