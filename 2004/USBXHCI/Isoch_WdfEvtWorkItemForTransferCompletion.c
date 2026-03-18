/*
 * XREFs of Isoch_WdfEvtWorkItemForTransferCompletion @ 0x1C0042910
 * Callers:
 *     <none>
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Isoch_ProcessTransferCompletion @ 0x1C0041540 (Isoch_ProcessTransferCompletion.c)
 */

void __fastcall Isoch_WdfEvtWorkItemForTransferCompletion(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rbx
  char v4; // di

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C0060388);
  v3 = v2;
  v4 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v4 = Controller_RaiseAndTrackIrql(*(_QWORD *)(v2 + 40));
  Isoch_ProcessTransferCompletion(v1);
  if ( v4 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(v3 + 40));
  }
}
