/*
 * XREFs of MiDecrementSubsectionViewCount @ 0x1402869C0
 * Callers:
 *     MiAppendSubsectionChain @ 0x14022CBE0 (MiAppendSubsectionChain.c)
 *     MiCreatePrototypePtes @ 0x14026E564 (MiCreatePrototypePtes.c)
 *     MiDeleteControlArea @ 0x1402700FC (MiDeleteControlArea.c)
 *     MiDeleteSubsectionPages @ 0x140273390 (MiDeleteSubsectionPages.c)
 *     MmPurgeSection @ 0x14027F360 (MmPurgeSection.c)
 *     MiRemoveViewsFromSection @ 0x140286884 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x140286920 (MiDecrementSubsections.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MiDeleteCachedSubsection @ 0x14058A6D4 (MiDeleteCachedSubsection.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14058C0E4 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUpControlAreaRefs @ 0x14058C330 (MiUpControlAreaRefs.c)
 *     MiExtendSection @ 0x1406A3A68 (MiExtendSection.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14022CF78 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140287428 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1405C48A0 (MiComputeCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1405C4C6C (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiDecrementSubsectionViewCount(_QWORD *BugCheckParameter2, char a2)
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

  v2 = *BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  if ( *(_QWORD *)(*BugCheckParameter2 + 64LL)
    && (*(_DWORD *)(v2 + 56) & 0x20) == 0
    && (*((_BYTE *)BugCheckParameter2 + 34) & 1) == 0
    && !BugCheckParameter2[12] )
  {
    KeBugCheckEx(0x1Au, 0x42001uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  v4 = 0LL;
  if ( (a2 & 4) == 0
    && (a2 & 8) != 0
    && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*BugCheckParameter2) )
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
         ? *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(Process[1].Affinity.StaticBitmap[25] + 366))
         : *(ULONG_PTR **)(qword_140C51F48 + 8LL * Process[1].IdealProcessor[25]);
    }
    if ( v9 != *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(v2 + 60) & 0x3FF)) )
    {
      SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v3);
      v11 = MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences);
      v12 = *(_DWORD *)(v11 + 48) & 0x3FFFFFFF;
      if ( v12 != 0x3FFFFFFF )
      {
        MiUpdateSubsectionCrossPartitionRefs(v3, (unsigned int)(v12 - 1));
        if ( v12 == 1 )
          v4 = MiComputeCrossPartitionSectionCharges();
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
