/*
 * XREFs of ??1DWMInputRouter@@MEAA@XZ @ 0x18013767C
 * Callers:
 *     _MPCInputRouter::MPCInputRouter_::_1_::dtor$0 @ 0x18004E5F5 (_MPCInputRouter--MPCInputRouter_--_1_--dtor$0.c)
 *     ??1MPCInputRouter@@EEAA@XZ @ 0x1800B7580 (--1MPCInputRouter@@EEAA@XZ.c)
 *     ??_EDWMInputRouter@@MEAAPEAXI@Z @ 0x180137BC0 (--_EDWMInputRouter@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011D64 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036AD4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180036B0C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037660 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045414 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180086DD4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180087EF4 (-clear@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equa.c)
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x180138DD8 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 */

void __fastcall DWMInputRouter::~DWMInputRouter(DWMInputRouter *this)
{
  __int64 *v2; // r12
  __int64 i; // r8
  __int64 v4; // rcx
  _QWORD **v5; // rcx
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD **v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rbx
  char v23; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &DWMInputRouter::`vftable'{for `ISystemInputRouter'};
  *((_QWORD *)this + 1) = &DWMInputRouter::`vftable'{for `ISystemInputRouterHitTest'};
  *((_QWORD *)this + 2) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTest'};
  *((_QWORD *)this + 3) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTestRequest'};
  *((_QWORD *)this + 4) = &DWMInputRouter::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 5) = &DWMInputRouter::`vftable'{for `IInputDeviceInfoStore'};
  *((_QWORD *)this + 6) = &DWMInputRouter::`vftable'{for `IInputDeliveryServerHost'};
  *((_QWORD *)this + 7) = &DWMInputRouter::`vftable'{for `ISupportedInputUpdateProvider'};
  *((_QWORD *)this + 8) = &DWMInputRouter::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  v2 = (__int64 *)((char *)this + 144);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 34);
  for ( i = **((_QWORD **)this + 11);
        i != *((_QWORD *)this + 11);
        i = *(_QWORD *)DWMInputRouter::RemoveTarget(this, &v23, i) )
  {
    ;
  }
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::clear((__int64)this + 192);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 19);
  v4 = *((_QWORD *)this + 38);
  if ( v4 )
  {
    *((_QWORD *)this + 38) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 728);
  v5 = (_QWORD **)*((_QWORD *)this + 89);
  *v5[1] = 0LL;
  v6 = *v5;
  if ( *v5 )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v6 + 7);
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x40);
      v6 = v7;
    }
    while ( v7 );
  }
  std::_Deallocate<16,0>(*((void **)this + 89), (const struct std::nothrow_t *)0x40);
  v9 = (void *)*((_QWORD *)this + 85);
  if ( v9 )
  {
    std::_Deallocate<16,0>(
      v9,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 87) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 85) = 0LL;
    *((_QWORD *)this + 86) = 0LL;
    *((_QWORD *)this + 87) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 82);
  if ( v10 )
  {
    std::_Deallocate<16,0>(
      v10,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 84) - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 82) = 0LL;
    *((_QWORD *)this + 83) = 0LL;
    *((_QWORD *)this + 84) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 79);
  if ( v11 )
  {
    std::_Deallocate<16,0>(
      v11,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 81) - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 79) = 0LL;
    *((_QWORD *)this + 80) = 0LL;
    *((_QWORD *)this + 81) = 0LL;
  }
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 560, v8);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 63,
    0LL,
    v12);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 62);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 60,
    0LL,
    v13);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 408, v14);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 44,
    0LL,
    v15);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 43);
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)this + 42);
  v16 = *((_QWORD *)this + 41);
  if ( v16 )
  {
    *((_QWORD *)this + 41) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = *((_QWORD *)this + 39);
  if ( v17 )
  {
    *((_QWORD *)this + 39) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = *((_QWORD *)this + 38);
  if ( v18 )
  {
    *((_QWORD *)this + 38) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 37);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 32);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 216);
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v19,
    *((_QWORD ***)this + 25));
  std::_Deallocate<16,0>(*((void **)this + 25), (const struct std::nothrow_t *)0x20);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(v2);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 104);
  v20 = (_QWORD **)*((_QWORD *)this + 11);
  *v20[1] = 0LL;
  v21 = *v20;
  if ( v21 )
  {
    do
    {
      v22 = (_QWORD *)*v21;
      std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)0x40);
      v21 = v22;
    }
    while ( v22 );
  }
  std::_Deallocate<16,0>(*((void **)this + 11), (const struct std::nothrow_t *)0x40);
  *((_QWORD *)this + 8) = &RefCountedObject::`vftable';
}
