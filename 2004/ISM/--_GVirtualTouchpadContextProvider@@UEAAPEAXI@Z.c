/*
 * XREFs of ??_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z @ 0x1801456C0
 * Callers:
 *     ??_EVirtualTouchpadContextProvider@@W7EAAPEAXI@Z @ 0x18004C750 (--_EVirtualTouchpadContextProvider@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045464 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800645C8 (--1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800BBFC8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@std@@@-$_L.c)
 *     ??1SystemContextProvider@@MEAA@XZ @ 0x180147594 (--1SystemContextProvider@@MEAA@XZ.c)
 */

VirtualTouchpadContextProvider *__fastcall VirtualTouchpadContextProvider::`scalar deleting destructor'(
        VirtualTouchpadContextProvider *this,
        char a2)
{
  __int64 v4; // rcx

  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 152);
  std::_List_node<std::pair<unsigned __int64 const,tagRECT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,tagRECT>,void *>>>(
    v4,
    *((_QWORD ***)this + 17));
  std::_Deallocate<16,0>(*((void **)this + 17), (const struct std::nothrow_t *)0x28);
  Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  SystemContextProvider::~SystemContextProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xC0);
    else
      free(this);
  }
  return this;
}
