/*
 * XREFs of FxStubDriverUnload @ 0x1C003F2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C003F190 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverUnload()
{
  if ( qword_1C006AB98 && qword_1C006AB98 != FxStubDriverUnload )
    qword_1C006AB98();
  FxStubDriverUnloadCommon();
}
