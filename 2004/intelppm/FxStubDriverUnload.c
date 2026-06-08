/*
 * XREFs of FxStubDriverUnload @ 0x1C0007EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0007E6C (-FxStubDriverUnloadCommon@@YAXXZ.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_1C001C3F0 && qword_1C001C3F0 != FxStubDriverUnload )
    qword_1C001C3F0();
  FxStubDriverUnloadCommon(a1);
}
