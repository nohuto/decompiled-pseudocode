/*
 * XREFs of MiFreeImageLoadConfig @ 0x1407FB114
 * Callers:
 *     MiParseImageLoadConfig @ 0x140706ABC (MiParseImageLoadConfig.c)
 *     MiRelocateImage @ 0x1407074F0 (MiRelocateImage.c)
 *     MiFreeRelocations @ 0x1407FB090 (MiFreeRelocations.c)
 * Callees:
 *     MiFreeRetpolineRelocationInformation @ 0x14081C658 (MiFreeRetpolineRelocationInformation.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeImageLoadConfig(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4C617652u);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v3 = *(void **)(a1 + 16);
  if ( v3 )
  {
    MiFreeRetpolineRelocationInformation(v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
