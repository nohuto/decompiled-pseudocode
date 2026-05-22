/*
 * XREFs of ??1Win32kInterop@@UEAA@XZ @ 0x1800AE89C
 * Callers:
 *     ??_EWin32kInterop@@UEAAPEAXI@Z @ 0x1800AEE1C (--_EWin32kInterop@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A64 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180036A9C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18003D204 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045464 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??1?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAA@XZ @ 0x1800AE360 (--1-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32kInterop::~Win32kInterop(Win32kInterop *this, __int64 a2)
{
  wil::details **v3; // rbx
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  const struct std::nothrow_t *v19; // rdx
  void *v20; // rcx
  _QWORD **v21; // rcx
  _QWORD *v22; // rbx
  _QWORD *v23; // rsi
  __int64 v24; // rcx
  _QWORD **v25; // rcx
  _QWORD *v26; // rcx
  _QWORD *v27; // rbx
  _QWORD **v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // rbx
  __int64 v31; // rcx

  v3 = (wil::details **)((char *)this + 1496);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 1560, a2);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    v3 + 1,
    0LL,
    v4);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)v3);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 1424, v5);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 171,
    0LL,
    v6);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 170);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 1288, v7);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 154,
    0LL,
    v8);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 153);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 1152, v9);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 137,
    0LL,
    v10);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 136);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 1016, v11);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 120,
    0LL,
    v12);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 119);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 880, v13);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 103,
    0LL,
    v14);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 102);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 744, v15);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 86,
    0LL,
    v16);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 85);
  KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>::~KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>(
    (__int64)this + 544,
    v17);
  KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>::~KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>(
    (__int64)this + 408,
    v18);
  `eh vector destructor iterator'(
    (char *)this + 344,
    8LL,
    8LL,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>::~ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 42);
  if ( *((_QWORD *)this + 38) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 160LL))(*((_QWORD *)this + 37));
  if ( *((_QWORD *)this + 40) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 160LL))(*((_QWORD *)this + 37));
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 39);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 37);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 36);
  v20 = (void *)*((_QWORD *)this + 34);
  if ( v20 )
    operator delete(v20, v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 32);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 216);
  v21 = (_QWORD **)*((_QWORD *)this + 25);
  *v21[1] = 0LL;
  v22 = *v21;
  if ( *v21 )
  {
    do
    {
      v23 = (_QWORD *)*v22;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v22 + 4);
      v24 = v22[3];
      if ( v24 )
      {
        v22[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)0x30);
      v22 = v23;
    }
    while ( v23 );
  }
  std::_Deallocate<16,0>(*((void **)this + 25), (const struct std::nothrow_t *)0x30);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 152);
  v25 = (_QWORD **)*((_QWORD *)this + 17);
  *v25[1] = 0LL;
  v26 = *v25;
  if ( v26 )
  {
    do
    {
      v27 = (_QWORD *)*v26;
      std::_Deallocate<16,0>(v26, (const struct std::nothrow_t *)0x20);
      v26 = v27;
    }
    while ( v27 );
  }
  std::_Deallocate<16,0>(*((void **)this + 17), (const struct std::nothrow_t *)0x20);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 88);
  v28 = (_QWORD **)*((_QWORD *)this + 9);
  *v28[1] = 0LL;
  v29 = *v28;
  if ( v29 )
  {
    do
    {
      v30 = (_QWORD *)*v29;
      std::_Deallocate<16,0>(v29, (const struct std::nothrow_t *)0x20);
      v29 = v30;
    }
    while ( v30 );
  }
  std::_Deallocate<16,0>(*((void **)this + 9), (const struct std::nothrow_t *)0x20);
  v31 = *((_QWORD *)this + 7);
  if ( v31 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
