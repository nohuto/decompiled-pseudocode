/*
 * XREFs of TR_ProcessExpectedEventTRBs @ 0x1C000F538
 * Callers:
 *     ESM_ProcessingExpectedEventTRBsAfterEndpointStop @ 0x1C000EDE0 (ESM_ProcessingExpectedEventTRBsAfterEndpointStop.c)
 *     ESM_ProcessingExpectedEventTRBsAfterEndpointHalt @ 0x1C004F7D0 (ESM_ProcessingExpectedEventTRBsAfterEndpointHalt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_ProcessExpectedEventTRBs(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 136LL))();
}
