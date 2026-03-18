/*
 * XREFs of MiFreeImageRetpolineContext @ 0x14070E1A4
 * Callers:
 *     MiParseImageLoadConfig @ 0x14070DC30 (MiParseImageLoadConfig.c)
 *     MiCaptureRetpolineRelocationTables @ 0x14070F468 (MiCaptureRetpolineRelocationTables.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x14079AE70 (MiCaptureBootDriverRetpolineInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeImageRetpolineContext(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[1];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    a1[1] = 0LL;
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    a1[2] = 0LL;
  }
  v4 = (void *)a1[3];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    a1[3] = 0LL;
  }
}
