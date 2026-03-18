/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x1406EB634
 * Callers:
 *     MiSetPagesModified @ 0x14052FBE0 (MiSetPagesModified.c)
 *     MiRelocateImage @ 0x14060F080 (MiRelocateImage.c)
 *     MiParseComAndCetHeaders @ 0x14060FE30 (MiParseComAndCetHeaders.c)
 *     MiValidateSectionCreate @ 0x1406EAE30 (MiValidateSectionCreate.c)
 *     MiGetSystemAddressForImage @ 0x140748C34 (MiGetSystemAddressForImage.c)
 *     MiOpenHotPatchFile @ 0x1408C9508 (MiOpenHotPatchFile.c)
 *     MiPerformImageHotPatch @ 0x1408C98C4 (MiPerformImageHotPatch.c)
 *     MiCreateSessionDriverProtos @ 0x1408D71D8 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     MiRemoveFromSystemSpace @ 0x140251150 (MiRemoveFromSystemSpace.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140525454 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnmapViewOfSection @ 0x140600DD0 (MiUnmapViewOfSection.c)
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
    MiRemoveFromSystemSpace(qword_140C4CB68, v1, 1);
  }
  v3 = a1[1];
  if ( v3 )
    MiReturnCrossPartitionControlAreaCharges(v3);
}
