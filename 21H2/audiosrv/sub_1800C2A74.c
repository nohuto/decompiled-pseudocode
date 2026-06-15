/*
 * XREFs of sub_1800C2A74 @ 0x1800C2A74
 * Callers:
 *     sub_1800C2D70 @ 0x1800C2D70 (sub_1800C2D70.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800C2A74(struct _RTL_CRITICAL_SECTION *a1)
{
  ULONG_PTR SpinCount; // rcx

  a1->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&off_1801487B8;
  DeleteCriticalSection(a1 + 1);
  SpinCount = a1->SpinCount;
  if ( SpinCount )
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
  sub_180060928(a1);
}
