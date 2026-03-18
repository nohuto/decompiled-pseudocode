/*
 * XREFs of ??$emplace_back@VMatrix3x2F@D2D1@@@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXVMatrix3x2F@D2D1@@@Z @ 0x18026A1E8
 * Callers:
 *     ?Clear@CMatrixStack2D@@QEAAXXZ @ 0x18026A3D8 (-Clear@CMatrixStack2D@@QEAAXXZ.c)
 *     ?Push@CMatrixStack2D@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18026A418 (-Push@CMatrixStack2D@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVMatrix3x2F@D2D1@@_K0@Z @ 0x18026A5B8 (-reserve_region@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vlibera.c)
 */

__int64 __fastcall detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::emplace_back<D2D1::Matrix3x2F>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // xmm1_8

  result = detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::reserve_region(
             a1,
             (a1[1] - *a1) / 24LL);
  v4 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)result = *(_OWORD *)a2;
  *(_QWORD *)(result + 16) = v4;
  return result;
}
