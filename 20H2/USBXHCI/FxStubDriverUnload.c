/*
 * XREFs of FxStubDriverUnload @ 0x1C0050800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C00507C0 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_1C00629A0 && qword_1C00629A0 != FxStubDriverUnload )
    qword_1C00629A0();
  FxStubDriverUnloadCommon(a1);
}
