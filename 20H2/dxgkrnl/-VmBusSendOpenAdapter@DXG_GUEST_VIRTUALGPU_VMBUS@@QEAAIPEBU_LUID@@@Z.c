/*
 * XREFs of ?VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIPEBU_LUID@@@Z @ 0x1C0248FD0
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C020C98C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024C01C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenAdapter(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        const struct _LUID *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v5; // esi
  __int64 v6; // rdx
  int v7; // edi
  __int64 v8; // rcx
  int v10; // ebx
  __int64 v11; // rax
  struct _MDL *v12; // [rsp+28h] [rbp-58h]
  struct _MDL *v13; // [rsp+28h] [rbp-58h]
  unsigned int v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h] BYREF
  int v16; // [rsp+40h] [rbp-40h]
  int v17; // [rsp+44h] [rbp-3Ch]
  int v18; // [rsp+48h] [rbp-38h]
  int v19; // [rsp+50h] [rbp-30h]
  int v20; // [rsp+54h] [rbp-2Ch]
  __int64 v21; // [rsp+58h] [rbp-28h]
  unsigned int v22; // [rsp+60h] [rbp-20h] BYREF
  __int64 v23; // [rsp+64h] [rbp-1Ch]

  v2 = (__int64)*a2;
  v15 = 0LL;
  v16 = 0;
  v3 = 16;
  v17 = 0;
  v21 = v2;
  v18 = 14;
  v5 = 40;
  v19 = 27;
  v20 = 16;
  v14 = 16;
  v7 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v15, 0x28u, &v22, &v14, v12);
  if ( v7 < 0 )
  {
LABEL_8:
    v14 = v3;
    v7 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v15, v5, &v22, &v14, v13);
    if ( v7 >= 0 && v14 >= v3 )
    {
      v10 = v19;
      *((_DWORD *)DXGGLOBAL::GetGlobal(v8, v6) + 408) = v10;
      return v22;
    }
    goto LABEL_11;
  }
  if ( v14 < 0x10 )
  {
    v5 = 32;
    v19 = 16;
    v20 = 16;
    v3 = 4;
    goto LABEL_8;
  }
  v8 = v23;
  if ( (int)v23 >= 0 )
    return v22;
  if ( (_DWORD)v23 == -1073741811 )
  {
    v19 = HIDWORD(v23);
    v20 = HIDWORD(v23);
    goto LABEL_8;
  }
LABEL_11:
  v11 = WdLogNewEntry5_WdError(v8, v6);
  *(_QWORD *)(v11 + 24) = v7;
  WdLogEvent5_WdError(v11);
  return 0LL;
}
