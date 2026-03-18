/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple__anonymous_namespace_::AnimationId_const_&__std::tuple____ @ 0x1800CC130
 * Callers:
 *     std::map__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const_&_ @ 0x1800CC094 (std--map__anonymous_namespace_--AnimationId_unsigned_int_A0xd209ef2d--AnimationId--LessThan_std-.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1800CC1B8 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0xd20_ea_1800CC1B8.c)
 */

__int64 __fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::emplace_hint_std::piecewise_construct_t_const___std::tuple__anonymous_namespace_::AnimationId_const____std::tuple____(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int128 **a5)
{
  __int64 v5; // rdi
  int v6; // esi
  __int64 v9; // rax
  __int128 v10; // xmm0

  v5 = *(_QWORD *)(a1 + 8);
  v6 = a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  v10 = **a5;
  *(_DWORD *)(v9 + 48) = 0;
  *(_OWORD *)(v9 + 32) = v10;
  *(_QWORD *)v9 = v5;
  *(_QWORD *)(v9 + 8) = v5;
  *(_QWORD *)(v9 + 16) = v5;
  *(_WORD *)(v9 + 24) = 0;
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______(
    v6,
    a2,
    a3,
    v9 + 32,
    v9);
  return a2;
}
