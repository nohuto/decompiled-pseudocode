/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x1409BF448
 * Callers:
 *     VfThunkAddTargetNotify @ 0x1409BF0F0 (VfThunkAddTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x1409BF1C8 (ViThunkCreateSharedExportInformation.c)
 *     VfThunkRemoveTargetNotify @ 0x1409BF474 (VfThunkRemoveTargetNotify.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
