/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x1406C3BF4
 * Callers:
 *     MiSetPagesModified @ 0x1405352F0 (MiSetPagesModified.c)
 *     MiParseComAndCetHeaders @ 0x1406A9AD4 (MiParseComAndCetHeaders.c)
 *     MiRelocateImage @ 0x1406AC790 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x1406C32C0 (MiValidateSectionCreate.c)
 *     MiGetSystemAddressForImage @ 0x14075EA6C (MiGetSystemAddressForImage.c)
 *     MiOpenHotPatchFile @ 0x1408CCC68 (MiOpenHotPatchFile.c)
 *     MiPerformImageHotPatch @ 0x1408CD024 (MiPerformImageHotPatch.c)
 *     MiCreateSessionDriverProtos @ 0x1408DA938 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiRemoveFromSystemSpace @ 0x14030FB9C (MiRemoveFromSystemSpace.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14052AB64 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnmapViewOfSection @ 0x140687D60 (MiUnmapViewOfSection.c)
 */

void __fastcall MiUnmapImageInSystemSpace(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *a1;
  if ( *a1 <= 0x7FFFFFFEFFFFLL )
  {
    MiUnmapViewOfSection(KeGetCurrentThread()->ApcState.Process, v1, 0, 0);
    KiUnstackDetachProcess((__int64)(a1 + 4), 0LL);
  }
  else
  {
    MiRemoveFromSystemSpace(qword_140C4CDA8, v1, 1);
  }
  v3 = a1[1];
  if ( v3 )
    MiReturnCrossPartitionControlAreaCharges(v3);
}
