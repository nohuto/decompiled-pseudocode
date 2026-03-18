/*
 * XREFs of _anonymous_namespace_::FramesReport::_FramesReport @ 0x180087834
 * Callers:
 *     _anonymous_namespace_::SendFramesReports @ 0x180087720 (_anonymous_namespace_--SendFramesReports.c)
 *     _anonymous_namespace_::State::_State @ 0x180154030 (_anonymous_namespace_--State--_State.c)
 * Callees:
 *     std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x180029098 (std--_Destroy_range_std--allocator__anonymous_namespace_--FrameSequenceInfo___.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______ @ 0x1800291C0 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_const__std--.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@@Z @ 0x180087934 (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 *     std::_Destroy_range_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______ @ 0x180095960 (std--_Destroy_range_std--allocator_std--unique_ptr__anonymous_namespace_--FramesReport--Resource.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall anonymous_namespace_::FramesReport::_FramesReport(__int64 *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rbx

  v1 = a1 + 20;
  std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Erase_tree<std::allocator<std::_Tree_node<std::wstring,void *>>>(
    a1 + 20,
    a1 + 20,
    *(_QWORD *)(a1[20] + 8));
  std::_Deallocate<16,0>(*v1, 64LL);
  std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______(
    (__int64)(a1 + 18),
    (__int64)(a1 + 18),
    *(__int64 **)(a1[18] + 8));
  result = std::_Deallocate<16,0>(a1[18], 56LL);
  v4 = a1[14];
  if ( v4 )
  {
    std::_Destroy_range_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______(
      a1[14],
      a1[15]);
    result = std::_Deallocate<16,0>(v4, (a1[16] - v4) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[14] = 0LL;
    a1[15] = 0LL;
    a1[16] = 0LL;
  }
  v5 = a1[2];
  if ( v5 )
  {
    std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___(a1[2], a1[3]);
    result = std::_Deallocate<16,0>(v5, 480 * ((a1[4] - v5) / 480));
    a1[2] = 0LL;
    a1[3] = 0LL;
    a1[4] = 0LL;
  }
  return result;
}
