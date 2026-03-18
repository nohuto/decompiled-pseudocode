/*
 * XREFs of MiControlAreaRequiresCharge @ 0x14024B1C8
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiReferenceControlArea @ 0x140228B04 (MiReferenceControlArea.c)
 *     MiCreatePrototypePtes @ 0x14026356C (MiCreatePrototypePtes.c)
 *     MiInsertInSystemSpace @ 0x140264130 (MiInsertInSystemSpace.c)
 *     MiSessionInsertImage @ 0x14039FBE4 (MiSessionInsertImage.c)
 *     MiUpControlAreaRefs @ 0x1405256A0 (MiUpControlAreaRefs.c)
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x14060C198 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C5BF8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140249570 (MiControlAreaExemptFromCrossPartitionCharges.c)
 */

__int64 __fastcall MiControlAreaRequiresCharge(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // r8d
  __int64 v3; // r9
  ULONG_PTR *v4; // rdx

  if ( MiControlAreaExemptFromCrossPartitionCharges(a1) )
    return 1LL;
  if ( v1 > 1 )
    v4 = v2 == 2
       ? *(ULONG_PTR **)(qword_140C4E448
                       + 8LL * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 430))
       : &MiSystemPartition;
  else
    v4 = *(ULONG_PTR **)(qword_140C4E448 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
  if ( v4 == *(ULONG_PTR **)(qword_140C4E448 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)) )
    return 1LL;
  if ( (*(_BYTE *)(v3 + 62) & 1) == 0 || v2 == 1 || v2 == 4 )
    return 2LL;
  ++dword_140C4E458;
  return 0LL;
}
