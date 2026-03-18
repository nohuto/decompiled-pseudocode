/*
 * XREFs of ?GetDirtyRegion@CGenericInk@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z @ 0x1800F9C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct CRegion *__fastcall CGenericInk::GetDirtyRegion(CGenericInk *this, const struct D2D_SIZE_F *a2)
{
  return (CGenericInk *)((char *)this + 128);
}
