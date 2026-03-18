/*
 * XREFs of ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180058FE0
 * Callers:
 *     ??1CBlurredBackdropCache@@QEAA@XZ @ 0x18003153C (--1CBlurredBackdropCache@@QEAA@XZ.c)
 *     ?reserve_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAPEAPEAVCBlurredBackdropCache@@_K0@Z @ 0x180058CF0 (-reserve_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBa.c)
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z @ 0x180058E54 (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z.c)
 *     ?RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x180058ED0 (-RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEBA_KXZ @ 0x180058F70 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?last@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180058FA8 (-last@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache.c)
 *     ?size@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@AEBA_KXZ @ 0x180059020 (-size@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@AEBA_KXZ.c)
 *     ?consume@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAAX_J@Z @ 0x180059114 (-consume@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAAX_J@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800592F8 (-clear_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBack.c)
 *     ?erase@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@@Z @ 0x180059378 (-erase@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCac.c)
 *     ??1?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAA@XZ @ 0x1800D47DC (--1-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAA@XZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(_QWORD *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*a1 & 3) == 0 )
    return (unsigned __int64)a1;
  if ( (*(_DWORD *)a1 & 3) != 1 )
  {
    if ( (*(_DWORD *)a1 & 3) == 2 )
      return 0LL;
    if ( (*(_DWORD *)a1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    return (unsigned __int64)a1;
  }
  return *a1 & 0xFFFFFFFFFFFFFFFCuLL;
}
