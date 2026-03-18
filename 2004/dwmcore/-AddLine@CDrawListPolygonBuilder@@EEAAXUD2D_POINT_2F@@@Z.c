/*
 * XREFs of ?AddLine@CDrawListPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z @ 0x18019DFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?reserve_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_POINT_2F@@_K0@Z @ 0x18019EE28 (-reserve_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_ex.c)
 */

void __fastcall CDrawListPolygonBuilder::AddLine(CDrawListPolygonBuilder *this, struct D2D_POINT_2F a2)
{
  *(struct D2D_POINT_2F *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                            (char *)this + 8,
                            (__int64)(*((_QWORD *)this + 2) - *((_QWORD *)this + 1)) >> 3,
                            1LL) = a2;
}
