/*
 * XREFs of ??1SystemContextProvider@@MEAA@XZ @ 0x180147504
 * Callers:
 *     ??_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z @ 0x180145630 (--_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z.c)
 *     _VirtualTouchpadContextProvider::Create_::_1_::dtor$2 @ 0x18014582C (_VirtualTouchpadContextProvider--Create_--_1_--dtor$2.c)
 *     ??_EDisplayOcclusionContextProvider@@UEAAPEAXI@Z @ 0x18014699C (--_EDisplayOcclusionContextProvider@@UEAAPEAXI@Z.c)
 *     ??1InputConfigContextProvider@@MEAA@XZ @ 0x1801471E4 (--1InputConfigContextProvider@@MEAA@XZ.c)
 *     ??_GSystemContextProvider@@MEAAPEAXI@Z @ 0x180147564 (--_GSystemContextProvider@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045414 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180096C74 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180098E14 (-clear@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_compare@GU-$.c)
 */

void __fastcall SystemContextProvider::~SystemContextProvider(SystemContextProvider *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &SystemContextProvider::`vftable'{for `ISystemContextProvider'};
  *((_QWORD *)this + 1) = &SystemContextProvider::`vftable'{for `RefCountedObject'};
  std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::clear((__int64)this + 24);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 48);
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v2,
    *((_QWORD ***)this + 4));
  std::_Deallocate<16,0>(*((void **)this + 4), (const struct std::nothrow_t *)0x18);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
