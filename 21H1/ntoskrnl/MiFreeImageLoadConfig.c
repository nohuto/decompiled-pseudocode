/*
 * XREFs of MiFreeImageLoadConfig @ 0x1407564E8
 * Callers:
 *     MiRelocateImage @ 0x1406442B0 (MiRelocateImage.c)
 *     MiParseImageLoadConfig @ 0x1406EE324 (MiParseImageLoadConfig.c)
 *     MiFreeRelocations @ 0x140756458 (MiFreeRelocations.c)
 * Callees:
 *     MiFreeRetpolineRelocationInformation @ 0x140778FD4 (MiFreeRetpolineRelocationInformation.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
