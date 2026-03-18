/*
 * XREFs of ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C0021CB4
 * Callers:
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C0021C84 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0034A84 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 *     imp_WdfCmResourceListRemoveByDescriptor @ 0x1C006F710 (imp_WdfCmResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceListRemoveByDescriptor @ 0x1C006F9C0 (imp_WdfIoResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceRequirementsListRemoveByIoResList @ 0x1C006FBF0 (imp_WdfIoResourceRequirementsListRemoveByIoResList.c)
 * Callees:
 *     ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x1C0014AF8 (-CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxCollectionInternal::RemoveEntry(FxCollectionInternal *this, FX_POOL_TRACKER *Entry)
{
  ((void (__fastcall *)(_LIST_ENTRY *, FxCollectionInternal *, __int64, const char *))Entry->Link.Flink->Flink[1].Flink)(
    Entry->Link.Flink,
    this,
    127LL,
    "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
  FxCollectionInternal::CleanupEntry(this, Entry);
  return 0LL;
}
