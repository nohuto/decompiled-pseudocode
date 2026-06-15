/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801352A8
 * Callers:
 *     _std::list_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__wistd::unique_ptr_AtmosCheck::EndpointSpecificSpatialTechInfo_[0]_wistd::default_delete_AtmosCheck::EndpointSpecificSpatialTechInfo_[0]______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__wistd::unique_ptr_AtmosCheck::EndpointSpecificSpatialTechInfo_[0]_wistd::default_delete_AtmosCheck::EndpointSpecificSpatialTechInfo_[0]_________::_Insert_unsigned_short_const___&_wistd::unique_ptr_AtmosCheck::EndpointSpecificSpatialTechInfo_[0]_wistd::default_delete_AtmosCheck::EndpointSpecificSpatialTechInfo_[0]______::_1_::dtor$0 @ 0x18007CC92 (_std--list_std--pair_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x38);
}
