/*
 * XREFs of MiFreeImageLoadConfig @ 0x140767098
 * Callers:
 *     MiRelocateImage @ 0x14070B8DC (MiRelocateImage.c)
 *     MiParseImageLoadConfig @ 0x14070DC30 (MiParseImageLoadConfig.c)
 *     MiFreeRelocations @ 0x140767008 (MiFreeRelocations.c)
 * Callees:
 *     MiFreeRetpolineRelocationInformation @ 0x1407899E4 (MiFreeRetpolineRelocationInformation.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
