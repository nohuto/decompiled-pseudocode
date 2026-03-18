/*
 * XREFs of ?CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z @ 0x18000A1B4
 * Callers:
 *     ?PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180009ED0 (-PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x180009F64 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 * Callees:
 *     ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x18000A1FC (-IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ.c)
 */

char __fastcall CDropShadow::ShadowIntermediates::CanUseFastShadow(
        CDropShadow::ShadowIntermediates *this,
        const struct D2D_SIZE_F *a2,
        float a3)
{
  bool IsRectangularShadow; // al
  char v5; // cl

  IsRectangularShadow = CDropShadow::ShadowIntermediates::IsRectangularShadow(this);
  v5 = 0;
  if ( IsRectangularShadow )
    return (float)(fminf(a2->width, a2->height) * 0.5) >= a3;
  return v5;
}
