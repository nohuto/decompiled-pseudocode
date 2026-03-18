/*
 * XREFs of MiFreeImageLoadConfig @ 0x140758458
 * Callers:
 *     MiRelocateImage @ 0x14060F080 (MiRelocateImage.c)
 *     MiParseImageLoadConfig @ 0x1406D5F28 (MiParseImageLoadConfig.c)
 *     MiFreeRelocations @ 0x1407583C8 (MiFreeRelocations.c)
 * Callees:
 *     MiFreeRetpolineRelocationInformation @ 0x14077B3E4 (MiFreeRetpolineRelocationInformation.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeImageLoadConfig(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4C617652u);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v3 = *(void **)(a1 + 24);
  if ( v3 )
  {
    MiFreeRetpolineRelocationInformation(v3);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
