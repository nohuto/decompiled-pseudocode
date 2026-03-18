/*
 * XREFs of MiSegmentDelete @ 0x1406F4904
 * Callers:
 *     MiCheckControlArea @ 0x140287660 (MiCheckControlArea.c)
 *     MiDestroySection @ 0x14038868C (MiDestroySection.c)
 *     MiProcessDereferenceList @ 0x140393EC0 (MiProcessDereferenceList.c)
 * Callees:
 *     MiUpdateSystemProtoPtesTree @ 0x14026EA80 (MiUpdateSystemProtoPtesTree.c)
 *     MiPrepareSegmentForDeletion @ 0x140270274 (MiPrepareSegmentForDeletion.c)
 *     MiDereferenceControlAreaProbe @ 0x14027031C (MiDereferenceControlAreaProbe.c)
 *     MiDeleteSegmentPages @ 0x14027034C (MiDeleteSegmentPages.c)
 *     ObFastReplaceObject @ 0x140276A48 (ObFastReplaceObject.c)
 *     MiReleaseControlAreaCharges @ 0x1402874E8 (MiReleaseControlAreaCharges.c)
 *     MiReleaseControlAreaWaiters @ 0x1402879F8 (MiReleaseControlAreaWaiters.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1402DC0E8 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiGetControlAreaPartition @ 0x14030EC14 (MiGetControlAreaPartition.c)
 *     IoDiskIoAttributionDereference @ 0x140366814 (IoDiskIoAttributionDereference.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
 *     MiDeletePageFileSectionNodes @ 0x1406F4878 (MiDeletePageFileSectionNodes.c)
 *     MiLogSectionCreate @ 0x14096BF70 (MiLogSectionCreate.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSegmentDelete(volatile signed __int64 *a1)
{
  volatile signed __int64 v1; // rbp
  volatile __int64 *v2; // r15
  int v3; // ebx
  int v5; // edi
  ULONG_PTR v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // r14
  __int64 v9; // r13
  void *v10; // rdi
  unsigned __int64 v11; // r14
  __int64 v12; // rbx
  __int64 ControlAreaPartition; // rax
  BOOL v15; // [rsp+50h] [rbp+8h]

  v1 = *a1;
  v2 = a1 + 8;
  v3 = *((_DWORD *)a1 + 14);
  v5 = *(_DWORD *)(*a1 + 12);
  v6 = (ULONG_PTR)(a1 + 16);
  v15 = *((_QWORD *)a1 + 8) != 0LL;
  if ( (v3 & 0xA0) != 0x80 )
    v6 = 0LL;
  v8 = (__int64 *)MiPrepareSegmentForDeletion((__int64)a1, v6);
  if ( (v3 & 0x80) != 0 )
  {
    if ( (v5 & 0x2000) != 0 )
      DbgUnLoadImageSymbolsUnicode(
        (PCUNICODE_STRING)((*v2 & 0xFFFFFFFFFFFFFFF0uLL) + 88),
        *(_QWORD *)(v1 + 32),
        (__int64)KeGetCurrentThread()->ApcState.Process);
    MiReleaseControlAreaWaiters(v8);
  }
  else if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400001) != 0 )
  {
    MiLogSectionCreate(a1, 0LL, v7);
  }
  v9 = MiDeleteSegmentPages((__int64)a1);
  v10 = 0LL;
  v11 = MiReleaseControlAreaCharges((__int64)a1);
  if ( (v3 & 0x82) == 0x80 )
    v10 = (void *)ObFastReplaceObject(v2, 0LL);
  if ( (v3 & 0x80) != 0 )
  {
    if ( (v3 & 0x20) != 0 )
    {
      MiUpdateSystemProtoPtesTree(*((_QWORD *)a1 + 12), 0);
      ExFreePoolWithTag(*(PVOID *)(v1 + 64), 0);
    }
  }
  else
  {
    MiDeletePageFileSectionNodes((__int64)a1);
  }
  if ( v11 )
  {
    ControlAreaPartition = MiGetControlAreaPartition((__int64)a1);
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, v15, v11);
  }
  if ( (a1[7] & 0x20) == 0 && (v3 & 0x80u) != 0 )
    v12 = 8LL * *((_QWORD *)a1 + 15);
  else
    v12 = 0LL;
  MiDereferenceControlAreaProbe(a1, 0);
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v12 )
    IoDiskIoAttributionDereference(v12);
  ExFreePoolWithTag((PVOID)v1, 0);
  return v9;
}
