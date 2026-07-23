/*
 * XREFs of MiFreeImageLoadConfig @ 0x14076B3E8
 * Callers:
 *     MiRelocateImage @ 0x1406AC790 (MiRelocateImage.c)
 *     MiParseImageLoadConfig @ 0x1406C14D8 (MiParseImageLoadConfig.c)
 *     MiFreeRelocations @ 0x14076B358 (MiFreeRelocations.c)
 * Callees:
 *     MiFreeRetpolineRelocationInformation @ 0x14078D984 (MiFreeRetpolineRelocationInformation.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
