/*
 * XREFs of ??1Variant@wil@@QEAA@XZ @ 0x1803808B0
 * Callers:
 *     _CoverWindowAcc::SetBoundingRect_::_1_::dtor$0 @ 0x18041BC90 (_CoverWindowAcc--SetBoundingRect_--_1_--dtor$0.c)
 *     _CoverWindowAcc::SetBoundingRect_::_1_::dtor$1 @ 0x18041BC9C (_CoverWindowAcc--SetBoundingRect_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall wil::Variant::~Variant(VARIANTARG *pvarg)
{
  return VariantClear(pvarg);
}
