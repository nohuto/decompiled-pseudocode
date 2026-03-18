/*
 * XREFs of Isoch_WdfEvtWorkItemForTransferCompletion @ 0x1C0043BA0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x1C0005CB4 (Controller_LowerAndTrackIrql.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Isoch_ProcessTransferCompletion @ 0x1C0042CD0 (Isoch_ProcessTransferCompletion.c)
 */

void __fastcall Isoch_WdfEvtWorkItemForTransferCompletion(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  char v3; // di

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C0061388);
  v3 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v3 = Controller_RaiseAndTrackIrql(*(_QWORD *)(v2 + 40));
  Isoch_ProcessTransferCompletion(v1);
  if ( v3 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(v2 + 40));
  }
}
