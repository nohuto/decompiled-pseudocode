/*
 * XREFs of ?VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@IPEAE@Z @ 0x1C02491D0
 * Callers:
 *     ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1C0291054 (-IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024D240 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C0290DFC (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendIsSyncObjectSignaled(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGSYNCOBJECT *a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  int v5; // ebx
  struct _MDL *v7; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+2Ch] [rbp-1Ch]
  int v12; // [rsp+30h] [rbp-18h]
  unsigned int HostHandle; // [rsp+38h] [rbp-10h]

  v5 = *((_DWORD *)a2 + 106);
  v9 = 0LL;
  v11 = 0;
  v10 = v5;
  v12 = 46;
  HostHandle = DXGSYNCOBJECT::GetHostHandle(a3, a4, (unsigned __int8)a3);
  result = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v9, 0x20u, v7);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1071775484 )
      return result;
    *a5 = 0;
  }
  else
  {
    *a5 = 1;
  }
  return 0LL;
}
