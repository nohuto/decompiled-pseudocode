/*
 * XREFs of _GetDisplayNode_::_1_::dtor$1 @ 0x140041D9B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall GetDisplayNode_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CDisplayNode>::~CAutoPtr<CDisplayNode>((CDisplayNode **)(a2 + 96), a2);
}
