/*
 * XREFs of MiSegmentDelete @ 0x1406E8110
 * Callers:
 *     MiCheckControlArea @ 0x140314AB0 (MiCheckControlArea.c)
 *     MiDestroySection @ 0x14037F32C (MiDestroySection.c)
 *     MiProcessDereferenceList @ 0x140387B6C (MiProcessDereferenceList.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x14025B3A4 (MiGetControlAreaPartition.c)
 *     IoDiskIoAttributionDereference @ 0x14028A7B4 (IoDiskIoAttributionDereference.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObFastReplaceObject @ 0x1402F6E80 (ObFastReplaceObject.c)
 *     MiDereferenceControlAreaProbe @ 0x1402F7AB0 (MiDereferenceControlAreaProbe.c)
 *     MiDeleteSegmentPages @ 0x1402F7C0C (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x1402F7D04 (MiPrepareSegmentForDeletion.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402F8260 (MiUpdateSystemProtoPtesTree.c)
 *     MiReleaseControlAreaCharges @ 0x1403145C8 (MiReleaseControlAreaCharges.c)
 *     MiReleaseControlAreaWaiters @ 0x140357284 (MiReleaseControlAreaWaiters.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14037294C (DbgUnLoadImageSymbolsUnicode.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405550EC (MiReturnCrossPartitionSectionCharges.c)
 *     MiDeletePageFileSectionNodes @ 0x1406E8298 (MiDeletePageFileSectionNodes.c)
 *     MiLogSectionCreate @ 0x1408C7850 (MiLogSectionCreate.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSegmentDelete(__int64 a1)
{
  __int64 v1; // rbp
  volatile __int64 *v2; // r15
  int v3; // ebx
  int v5; // edi
  ULONG_PTR v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  _QWORD *v10; // r14
  __int64 v11; // r13
  struct _DMA_ADAPTER *v12; // rdi
  unsigned __int64 v13; // r14
  __int64 v14; // rbx
  __int64 ControlAreaPartition; // rax
  unsigned int v17; // [rsp+50h] [rbp+8h]

  v1 = *(_QWORD *)a1;
  v2 = (volatile __int64 *)(a1 + 64);
  v3 = *(_DWORD *)(a1 + 56);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  v6 = a1 + 128;
  v17 = *(_QWORD *)(a1 + 64) != 0LL;
  if ( (v3 & 0xA0) != 0x80 )
    v6 = 0LL;
  v10 = (_QWORD *)MiPrepareSegmentForDeletion(a1, v6);
  if ( (v3 & 0x80) != 0 )
  {
    if ( (v5 & 0x2000) != 0 )
      DbgUnLoadImageSymbolsUnicode(
        (PCUNICODE_STRING)((*v2 & 0xFFFFFFFFFFFFFFF0uLL) + 88),
        *(_QWORD *)(v1 + 32),
        (__int64)KeGetCurrentThread()->ApcState.Process);
    MiReleaseControlAreaWaiters(v10, v7, v8, v9);
  }
  else if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
  {
    MiLogSectionCreate(a1, 0LL);
  }
  v11 = MiDeleteSegmentPages((__int64 *)a1);
  v12 = 0LL;
  v13 = MiReleaseControlAreaCharges(a1, 0LL);
  if ( (v3 & 0x82) == 0x80 )
    v12 = (struct _DMA_ADAPTER *)ObFastReplaceObject(v2, 0LL);
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
  if ( v13 )
  {
    ControlAreaPartition = MiGetControlAreaPartition(a1);
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, v17, v13);
  }
  if ( (*(_BYTE *)(a1 + 56) & 0x20) == 0 && (v3 & 0x80u) != 0 )
    v14 = 8LL * *(_QWORD *)(a1 + 120);
  else
    v14 = 0LL;
  MiDereferenceControlAreaProbe((volatile signed __int64 *)a1, 0);
  if ( v12 )
    HalPutDmaAdapter(v12);
  if ( v14 )
    IoDiskIoAttributionDereference(v14);
  ExFreePoolWithTag((PVOID)v1, 0);
  return v11;
}
