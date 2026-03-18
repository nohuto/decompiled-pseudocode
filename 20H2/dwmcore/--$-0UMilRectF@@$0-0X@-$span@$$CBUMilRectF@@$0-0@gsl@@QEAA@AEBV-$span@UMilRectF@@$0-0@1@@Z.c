/*
 * XREFs of ??$?0UMilRectF@@$0?0X@?$span@$$CBUMilRectF@@$0?0@gsl@@QEAA@AEBV?$span@UMilRectF@@$0?0@1@@Z @ 0x180174030
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180174E2C (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall gsl::span<MilRectF const,-1>::span<MilRectF const,-1>(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *a2;
  if ( *a2 < 0 || (v3 = a2[1], *a1 = v2, (a1[1] = v3) == 0) && v2 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return a1;
}
