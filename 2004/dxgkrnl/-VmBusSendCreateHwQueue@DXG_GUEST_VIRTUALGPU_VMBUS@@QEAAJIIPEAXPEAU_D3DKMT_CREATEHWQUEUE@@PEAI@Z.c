/*
 * XREFs of ?VmBusSendCreateHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAXPEAU_D3DKMT_CREATEHWQUEUE@@PEAI@Z @ 0x1C02471CC
 * Callers:
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C026DC3C (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024D0C8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateHwQueue(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        __int64 a2,
        int a3,
        void *a4,
        struct _D3DKMT_CREATEHWQUEUE *a5,
        unsigned int *a6)
{
  int v8; // r15d
  UINT PrivateDriverDataSize; // eax
  __int64 v10; // rax
  unsigned int v12; // ebp
  _QWORD *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  UINT v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  UINT v22; // eax
  __int64 v23; // rax
  UINT v24; // eax
  struct _MDL *v25; // [rsp+28h] [rbp-B0h]
  unsigned int v26; // [rsp+30h] [rbp-A8h] BYREF
  DXG_VMBUS_CHANNEL_BASE *v27; // [rsp+38h] [rbp-A0h]
  _QWORD v28[2]; // [rsp+40h] [rbp-98h] BYREF
  int v29; // [rsp+50h] [rbp-88h]

  v8 = a2;
  v27 = this;
  PrivateDriverDataSize = a5->PrivateDriverDataSize;
  if ( PrivateDriverDataSize > 0x20000 )
  {
    v10 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v10 + 24) = 7261LL;
    WdLogEvent5_WdError(v10);
    return 0LL;
  }
  v29 = 50;
  v28[0] = 0LL;
  v12 = (PrivateDriverDataSize + 78) & 0xFFFFFFF8;
  v28[1] = 0LL;
  v13 = v28;
  if ( PrivateDriverDataSize )
  {
    v13 = operator new[](v12, 0x4B677844u, (POOL_TYPE)512);
    if ( !v13 )
    {
      v17 = WdLogNewEntry5_WdLowResource(0LL, v14, v15, v16);
      *(_QWORD *)(v17 + 24) = 7274LL;
      WdLogEvent5_WdLowResource(v17);
      return 0LL;
    }
  }
  *((_DWORD *)v13 + 2) = v8;
  *v13 = 0LL;
  *((_DWORD *)v13 + 3) = 0;
  *((_DWORD *)v13 + 4) = 50;
  *((_DWORD *)v13 + 14) = a3;
  *((_DWORD *)v13 + 15) = a5->Flags.0;
  *((_DWORD *)v13 + 16) = a5->PrivateDriverDataSize;
  v18 = a5->PrivateDriverDataSize;
  if ( v18 )
    memmove((char *)v13 + 68, a4, v18);
  v26 = v12;
  LODWORD(v19) = -1073741823;
  if ( DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v27, (struct DXGKVMB_COMMAND_BASE *)v13, v12, v13, &v26, v25) < 0
    || v26 < v12 )
  {
    v23 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v23 + 24) = v26;
    *(_QWORD *)(v23 + 32) = v12;
  }
  else
  {
    v19 = *((int *)v13 + 6);
    if ( (int)v19 >= 0 )
    {
      *a6 = *((_DWORD *)v13 + 7);
      a5->hHwQueueProgressFence = *((_DWORD *)v13 + 8);
      a5->HwQueueProgressFenceGPUVirtualAddress = v13[6];
      a5->HwQueueProgressFenceCPUVirtualAddress = (void *)v13[5];
      v22 = a5->PrivateDriverDataSize;
      if ( v22 )
        memmove(a4, (char *)v13 + 68, v22);
      goto LABEL_17;
    }
    v23 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v23 + 24) = v19;
  }
  WdLogEvent5_WdError(v23);
LABEL_17:
  v24 = a5->PrivateDriverDataSize;
  if ( v24 )
  {
    memmove(a4, (char *)v13 + 68, v24);
    operator delete[](v13);
  }
  return (unsigned int)v19;
}
