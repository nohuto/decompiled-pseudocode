/*
 * XREFs of TR_ProcessExpectedEventTRBs @ 0x1C000EA78
 * Callers:
 *     ESM_ProcessingExpectedEventTRBsAfterEndpointStop @ 0x1C000E350 (ESM_ProcessingExpectedEventTRBsAfterEndpointStop.c)
 *     ESM_ProcessingExpectedEventTRBsAfterEndpointHalt @ 0x1C004EC60 (ESM_ProcessingExpectedEventTRBsAfterEndpointHalt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_ProcessExpectedEventTRBs(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 136LL))();
}
