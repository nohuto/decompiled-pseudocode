/*
 * XREFs of FxStubDriverUnload @ 0x1C0002900
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0002764 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_1C00133B8 && qword_1C00133B8 != FxStubDriverUnload )
    qword_1C00133B8();
  FxStubDriverUnloadCommon(a1);
}
