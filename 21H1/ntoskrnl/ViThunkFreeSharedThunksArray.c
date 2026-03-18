/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x1409BF438
 * Callers:
 *     VfThunkAddTargetNotify @ 0x1409BF0E0 (VfThunkAddTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x1409BF1B8 (ViThunkCreateSharedExportInformation.c)
 *     VfThunkRemoveTargetNotify @ 0x1409BF464 (VfThunkRemoveTargetNotify.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall ViThunkFreeSharedThunksArray(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x54496656u);
    *a1 = 0LL;
  }
}
