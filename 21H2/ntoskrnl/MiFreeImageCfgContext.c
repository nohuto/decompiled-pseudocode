/*
 * XREFs of MiFreeImageCfgContext @ 0x14035E8C0
 * Callers:
 *     MiParseImageLoadConfig @ 0x140712E88 (MiParseImageLoadConfig.c)
 *     MiCaptureImageCfgContext @ 0x140713450 (MiCaptureImageCfgContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
