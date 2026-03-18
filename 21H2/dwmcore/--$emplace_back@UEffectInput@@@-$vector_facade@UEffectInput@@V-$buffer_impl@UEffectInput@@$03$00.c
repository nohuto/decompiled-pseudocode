/*
 * XREFs of ??$emplace_back@UEffectInput@@@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUEffectInput@@@Z @ 0x180057F30
 * Callers:
 *     ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z @ 0x180057B58 (-MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z.c)
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x180058738 (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180057FC0 (--0EffectInput@@QEAA@AEBU0@@Z.c)
 *     ?reserve_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUEffectInput@@_K0@Z @ 0x180058098 (-reserve_region@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expans.c)
 */

__int64 __fastcall detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::emplace_back<EffectInput>(
        _QWORD *a1,
        const struct EffectInput *a2)
{
  const struct EffectInput *v4; // rdi
  EffectInput *v5; // rax
  _BYTE v7[112]; // [rsp+20h] [rbp-78h] BYREF

  v4 = EffectInput::EffectInput((EffectInput *)v7, a2);
  v5 = (EffectInput *)detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::reserve_region(
                        a1,
                        0x4EC4EC4EC4EC4EC5LL * ((__int64)(a1[1] - *a1) >> 3));
  EffectInput::EffectInput(v5, v4);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v4 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v4);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)a2 + 8);
  return wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)a2);
}
