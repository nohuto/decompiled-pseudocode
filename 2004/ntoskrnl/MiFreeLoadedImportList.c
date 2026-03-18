/*
 * XREFs of MiFreeLoadedImportList @ 0x140760F74
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiApplyDriverHotPatch @ 0x1408C57B4 (MiApplyDriverHotPatch.c)
 *     MiShutdownSystem @ 0x1409ACF48 (MiShutdownSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeLoadedImportList(void *a1)
{
  if ( a1 != (void *)-2LL && a1 != (void *)1 && ((unsigned __int8)a1 & 1) == 0 )
    ExFreePoolWithTag(a1, 0);
}
