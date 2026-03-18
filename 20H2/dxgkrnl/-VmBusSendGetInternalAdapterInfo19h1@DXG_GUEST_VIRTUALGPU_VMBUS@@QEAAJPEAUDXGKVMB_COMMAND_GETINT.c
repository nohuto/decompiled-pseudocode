/*
 * XREFs of ?VmBusSendGetInternalAdapterInfo19h1@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN1@@@Z @ 0x1C0247B20
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C020C98C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024C01C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo19h1(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN1 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 result; // rax
  __int64 v7; // xmm1_8
  __int64 v8; // rax
  struct _MDL *v9; // [rsp+28h] [rbp-50h]
  unsigned int v10; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+38h] [rbp-40h] BYREF
  int v12; // [rsp+40h] [rbp-38h]
  int v13; // [rsp+44h] [rbp-34h]
  int v14; // [rsp+48h] [rbp-30h]
  __int128 v15; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp-18h]

  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  v14 = 36;
  v10 = 24;
  v5 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v11, 0x18u, &v15, &v10, v9);
  if ( v5 < 0 || (v5 = -1073741823, v10 < 0x18) )
  {
    v8 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v8 + 24) = v5;
    WdLogEvent5_WdError(v8);
    return (unsigned int)v5;
  }
  else
  {
    result = 0LL;
    v7 = v16;
    *(_OWORD *)a2 = v15;
    *((_QWORD *)a2 + 2) = v7;
  }
  return result;
}
