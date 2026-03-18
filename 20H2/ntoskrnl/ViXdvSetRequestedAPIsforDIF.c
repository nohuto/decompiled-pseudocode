/*
 * XREFs of ViXdvSetRequestedAPIsforDIF @ 0x1409CC230
 * Callers:
 *     ViXdvDriverLoadImage @ 0x1409CBE3C (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ViSetRequestedIoCallbacks @ 0x14059F35C (ViSetRequestedIoCallbacks.c)
 *     ViSetRequestedOrderDependentAPIs @ 0x14059F3D8 (ViSetRequestedOrderDependentAPIs.c)
 *     ViSetRequestedAPIs @ 0x1409CBBEC (ViSetRequestedAPIs.c)
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
