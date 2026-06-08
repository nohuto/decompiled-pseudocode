/*
 * XREFs of FxStubDriverUnload @ 0x1C00029A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0002804 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_1C00143B8 && qword_1C00143B8 != FxStubDriverUnload )
    qword_1C00143B8();
  FxStubDriverUnloadCommon(a1);
}
