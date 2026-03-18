/*
 * XREFs of TR_WasDoorbellRungSinceMappingStart @ 0x1C000D0A0
 * Callers:
 *     ESM_CheckingIfEndpointShouldBeStopped @ 0x1C000CD70 (ESM_CheckingIfEndpointShouldBeStopped.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_WasDoorbellRungSinceMappingStart(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 152LL))();
}
