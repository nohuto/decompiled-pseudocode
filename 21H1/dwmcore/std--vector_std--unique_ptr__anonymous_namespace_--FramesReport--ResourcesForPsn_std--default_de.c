/*
 * XREFs of std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::emplace_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____ @ 0x18002AD20
 * Callers:
 *     _anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn @ 0x18002AB64 (_anonymous_namespace_--FramesReport--UpdateResourceCountersForPsn.c)
 * Callees:
 *     std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::_Emplace_reallocate_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____ @ 0x18002ADE0 (std--vector_std--unique_ptr__anonymous_namespace_--FramesReport--ResourcesForPsn_st_ea_18002ADE0.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn___::operator_ @ 0x1800CBAC0 (std--unique_ptr__anonymous_namespace_--FramesReport--ResourcesForPsn_std--default_delete__anonym.c)
 */

_QWORD *__fastcall std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::emplace_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        void **a4)
{
  _QWORD *v4; // rsi
  void *v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD **)(a1 + 16) == v4 )
  {
    *a2 = std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::_Emplace_reallocate_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____(
            a1,
            a3,
            a4);
  }
  else
  {
    v8 = *a4;
    *a4 = 0LL;
    if ( a3 == v4 )
    {
      *v4 = v8;
      *(_QWORD *)(a1 + 8) += 8LL;
    }
    else
    {
      v9 = v4 - 1;
      v11 = v8;
      v10 = *(v4 - 1);
      *(v4 - 1) = 0LL;
      *v4 = v10;
      *(_QWORD *)(a1 + 8) += 8LL;
      if ( v4 - 1 != a3 )
      {
        do
        {
          --v9;
          std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn___::operator_(
            v9 + 1,
            v9);
        }
        while ( v9 != a3 );
      }
      std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn___::operator_(
        a3,
        &v11);
      if ( v11 )
        operator delete(v11, 0x70uLL);
    }
    *a2 = a3;
  }
  return a2;
}
