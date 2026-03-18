/*
 * XREFs of ?GetUnoptimizedDirtyRects@CDirtyRegion@@IEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C08F4
 * Callers:
 *     ?PreCompute@CVisualTree@@IEAAJXZ @ 0x180099168 (-PreCompute@CVisualTree@@IEAAJXZ.c)
 *     ?GetUnoptimizedBounds@CDirtyRegion@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800C088C (-GetUnoptimizedBounds@CDirtyRegion@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CDirtyRegion::GetUnoptimizedDirtyRects(__int64 a1, _QWORD *a2)
{
  if ( *(_BYTE *)(a1 + 4456) )
  {
    *a2 = 1LL;
    a2[1] = a1 + 4436;
    if ( a1 == -4436 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
  }
  else
  {
    *a2 = 8LL;
    a2[1] = a1 + 1600;
  }
  return a2;
}
