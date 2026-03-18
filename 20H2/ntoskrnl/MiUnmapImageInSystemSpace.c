/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x14070D7F4
 * Callers:
 *     MiSetPagesModified @ 0x1405335B0 (MiSetPagesModified.c)
 *     MiRelocateImage @ 0x14070B8DC (MiRelocateImage.c)
 *     MiParseComAndCetHeaders @ 0x14070C690 (MiParseComAndCetHeaders.c)
 *     MiValidateSectionCreate @ 0x14070EA48 (MiValidateSectionCreate.c)
 *     MiGetSystemAddressForImage @ 0x140757814 (MiGetSystemAddressForImage.c)
 *     MiOpenHotPatchFile @ 0x1408CF348 (MiOpenHotPatchFile.c)
 *     MiPerformImageHotPatch @ 0x1408CF704 (MiPerformImageHotPatch.c)
 *     MiCreateSessionDriverProtos @ 0x1408DD018 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14024EF4C (MiRemoveFromSystemSpace.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140528E24 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnmapViewOfSection @ 0x140685830 (MiUnmapViewOfSection.c)
 */

void __fastcall MiUnmapImageInSystemSpace(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *a1;
  if ( *a1 <= 0x7FFFFFFEFFFFLL )
  {
    MiUnmapViewOfSection(KeGetCurrentThread()->ApcState.Process, v1, 0, 0);
    KiUnstackDetachProcess((__int64)(a1 + 4), 0);
  }
  else
  {
    MiRemoveFromSystemSpace(qword_140C4CBE8, v1, 1);
  }
  v3 = a1[1];
  if ( v3 )
    MiReturnCrossPartitionControlAreaCharges(v3);
}
