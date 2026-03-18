/*
 * XREFs of FxStubDriverUnload @ 0x1C0050770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0050730 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_1C0062A08 && qword_1C0062A08 != FxStubDriverUnload )
    qword_1C0062A08();
  FxStubDriverUnloadCommon(a1);
}
