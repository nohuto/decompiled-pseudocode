/*
 * XREFs of Interrupter_WdfEvtInterruptWorkItem @ 0x1C003B730
 * Callers:
 *     <none>
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0005D90 (Interrupter_DeferredWorkProcessor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Interrupter_WdfEvtInterruptWorkItem(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  char v6; // di

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0060310);
  v5 = v4;
  v6 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v6 = Controller_RaiseAndTrackIrql(*(_QWORD *)(v4 + 8));
  Interrupter_DeferredWorkProcessor(a1, a2, 1);
  if ( v6 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(v5 + 8));
  }
}
