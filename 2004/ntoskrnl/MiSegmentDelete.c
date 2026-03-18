/*
 * XREFs of MiSegmentDelete @ 0x1406091B4
 * Callers:
 *     MiCheckControlArea @ 0x14024A8A0 (MiCheckControlArea.c)
 *     MiDestroySection @ 0x14037CDBC (MiDestroySection.c)
 *     MiProcessDereferenceList @ 0x140385268 (MiProcessDereferenceList.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     MiReleaseControlAreaWaiters @ 0x14022877C (MiReleaseControlAreaWaiters.c)
 *     MiReleaseControlAreaCharges @ 0x14024B270 (MiReleaseControlAreaCharges.c)
 *     MiGetControlAreaPartition @ 0x14024B6C4 (MiGetControlAreaPartition.c)
 *     MiDereferenceControlAreaProbe @ 0x14025DF5C (MiDereferenceControlAreaProbe.c)
 *     MiDeleteSegmentPages @ 0x140260670 (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x140260768 (MiPrepareSegmentForDeletion.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402639D0 (MiUpdateSystemProtoPtesTree.c)
 *     IoDiskIoAttributionDereference @ 0x14027A2C4 (IoDiskIoAttributionDereference.c)
 *     ObFastReplaceObject @ 0x1402C686C (ObFastReplaceObject.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140370690 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
 *     MiDeletePageFileSectionNodes @ 0x140609AD8 (MiDeletePageFileSectionNodes.c)
 *     MiLogSectionCreate @ 0x1408C4250 (MiLogSectionCreate.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
