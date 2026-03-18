/*
 * XREFs of TR_StopMapping @ 0x1C000F4D0
 * Callers:
 *     ESM_StoppingMappingOnCancelStart @ 0x1C000F1E0 (ESM_StoppingMappingOnCancelStart.c)
 *     ESM_StoppingMappingAfterControllerResetInEnabled @ 0x1C004FCD0 (ESM_StoppingMappingAfterControllerResetInEnabled.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_StopMapping(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 104LL))();
}
