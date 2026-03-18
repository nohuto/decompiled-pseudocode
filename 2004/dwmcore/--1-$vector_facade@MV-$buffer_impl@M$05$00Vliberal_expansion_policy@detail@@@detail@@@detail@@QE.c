/*
 * XREFs of ??1?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180084AE8
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EC7F0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 * Callees:
 *     ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180084AC0 (-clear@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 */

void __fastcall detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
        _QWORD *a1)
{
  void **v1; // rcx
  void *v2; // r8
  bool v3; // zf

  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(a1);
  v2 = *v1;
  v3 = *v1 == v1 + 3;
  *v1 = 0LL;
  if ( v3 )
    v2 = 0LL;
  operator delete(v2);
}
