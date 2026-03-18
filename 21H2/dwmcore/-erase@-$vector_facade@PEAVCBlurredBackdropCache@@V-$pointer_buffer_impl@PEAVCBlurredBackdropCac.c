/*
 * XREFs of ?erase@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@@Z @ 0x180059378
 * Callers:
 *     ??1CBlurredBackdropCache@@QEAA@XZ @ 0x18003153C (--1CBlurredBackdropCache@@QEAA@XZ.c)
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z @ 0x180058E54 (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180058FE0 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ?clear_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800592F8 (-clear_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBack.c)
 */

unsigned __int64 *__fastcall detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::erase(
        _QWORD *a1,
        unsigned __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdi
  unsigned __int64 v7; // rcx
  unsigned __int64 *result; // rax

  v3 = *a3;
  v6 = (__int64)(v3 - detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1)) >> 3;
  detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::clear_region(
    a1,
    v6,
    1LL);
  v7 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) + 8 * v6;
  result = a2;
  *a2 = v7;
  return result;
}
