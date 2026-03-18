/*
 * XREFs of ViXdvSetRequestedAPIsforDIF @ 0x1409C6200
 * Callers:
 *     ViXdvDriverLoadImage @ 0x1409C5E0C (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ViSetRequestedIoCallbacks @ 0x14059B1CC (ViSetRequestedIoCallbacks.c)
 *     ViSetRequestedOrderDependentAPIs @ 0x14059B248 (ViSetRequestedOrderDependentAPIs.c)
 *     ViSetRequestedAPIs @ 0x1409C5BBC (ViSetRequestedAPIs.c)
 */

char __fastcall ViXdvSetRequestedAPIsforDIF(int (__fastcall *a1)(__int64 *, __int64 (__fastcall **)()))
{
  if ( a1(&VfDifAPIThunkContextHead, ViUtilsForDIF) < 0 )
    return 0;
  ViSetRequestedAPIs((__int64)&VfRegularThunks);
  ViSetRequestedOrderDependentAPIs();
  ViSetRequestedAPIs((__int64)&VfPoolThunks);
  ViSetRequestedAPIs((__int64)&VfMandatoryThunks);
  ViSetRequestedAPIs((__int64)&VfXdvThunks);
  ViSetRequestedIoCallbacks();
  return 1;
}
