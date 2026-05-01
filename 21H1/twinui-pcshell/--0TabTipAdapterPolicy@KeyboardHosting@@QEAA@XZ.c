/*
 * XREFs of ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x18033930C
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@@Z @ 0x180336B58 (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180039524 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180042A8C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@1@@Z @ 0x180338EE4 (--0-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equ.c)
 *     ??0?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@U?$pair@$$CBI_N@std@@@1@@Z @ 0x180338F9C (--0-$_Hash@V-$_Umap_traits@I_NV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$allocat.c)
 */

// Hidden C++ exception states: #wind=8
KeyboardHosting::TabTipAdapterPolicy *__fastcall KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy(
        KeyboardHosting::TabTipAdapterPolicy *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  char *v7; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::FtmBase::FtmBase((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 24));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `KeyboardHosting::IDesktopKeyboardHostingPolicy'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `KeyboardHosting::IDesktopKeyboardHostingPolicy'};
  *((_QWORD *)this + 3) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v7 = (char *)this + 72;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 9) = v2;
  v7 = (char *)this + 88;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 11) = v3;
  *((_DWORD *)this + 26) = 1000;
  *((_DWORD *)this + 27) = 100000;
  *((_QWORD *)this + 14) = L"LastTipXPositionOnScreen";
  *((_QWORD *)this + 15) = L"LastTipYPositionOnScreen";
  *((_QWORD *)this + 16) = L"LastTipXPositionIsPositive";
  *((_QWORD *)this + 17) = L"LastTipYPositionIsPositive";
  memset_0((char *)this + 144, 0, 0x40uLL);
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_OWORD *)this + 15) = 0LL;
  *((_OWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 68) = 100;
  *((_QWORD *)this + 35) = 0LL;
  *((_OWORD *)this + 18) = 0LL;
  *((_OWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 80) = 100;
  *((_QWORD *)this + 41) = 0LL;
  *((_OWORD *)this + 21) = 0LL;
  *((_OWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 92) = 100;
  HIDWORD(v7) = ((unsigned __int64)this + 376) >> 32;
  LODWORD(v7) = 0;
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>(
    (__int64)this + 376,
    &v7);
  *((_QWORD *)this + 55) = 0LL;
  *((_BYTE *)this + 448) = 0;
  *(_QWORD *)((char *)this + 452) = 0LL;
  *((_BYTE *)this + 460) = 0;
  v7 = (char *)this + 464;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 58) = v4;
  v7 = (char *)this + 480;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 60) = v5;
  *((_DWORD *)this + 124) = -1;
  *(_QWORD *)((char *)this + 500) = 0LL;
  *((_DWORD *)this + 127) = 0;
  *((_WORD *)this + 256) = 0;
  *(_QWORD *)((char *)this + 516) = 0LL;
  HIDWORD(v7) = ((unsigned __int64)this + 528) >> 32;
  LODWORD(v7) = 0;
  std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>(
    (__int64)this + 528,
    &v7);
  *((_BYTE *)this + 592) = 0;
  *(_OWORD *)((char *)this + 596) = 0LL;
  *((_DWORD *)this + 153) = 0;
  return this;
}
