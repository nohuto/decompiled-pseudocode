/*
 * XREFs of FxStubDriverUnload @ 0x1C004FBA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C004FB60 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_1C0061998 && qword_1C0061998 != FxStubDriverUnload )
    qword_1C0061998();
  FxStubDriverUnloadCommon(a1);
}
