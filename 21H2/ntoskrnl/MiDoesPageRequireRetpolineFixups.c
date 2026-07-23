/*
 * XREFs of MiDoesPageRequireRetpolineFixups @ 0x1406EBCF4
 * Callers:
 *     MiPageHasRelocations @ 0x1405FB1EC (MiPageHasRelocations.c)
 *     MiRelocateImage @ 0x1406AC790 (MiRelocateImage.c)
 *     MiRelocateImagePfn @ 0x1406EB9C0 (MiRelocateImagePfn.c)
 *     MiInitializePrivateFixupBitmap @ 0x1406EBBF0 (MiInitializePrivateFixupBitmap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDoesPageRequireRetpolineFixups(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 24);
  return v2 && *(_QWORD *)(v2 + 8LL * a2 + 56);
}
