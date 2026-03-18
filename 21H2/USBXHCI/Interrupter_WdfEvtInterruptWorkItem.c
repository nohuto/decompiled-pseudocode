/*
 * XREFs of Interrupter_WdfEvtInterruptWorkItem @ 0x1C003C520
 * Callers:
 *     <none>
 * Callees:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0002BB0 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x1C0005CB4 (Controller_LowerAndTrackIrql.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Interrupter_WdfEvtInterruptWorkItem(__int64 a1, char a2)
{
  __int64 v4; // rbx
  char v5; // di

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061310);
  v5 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v5 = Controller_RaiseAndTrackIrql(*(_QWORD *)(v4 + 8));
  Interrupter_DeferredWorkProcessor(a1, a2, 1);
  if ( v5 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(v4 + 8));
  }
}
