/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0____std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______ @ 0x180048DB0
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x18004A0E0 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 * Callees:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_nodes_std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_tag_ @ 0x180048CE8 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0xd20_ea_180048CE8.c)
 *     std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______ @ 0x1800498AC (std--_Tree_node_std--pair__anonymous_namespace_--AnimationId_const__unsigned_int__void___--_Buyh.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x18008683C (-_Min@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@SAPEAU-$_Tree_node@_KPEAX@2@PEAU32@@Z.c)
 */

__int64 __fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0____std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______(
        __int64 a1,
        __int64 a2,
        char a3)
{
  _QWORD *v5; // r8
  __int64 v7; // rax
  __int64 *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 i; // rcx

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______();
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_nodes_std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_tag_(
                                             a1,
                                             *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
                                             *(_QWORD *)(a1 + 8),
                                             a3);
  v5 = *(_QWORD **)(a1 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  if ( *(_BYTE *)(v5[1] + 25LL) )
  {
    *v5 = v5;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v7 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Min();
    *v8 = v7;
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)(v9 + 8);
    for ( i = *(_QWORD *)(v10 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
      v10 = i;
    *(_QWORD *)(v9 + 16) = v10;
  }
  return a1;
}
