/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C0041230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?VmBusPropagatePresentHistoryToken@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_PROPAGATEPRESENTHISTORYTOKEN@@@Z @ 0x1C0041884 (-VmBusPropagatePresentHistoryToken@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_PROPAGATEPRESE.c)
 *     ?VmBusSetGuestData@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SETGUESTDATA@@@Z @ 0x1C0041D64 (-VmBusSetGuestData@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SETGUESTDATA@@@Z.c)
 *     ?VmBusSignalGuestEvent@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SIGNALGUESTEVENT@@@Z @ 0x1C0041DB8 (-VmBusSignalGuestEvent@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SIGNALGUESTEVENT@@@Z.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C0042044 (McTemplateK0pxq_EtwWriteTransfer.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusChannelProcessPacket(
        struct _LIST_ENTRY *a1,
        struct _LIST_ENTRY *a2,
        struct DXGKVMB_COMMAND_SETGUESTDATA *a3,
        int a4,
        unsigned int a5)
{
  int v9; // ecx
  int v10; // ecx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _WORK_QUEUE_ITEM *v16; // rdi
  int v17; // r8d
  __int64 v18; // rax

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    McTemplateK0pxq_EtwWriteTransfer(
      (unsigned int)&DxgkControlGuid_Context,
      (unsigned int)&EventVmBusProcessPacketHostToVmDpcBegin,
      (_DWORD)a3,
      (_DWORD)a1,
      *(_QWORD *)a3,
      *((_DWORD *)a3 + 4));
  v9 = *((_DWORD *)a3 + 4);
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        DXG_GUEST_GLOBAL_VMBUS::VmBusSetGuestData(a3);
      }
      else
      {
        PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x60uLL, 0x4B677844u);
        v16 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x60uLL);
          v16->List.Flink = 0LL;
          v16->WorkerRoutine = (PWORKER_THREAD_ROUTINE)VmBusProcessPacket;
          v16->Parameter = v16;
          _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
          HIDWORD(v16[2].Parameter) = a5;
          v16[1].List.Flink = a1;
          LODWORD(v16[2].Parameter) = a4;
          v16[2].List.Blink = a2;
          v16[2].WorkerRoutine = (PWORKER_THREAD_ROUTINE)a3;
          v16[2].List.Flink = (struct _LIST_ENTRY *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))qword_1C00B42D8)(a1);
          ExQueueWorkItem(v16, NormalWorkQueue);
          goto LABEL_13;
        }
        v18 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
        *(_QWORD *)(v18 + 24) = 12669LL;
        WdLogEvent5_WdLowResource(v18);
      }
    }
    else
    {
      DXG_GUEST_GLOBAL_VMBUS::VmBusPropagatePresentHistoryToken(a3);
    }
  }
  else
  {
    DXG_GUEST_GLOBAL_VMBUS::VmBusSignalGuestEvent(a3);
  }
  _InterlockedIncrement(&g_VgpuNumCompletedPackets);
  ((void (__fastcall *)(struct _LIST_ENTRY *, _QWORD, _QWORD))qword_1C00B4318)(a2, 0LL, 0LL);
LABEL_13:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    McTemplateK0pxq_EtwWriteTransfer(
      (unsigned int)&DxgkControlGuid_Context,
      (unsigned int)&EventVmBusProcessPacketHostToVmDpcEnd,
      v17,
      (_DWORD)a1,
      *(_QWORD *)a3,
      *((_DWORD *)a3 + 4));
}
