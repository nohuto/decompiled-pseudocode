/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0____std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______ @ 0x1800DA2D0
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x1800D9DF0 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x1800737B4 (-_Min@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@SAPEAU-$_Tree_node@_KPEAX@2@PEAU32@@Z.c)
 *     std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______ @ 0x1800DA378 (std--_Tree_node_std--pair__anonymous_namespace_--AnimationId_const__unsigned_int__void___--_Buyh.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_nodes_std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_tag_ @ 0x1800DA3A4 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0xd20_ea_1800DA3A4.c)
 */

__int64 __fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0____std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // r8
  __int64 v8; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 i; // rcx

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v5 = std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______();
  LOBYTE(v6) = a3;
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_nodes_std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Copy_tag_(
                                             a1,
                                             *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
                                             *(_QWORD *)(a1 + 8),
                                             v6);
  v7 = *(_QWORD **)(a1 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v8 = v7[1];
  if ( *(_BYTE *)(v8 + 25) )
  {
    *v7 = v7;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v10 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Min((_QWORD *)v8);
    *v11 = v10;
    v12 = *(_QWORD *)(a1 + 8);
    v13 = *(_QWORD *)(v12 + 8);
    for ( i = *(_QWORD *)(v13 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
      v13 = i;
    *(_QWORD *)(v12 + 16) = v13;
  }
  return a1;
}
