/*
 * XREFs of MiFreeLoadedImportList @ 0x14075EC84
 * Callers:
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MiApplyDriverHotPatch @ 0x1408C4464 (MiApplyDriverHotPatch.c)
 *     MiShutdownSystem @ 0x1409AC0E8 (MiShutdownSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeLoadedImportList(void *a1)
{
  if ( a1 != (void *)-2LL && a1 != (void *)1 && ((unsigned __int8)a1 & 1) == 0 )
    ExFreePoolWithTag(a1, 0);
}
