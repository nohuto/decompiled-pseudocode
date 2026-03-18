/*
 * XREFs of ?VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0247B88
 * Callers:
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0126C58 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024D0C8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiQueryAdapterInfo(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        const struct _DXGKARG_QUERYADAPTERINFO *a2)
{
  UINT v4; // esi
  unsigned int v5; // r14d
  char *PoolWithTag; // rax
  struct DXGKVMB_COMMAND_BASE *v7; // rdi
  char *v9; // rbp
  int v10; // esi
  struct _MDL *v11; // [rsp+28h] [rbp-20h]
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2->InputDataSize + 40;
  v12 = (a2->OutputDataSize + 7) & 0xFFFFFFF8;
  v5 = v12 + v4;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v12 + v4, 0x4B677844u);
  v7 = (struct DXGKVMB_COMMAND_BASE *)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  *(_QWORD *)PoolWithTag = 0LL;
  *((_DWORD *)PoolWithTag + 2) = 0;
  *((_DWORD *)PoolWithTag + 3) = 0;
  *((_DWORD *)PoolWithTag + 4) = 3;
  *((_DWORD *)PoolWithTag + 6) = a2->Type;
  *((_DWORD *)PoolWithTag + 7) = a2->InputDataSize;
  *((_DWORD *)PoolWithTag + 8) = a2->OutputDataSize;
  memmove(PoolWithTag + 36, a2->pInputData, a2->InputDataSize);
  v9 = (char *)v7 + v4;
  v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, v7, v5, v9, &v12, v11);
  if ( v10 >= 0 )
  {
    if ( v12 >= a2->OutputDataSize )
      memmove(a2->pOutputData, v9, a2->OutputDataSize);
    else
      v10 = -1073741823;
  }
  ExFreePoolWithTag(v7, 0);
  return (unsigned int)v10;
}
