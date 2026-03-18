/*
 * XREFs of ?IsClosePointF@@YA_NAEBUMilPoint2F@@0@Z @ 0x1800B72E8
 * Callers:
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x1800B6188 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsClosePointF(const struct MilPoint2F *a1, const struct MilPoint2F *a2)
{
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - *(float *)a2) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 1) - *((float *)a2 + 1)) & _xmm) <= 0.0000011920929;
}
