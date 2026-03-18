/*
 * XREFs of MiSegmentDelete @ 0x140681F74
 * Callers:
 *     MiCheckControlArea @ 0x14029BE20 (MiCheckControlArea.c)
 *     MiDestroySection @ 0x14037EAEC (MiDestroySection.c)
 *     MiProcessDereferenceList @ 0x140387414 (MiProcessDereferenceList.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     MiGetControlAreaPartition @ 0x14022C1C4 (MiGetControlAreaPartition.c)
 *     ObFastReplaceObject @ 0x140248084 (ObFastReplaceObject.c)
 *     MiReleaseControlAreaCharges @ 0x14029E6D0 (MiReleaseControlAreaCharges.c)
 *     MiReleaseControlAreaWaiters @ 0x14029F5F4 (MiReleaseControlAreaWaiters.c)
 *     MiDereferenceControlAreaProbe @ 0x1402D104C (MiDereferenceControlAreaProbe.c)
 *     MiDeleteSegmentPages @ 0x1402D26AC (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x1402D27A4 (MiPrepareSegmentForDeletion.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402D5630 (MiUpdateSystemProtoPtesTree.c)
 *     IoDiskIoAttributionDereference @ 0x1402EEE34 (IoDiskIoAttributionDereference.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1403725E0 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055361C (MiReturnCrossPartitionSectionCharges.c)
 *     MiDeletePageFileSectionNodes @ 0x140682688 (MiDeletePageFileSectionNodes.c)
 *     MiLogSectionCreate @ 0x1408CA090 (MiLogSectionCreate.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSegmentDelete(__int64 a1)
{
  __int64 v1; // rbp
  volatile __int64 *v2; // r15
  int v3; // ebx
  int v5; // edi
  __int64 v6; // rdx
  __int64 *v7; // r14
  __int64 v8; // r13
  struct _DMA_ADAPTER *v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  __int64 ControlAreaPartition; // rax
  unsigned int v14; // [rsp+50h] [rbp+8h]

  v1 = *(_QWORD *)a1;
  v2 = (volatile __int64 *)(a1 + 64);
  v3 = *(_DWORD *)(a1 + 56);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  v6 = a1 + 128;
  v14 = *(_QWORD *)(a1 + 64) != 0LL;
  if ( (v3 & 0xA0) != 0x80 )
    v6 = 0LL;
  v7 = MiPrepareSegmentForDeletion(a1, v6);
  if ( (v3 & 0x80) != 0 )
  {
    if ( (v5 & 0x2000) != 0 )
      DbgUnLoadImageSymbolsUnicode(
        (PCUNICODE_STRING)((*v2 & 0xFFFFFFFFFFFFFFF0uLL) + 88),
        *(_QWORD *)(v1 + 32),
        (__int64)KeGetCurrentThread()->ApcState.Process);
    MiReleaseControlAreaWaiters(v7);
  }
  else if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
  {
    MiLogSectionCreate(a1, 0LL);
  }
  v8 = MiDeleteSegmentPages((__int64 *)a1);
  v9 = 0LL;
  v10 = MiReleaseControlAreaCharges(a1);
  if ( (v3 & 0x82) == 0x80 )
    v9 = (struct _DMA_ADAPTER *)ObFastReplaceObject(v2, 0LL);
  if ( (v3 & 0x80) != 0 )
  {
    if ( (v3 & 0x20) != 0 )
    {
      MiUpdateSystemProtoPtesTree(*(unsigned __int64 **)(a1 + 96), 0);
      ExFreePoolWithTag(*(PVOID *)(v1 + 64), 0);
    }
  }
  else
  {
    MiDeletePageFileSectionNodes(a1);
  }
  if ( v10 )
  {
    ControlAreaPartition = MiGetControlAreaPartition(a1);
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, v14, v10);
  }
  if ( (*(_BYTE *)(a1 + 56) & 0x20) == 0 && (v3 & 0x80u) != 0 )
    v11 = 8LL * *(_QWORD *)(a1 + 120);
  else
    v11 = 0LL;
  MiDereferenceControlAreaProbe((volatile signed __int64 *)a1, 0);
  if ( v9 )
    HalPutDmaAdapter(v9);
  if ( v11 )
    IoDiskIoAttributionDereference(v11);
  ExFreePoolWithTag((PVOID)v1, 0);
  return v8;
}
