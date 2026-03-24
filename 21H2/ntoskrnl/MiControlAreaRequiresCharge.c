/*
 * XREFs of MiControlAreaRequiresCharge @ 0x14025ACBC
 * Callers:
 *     MiDeleteVad @ 0x14021BFF0 (MiDeleteVad.c)
 *     MiCreatePrototypePtes @ 0x1402F7DF8 (MiCreatePrototypePtes.c)
 *     MiInsertInSystemSpace @ 0x1402FADE0 (MiInsertInSystemSpace.c)
 *     MiReferenceControlArea @ 0x140356824 (MiReferenceControlArea.c)
 *     MiSessionInsertImage @ 0x1403A2974 (MiSessionInsertImage.c)
 *     MiUpControlAreaRefs @ 0x14052AB70 (MiUpControlAreaRefs.c)
 *     MiMapViewOfImageSection @ 0x14061CEB0 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x140715730 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x14075BAFC (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C91F8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140315ED0 (MiControlAreaExemptFromCrossPartitionCharges.c)
 */

__int64 __fastcall MiControlAreaRequiresCharge(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  int v3; // r8d
  __int64 v4; // r9
  ULONG_PTR *v5; // rdx

  if ( (unsigned int)MiControlAreaExemptFromCrossPartitionCharges(a1, a2, (unsigned int)a2, a1) == 1 )
    return 1LL;
  if ( v2 > 1 )
    v5 = v3 == 2
       ? *(ULONG_PTR **)(qword_140C4E648
                       + 8LL * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 430))
       : &MiSystemPartition;
  else
    v5 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
  if ( v5 == *(ULONG_PTR **)(qword_140C4E648 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)) )
    return 1LL;
  if ( (*(_BYTE *)(v4 + 62) & 1) == 0 || v3 == 1 || v3 == 4 )
    return 2LL;
  ++dword_140C4E658;
  return 0LL;
}
