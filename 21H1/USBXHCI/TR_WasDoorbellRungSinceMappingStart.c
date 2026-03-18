/*
 * XREFs of TR_WasDoorbellRungSinceMappingStart @ 0x1C000EA30
 * Callers:
 *     ESM_CheckingIfEndpointShouldBeStopped @ 0x1C000E4B0 (ESM_CheckingIfEndpointShouldBeStopped.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_WasDoorbellRungSinceMappingStart(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 152LL))();
}
