/*
 * XREFs of ?SupportsPrivateRoundedRectGeometry@CD2DFactory@@QEBA_NXZ @ 0x180103770
 * Callers:
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x18006C96C (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD2DFactory::SupportsPrivateRoundedRectGeometry(CD2DFactory *this)
{
  return qword_1803D75A0 != 0;
}
