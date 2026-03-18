/*
 * XREFs of ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C0061064
 * Callers:
 *     imp_WdfCmResourceListRemoveByDescriptor @ 0x1C005BD90 (imp_WdfCmResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceListRemoveByDescriptor @ 0x1C005C1D0 (imp_WdfIoResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceRequirementsListRemoveByIoResList @ 0x1C005C600 (imp_WdfIoResourceRequirementsListRemoveByIoResList.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0060D30 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C0061034 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x1C0060F84 (-CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z.c)
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
