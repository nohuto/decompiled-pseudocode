/*
 * XREFs of ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x18000A694
 * Callers:
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x1800082E8 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x1800EDCF4 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z.c)
 *     ?AddNineGrid_before_33322639@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x1800EE448 (-AddNineGrid_before_33322639@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Insets::IsEmpty(const struct Insets *a1)
{
  return COERCE_FLOAT(*(_DWORD *)a1 & _xmm) < 0.0000011920929
      && COERCE_FLOAT(*((_DWORD *)a1 + 1) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(*((_DWORD *)a1 + 2) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(*((_DWORD *)a1 + 3) & _xmm) < 0.0000011920929;
}
