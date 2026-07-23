/*
 * XREFs of MiControlAreaRequiresCharge @ 0x14027C22C
 * Callers:
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiCreatePrototypePtes @ 0x140302B48 (MiCreatePrototypePtes.c)
 *     MiInsertInSystemSpace @ 0x140305B30 (MiInsertInSystemSpace.c)
 *     MiReferenceControlArea @ 0x140361574 (MiReferenceControlArea.c)
 *     MiSessionInsertImage @ 0x1403A2AC4 (MiSessionInsertImage.c)
 *     MiUpControlAreaRefs @ 0x14052ADB0 (MiUpControlAreaRefs.c)
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x1406C3D80 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C9358 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140320C20 (MiControlAreaExemptFromCrossPartitionCharges.c)
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
       ? *(ULONG_PTR **)(qword_140C4E688
                       + 8LL * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 430))
       : &MiSystemPartition;
  else
    v5 = *(ULONG_PTR **)(qword_140C4E688 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
  if ( v5 == *(ULONG_PTR **)(qword_140C4E688 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)) )
    return 1LL;
  if ( (*(_BYTE *)(v4 + 62) & 1) == 0 || v3 == 1 || v3 == 4 )
    return 2LL;
  ++dword_140C4E698;
  return 0LL;
}
