/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C005D9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C00562E8 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C005983C (McTemplateK0pxq_EtwWriteTransfer.c)
 */

void __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacket(
        struct VMBCHANNEL__ *a1,
        struct _SLIST_ENTRY *a2,
        char *a3,
        unsigned int a4,
        unsigned int a5)
{
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  char *v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  unsigned int v31; // r15d
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  __int64 v35; // r12
  struct DXGGLOBAL *Global; // rax
  char *v37; // rbp
  PSLIST_ENTRY v38; // r14
  __int64 (__fastcall *v39)(__int64, __int64, __int64, char *); // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // [rsp+28h] [rbp-70h]
  __int64 v50; // [rsp+30h] [rbp-68h]
  char *v51; // [rsp+60h] [rbp-38h]

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  v9 = 0;
  v51 = 0LL;
  v10 = ((__int64 (*)(void))qword_1C0131BE8)();
  v11 = 0LL;
  v12 = *(_QWORD *)(v10 + 104);
  if ( *(_DWORD *)(v12 + 392) >= 0x28u )
  {
    if ( a4 < 0x10 )
    {
      WdLogSingleEntry1(2LL, 843LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v14,
            v13,
            v15,
            0LL,
            0,
            -1,
            L"VmBusChannelProcessPacket: Invalid buffer size for extended header",
            843LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
LABEL_29:
      _InterlockedIncrement(&g_VgpuNumCompletedPackets);
      ((void (__fastcall *)(struct _SLIST_ENTRY *, _QWORD, _QWORD))qword_1C0131C28)(a2, 0LL, 0LL);
      return;
    }
    v11 = *(unsigned int *)a3;
    v51 = a3;
    if ( (unsigned int)v11 >= a4 )
    {
      WdLogSingleEntry1(2LL, 850LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v17,
          v16,
          v18,
          0LL,
          0,
          -1,
          L"VmBusChannelProcessPacket: Invalid ext header size",
          850LL,
          0LL,
          0LL,
          0LL,
          0LL);
      goto LABEL_29;
    }
    a4 -= v11;
  }
  if ( a4 < 0x18 )
  {
    WdLogSingleEntry1(2LL, 857LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v20,
        v19,
        v21,
        0LL,
        0,
        -1,
        L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_VGPU_TO_HOST",
        857LL,
        0LL,
        0LL,
        0LL,
        0LL);
    goto LABEL_29;
  }
  v22 = &a3[(unsigned int)v11];
  if ( *(_BYTE *)(v12 + 339) )
  {
    v23 = *((int *)v22 + 4);
    if ( (unsigned int)v23 > 0x24 || (v24 = 0x1040004000LL, !_bittest64(&v24, v23)) )
    {
      WdLogSingleEntry1(2LL, 871LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v26,
          v25,
          v27,
          0LL,
          0,
          -1,
          L"VmBusChannelProcessPacket: Virtual GPU channel is disabled",
          871LL,
          0LL,
          0LL,
          0LL,
          0LL);
      goto LABEL_29;
    }
  }
  if ( v22[12] )
  {
    WdLogSingleEntry1(2LL, 876LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v29,
        v28,
        v30,
        0LL,
        0,
        -1,
        L"VmBusChannelProcessPacket: Invalid channel type",
        876LL,
        0LL,
        0LL,
        0LL,
        0LL);
    goto LABEL_29;
  }
  v31 = *((_DWORD *)v22 + 4);
  if ( v31 >= 0x42 )
  {
    WdLogSingleEntry1(2LL, *((int *)v22 + 4));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v33,
        v32,
        v34,
        0LL,
        0,
        -1,
        L"Invalid command is passed: %I64n",
        *((int *)v22 + 4),
        0LL,
        0LL,
        0LL,
        0LL);
    goto LABEL_29;
  }
  v35 = *(_QWORD *)v22;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusProcessPacketDpcBegin,
      v11,
      a1,
      v35,
      *((_DWORD *)v22 + 4));
  Global = DXGGLOBAL_GetGlobal();
  v37 = (char *)Global + 160;
  ++*((_DWORD *)Global + 45);
  v38 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 10);
  if ( v38
    || (v39 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v37 + 6),
        v40 = *((unsigned int *)v37 + 11),
        v41 = *((unsigned int *)v37 + 10),
        v42 = *((unsigned int *)v37 + 9),
        ++*((_DWORD *)v37 + 6),
        (v38 = (PSLIST_ENTRY)v39(v42, v40, v41, v37)) != 0LL) )
  {
    memset(v38, 0, 0xA0uLL);
    _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
    *((_QWORD *)&v38[7].Next + 1) = v51;
    v38[8].Next = a2;
    HIDWORD(v38[9].Next) = a5;
    *((_QWORD *)&v38[4].Next + 1) = a1;
    LODWORD(v38[9].Next) = a4;
    *((_QWORD *)&v38[8].Next + 1) = v22;
    v48 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C0131BE8)(a1);
    *((_BYTE *)&v38[9].Next + 12) = 1;
    v38[5].Next = (struct _SLIST_ENTRY *)v48;
    *((_QWORD *)&v38[1].Next + 1) = v38;
    v38[1].Next = (struct _SLIST_ENTRY *)VmBusProcessPacket;
    v38->Next = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)v38, CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
  }
  else
  {
    WdLogSingleEntry1(6LL, 909LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v44,
        v43,
        v45,
        0LL,
        1,
        -1,
        L"Failed to allocated a work item",
        909LL,
        0LL,
        0LL,
        0LL,
        0LL);
    _InterlockedIncrement(&g_VgpuNumCompletedPackets);
    ((void (__fastcall *)(struct _SLIST_ENTRY *, _QWORD, _QWORD))qword_1C0131C28)(a2, 0LL, 0LL);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
  {
    LOBYTE(v9) = v38 != 0LL;
    LODWORD(v50) = v9;
    LODWORD(v49) = v31;
    McTemplateK0pxqt_EtwWriteTransfer(v46, &EventVmBusProcessPacketDpcEnd, v47, a1, v35, v49, v50);
  }
}
