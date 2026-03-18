/*
 * XREFs of std::_Uninitialized_move_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn______std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn______std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______ @ 0x18002A54C
 * Callers:
 *     std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::_Emplace_reallocate_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____ @ 0x18002ADE0 (std--vector_std--unique_ptr__anonymous_namespace_--FramesReport--ResourcesForPsn_st_ea_18002ADE0.c)
 * Callees:
 *     std::_Destroy_range_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______ @ 0x18002A194 (std--_Destroy_range_std--allocator_std--unique_ptr__anonymous_namespace_--FramesReport--Resource.c)
 */

void **__fastcall std::_Uninitialized_move_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn______std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn______std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______(
        void **a1,
        void **a2,
        void **a3)
{
  void *v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______(
    a3,
    a3);
  return a3;
}
