/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x1406CA3B4
 * Callers:
 *     MiSetPagesModified @ 0x14052F590 (MiSetPagesModified.c)
 *     MiRelocateImage @ 0x1406442B0 (MiRelocateImage.c)
 *     MiParseComAndCetHeaders @ 0x140645060 (MiParseComAndCetHeaders.c)
 *     MiValidateSectionCreate @ 0x1406C9BB0 (MiValidateSectionCreate.c)
 *     MiGetSystemAddressForImage @ 0x1407470B4 (MiGetSystemAddressForImage.c)
 *     MiOpenHotPatchFile @ 0x1408C81B8 (MiOpenHotPatchFile.c)
 *     MiPerformImageHotPatch @ 0x1408C8574 (MiPerformImageHotPatch.c)
 *     MiCreateSessionDriverProtos @ 0x1408D5E88 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MiRemoveFromSystemSpace @ 0x1402AA180 (MiRemoveFromSystemSpace.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140524E04 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnmapViewOfSection @ 0x140635E10 (MiUnmapViewOfSection.c)
 */

void __fastcall MiUnmapImageInSystemSpace(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  _DWORD *v5; // r9

  v1 = *a1;
  if ( *a1 <= 0x7FFFFFFEFFFFLL )
  {
    MiUnmapViewOfSection(KeGetCurrentThread()->ApcState.Process, v1, 0, 0LL);
    KiUnstackDetachProcess((__int64)(a1 + 4), 0LL, v4, v5);
  }
  else
  {
    MiRemoveFromSystemSpace(qword_140C4CCA8, v1, 1);
  }
  v3 = a1[1];
  if ( v3 )
    MiReturnCrossPartitionControlAreaCharges(v3);
}
