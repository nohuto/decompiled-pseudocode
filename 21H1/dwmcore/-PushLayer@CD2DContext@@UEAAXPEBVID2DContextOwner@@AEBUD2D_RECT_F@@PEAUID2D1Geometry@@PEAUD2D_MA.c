/*
 * XREFs of ?PushLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800A33D0
 * Callers:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800A32B0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18006A93C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18006ADE8 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800A34D4 (-PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANT.c)
 */

void __fastcall CD2DContext::PushLayer(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        struct ID2D1Geometry *a4,
        struct D2D_MATRIX_3X2_F *a5,
        float a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_LAYER_OPTIONS1 a8,
        enum D2D1_PRIMITIVE_BLEND a9)
{
  int v12; // eax
  CD2DTarget *v13; // rdi

  CD2DContext::FlushDrawList(this);
  v12 = *((_DWORD *)this + 100);
  v13 = 0LL;
  if ( v12 )
    v13 = *(CD2DTarget **)(*((_QWORD *)this + 47) + 8LL * (unsigned int)(v12 - 1));
  CD2DContext::EnsureBeginDraw(this);
  CD2DTarget::PushLayer(v13, a3, a4, a5, a6, a7, a8, a9);
}
