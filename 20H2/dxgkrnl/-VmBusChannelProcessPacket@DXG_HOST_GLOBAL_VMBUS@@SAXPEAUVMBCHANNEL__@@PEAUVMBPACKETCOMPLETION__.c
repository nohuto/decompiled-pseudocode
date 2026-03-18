/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C0040490
 * Callers:
 *     <none>
 * Callees:
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024978 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     ?IsWsl2Guest@DXGVIRTUALMACHINE@@QEBAEXZ @ 0x1C002596C (-IsWsl2Guest@DXGVIRTUALMACHINE@@QEBAEXZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C00259A4 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?VmBusChannelProcessPacketCblt@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C0025E10 (-VmBusChannelProcessPacketCblt@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETI.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C00410E4 (McTemplateK0pxq_EtwWriteTransfer.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusChannelProcessPacket(
        struct VMBCHANNEL__ *a1,
        struct VMBPACKETCOMPLETION__ *a2,
        struct _SLIST_ENTRY *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _WORK_QUEUE_ITEM *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // [rsp+28h] [rbp-30h]

  v12 = 0;
  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
  {
    v13 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C00B2098)(a1);
    if ( DXGVIRTUALMACHINE::IsWsl2Guest(*(DXGVIRTUALMACHINE **)(v13 + 496)) )
    {
      DXG_HOST_GLOBAL_VMBUS::VmBusChannelProcessPacketCblt(a1, a2, a3, a4, a5);
      return;
    }
  }
  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  if ( a4 < 0x18 )
  {
    v14 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v14 + 24) = 6046LL;
LABEL_8:
    WdLogEvent5_WdError(v14);
    _InterlockedIncrement(&g_VgpuNumCompletedPackets);
    ((void (__fastcall *)(struct VMBPACKETCOMPLETION__ *, _QWORD, _QWORD))qword_1C00B20D8)(a2, 0LL, 0LL);
    return;
  }
  if ( *((_DWORD *)&a3->Next + 3) != 1 )
  {
    v14 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v14 + 24) = 6054LL;
    goto LABEL_8;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    McTemplateK0pxq_EtwWriteTransfer(
      (unsigned int)&DxgkControlGuid_Context,
      (unsigned int)&EventVmBusProcessPacketGlobalDpcBegin,
      v11,
      (_DWORD)a1,
      (char)a3->Next,
      (char)a3[1].Next);
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x60uLL, 0x4B677844u);
  v20 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x60uLL);
    v20->Parameter = v20;
    v20->WorkerRoutine = (PWORKER_THREAD_ROUTINE)VmBusProcessPacket;
    v20->List.Flink = 0LL;
    _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
    HIDWORD(v20[2].Parameter) = a5;
    v20[1].List.Flink = (struct _LIST_ENTRY *)a1;
    LODWORD(v20[2].Parameter) = a4;
    v20[2].List.Blink = (struct _LIST_ENTRY *)a2;
    v20[2].WorkerRoutine = (PWORKER_THREAD_ROUTINE)a3;
    v20[1].Parameter = (PVOID)((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C00B2098)(a1);
    ExQueueWorkItem(v20, NormalWorkQueue);
  }
  else
  {
    v23 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
    *(_QWORD *)(v23 + 24) = 6076LL;
    WdLogEvent5_WdLowResource(v23);
    _InterlockedIncrement(&g_VgpuNumCompletedPackets);
    ((void (__fastcall *)(struct VMBPACKETCOMPLETION__ *, _QWORD, _QWORD))qword_1C00B20D8)(a2, 0LL, 0LL);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
  {
    LOBYTE(v12) = v20 != 0LL;
    LODWORD(v24) = a3[1].Next;
    McTemplateK0pxqt_EtwWriteTransfer(v21, &EventVmBusProcessPacketGlobalDpcEnd, v22, a1, a3->Next, v24, v12);
  }
}
