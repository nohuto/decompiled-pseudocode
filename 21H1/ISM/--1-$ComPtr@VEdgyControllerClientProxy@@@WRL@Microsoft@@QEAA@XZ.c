/*
 * XREFs of ??1?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180177500
 * Callers:
 *     _std::vector_Edge_std::allocator_Edge___::_Emplace_reallocate_Edge_const_&__::_1_::dtor$18 @ 0x1801788F9 (_std--vector_Edge_std--allocator_Edge___--_Emplace_reallocate_Edge_const_-__--_1_--dtor$18.c)
 *     _std::vector_Edge_std::allocator_Edge___::emplace_back_Edge_const_&__::_1_::dtor$8 @ 0x180178AC0 (_std--vector_Edge_std--allocator_Edge___--emplace_back_Edge_const_-__--_1_--dtor$8.c)
 *     _Edge::Edge_::_1_::dtor$1 @ 0x180178BF9 (_Edge--Edge_--_1_--dtor$1.c)
 *     _Edge::Edge_::_1_::dtor$1_0 @ 0x180178C8D (_Edge--Edge_--_1_--dtor$1_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::~ComPtr<EdgyControllerClientProxy>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(a1);
}
