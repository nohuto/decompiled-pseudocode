/*
 * XREFs of ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024F810
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F674 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C0117724 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromCpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  void *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  _OWORD *PoolWithTag; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  _BYTE v29[8]; // [rsp+20h] [rbp-40h] BYREF
  DXGPUSHLOCK *v30; // [rsp+28h] [rbp-38h]
  int v31; // [rsp+30h] [rbp-30h]
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v32; // [rsp+38h] [rbp-28h] BYREF
  int v33; // [rsp+80h] [rbp+20h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v30);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v31 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 3649LL;
    WdLogEvent5_WdError(v6);
    goto LABEL_24;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v10 = v7;
  if ( !v7 )
    goto LABEL_24;
  v33 = -1073741811;
  memset(&v32, 0, sizeof(v32));
  v11 = 0LL;
  v12 = *(unsigned int *)(v7 + 28);
  v13 = *(_QWORD *)(v10 + 40);
  if ( (_DWORD)v12
    && (v8 = (unsigned int)v12, v9 = 0xFFFFFFFFLL, v14 = 4 * v12, v14 <= 0xFFFFFFFF)
    && (v8 *= 8LL, v8 <= 0xFFFFFFFF) )
  {
    v15 = v14 + 56;
    if ( v15 < 0x38 )
    {
      v17 = WdLogNewEntry5_WdWarning(v8, v13, 0xFFFFFFFFLL);
      *(_QWORD *)(v17 + 24) = 3669LL;
    }
    else
    {
      v16 = v15 + (unsigned int)v8;
      if ( (unsigned int)v16 < v15 )
      {
        v17 = WdLogNewEntry5_WdWarning(v16, v13, 0xFFFFFFFFLL);
        *(_QWORD *)(v17 + 24) = 3674LL;
      }
      else if ( *((_DWORD *)a1 + 22) >= (unsigned int)v16 )
      {
        if ( v13 )
        {
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
          v11 = PoolWithTag;
          if ( PoolWithTag )
          {
            *PoolWithTag = 0LL;
            *((_QWORD *)PoolWithTag + 2) = 0LL;
            *(_QWORD *)PoolWithTag = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 104LL) + 128LL);
            *((_QWORD *)PoolWithTag + 1) = *(_QWORD *)(v10 + 40);
            *((_BYTE *)PoolWithTag + 16) = *(_BYTE *)(v10 + 48);
            v32.ObjectHandleArray = (const D3DKMT_HANDLE *)(v10 + 56);
            v32.FenceValueArray = (const UINT64 *)(v10 + 4 * (*(unsigned int *)(v10 + 28) + 14LL));
            v32.Flags.Value = *(_DWORD *)(v10 + 32);
            v32.hDevice = *(_DWORD *)(v10 + 24);
            v32.ObjectCount = *(_DWORD *)(v10 + 28);
            v32.hAsyncEvent = PoolWithTag;
            v33 = DxgkWaitForSynchronizationObjectFromCpuInternal(&v32, 0, PoolWithTag);
          }
          else
          {
            v23 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
            *(_QWORD *)(v23 + 24) = 3695LL;
            WdLogEvent5_WdLowResource(v23);
            v33 = -1073741801;
          }
          goto LABEL_20;
        }
        v17 = WdLogNewEntry5_WdWarning(v16, 0LL, 0xFFFFFFFFLL);
        *(_QWORD *)(v17 + 24) = 3688LL;
      }
      else
      {
        v17 = WdLogNewEntry5_WdWarning(v16, v13, 0xFFFFFFFFLL);
        *(_QWORD *)(v17 + 24) = 3679LL;
      }
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v8, v13, v9);
    *(_QWORD *)(v17 + 24) = 3664LL;
  }
  WdLogEvent5_WdWarning(v17);
LABEL_20:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v33, 4u);
  if ( v33 < 0 )
  {
    v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    *(_QWORD *)(v27 + 24) = 3723LL;
    WdLogEvent5_WdWarning(v27);
    if ( v11 )
      ExFreePoolWithTag(v11, 0x4B677844u);
  }
  v5 = 1;
LABEL_24:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  return v5;
}
