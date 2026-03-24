/*
 * XREFs of ?NotifyCurrentPropertyValues@CComponentTransform3D@@MEBAJI@Z @ 0x1800BDFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x1800BE2E8 (-NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV-$span@QEBUAnimatedProperty@.c)
 */

__int64 __fastcall CComponentTransform3D::NotifyCurrentPropertyValues(CComponentTransform3D *this)
{
  return CPropertyChangeResource::NotifyCurrentPropertyValuesImpl(this);
}
