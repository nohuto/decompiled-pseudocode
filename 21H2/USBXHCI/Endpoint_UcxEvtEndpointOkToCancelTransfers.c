/*
 * XREFs of Endpoint_UcxEvtEndpointOkToCancelTransfers @ 0x1C000CDC0
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Endpoint_UcxEvtEndpointOkToCancelTransfers(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00611A8);
  ESM_AddEvent((KSPIN_LOCK *)(v1 + 288), 24);
}
