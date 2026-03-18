/*
 * XREFs of MiControlAreaRequiresCharge @ 0x140232D6C
 * Callers:
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MiReferenceControlArea @ 0x14029FAA4 (MiReferenceControlArea.c)
 *     MiCreatePrototypePtes @ 0x1402D51CC (MiCreatePrototypePtes.c)
 *     MiSessionInsertImage @ 0x1403A20B4 (MiSessionInsertImage.c)
 *     MiUpControlAreaRefs @ 0x140529070 (MiUpControlAreaRefs.c)
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x14070E1EC (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408CBA38 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x14022D030 (MiControlAreaExemptFromCrossPartitionCharges.c)
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
       ? *(ULONG_PTR **)(qword_140C4E4C8
                       + 8LL * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 430))
       : &MiSystemPartition;
  else
    v4 = *(ULONG_PTR **)(qword_140C4E4C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
  if ( v4 == *(ULONG_PTR **)(qword_140C4E4C8 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)) )
    return 1LL;
  if ( (*(_BYTE *)(v3 + 62) & 1) == 0 || v2 == 1 || v2 == 4 )
    return 2LL;
  ++dword_140C4E4D8;
  return 0LL;
}
