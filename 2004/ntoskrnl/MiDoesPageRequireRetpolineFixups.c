/*
 * XREFs of MiDoesPageRequireRetpolineFixups @ 0x1405FC6E4
 * Callers:
 *     MiInitializePrivateFixupBitmap @ 0x1405FC5E0 (MiInitializePrivateFixupBitmap.c)
 *     MiRelocateImagePfn @ 0x1405FC710 (MiRelocateImagePfn.c)
 *     MiRelocateImage @ 0x14060F080 (MiRelocateImage.c)
 *     MiPageHasRelocations @ 0x1406EBD8C (MiPageHasRelocations.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDoesPageRequireRetpolineFixups(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 24);
  return v2 && *(_QWORD *)(v2 + 8LL * a2 + 56);
}
