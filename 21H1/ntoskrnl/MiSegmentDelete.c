/*
 * XREFs of MiSegmentDelete @ 0x14063E304
 * Callers:
 *     MiCheckControlArea @ 0x1402A38D0 (MiCheckControlArea.c)
 *     MiDestroySection @ 0x14037C14C (MiDestroySection.c)
 *     MiProcessDereferenceList @ 0x1403842FC (MiProcessDereferenceList.c)
 * Callees:
 *     ObFastReplaceObject @ 0x140233A3C (ObFastReplaceObject.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     MiReleaseControlAreaWaiters @ 0x1402817CC (MiReleaseControlAreaWaiters.c)
 *     MiReleaseControlAreaCharges @ 0x1402A42A0 (MiReleaseControlAreaCharges.c)
 *     MiGetControlAreaPartition @ 0x1402A46F4 (MiGetControlAreaPartition.c)
 *     MiDereferenceControlAreaProbe @ 0x1402B6F8C (MiDereferenceControlAreaProbe.c)
 *     MiDeleteSegmentPages @ 0x1402B96A0 (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x1402B9798 (MiPrepareSegmentForDeletion.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402BCA00 (MiUpdateSystemProtoPtesTree.c)
 *     IoDiskIoAttributionDereference @ 0x1402DB1B4 (IoDiskIoAttributionDereference.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14036FA60 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054F5FC (MiReturnCrossPartitionSectionCharges.c)
 *     MiDeletePageFileSectionNodes @ 0x14063EC28 (MiDeletePageFileSectionNodes.c)
 *     MiLogSectionCreate @ 0x1408C2F00 (MiLogSectionCreate.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
