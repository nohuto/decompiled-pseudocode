/*
 * XREFs of Control_WdfEvtDpcForTransferCompletion @ 0x1C0018860
 * Callers:
 *     <none>
 * Callees:
 *     Control_ProcessTransferCompletion @ 0x1C0018898 (Control_ProcessTransferCompletion.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Control_WdfEvtDpcForTransferCompletion(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 912))(WdfDriverGlobals, a1);
  return Control_ProcessTransferCompletion(v1);
}
