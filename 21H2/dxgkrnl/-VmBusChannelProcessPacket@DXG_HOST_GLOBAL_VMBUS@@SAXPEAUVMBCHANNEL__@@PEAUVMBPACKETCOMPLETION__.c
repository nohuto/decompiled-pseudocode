/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C005D410
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C00562E8 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C005983C (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAJXZ @ 0x1C005CD48 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAJXZ.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x1C005CFB4 (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusChannelProcessPacket(
        struct VMBCHANNEL__ *a1,
        struct VMBPACKETCOMPLETION__ *a2,
        char *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v8; // r8
  __int64 v9; // r13
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  char *v20; // rdi
  char v21; // al
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  unsigned int v25; // ebp
  __int64 v26; // r15
  const EVENT_DESCRIPTOR *v27; // rdx
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  struct DXGGLOBAL *Global; // rax
  char *v38; // r14
  PSLIST_ENTRY v39; // rbx
  __int64 (__fastcall *v40)(__int64, __int64, __int64, char *); // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rcx
  int v44; // edx
  __int64 v45; // rcx
  __int64 v46; // r8
  char v47; // di
  struct VMBPACKETCOMPLETION__ *v48; // r14
  const EVENT_DESCRIPTOR *v49; // rdx
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  __int64 v53; // [rsp+28h] [rbp-80h]
  __int64 v54; // [rsp+30h] [rbp-78h]
  int v55; // [rsp+60h] [rbp-48h]
  char *v56; // [rsp+68h] [rbp-40h]

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  v9 = ((__int64 (*)(void))qword_1C0131BE8)();
  v56 = 0LL;
  v55 = 1;
  v10 = 0;
  if ( *(_DWORD *)(v9 + 392) < 0x28u )
    goto LABEL_11;
  if ( a4 >= 0x10 )
  {
    v10 = *(_DWORD *)a3;
    v56 = a3;
    if ( *(_DWORD *)a3 >= a4 )
    {
      WdLogSingleEntry1(2LL, 6845LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v15,
          v14,
          v16,
          0LL,
          0,
          -1,
          L"VmBusChannelProcessPacket: Invalid ext header size",
          6845LL,
          0LL,
          0LL,
          0LL,
          0LL);
      goto LABEL_61;
    }
    a4 -= v10;
LABEL_11:
    if ( a4 < 0x10 )
    {
      WdLogSingleEntry1(2LL, 6852LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v18,
          v17,
          v19,
          0LL,
          0,
          -1,
          L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_BASE",
          6852LL,
          0LL,
          0LL,
          0LL,
          0LL);
      goto LABEL_61;
    }
    v20 = &a3[v10];
    v21 = v20[12];
    if ( v21 == 1 )
    {
      if ( a4 < 0x18 )
      {
        WdLogSingleEntry1(2LL, 6861LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v23,
            v22,
            v24,
            0LL,
            0,
            -1,
            L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_VM_TO_HOST",
            6861LL,
            0LL,
            0LL,
            0LL,
            0LL);
        goto LABEL_61;
      }
      v25 = *((_DWORD *)v20 + 4);
      if ( v25 - 1000 > 0x14 )
      {
        WdLogSingleEntry2(2LL, *((int *)v20 + 4), 6868LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v29,
            v28,
            v30,
            0LL,
            0,
            -1,
            L"Invalid VM to Host command is passed: %I64n",
            *((int *)v20 + 4),
            6868LL,
            0LL,
            0LL,
            0LL);
        goto LABEL_61;
      }
      v26 = *(_QWORD *)v20;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        v27 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalDpcBegin;
LABEL_37:
        McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v27, v8, a1, v26, v25);
      }
    }
    else
    {
      if ( v21 )
      {
        WdLogSingleEntry1(2LL, 6904LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v51,
            v50,
            v52,
            0LL,
            0,
            -1,
            L"VmBusChannelProcessPacket: Invalid channel type",
            6904LL,
            0LL,
            0LL,
            0LL,
            0LL);
        goto LABEL_61;
      }
      v55 = 0;
      if ( a4 < 0x18 )
      {
        WdLogSingleEntry1(2LL, 6885LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v32,
            v31,
            v33,
            0LL,
            0,
            -1,
            L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_VGPU_TO_HOST",
            6885LL,
            0LL,
            0LL,
            0LL,
            0LL);
        goto LABEL_61;
      }
      v25 = *((_DWORD *)v20 + 4);
      if ( v25 >= 0x42 )
      {
        WdLogSingleEntry1(2LL, *((int *)v20 + 4));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v35,
            v34,
            v36,
            0LL,
            0,
            -1,
            L"Invalid command is passed: %I64n",
            *((int *)v20 + 4),
            0LL,
            0LL,
            0LL,
            0LL);
        goto LABEL_61;
      }
      v26 = *(_QWORD *)v20;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        v27 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketDpcBegin;
        goto LABEL_37;
      }
    }
    Global = DXGGLOBAL_GetGlobal();
    v38 = (char *)Global + 160;
    ++*((_DWORD *)Global + 45);
    v39 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 10);
    if ( v39
      || (v40 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v38 + 6),
          v41 = *((unsigned int *)v38 + 11),
          v42 = *((unsigned int *)v38 + 10),
          v43 = *((unsigned int *)v38 + 9),
          ++*((_DWORD *)v38 + 6),
          (v39 = (PSLIST_ENTRY)v40(v43, v41, v42, v38)) != 0LL) )
    {
      memset(v39, 0, 0xA0uLL);
      _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
      v48 = a2;
      *((_QWORD *)&v39[7].Next + 1) = v56;
      HIDWORD(v39[9].Next) = a5;
      *((_QWORD *)&v39[4].Next + 1) = a1;
      LODWORD(v39[9].Next) = a4;
      v39[8].Next = (struct _SLIST_ENTRY *)a2;
      *((_QWORD *)&v39[8].Next + 1) = v20;
      v39[6].Next = *(struct _SLIST_ENTRY **)(v9 + 56);
      v39[3].Next = (struct _SLIST_ENTRY *)VmBusProcessPacket;
      *((_QWORD *)&v39[3].Next + 1) = v39;
      if ( *(_BYTE *)(v9 + 339)
        && ((unsigned int)DXG_DEFERRED_WORK_QUEUE_DPC::GetNumWorkItems((KSPIN_LOCK *)(v9 + 400))
         || (*((_DWORD *)v20 + 3) & 0x100) != 0) )
      {
        DXG_DEFERRED_WORK_QUEUE_DPC::QueueWorkItem(
          (DXG_DEFERRED_WORK_QUEUE_DPC *)(v9 + 400),
          (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)&v39[2]);
      }
      else
      {
        *((_BYTE *)&v39[9].Next + 12) = 1;
        v39[1].Next = (struct _SLIST_ENTRY *)VmBusProcessPacket;
        *((_QWORD *)&v39[1].Next + 1) = v39;
        v39->Next = 0LL;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v39, CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
      }
      v47 = 0;
    }
    else
    {
      WdLogSingleEntry1(6LL, 6955LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v45,
          v44,
          v46,
          0LL,
          1,
          -1,
          L"Failed to allocated a work item",
          6955LL,
          0LL,
          0LL,
          0LL,
          0LL);
      v47 = 1;
      v48 = a2;
    }
    if ( v55 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
        goto LABEL_56;
      v49 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalDpcEnd;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
        goto LABEL_56;
      v49 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketDpcEnd;
    }
    LODWORD(v54) = v39 != 0LL;
    LODWORD(v53) = v25;
    McTemplateK0pxqt_EtwWriteTransfer(v45, v49, v46, a1, v26, v53, v54);
LABEL_56:
    if ( !v47 )
      return;
    goto LABEL_62;
  }
  WdLogSingleEntry1(2LL, 6838LL);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v12,
        v11,
        v13,
        0LL,
        0,
        -1,
        L"VmBusChannelProcessPacket: Invalid buffer size for extended header",
        6838LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
LABEL_61:
  v48 = a2;
LABEL_62:
  _InterlockedIncrement(&g_VgpuNumCompletedPackets);
  ((void (__fastcall *)(struct VMBPACKETCOMPLETION__ *, _QWORD, _QWORD))qword_1C0131C28)(v48, 0LL, 0LL);
}
