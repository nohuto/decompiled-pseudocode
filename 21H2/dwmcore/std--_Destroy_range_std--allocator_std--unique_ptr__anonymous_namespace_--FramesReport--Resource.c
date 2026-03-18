/*
 * XREFs of std::_Destroy_range_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______ @ 0x18005F7C0
 * Callers:
 *     std::_Uninitialized_move_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn______std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______ @ 0x18005F70C (std--_Uninitialized_move_std--unique_ptr__anonymous_namespace_--FramesReport--ResourcesForPsn_st.c)
 *     std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::_Change_array @ 0x18005F74C (std--vector_std--unique_ptr__anonymous_namespace_--FramesReport--ResourcesForPsn_st_ea_18005F74C.c)
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x1800EEC44 (_anonymous_namespace_--FramesReport--_FramesReport.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Destroy_range_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______(
        void **a1,
        void **a2)
{
  void **v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        operator delete(*v3, 0x70uLL);
      ++v3;
    }
    while ( v3 != a2 );
  }
}
