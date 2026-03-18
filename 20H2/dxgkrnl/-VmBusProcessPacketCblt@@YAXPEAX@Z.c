/*
 * XREFs of ?VmBusProcessPacketCblt@@YAXPEAX@Z @ 0x1C00D8230
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C00259A4 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C00410E4 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ?ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x1C00D5C30 (-ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ.c)
 *     VmBusExecuteCommandInProcessContext @ 0x1C00D73A4 (VmBusExecuteCommandInProcessContext.c)
 *     ?AcquireVirtualGpuByLuid@DXGVIRTUALMACHINE@@QEAAPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAU_LUID@@@Z @ 0x1C00DAA44 (-AcquireVirtualGpuByLuid@DXGVIRTUALMACHINE@@QEAAPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAU_LUID@@@Z.c)
 *     ?SetErrorState@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C0239D9C (-SetErrorState@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ.c)
 */

void __fastcall VmBusProcessPacketCblt(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rdx
  __int64 *v2; // rsi
  char v4; // r14
  __int64 v5; // rax
  struct _SLIST_ENTRY *v6; // rbp
  struct _SLIST_ENTRY *v7; // rcx
  struct _SLIST_ENTRY *v8; // rax
  char v9; // di
  __int64 v10; // r13
  unsigned __int8 v11; // r15
  unsigned int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  const struct DXG_VMBUS_COMMAND_TABLE near *const *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // eax
  __int64 v23; // rax
  struct _SLIST_ENTRY *v24; // rax
  _QWORD *v25; // r14
  struct _SLIST_ENTRY *v26; // rax
  __int64 (__fastcall *v27)(unsigned __int64); // rax
  char v28; // al
  __int64 v29; // rax
  const EVENT_DESCRIPTOR *v30; // rdx
  int v31; // eax
  struct DXGGLOBAL *Global; // rax
  union _SLIST_HEADER *v33; // rdi
  __int64 v34; // [rsp+28h] [rbp-60h]
  int v35; // [rsp+30h] [rbp-58h]
  char v36; // [rsp+90h] [rbp+8h]
  int v37; // [rsp+98h] [rbp+10h]
  int v38; // [rsp+A0h] [rbp+18h]
  int v39; // [rsp+A8h] [rbp+20h]

  Next = ListEntry[5].Next;
  v2 = (__int64 *)*((_QWORD *)&ListEntry[7].Next + 1);
  v4 = 0;
  if ( Next )
  {
    v5 = *((_QWORD *)&Next[6].Next + 1);
    v6 = (struct _SLIST_ENTRY *)((char *)Next + 168);
    *((_QWORD *)&ListEntry[8].Next + 1) = v5;
    *((_DWORD *)&ListEntry[9].Next + 2) = *(_DWORD *)(v5 + 352);
    v7 = Next[6].Next;
    ListEntry[6].Next = v7;
  }
  else
  {
    v7 = ListEntry[6].Next;
    if ( v7 )
    {
      v8 = v7[31].Next;
      *((_QWORD *)&ListEntry[8].Next + 1) = v8;
      v6 = v8 + 8;
      *((_DWORD *)&ListEntry[9].Next + 2) = v8[22].Next;
    }
    else
    {
      v6 = (struct _SLIST_ENTRY *)*((_QWORD *)&ListEntry[6].Next + 1);
      v7 = 0LL;
    }
  }
  v9 = 1;
  v10 = *v2;
  v11 = 0;
  v12 = *((char *)v2 + 12);
  v36 = 1;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  if ( *((_BYTE *)&v6[3].Next + 9) )
    goto LABEL_68;
  v13 = *((_QWORD *)&ListEntry[8].Next + 1);
  if ( v13 && *(_BYTE *)(v13 + 299) )
  {
    if ( *((_DWORD *)&v6[2].Next + 2) == 1 && v12 > 1 )
    {
      v14 = WdLogNewEntry5_WdError(v7, Next);
      *(_QWORD *)(v14 + 24) = 201LL;
LABEL_12:
      v15 = v14;
LABEL_13:
      WdLogEvent5_WdError(v15);
      goto LABEL_68;
    }
  }
  else if ( *((_DWORD *)&v6[2].Next + 2) != v12 )
  {
    v14 = WdLogNewEntry5_WdError(v7, Next);
    *(_QWORD *)(v14 + 24) = 208LL;
    goto LABEL_12;
  }
  if ( !v7 && Next )
    ListEntry[6].Next = Next[6].Next;
  _InterlockedIncrement(&g_VgpuNumWorkItemProcessed);
  if ( v12 > 1 )
  {
    if ( LODWORD(ListEntry[8].Next) < 0x18 )
    {
      v15 = WdLogNewEntry5_WdError(v7, Next);
      *(_QWORD *)(v15 + 24) = LODWORD(ListEntry[8].Next);
      *(_QWORD *)(v15 + 32) = 311LL;
      goto LABEL_13;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0pxq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventVmBusProcessPacketHostToVmWorkerBegin,
        0LL,
        *((_QWORD *)&ListEntry[8].Next + 1) + 128LL,
        *v2,
        *((_DWORD *)v2 + 4));
    v16 = *((int *)v2 + 4);
    v38 = v16;
    if ( (unsigned int)v16 > 5 )
    {
      v15 = WdLogNewEntry5_WdError(v7, Next);
      *(_QWORD *)(v15 + 24) = *((int *)v2 + 4);
      *(_QWORD *)(v15 + 32) = 321LL;
      goto LABEL_13;
    }
    v17 = (const struct DXG_VMBUS_COMMAND_TABLE near *const *)((char *)&DXG_GUEST_GLOBAL_VMBUS::VmBusCommandTableHostToVm
                                                             + 16 * v16);
    goto LABEL_27;
  }
  v22 = (unsigned int)ListEntry[8].Next;
  if ( v12 == 1 )
  {
    if ( v22 < 0x18 )
    {
      v15 = WdLogNewEntry5_WdError(v7, Next);
      *(_QWORD *)(v15 + 24) = LODWORD(ListEntry[8].Next);
      *(_QWORD *)(v15 + 32) = 228LL;
      goto LABEL_13;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0pxq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventVmBusProcessPacketGlobalWorkerBegin,
        0LL,
        *((_QWORD *)&ListEntry[8].Next + 1) + 128LL,
        *v2,
        *((_DWORD *)v2 + 4));
    v7 = (struct _SLIST_ENTRY *)*((unsigned int *)v2 + 4);
    v37 = (int)v7;
    if ( (unsigned int)((_DWORD)v7 - 1000) > 0x14 )
    {
      v15 = WdLogNewEntry5_WdError(v7, Next);
      *(_QWORD *)(v15 + 24) = *((int *)v2 + 4);
      *(_QWORD *)(v15 + 32) = 238LL;
      goto LABEL_13;
    }
    v17 = &DXG_HOST_GLOBAL_VMBUS::VmBusCommandTableVmToHostCblt + 2 * (int)v7 - 2000;
  }
  else
  {
    if ( v22 < 0x18 )
    {
      v15 = WdLogNewEntry5_WdError(v7, Next);
      *(_QWORD *)(v15 + 24) = LODWORD(ListEntry[8].Next);
      *(_QWORD *)(v15 + 32) = 248LL;
      goto LABEL_13;
    }
    v23 = *((int *)v2 + 4);
    v39 = v23;
    if ( (unsigned int)v23 > 0x41 )
    {
      v29 = WdLogNewEntry5_WdError(v7, Next);
      *(_QWORD *)(v29 + 24) = *((int *)v2 + 4);
      *(_QWORD *)(v29 + 32) = 254LL;
      WdLogEvent5_WdError(v29);
      goto LABEL_65;
    }
    v17 = &DXG_HOST_VIRTUALGPU_VMBUS::VmBusCommandTableVgpuToHostCblt + 2 * v23;
    if ( !ListEntry[5].Next )
    {
      v24 = ListEntry[9].Next;
      if ( !v24 )
      {
        v14 = WdLogNewEntry5_WdError(v7, Next);
        *(_QWORD *)(v14 + 24) = 268LL;
        goto LABEL_12;
      }
      v25 = &v24->Next + 1;
      v26 = (struct _SLIST_ENTRY *)DXGVIRTUALMACHINE::AcquireVirtualGpuByLuid(
                                     *((DXGVIRTUALMACHINE **)&ListEntry[8].Next + 1),
                                     (struct _LUID *)&v24->Next + 1);
      ListEntry[5].Next = v26;
      if ( !v26 )
      {
        v15 = WdLogNewEntry5_WdError(v7, Next);
        *(_QWORD *)(v15 + 24) = *v25;
        *(_QWORD *)(v15 + 32) = 274LL;
        goto LABEL_13;
      }
      v4 = 1;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0pxq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventVmBusProcessPacketWorkerBegin,
        0LL,
        *((_QWORD *)&ListEntry[8].Next + 1) + 128LL,
        *v2,
        *((_DWORD *)v2 + 4));
  }
  if ( !*(_BYTE *)(*((_QWORD *)&ListEntry[8].Next + 1) + 299LL)
    || *((_BYTE *)&ListEntry[9].Next + 12)
    || (*(_DWORD *)(*((_QWORD *)&ListEntry[7].Next + 1) + 12LL) & 0x100) != 0 )
  {
LABEL_27:
    if ( LODWORD(ListEntry[8].Next) >= *((_DWORD *)v17 + 3) )
    {
      v27 = (__int64 (__fastcall *)(unsigned __int64))*v17;
      v36 = 0;
      if ( *((_BYTE *)v17 + 8) )
        v28 = VmBusExecuteCommandInProcessContext(ListEntry, v27);
      else
        v28 = v27((unsigned __int64)(&ListEntry[2].Next + 1));
      v11 = v28;
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v7, Next);
      *(_QWORD *)(v18 + 24) = LODWORD(ListEntry[8].Next);
      *(_QWORD *)(v18 + 32) = 328LL;
      WdLogEvent5_WdError(v18);
    }
    v9 = v36;
LABEL_65:
    if ( v4 )
      DXGK_VIRTUAL_GPU_PARAV::ReleaseVirtualGpuReference((DXGK_VIRTUAL_GPU_PARAV *)ListEntry[5].Next);
    if ( !v9 )
    {
LABEL_69:
      if ( !v11 )
        VmBusCompletePacket((struct VMBPACKETCOMPLETION__ *)ListEntry[7].Next, 0LL, 0);
      if ( !bTracingEnabled )
        goto LABEL_81;
      if ( v12 == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) == 0 )
          goto LABEL_81;
        v30 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalWorkerEnd;
        v35 = v11;
        v31 = v37;
      }
      else if ( v12 == 2 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) == 0 )
          goto LABEL_81;
        v30 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketHostToVmWorkerEnd;
        v35 = v11;
        v31 = v38;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) == 0 )
          goto LABEL_81;
        v30 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketWorkerEnd;
        v35 = v11;
        v31 = v39;
      }
      LODWORD(v34) = v31;
      McTemplateK0pxqt_EtwWriteTransfer(v20, v30, v21, *((_QWORD *)&ListEntry[8].Next + 1) + 128LL, v10, v34, v35);
LABEL_81:
      Global = DXGGLOBAL::GetGlobal(v20, v19);
      v33 = (union _SLIST_HEADER *)((char *)Global + 112);
      ++*((_DWORD *)Global + 35);
      if ( ExQueryDepthSList((PSLIST_HEADER)Global + 7) < *((_WORD *)Global + 64) )
      {
        ExpInterlockedPushEntrySList(v33, ListEntry);
      }
      else
      {
        ++LODWORD(v33[2].Alignment);
        ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v33[3].Region)(ListEntry, v33);
      }
      return;
    }
LABEL_68:
    DXG_VMBUS_CHANNEL_BASE::SetErrorState((DXG_VMBUS_CHANNEL_BASE *)v6);
    goto LABEL_69;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
  {
    LODWORD(v34) = 0;
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusSecondaryWorkItem,
      0LL,
      v6,
      v10,
      v34);
  }
  *((_BYTE *)&ListEntry[9].Next + 12) = 1;
  if ( v4 )
    DXGK_VIRTUAL_GPU_PARAV::ReleaseVirtualGpuReference((DXGK_VIRTUAL_GPU_PARAV *)ListEntry[5].Next);
  ListEntry[5].Next = 0LL;
  ListEntry[4].Next = ListEntry;
  *((_QWORD *)&ListEntry[3].Next + 1) = VmBusProcessPacketCblt;
  *((_QWORD *)&ListEntry[2].Next + 1) = 0LL;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(&ListEntry[2].Next + 1), CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
}
