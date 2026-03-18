/*
 * XREFs of std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void________std::piecewise_construct_t_const_&_std::tuple__anonymous_namespace_::AnimationId_const_&__std::tuple____ @ 0x1800E5F90
 * Callers:
 *     std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const_&_ @ 0x1800E5D48 (std--map__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--AnimationId--LessThan_std-.c)
 * Callees:
 *     std::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______ @ 0x1800E6074 (std--_Tree_temp_node_alloc_std--allocator_std--_Tree_node_std--pair__anonymous_namespace_--Anima.c)
 */

__int64 __fastcall std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void________std::piecewise_construct_t_const___std::tuple__anonymous_namespace_::AnimationId_const____std::tuple____(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 **a5)
{
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int64 v9; // rcx

  std::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______::_Tree_temp_node_alloc_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______();
  v7 = *(_QWORD *)(a1 + 8);
  v8 = **a5;
  *(_DWORD *)(v7 + 48) = 0;
  v9 = 0LL;
  *(_OWORD *)(v7 + 32) = v8;
  **(_QWORD **)(a1 + 8) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = a3;
  do
  {
    *(_BYTE *)(v9 + *(_QWORD *)(a1 + 8) + 24) = 0;
    ++v9;
  }
  while ( v9 < 2 );
  return a1;
}
