/*
 * XREFs of FxStubDriverUnload @ 0x1C003E9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C003E918 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverUnload()
{
  if ( qword_1C0069AD8 && qword_1C0069AD8 != FxStubDriverUnload )
    qword_1C0069AD8();
  FxStubDriverUnloadCommon();
}
