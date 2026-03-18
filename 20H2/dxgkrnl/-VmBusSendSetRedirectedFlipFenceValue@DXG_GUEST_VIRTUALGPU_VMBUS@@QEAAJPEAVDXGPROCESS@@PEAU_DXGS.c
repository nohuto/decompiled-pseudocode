/*
 * XREFs of ?VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGSHAREDSYNCOBJECT@@_K@Z @ 0x1C024AB6C
 * Callers:
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C0151B30 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024C330 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0283E84 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetRedirectedFlipFenceValue(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _DXGSHAREDSYNCOBJECT *a3,
        __int64 a4)
{
  int v4; // ebx
  struct _MDL *v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  unsigned int HostProcess; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+2Ch] [rbp-2Ch]
  int v17; // [rsp+30h] [rbp-28h]
  int v18; // [rsp+38h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-18h]

  v4 = *((_DWORD *)a3 + 2);
  v14 = 0LL;
  v16 = 0;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v17 = 35;
  v18 = v4;
  v19 = a4;
  v8 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v14, 0x28u, v7);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
  }
  return (unsigned int)v11;
}
