/*
 * XREFs of ViXdvSetRequestedAPIsforDIF @ 0x1409C6210
 * Callers:
 *     ViXdvDriverLoadImage @ 0x1409C5E1C (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ViSetRequestedIoCallbacks @ 0x14059B8BC (ViSetRequestedIoCallbacks.c)
 *     ViSetRequestedOrderDependentAPIs @ 0x14059B938 (ViSetRequestedOrderDependentAPIs.c)
 *     ViSetRequestedAPIs @ 0x1409C5BCC (ViSetRequestedAPIs.c)
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
