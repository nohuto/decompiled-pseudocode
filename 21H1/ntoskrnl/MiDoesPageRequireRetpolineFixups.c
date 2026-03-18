/*
 * XREFs of MiDoesPageRequireRetpolineFixups @ 0x140631724
 * Callers:
 *     MiInitializePrivateFixupBitmap @ 0x140631620 (MiInitializePrivateFixupBitmap.c)
 *     MiRelocateImagePfn @ 0x140631750 (MiRelocateImagePfn.c)
 *     MiRelocateImage @ 0x1406442B0 (MiRelocateImage.c)
 *     MiPageHasRelocations @ 0x1406CAB0C (MiPageHasRelocations.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDoesPageRequireRetpolineFixups(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 24);
  return v2 && *(_QWORD *)(v2 + 8LL * a2 + 56);
}
