/*
 * XREFs of MiFreeImageCfgContext @ 0x14029C764
 * Callers:
 *     MiCaptureImageCfgContext @ 0x140706680 (MiCaptureImageCfgContext.c)
 *     MiParseImageLoadConfig @ 0x140706ABC (MiParseImageLoadConfig.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
