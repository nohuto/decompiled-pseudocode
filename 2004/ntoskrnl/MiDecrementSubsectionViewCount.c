/*
 * XREFs of MiDecrementSubsectionViewCount @ 0x14024A370
 * Callers:
 *     MiDeleteSubsectionPages @ 0x14022A1F0 (MiDeleteSubsectionPages.c)
 *     MiRemoveViewsFromSection @ 0x14024A180 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x14024A2C0 (MiDecrementSubsections.c)
 *     MiDeleteControlArea @ 0x140260548 (MiDeleteControlArea.c)
 *     MiCreatePrototypePtes @ 0x14026356C (MiCreatePrototypePtes.c)
 *     MiAppendSubsectionChain @ 0x140266054 (MiAppendSubsectionChain.c)
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x14031FBF0 (MmPurgeSection.c)
 *     MiDeleteCachedSubsection @ 0x1405238FC (MiDeleteCachedSubsection.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140525454 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUpControlAreaRefs @ 0x1405256A0 (MiUpControlAreaRefs.c)
 *     MiExtendSection @ 0x14060CDB0 (MiExtendSection.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140249570 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140265B10 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x14054F948 (MiComputeCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14054FD2C (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiDecrementSubsectionViewCount(__int64 *BugCheckParameter2, char a2)
{
  __int64 v2; // r9
  ULONG_PTR v3; // r10
  __int64 v4; // r11
  __int64 v5; // rax
  __int16 v7; // dx
  _KPROCESS *Process; // rax
  ULONG_PTR *v9; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rcx

  v2 = *BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  if ( *(_QWORD *)(*BugCheckParameter2 + 64)
    && (*(_DWORD *)(v2 + 56) & 0x20) == 0
    && (*((_BYTE *)BugCheckParameter2 + 34) & 1) == 0
    && !BugCheckParameter2[12] )
  {
    KeBugCheckEx(0x1Au, 0x42001uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  v4 = 0LL;
  if ( (a2 & 4) == 0 && (a2 & 8) != 0 && !MiControlAreaExemptFromCrossPartitionCharges(*BugCheckParameter2) )
  {
    if ( (v7 & 0x10) != 0 )
    {
      v9 = 0LL;
    }
    else if ( (v7 & 0x80u) != 0 )
    {
      v9 = &MiSystemPartition;
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v9 = (v7 & 0x100) != 0
         ? *(ULONG_PTR **)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(Process[1].AffinityPadding[5] + 430))
         : *(ULONG_PTR **)(qword_140C4E448 + 8LL * Process[1].IdealProcessorPadding[5]);
    }
    if ( v9 != *(ULONG_PTR **)(qword_140C4E448 + 8LL * (*(_WORD *)(v2 + 60) & 0x3FF)) )
    {
      SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v3);
      v11 = MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences);
      v12 = *(_DWORD *)(v11 + 48) & 0x3FFFFFFF;
      if ( v12 != 0x3FFFFFFF )
      {
        MiUpdateSubsectionCrossPartitionRefs(v3, (unsigned int)(v12 - 1));
        if ( v12 == 1 )
          v4 = MiComputeCrossPartitionSectionCharges(v13);
      }
    }
  }
  if ( *(_QWORD *)(v2 + 64) && (*(_DWORD *)(v2 + 56) & 0x20) == 0 && (*(_BYTE *)(v3 + 34) & 1) == 0 )
  {
    v5 = *(_QWORD *)(v3 + 96);
    if ( !v5 )
      KeBugCheckEx(0x1Au, 0x42001uLL, v3, 0LL, 0LL);
    *(_QWORD *)(v3 + 96) = v5 - 1;
  }
  return v4;
}
