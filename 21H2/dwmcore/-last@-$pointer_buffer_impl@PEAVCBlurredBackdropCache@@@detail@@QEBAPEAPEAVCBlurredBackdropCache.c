/*
 * XREFs of ?last@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180058FA8
 * Callers:
 *     ??1CBlurredBackdropCache@@QEAA@XZ @ 0x18003153C (--1CBlurredBackdropCache@@QEAA@XZ.c)
 *     ?reserve_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAPEAPEAVCBlurredBackdropCache@@_K0@Z @ 0x180058CF0 (-reserve_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBa.c)
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z @ 0x180058E54 (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z.c)
 *     ?RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x180058ED0 (-RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEBA_KXZ @ 0x180058F70 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180058FE0 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ?size@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@AEBA_KXZ @ 0x180059020 (-size@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@AEBA_KXZ.c)
 */

__int64 __fastcall detail::pointer_buffer_impl<CBlurredBackdropCache *>::last(__int64 a1)
{
  __int64 v2; // rbx

  v2 = 8 * detail::pointer_buffer_impl<CBlurredBackdropCache *>::size();
  return v2 + detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
}
