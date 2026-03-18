/*
 * XREFs of Control_WdfEvtWorkItemForTransferCompletion @ 0x1C0041580
 * Callers:
 *     <none>
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x1C0005CB4 (Controller_LowerAndTrackIrql.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Control_ProcessTransferCompletion @ 0x1C0040838 (Control_ProcessTransferCompletion.c)
 */

void __fastcall Control_WdfEvtWorkItemForTransferCompletion(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  char v4; // di
  __int64 v5; // rax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v2,
         off_1C0061388);
  v4 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v4 = Controller_RaiseAndTrackIrql(*(_QWORD *)(v3 + 40));
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  Control_ProcessTransferCompletion(v5);
  if ( v4 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(v3 + 40));
  }
}
