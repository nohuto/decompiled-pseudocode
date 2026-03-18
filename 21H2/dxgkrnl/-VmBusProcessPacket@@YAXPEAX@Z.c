/*
 * XREFs of ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C0372240
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C00562E8 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C005983C (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AcquireVirtualGpuByLuid@DXGVIRTUALMACHINE@@QEAAPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAU_LUID@@@Z @ 0x1C0334CC4 (-AcquireVirtualGpuByLuid@DXGVIRTUALMACHINE@@QEAAPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAU_LUID@@@Z.c)
 *     ?ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x1C035EBC4 (-ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C036CEEC (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
 */

void __fastcall VmBusProcessPacket(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rsi
  char v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int8 v9; // r15
  __int64 v10; // r13
  __int64 v11; // r9
  unsigned int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // rdi
  const wchar_t *v15; // r9
  unsigned int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rdi
  const struct DXG_VMBUS_COMMAND_TABLE near *const *v19; // rdi
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  char v23; // si
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  struct _LUID *v28; // r14
  struct DXGK_VIRTUAL_GPU_PARAV *v29; // rax
  char v30; // al
  const EVENT_DESCRIPTOR *v31; // rdx
  int v32; // eax
  struct DXGGLOBAL *Global; // rax
  union _SLIST_HEADER *v34; // rdi
  __int64 v35; // [rsp+28h] [rbp-70h]
  __int64 v36; // [rsp+30h] [rbp-68h]
  int v37; // [rsp+A8h] [rbp+10h]
  int v38; // [rsp+B0h] [rbp+18h]
  int v39; // [rsp+B8h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 10);
  v2 = (__int64 *)*((_QWORD *)a1 + 17);
  v4 = 0;
  if ( v1 )
  {
    v5 = *(_QWORD *)(v1 + 104);
    v6 = v1 + 176;
    *((_QWORD *)a1 + 13) = v5;
    *((_DWORD *)a1 + 38) = *(_DWORD *)(v5 + 392);
    v7 = *(_QWORD *)(v1 + 96);
    *((_QWORD *)a1 + 12) = v7;
  }
  else
  {
    v7 = *((_QWORD *)a1 + 12);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 608);
      *((_QWORD *)a1 + 13) = v8;
      v6 = v8 + 160;
      *((_DWORD *)a1 + 38) = *(_DWORD *)(v8 + 392);
    }
    else
    {
      v6 = *((_QWORD *)a1 + 14);
      v7 = 0LL;
    }
  }
  v9 = 0;
  v10 = *v2;
  v11 = 2LL;
  v12 = *((char *)v2 + 12);
  v37 = 0;
  v38 = 0;
  v39 = 0;
  if ( *(_BYTE *)(v6 + 69) )
    goto LABEL_68;
  v13 = *((_QWORD *)a1 + 13);
  if ( v13 && *(_BYTE *)(v13 + 339) )
  {
    if ( *(_DWORD *)(v6 + 48) == 1 && v12 > 1 )
    {
      v14 = 409LL;
      WdLogSingleEntry1(2LL, 409LL);
LABEL_12:
      v15 = L"The command is sent to invalid channel";
LABEL_13:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v15, v14, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_68;
    }
  }
  else if ( *(_DWORD *)(v6 + 48) != v12 )
  {
    v14 = 416LL;
    WdLogSingleEntry1(2LL, 416LL);
    goto LABEL_12;
  }
  if ( !v7 && v1 )
    *((_QWORD *)a1 + 12) = *(_QWORD *)(v1 + 96);
  _InterlockedIncrement(&g_VgpuNumWorkItemProcessed);
  v16 = *((_DWORD *)a1 + 36);
  if ( v12 > 1 )
  {
    if ( v16 < 0x18 )
    {
      v17 = 519LL;
LABEL_22:
      WdLogSingleEntry2(2LL, *((unsigned int *)a1 + 36), v17);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid packet size: %I64n",
        *((unsigned int *)a1 + 36),
        v17,
        0LL,
        0LL,
        0LL);
      goto LABEL_68;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    {
      McTemplateK0pxq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventVmBusProcessPacketHostToVmWorkerBegin,
        0LL,
        *((_QWORD *)a1 + 13) + 160LL,
        *v2,
        *((_DWORD *)v2 + 4));
      v11 = 2LL;
    }
    v18 = *((int *)v2 + 4);
    v38 = v18;
    if ( (unsigned int)v18 <= 6 )
    {
      v19 = (const struct DXG_VMBUS_COMMAND_TABLE near *const *)((char *)&DXG_GUEST_GLOBAL_VMBUS::VmBusCommandTableHostToVm
                                                               + 16 * v18);
      goto LABEL_28;
    }
    v24 = *((int *)v2 + 4);
    v25 = 529LL;
LABEL_31:
    WdLogSingleEntry2(2LL, v24, v25);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid command is passed: %I64n",
      *((int *)v2 + 4),
      v25,
      0LL,
      0LL,
      0LL);
    goto LABEL_68;
  }
  if ( v12 == 1 )
  {
    if ( v16 < 0x18 )
    {
      v17 = 436LL;
      goto LABEL_22;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    {
      McTemplateK0pxq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventVmBusProcessPacketGlobalWorkerBegin,
        0LL,
        *((_QWORD *)a1 + 13) + 160LL,
        *v2,
        *((_DWORD *)v2 + 4));
      v11 = 2LL;
    }
    v26 = *((int *)v2 + 4);
    v37 = v26;
    if ( (unsigned int)(v26 - 1000) > 0x14 )
    {
      WdLogSingleEntry2(2LL, v26, 446LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid VM to Host command is passed: %I64n",
        *((int *)v2 + 4),
        446LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_68;
    }
    v19 = &DXG_HOST_GLOBAL_VMBUS::VmBusCommandTableVmToHost + 2 * (int)v26 - 2000;
  }
  else
  {
    if ( v16 < 0x18 )
    {
      v17 = 456LL;
      goto LABEL_22;
    }
    v27 = *((int *)v2 + 4);
    v39 = v27;
    if ( (unsigned int)v27 > 0x41 )
    {
      v24 = *((int *)v2 + 4);
      v25 = 462LL;
      goto LABEL_31;
    }
    v19 = &DXG_HOST_VIRTUALGPU_VMBUS::VmBusCommandTableVgpuToHost + 2 * v27;
    if ( !*((_QWORD *)a1 + 10) )
    {
      v28 = (struct _LUID *)*((_QWORD *)a1 + 15);
      if ( !v28 )
      {
        v14 = 476LL;
        WdLogSingleEntry1(2LL, 476LL);
        v15 = L"Invalid extended header";
        goto LABEL_13;
      }
      v29 = DXGVIRTUALMACHINE::AcquireVirtualGpuByLuid(*((DXGVIRTUALMACHINE **)a1 + 13), v28 + 1);
      *((_QWORD *)a1 + 10) = v29;
      if ( !v29 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)&v28[1], 482LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to find virtual GPU by luid: 0x%I64x",
          *(_QWORD *)&v28[1],
          482LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_68;
      }
      v4 = 1;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      McTemplateK0pxq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventVmBusProcessPacketWorkerBegin,
        0LL,
        *((_QWORD *)a1 + 13) + 160LL,
        *v2,
        *((_DWORD *)v2 + 4));
  }
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 13) + 339LL)
    || *((_BYTE *)a1 + 156)
    || (*(_DWORD *)(*((_QWORD *)a1 + 17) + 12LL) & 0x100) != 0 )
  {
LABEL_28:
    v20 = *((_DWORD *)a1 + 36);
    if ( v20 >= *((_DWORD *)v19 + 3) )
    {
      v23 = 0;
      if ( *((_BYTE *)v19 + 8) )
        v30 = VmBusExecuteCommandInProcessContext(a1, *(__int64 (__fastcall **)(struct DXGADAPTER_VMBUS_PACKET *))v19);
      else
        v30 = (*(__int64 (__fastcall **)(struct DXGADAPTER_VMBUS_PACKET *, __int64, _QWORD, __int64))v19)(
                a1,
                v1,
                0LL,
                v11);
      v9 = v30;
    }
    else
    {
      WdLogSingleEntry2(2LL, v20, 539LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid packet size: %I64n",
        *((unsigned int *)a1 + 36),
        539LL,
        0LL,
        0LL,
        0LL);
      v23 = 1;
    }
    if ( v4 )
      DXGK_VIRTUAL_GPU_PARAV::ReleaseVirtualGpuReference(*((DXGK_VIRTUAL_GPU_PARAV **)a1 + 10));
    if ( !v23 )
    {
LABEL_71:
      if ( !v9 )
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), 0LL, 0);
      if ( !bTracingEnabled )
        goto LABEL_83;
      if ( v12 == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
          goto LABEL_83;
        v31 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalWorkerEnd;
        LODWORD(v36) = v9;
        v32 = v37;
      }
      else if ( v12 == 2 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
          goto LABEL_83;
        v31 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketHostToVmWorkerEnd;
        LODWORD(v36) = v9;
        v32 = v38;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
          goto LABEL_83;
        v31 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketWorkerEnd;
        LODWORD(v36) = v9;
        v32 = v39;
      }
      LODWORD(v35) = v32;
      McTemplateK0pxqt_EtwWriteTransfer(v21, v31, v22, *((_QWORD *)a1 + 13) + 160LL, v10, v35, v36);
LABEL_83:
      Global = DXGGLOBAL_GetGlobal();
      v34 = (union _SLIST_HEADER *)((char *)Global + 160);
      ++*((_DWORD *)Global + 47);
      if ( ExQueryDepthSList((PSLIST_HEADER)Global + 10) < *((_WORD *)Global + 88) )
      {
        ExpInterlockedPushEntrySList(v34, (PSLIST_ENTRY)a1);
      }
      else
      {
        ++LODWORD(v34[2].Alignment);
        ((void (__fastcall *)(struct DXGADAPTER_VMBUS_PACKET *, union _SLIST_HEADER *))v34[3].Region)(a1, v34);
      }
      return;
    }
LABEL_68:
    if ( !*((_BYTE *)DXGGLOBAL_GetGlobal() + 304514) )
      *(_BYTE *)(v6 + 69) = 1;
    goto LABEL_71;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000) != 0 )
  {
    LODWORD(v35) = 0;
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusSecondaryWorkItem,
      0LL,
      v6,
      v10,
      v35);
  }
  *((_BYTE *)a1 + 156) = 1;
  if ( v4 )
    DXGK_VIRTUAL_GPU_PARAV::ReleaseVirtualGpuReference(*((DXGK_VIRTUAL_GPU_PARAV **)a1 + 10));
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 2) = VmBusProcessPacket;
  *((_QWORD *)a1 + 3) = a1;
  *(_QWORD *)a1 = 0LL;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)a1, CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
}
