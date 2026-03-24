/*
 * XREFs of ?VmBusChannelProcessPacketCblt@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C0026DA0
 * Callers:
 *     ?VmBusChannelProcessPacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C00413F0 (-VmBusChannelProcessPacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C002692C (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE_DPC_CBLT@@QEAAJXZ @ 0x1C0026C84 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE_DPC_CBLT@@QEAAJXZ.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE_DPC_CBLT@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x1C0026CEC (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE_DPC_CBLT@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C0042044 (McTemplateK0pxq_EtwWriteTransfer.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusChannelProcessPacketCblt(
        struct VMBCHANNEL__ *a1,
        struct VMBPACKETCOMPLETION__ *a2,
        struct _SLIST_ENTRY *a3,
        unsigned int a4,
        unsigned int a5)
{
  struct VMBPACKETCOMPLETION__ *v7; // r14
  char v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  unsigned int Next; // eax
  __int64 v14; // rax
  char *v15; // rdi
  char v16; // al
  unsigned int v17; // ebp
  __int64 v18; // r15
  void *v19; // rdx
  struct DXGGLOBAL *Global; // r14
  PSLIST_ENTRY v21; // rbx
  __int64 v22; // rdx
  __int64 (__fastcall *v23)(__int64, __int64, __int64, char *); // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  const EVENT_DESCRIPTOR *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // [rsp+28h] [rbp-60h]
  struct _SLIST_ENTRY *v36; // [rsp+40h] [rbp-48h]
  __int64 v37; // [rsp+48h] [rbp-40h]
  int v39; // [rsp+A8h] [rbp+20h]

  v7 = a2;
  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  v36 = 0LL;
  v9 = 1;
  v39 = 1;
  v11 = *(_QWORD *)(((__int64 (*)(void))qword_1C00B42D8)() + 496);
  Next = 0;
  v37 = v11;
  if ( *(_DWORD *)(v11 + 352) < 0x28u )
    goto LABEL_8;
  if ( a4 >= 0x10 )
  {
    Next = (unsigned int)a3->Next;
    v36 = a3;
    if ( LODWORD(a3->Next) >= a4 )
    {
      v14 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v14 + 24) = 2154LL;
      goto LABEL_4;
    }
    a4 -= Next;
LABEL_8:
    if ( a4 < 0x10 )
    {
      v14 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v14 + 24) = 2161LL;
      goto LABEL_4;
    }
    v15 = (char *)a3 + Next;
    v16 = v15[12];
    if ( v16 == 1 )
    {
      if ( a4 < 0x18 )
      {
        v14 = WdLogNewEntry5_WdError(v11, v10);
        *(_QWORD *)(v14 + 24) = 2170LL;
        goto LABEL_4;
      }
      v17 = *((_DWORD *)v15 + 4);
      if ( v17 - 1000 > 0x14 )
      {
        v14 = WdLogNewEntry5_WdError(v11, v10);
        *(_QWORD *)(v14 + 24) = *((int *)v15 + 4);
        *(_QWORD *)(v14 + 32) = 2177LL;
        goto LABEL_4;
      }
      v18 = *(_QWORD *)v15;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) == 0 )
        goto LABEL_25;
      v19 = &EventVmBusProcessPacketGlobalDpcBegin;
    }
    else
    {
      if ( v16 )
      {
        v34 = WdLogNewEntry5_WdError(v11, v10);
        *(_QWORD *)(v34 + 24) = 2207LL;
        WdLogEvent5_WdError(v34);
        goto LABEL_40;
      }
      v39 = 0;
      if ( a4 < 0x18 )
      {
        v14 = WdLogNewEntry5_WdError(v11, v10);
        *(_QWORD *)(v14 + 24) = 2191LL;
        goto LABEL_4;
      }
      v17 = *((_DWORD *)v15 + 4);
      if ( v17 >= 0x42 )
      {
        v14 = WdLogNewEntry5_WdError(v11, v10);
        *(_QWORD *)(v14 + 24) = *((int *)v15 + 4);
        goto LABEL_4;
      }
      v18 = *(_QWORD *)v15;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) == 0 )
      {
LABEL_25:
        Global = DXGGLOBAL::GetGlobal(v11, v10);
        ++*((_DWORD *)Global + 33);
        v21 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 7);
        if ( v21
          || (v22 = *((unsigned int *)Global + 39),
              v23 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)Global + 20),
              v24 = *((unsigned int *)Global + 38),
              v25 = *((unsigned int *)Global + 37),
              ++*((_DWORD *)Global + 34),
              (v21 = (PSLIST_ENTRY)v23(v25, v22, v24, (char *)Global + 112)) != 0LL) )
        {
          memset(v21, 0, 0xA0uLL);
          _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
          v9 = 0;
          v7 = a2;
          v21[9].Next = v36;
          HIDWORD(v21[8].Next) = a5;
          *((_QWORD *)&v21[4].Next + 1) = a1;
          LODWORD(v21[8].Next) = a4;
          v21[7].Next = (struct _SLIST_ENTRY *)a2;
          *((_QWORD *)&v21[7].Next + 1) = v15;
          v21[6].Next = *(struct _SLIST_ENTRY **)(v37 + 56);
          v21[1].Next = (struct _SLIST_ENTRY *)VmBusProcessPacketCblt;
          *((_QWORD *)&v21[1].Next + 1) = v21;
          if ( *(_BYTE *)(v37 + 299)
            && ((unsigned int)DXG_DEFERRED_WORK_QUEUE_DPC_CBLT::GetNumWorkItems((PKSPIN_LOCK)(v37 + 368))
             || (*((_DWORD *)v15 + 3) & 0x100) != 0) )
          {
            DXG_DEFERRED_WORK_QUEUE_DPC_CBLT::QueueWorkItem(
              (PKSPIN_LOCK)(v37 + 368),
              (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v21);
          }
          else
          {
            *((_BYTE *)&v21[9].Next + 12) = 1;
            *((_QWORD *)&v21[3].Next + 1) = VmBusProcessPacketCblt;
            v21[4].Next = v21;
            *((_QWORD *)&v21[2].Next + 1) = 0LL;
            ExQueueWorkItem((PWORK_QUEUE_ITEM)(&v21[2].Next + 1), CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
          }
        }
        else
        {
          v30 = WdLogNewEntry5_WdLowResource(v27, v26, v28, v29);
          *(_QWORD *)(v30 + 24) = 2258LL;
          WdLogEvent5_WdLowResource(v30);
          v7 = a2;
        }
        if ( v39 == 1 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) == 0 )
            goto LABEL_40;
          v33 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalDpcEnd;
        }
        else
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) == 0 )
            goto LABEL_40;
          v33 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketDpcEnd;
        }
        LODWORD(v35) = v17;
        McTemplateK0pxqt_EtwWriteTransfer(v31, v33, v32, a1, v18, v35, v21 != 0LL);
LABEL_40:
        if ( !v9 )
          return;
        goto LABEL_41;
      }
      v19 = &EventVmBusProcessPacketDpcBegin;
    }
    McTemplateK0pxq_EtwWriteTransfer((unsigned int)&DxgkControlGuid_Context, (_DWORD)v19, v12, (_DWORD)a1, v18, v17);
    goto LABEL_25;
  }
  v14 = WdLogNewEntry5_WdError(v11, v10);
  *(_QWORD *)(v14 + 24) = 2147LL;
LABEL_4:
  WdLogEvent5_WdError(v14);
LABEL_41:
  VmBusCompletePacket(v7, 0LL, 0);
}
