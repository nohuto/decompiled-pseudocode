/*
 * XREFs of Interrupter_WdfEvtInterruptDisable @ 0x1C000A000
 * Callers:
 *     <none>
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     Interrupter_InterruptDisable @ 0x1C000A078 (Interrupter_InterruptDisable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Interrupter_WdfEvtInterruptDisable(__int64 a1)
{
  char v1; // di
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v5; // rcx

  v1 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0060310);
  if ( KeGetCurrentIrql() < 2u )
    v1 = Controller_RaiseAndTrackIrql(*(_QWORD *)(v2 + 8));
  Interrupter_InterruptDisable(v2);
  v3 = *(_QWORD *)(v2 + 8);
  if ( *(_DWORD *)(v3 + 572) == 1 )
  {
    v5 = *(_QWORD *)(v3 + 128);
    if ( *(_QWORD *)(v5 + 40) == v2 )
      Interrupter_InterruptDisable(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 8LL * *(unsigned int *)(v5 + 64)));
  }
  if ( v1 && KeGetCurrentIrql() == 2 )
    Controller_LowerAndTrackIrql(*(_QWORD **)(v2 + 8));
  return 0LL;
}
