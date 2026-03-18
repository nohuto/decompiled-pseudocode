/*
 * XREFs of MiIncrementSubsectionViewCount @ 0x140286EC0
 * Callers:
 *     MiSetSubsectionBase @ 0x14022CD50 (MiSetSubsectionBase.c)
 *     MiRetainSubsection @ 0x140251340 (MiRetainSubsection.c)
 *     MiCreatePrototypePtes @ 0x14026E564 (MiCreatePrototypePtes.c)
 *     MiPrepareSegmentForDeletion @ 0x140270274 (MiPrepareSegmentForDeletion.c)
 *     MmPurgeSection @ 0x14027F360 (MmPurgeSection.c)
 *     MiReferenceSubsection @ 0x140286D4C (MiReferenceSubsection.c)
 *     MiReferenceActiveSubsection @ 0x140286DE0 (MiReferenceActiveSubsection.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MiExtendSection @ 0x1406A3A68 (MiExtendSection.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14022CF78 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140287428 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1405C4C6C (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiIncrementSubsectionViewCount(_QWORD *BugCheckParameter2, char a2)
{
  __int64 v2; // r9
  ULONG_PTR v3; // r10
  unsigned int v4; // r11d
  __int16 v7; // r8
  ULONG_PTR *v8; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  int v10; // edx
  char v11; // r8

  v2 = *BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  v4 = 2;
  if ( (a2 & 8) != 0 && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*BugCheckParameter2) )
  {
    if ( (v7 & 0x80u) != 0 )
    {
      v8 = &MiSystemPartition;
    }
    else if ( (v7 & 0x100) != 0 )
    {
      v8 = *(ULONG_PTR **)(qword_140C51F48
                         + 8LL
                         * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25]
                                               + 366));
    }
    else
    {
      v8 = (v7 & 0x10) != 0
         ? 0LL
         : *(ULONG_PTR **)(qword_140C51F48 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
    }
    if ( v8 != *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(v2 + 60) & 0x3FF)) )
    {
      if ( (((v7 & 0x200) == 0) & *(_BYTE *)(v2 + 62)) != 0 )
      {
        ++dword_140C52950;
        return 0LL;
      }
      SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v3);
      v10 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
      if ( v10 != 0x3FFFFFFF )
      {
        if ( !v10 && (v11 & 0x20) == 0 )
          return 1LL;
        MiUpdateSubsectionCrossPartitionRefs(v3, (unsigned int)(v10 + 1));
      }
    }
  }
  if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0
    && *(_QWORD *)(v2 + 64)
    && (*(_BYTE *)(v3 + 34) & 1) == 0
    && (*(_QWORD *)(v3 + 96))++ == -1LL )
  {
    KeBugCheckEx(0x1Au, 0x42000uLL, v3, 0LL, 0LL);
  }
  return v4;
}
