/*
 * XREFs of ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C0249724
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0123720 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C02608C0 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024C01C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0283E84 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_QUERYADAPTERINFO *a3,
        unsigned int a4)
{
  __int64 PrivateDriverDataSize; // rax
  __int64 v9; // rax
  UINT v11; // ebp
  _DWORD *PoolWithTag; // rbx
  unsigned int HostProcess; // eax
  UINT v14; // eax
  void *pPrivateDriverData; // r9
  int v16; // edi
  struct _MDL *v17; // [rsp+28h] [rbp-20h]
  unsigned int v18; // [rsp+60h] [rbp+18h] BYREF

  PrivateDriverDataSize = a3->PrivateDriverDataSize;
  if ( (unsigned int)PrivateDriverDataSize <= 0x20000 )
  {
    v11 = a3->PrivateDriverDataSize;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, PrivateDriverDataSize + 32, 0x4B677844u);
    if ( PoolWithTag )
    {
      if ( a2 )
        HostProcess = DXGPROCESS::GetHostProcess(a2);
      else
        HostProcess = 0;
      *(_QWORD *)PoolWithTag = 0LL;
      PoolWithTag[3] = 0;
      PoolWithTag[2] = HostProcess;
      PoolWithTag[4] = 2;
      v14 = a3->PrivateDriverDataSize;
      if ( v14 )
        memmove(PoolWithTag + 8, a3->pPrivateDriverData, v14);
      PoolWithTag[6] = a3->Type;
      PoolWithTag[7] = a3->PrivateDriverDataSize;
      pPrivateDriverData = a3->pPrivateDriverData;
      v18 = a4;
      v16 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
              this,
              (struct DXGKVMB_COMMAND_BASE *)PoolWithTag,
              v11 + 32,
              pPrivateDriverData,
              &v18,
              v17);
      if ( v16 >= 0 && v18 < a3->PrivateDriverDataSize )
        v16 = -1073741823;
      ExFreePoolWithTag(PoolWithTag, 0);
      return (unsigned int)v16;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v9 + 24) = 7152LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
}
