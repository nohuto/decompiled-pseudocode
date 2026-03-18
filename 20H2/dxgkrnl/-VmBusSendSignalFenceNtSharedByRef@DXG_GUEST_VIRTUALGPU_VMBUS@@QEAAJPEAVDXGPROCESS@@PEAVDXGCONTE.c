/*
 * XREFs of ?VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x1C024AC70
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00E7990 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024C330 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0283E84 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalFenceNtSharedByRef(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        int a4,
        unsigned __int64 a5)
{
  struct _MDL *v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  unsigned int HostProcess; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+2Ch] [rbp-2Ch]
  int v18; // [rsp+30h] [rbp-28h]
  int v19; // [rsp+38h] [rbp-20h]
  int v20; // [rsp+3Ch] [rbp-1Ch]
  unsigned __int64 v21; // [rsp+40h] [rbp-18h]

  v15 = 0LL;
  v17 = 0;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v20 = *((_DWORD *)a3 + 7);
  v21 = a5;
  v18 = 27;
  v19 = a4;
  v9 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v15, 0x28u, v8);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v12;
}
