/*
 * XREFs of MiDecrementSubsectionViewCount @ 0x14031FEC0
 * Callers:
 *     MiAppendSubsectionChain @ 0x14021E9FC (MiAppendSubsectionChain.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x1402DD3F0 (MmPurgeSection.c)
 *     MiDeleteSubsectionPages @ 0x1402DD9C0 (MiDeleteSubsectionPages.c)
 *     MiDeleteControlArea @ 0x140302834 (MiDeleteControlArea.c)
 *     MiCreatePrototypePtes @ 0x140302B48 (MiCreatePrototypePtes.c)
 *     MiRemoveViewsFromSection @ 0x14031FCC8 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x14031FE10 (MiDecrementSubsections.c)
 *     MiDeleteCachedSubsection @ 0x140528FEC (MiDeleteCachedSubsection.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14052AB64 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUpControlAreaRefs @ 0x14052ADB0 (MiUpControlAreaRefs.c)
 *     MiExtendSection @ 0x1405E8C28 (MiExtendSection.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14027DC54 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140320C20 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140555028 (MiComputeCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14055540C (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiDecrementSubsectionViewCount(_QWORD *BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  ULONG_PTR v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax
  __int16 v8; // dx
  _KPROCESS *Process; // rax
  ULONG_PTR *v10; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rcx

  v3 = *BugCheckParameter2;
  v4 = (ULONG_PTR)BugCheckParameter2;
  if ( *(_QWORD *)(*BugCheckParameter2 + 64LL)
    && (*(_DWORD *)(v3 + 56) & 0x20) == 0
    && (*((_BYTE *)BugCheckParameter2 + 34) & 1) == 0
    && !BugCheckParameter2[12] )
  {
    KeBugCheckEx(0x1Au, 0x42001uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  v5 = 0LL;
  if ( (a2 & 4) == 0
    && (a2 & 8) != 0
    && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*BugCheckParameter2, a2, a3, v3) )
  {
    if ( (v8 & 0x10) != 0 )
    {
      v10 = 0LL;
    }
    else if ( (v8 & 0x80u) != 0 )
    {
      v10 = &MiSystemPartition;
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v10 = (v8 & 0x100) != 0
          ? *(ULONG_PTR **)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(Process[1].AffinityPadding[5] + 430))
          : *(ULONG_PTR **)(qword_140C4E688 + 8LL * Process[1].IdealProcessorPadding[5]);
    }
    if ( v10 != *(ULONG_PTR **)(qword_140C4E688 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)) )
    {
      SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v4);
      v12 = MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences);
      v13 = *(_DWORD *)(v12 + 48) & 0x3FFFFFFF;
      if ( v13 != 0x3FFFFFFF )
      {
        MiUpdateSubsectionCrossPartitionRefs(v4, (unsigned int)(v13 - 1));
        if ( v13 == 1 )
          v5 = MiComputeCrossPartitionSectionCharges(v14);
      }
    }
  }
  if ( *(_QWORD *)(v3 + 64) && (*(_DWORD *)(v3 + 56) & 0x20) == 0 && (*(_BYTE *)(v4 + 34) & 1) == 0 )
  {
    v6 = *(_QWORD *)(v4 + 96);
    if ( !v6 )
      KeBugCheckEx(0x1Au, 0x42001uLL, v4, 0LL, 0LL);
    *(_QWORD *)(v4 + 96) = v6 - 1;
  }
  return v5;
}
