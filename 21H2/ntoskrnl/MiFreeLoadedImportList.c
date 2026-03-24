/*
 * XREFs of MiFreeLoadedImportList @ 0x140773614
 * Callers:
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MiApplyDriverHotPatch @ 0x1408C8DB4 (MiApplyDriverHotPatch.c)
 *     MiShutdownSystem @ 0x1409AFDB8 (MiShutdownSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeLoadedImportList(void *a1)
{
  if ( a1 != (void *)-2LL && a1 != (void *)1 && ((unsigned __int8)a1 & 1) == 0 )
    ExFreePoolWithTag(a1, 0);
}
