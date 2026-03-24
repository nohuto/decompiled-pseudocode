/*
 * XREFs of Interrupter_WdfEvtInterruptEnable @ 0x1C000F340
 * Callers:
 *     <none>
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     Interrupter_InterruptEnable @ 0x1C0010F5C (Interrupter_InterruptEnable.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Interrupter_WdfEvtInterruptEnable(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  char v3; // di
  __int64 v4; // rcx
  __int64 v6; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0060310);
  v2 = v1;
  v3 = 0;
  if ( KeGetCurrentIrql() < 2u )
    v3 = Controller_RaiseAndTrackIrql(*(_QWORD *)(v1 + 8));
  Interrupter_InterruptEnable(v2);
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_DWORD *)(v4 + 588) == 1 )
  {
    v6 = *(_QWORD *)(v4 + 128);
    if ( *(_QWORD *)(v6 + 40) == v2 )
      Interrupter_InterruptEnable(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL * *(unsigned int *)(v6 + 64)));
  }
  if ( v3 && KeGetCurrentIrql() == 2 )
    Controller_LowerAndTrackIrql(*(_QWORD **)(v2 + 8));
  return 0LL;
}
