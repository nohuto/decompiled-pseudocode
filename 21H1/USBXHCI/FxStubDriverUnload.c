/*
 * XREFs of FxStubDriverUnload @ 0x1C004FC90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C004FC50 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_1C00618B8 && qword_1C00618B8 != FxStubDriverUnload )
    qword_1C00618B8();
  FxStubDriverUnloadCommon(a1);
}
