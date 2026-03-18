/*
 * XREFs of ?BreakLinksForCycles@CCyclicResourceListEntry@@UEAAXXZ @ 0x180189F90
 * Callers:
 *     ?BreakLinksForCycles@CTransformGroup@@MEAAXXZ @ 0x1801B7750 (-BreakLinksForCycles@CTransformGroup@@MEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCyclicResourceListEntry::BreakLinksForCycles(CCyclicResourceListEntry *this)
{
  __int64 v1; // rbx

  v1 = (**(__int64 (__fastcall ***)(CCyclicResourceListEntry *))this)(this);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 64LL))(v1);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1 + 72LL))(v1, 0LL, 0LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
