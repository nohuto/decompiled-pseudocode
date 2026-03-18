/*
 * XREFs of ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x18000DB78
 * Callers:
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180010030 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x1800103C8 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 */

bool __fastcall CComponentTransform2D::IsIdentity(CComponentTransform2D *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((float *)this + 38) == 0.0
    && *((float *)this + 39) == 0.0
    && *((float *)this + 44) == 1.0
    && *((float *)this + 45) == 1.0
    && *((float *)this + 46) == 0.0
    && *((float *)this + 42) == 0.0
    && *((float *)this + 43) == 0.0 )
  {
    return D2D1::Matrix3x2F::IsIdentity((CComponentTransform2D *)((char *)this + 188));
  }
  return v1;
}
