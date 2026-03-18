/*
 * XREFs of ?erase@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UFrameData@CDrawListEntry@@@2@V?$basic_iterator@$$CBUFrameData@CDrawListEntry@@@2@@Z @ 0x1801A2020
 * Callers:
 *     ?EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x1801A14B0 (-EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z.c)
 *     ?OnEmitGeometryComplete@CDrawListEntry@@UEBAXXZ @ 0x1801A1BD0 (-OnEmitGeometryComplete@CDrawListEntry@@UEBAXXZ.c)
 *     ?pop_back@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801A208C (-pop_back@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEntry@@$.c)
 *     ?EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x180265F20 (-EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntr.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18001BA94 (-clear_region@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEntr.c)
 */

_QWORD *__fastcall detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::erase(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rbx

  v5 = (*a3 - *a1) / 76;
  detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::clear_region(
    a1,
    v5,
    1LL);
  *a2 = *a1 + 76 * v5;
  return a2;
}
