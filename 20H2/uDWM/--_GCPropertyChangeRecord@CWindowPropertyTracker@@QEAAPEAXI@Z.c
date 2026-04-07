/*
 * XREFs of ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x18000B4D8
 * Callers:
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x18000A510 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000B428 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800270B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

CWindowPropertyTracker::CPropertyChangeRecord *__fastcall CWindowPropertyTracker::CPropertyChangeRecord::`scalar deleting destructor'(
        CWindowPropertyTracker::CPropertyChangeRecord *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 8);
  (*(void (__fastcall **)(WPF::HeapBase *, CWindowPropertyTracker::CPropertyChangeRecord *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
