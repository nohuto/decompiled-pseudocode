/*
 * XREFs of TR_StopMapping @ 0x1C000D10C
 * Callers:
 *     ESM_StoppingMappingOnCancelStart @ 0x1C000CE10 (ESM_StoppingMappingOnCancelStart.c)
 *     ESM_StoppingMappingAfterControllerResetInEnabled @ 0x1C004FBC0 (ESM_StoppingMappingAfterControllerResetInEnabled.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_StopMapping(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 104LL))();
}
