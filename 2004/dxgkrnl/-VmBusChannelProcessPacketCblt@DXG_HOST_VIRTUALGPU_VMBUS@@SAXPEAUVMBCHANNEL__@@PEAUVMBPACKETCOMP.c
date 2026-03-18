/*
 * XREFs of ?VmBusChannelProcessPacketCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C00261D0
 * Callers:
 *     ?VmBusChannelProcessPacket@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C00407C0 (-VmBusChannelProcessPacket@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETI.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C00259AC (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C00411E4 (McTemplateK0pxq_EtwWriteTransfer.c)
 */

void __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacketCblt(
        struct VMBCHANNEL__ *a1,
        struct VMBPACKETCOMPLETION__ *a2,
        struct _SLIST_ENTRY *a3,
        unsigned int a4,
        unsigned int a5)
{
  int v9; // edi
  __int64 v10; // rdx
  int v11; // r8d
  unsigned int Next; // r9d
  __int64 v13; // rcx
  __int64 v14; // rax
  char *v15; // rbx
  unsigned __int64 v16; // rax
  unsigned int v17; // r15d
  __int64 v18; // r12
  struct DXGGLOBAL *Global; // r14
  PSLIST_ENTRY v20; // rsi
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(__int64, __int64, __int64, char *); // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // [rsp+28h] [rbp-50h]
  struct _SLIST_ENTRY *v33; // [rsp+40h] [rbp-38h]
  __int64 v34; // [rsp+48h] [rbp-30h]

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  v9 = 0;
  v33 = 0LL;
  v34 = ((__int64 (*)(void))qword_1C00B30C8)();
  Next = 0;
  v13 = *(_QWORD *)(v34 + 104);
  if ( *(_DWORD *)(v13 + 352) >= 0x28u )
  {
    if ( a4 < 0x10 )
    {
      v14 = WdLogNewEntry5_WdError(v13, v10);
      *(_QWORD *)(v14 + 24) = 506LL;
LABEL_17:
      WdLogEvent5_WdError(v14);
      VmBusCompletePacket(a2, 0LL, 0);
      return;
    }
    Next = (unsigned int)a3->Next;
    v33 = a3;
    if ( LODWORD(a3->Next) >= a4 )
    {
      v14 = WdLogNewEntry5_WdError(v13, v10);
      *(_QWORD *)(v14 + 24) = 513LL;
      goto LABEL_17;
    }
    a4 -= Next;
  }
  if ( a4 < 0x18 )
  {
    v14 = WdLogNewEntry5_WdError(v13, v10);
    *(_QWORD *)(v14 + 24) = 520LL;
    goto LABEL_17;
  }
  v15 = (char *)a3 + Next;
  if ( *(_BYTE *)(v13 + 299) )
  {
    v16 = *((int *)v15 + 4);
    if ( (unsigned int)v16 > 0x24 || (v13 = 0x1040004000LL, !_bittest64(&v13, v16)) )
    {
      v14 = WdLogNewEntry5_WdError(v13, v10);
      *(_QWORD *)(v14 + 24) = 534LL;
      goto LABEL_17;
    }
  }
  if ( *((_DWORD *)v15 + 3) )
  {
    v14 = WdLogNewEntry5_WdError(v13, v10);
    *(_QWORD *)(v14 + 24) = 539LL;
    goto LABEL_17;
  }
  v17 = *((_DWORD *)v15 + 4);
  if ( v17 >= 0x42 )
  {
    v14 = WdLogNewEntry5_WdError(v13, v10);
    *(_QWORD *)(v14 + 24) = *((int *)v15 + 4);
    goto LABEL_17;
  }
  v18 = *(_QWORD *)v15;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    McTemplateK0pxq_EtwWriteTransfer(
      (unsigned int)&DxgkControlGuid_Context,
      (unsigned int)&EventVmBusProcessPacketDpcBegin,
      v11,
      (_DWORD)a1,
      v18,
      *((_DWORD *)v15 + 4));
  Global = DXGGLOBAL::GetGlobal(v13, v10);
  ++*((_DWORD *)Global + 33);
  v20 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 7);
  if ( v20
    || (v21 = *((unsigned int *)Global + 39),
        v22 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)Global + 20),
        v23 = *((unsigned int *)Global + 38),
        v24 = *((unsigned int *)Global + 37),
        ++*((_DWORD *)Global + 34),
        (v20 = (PSLIST_ENTRY)v22(v24, v21, v23, (char *)Global + 112)) != 0LL) )
  {
    memset(v20, 0, 0xA0uLL);
    _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
    v20[7].Next = (struct _SLIST_ENTRY *)a2;
    v20[9].Next = v33;
    HIDWORD(v20[8].Next) = a5;
    v20[5].Next = (struct _SLIST_ENTRY *)v34;
    *((_QWORD *)&v20[4].Next + 1) = a1;
    LODWORD(v20[8].Next) = a4;
    *((_QWORD *)&v20[7].Next + 1) = v15;
    *((_BYTE *)&v20[9].Next + 12) = 1;
    *((_QWORD *)&v20[3].Next + 1) = VmBusProcessPacketCblt;
    v20[4].Next = v20;
    *((_QWORD *)&v20[2].Next + 1) = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(&v20[2].Next + 1), CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
  }
  else
  {
    v29 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
    *(_QWORD *)(v29 + 24) = 572LL;
    WdLogEvent5_WdLowResource(v29);
    VmBusCompletePacket(a2, 0LL, 0);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
  {
    LOBYTE(v9) = v20 != 0LL;
    LODWORD(v32) = v17;
    McTemplateK0pxqt_EtwWriteTransfer(v30, &EventVmBusProcessPacketDpcEnd, v31, a1, v18, v32, v9);
  }
}
