/*
 * XREFs of ??0CD2DLayer@@IEAA@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18006F548
 * Callers:
 *     ?Create@CD2DLayer@@SAJAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@PEAPEAV1@@Z @ 0x18006F49C (-Create@CD2DLayer@@SAJAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x18006F61C (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 */

CD2DLayer *__fastcall CD2DLayer::CD2DLayer(
        CD2DLayer *this,
        const struct D2D_RECT_F *a2,
        struct ID2D1Geometry *a3,
        const struct D2D_MATRIX_3X2_F *a4,
        float a5,
        enum D2D1_ANTIALIAS_MODE a6,
        enum D2D1_LAYER_OPTIONS1 a7,
        enum D2D1_PRIMITIVE_BLEND a8)
{
  __int128 v8; // xmm0

  v8 = (__int128)*a2;
  *(_QWORD *)this = &CD2DLayer::`vftable';
  *(_OWORD *)((char *)this + 8) = v8;
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    (char *)this + 24,
    a3);
  *((_DWORD *)this + 16) = a6;
  *((_DWORD *)this + 17) = a7;
  *((_DWORD *)this + 18) = a8;
  *((float *)this + 15) = a5;
  *((_BYTE *)this + 56) = 0;
  if ( a4 )
  {
    *((_OWORD *)this + 2) = *(_OWORD *)&a4->m11;
    *((_QWORD *)this + 6) = *(_QWORD *)&a4->m[2][0];
    *((_BYTE *)this + 56) = 1;
  }
  return this;
}
