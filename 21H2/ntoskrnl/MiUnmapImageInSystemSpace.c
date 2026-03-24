/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x1407155A4
 * Callers:
 *     MiSetPagesModified @ 0x1405350B0 (MiSetPagesModified.c)
 *     MiParseComAndCetHeaders @ 0x1406D27F4 (MiParseComAndCetHeaders.c)
 *     MiRelocateImage @ 0x1406D54B0 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x140714C70 (MiValidateSectionCreate.c)
 *     MiGetSystemAddressForImage @ 0x14075E8AC (MiGetSystemAddressForImage.c)
 *     MiOpenHotPatchFile @ 0x1408CCB08 (MiOpenHotPatchFile.c)
 *     MiPerformImageHotPatch @ 0x1408CCEC4 (MiPerformImageHotPatch.c)
 *     MiCreateSessionDriverProtos @ 0x1408DA7D8 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     MiRemoveFromSystemSpace @ 0x140304E4C (MiRemoveFromSystemSpace.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14052A924 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnmapViewOfSection @ 0x14061E0F0 (MiUnmapViewOfSection.c)
 */

void __fastcall MiUnmapImageInSystemSpace(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *a1;
  if ( *a1 <= 0x7FFFFFFEFFFFLL )
  {
    MiUnmapViewOfSection(KeGetCurrentThread()->ApcState.Process, v1, 0, 0LL);
    KiUnstackDetachProcess((__int64)(a1 + 4), 0);
  }
  else
  {
    MiRemoveFromSystemSpace(qword_140C4CD68, v1, 1);
  }
  v3 = a1[1];
  if ( v3 )
    MiReturnCrossPartitionControlAreaCharges(v3);
}
