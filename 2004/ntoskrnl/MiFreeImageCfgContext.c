/*
 * XREFs of MiFreeImageCfgContext @ 0x140329358
 * Callers:
 *     MiParseImageLoadConfig @ 0x1406D5F28 (MiParseImageLoadConfig.c)
 *     MiCaptureImageCfgContext @ 0x1406D64F0 (MiCaptureImageCfgContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeImageCfgContext(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
