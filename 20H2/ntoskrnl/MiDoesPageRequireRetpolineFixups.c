/*
 * XREFs of MiDoesPageRequireRetpolineFixups @ 0x140681BF4
 * Callers:
 *     MiRelocateImagePfn @ 0x1406818C0 (MiRelocateImagePfn.c)
 *     MiInitializePrivateFixupBitmap @ 0x140681AF0 (MiInitializePrivateFixupBitmap.c)
 *     MiPageHasRelocations @ 0x1406BF19C (MiPageHasRelocations.c)
 *     MiRelocateImage @ 0x14070B8DC (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDoesPageRequireRetpolineFixups(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 24);
  return v2 && *(_QWORD *)(v2 + 8LL * a2 + 56);
}
