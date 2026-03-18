/*
 * XREFs of std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______ @ 0x1800786D8
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800751DC (_anonymous_namespace_--SendFramesReport.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Move_assign @ 0x1800780FC (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800780FC.c)
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x1800785EC (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______ @ 0x1800786D8 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_ea_1800786D8.c)
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x1800EEC44 (_anonymous_namespace_--FramesReport--_FramesReport.c)
 * Callees:
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______ @ 0x1800786D8 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_ea_1800786D8.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = std::_Deallocate<16,0>(v6, 56LL) )
  {
    std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______(
      a1,
      a2,
      i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
