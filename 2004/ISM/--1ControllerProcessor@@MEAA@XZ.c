/*
 * XREFs of ??1ControllerProcessor@@MEAA@XZ @ 0x18011F608
 * Callers:
 *     ??_GControllerProcessor@@MEAAPEAXI@Z @ 0x18011F9E8 (--_GControllerProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045464 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x180045540 (-equal_range@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180087F94 (-clear@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equa.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@@Z @ 0x1800880B8 (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180096D14 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800BBC1C (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ??1ManipulationInjector@@QEAA@XZ @ 0x1800C1AE0 (--1ManipulationInjector@@QEAA@XZ.c)
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x1801218F4 (-Remove@InjectionDevice@@QEAAJXZ.c)
 *     ?StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180122A0C (-StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180123740 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ControllerProcessor::~ControllerProcessor(ControllerProcessor *this)
{
  struct ControllerNavigationManager *ControllerNavigationManager; // rax
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx
  _QWORD *i; // rax
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &ControllerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ControllerProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &ControllerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 9) = &ControllerProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 10) = &ControllerProcessor::`vftable'{for `IManipulationInjectorClient'};
  if ( *((_DWORD *)this + 70) != 2 )
    ControllerProcessor::UpdateNavigationState(this, 2LL, 0LL);
  ControllerProcessor::StopAutoRepeatTimer(this);
  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  v14 = **((_DWORD **)this + 5);
  v3 = (_QWORD *)((char *)ControllerNavigationManager + 64);
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
    (_QWORD *)ControllerNavigationManager + 8,
    &v12,
    (const unsigned __int8 *)&v14);
  v4 = v12;
  for ( i = v12; i != v13; i = (_QWORD *)*i )
    ;
  v6 = (_QWORD *)v3[1];
  if ( v12 == (_QWORD *)*v6 && v13 == v6 )
  {
    std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::clear((__int64)v3);
  }
  else
  {
    while ( v4 != v13 )
    {
      v11 = (__int64)v4;
      v4 = (_QWORD *)*v4;
      std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::erase(
        v3,
        (__int64)&v14,
        v11);
    }
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 969);
  v7 = *((_QWORD *)this + 968);
  if ( v7 )
  {
    *((_QWORD *)this + 968) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 967);
  if ( v8 )
  {
    *((_QWORD *)this + 967) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 966);
  if ( v9 )
  {
    *((_QWORD *)this + 966) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 959);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 958);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 936);
  if ( *((_BYTE *)this + 7484) )
    InjectionDevice::Remove((ControllerProcessor *)((char *)this + 5928));
  if ( *((_BYTE *)this + 5924) )
    InjectionDevice::Remove((ControllerProcessor *)((char *)this + 4368));
  if ( *((_BYTE *)this + 4364) )
    InjectionDevice::Remove((ControllerProcessor *)((char *)this + 2808));
  if ( *((_BYTE *)this + 2804) )
    InjectionDevice::Remove((ControllerProcessor *)((char *)this + 1248));
  ManipulationInjector::~ManipulationInjector((ControllerProcessor *)((char *)this + 424));
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 37);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 36);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 112);
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v10,
    *((_QWORD ***)this + 12));
  std::_Deallocate<16,0>(*((void **)this + 12), (const struct std::nothrow_t *)0x18);
  NonPointerProcessor::~NonPointerProcessor(this);
}
