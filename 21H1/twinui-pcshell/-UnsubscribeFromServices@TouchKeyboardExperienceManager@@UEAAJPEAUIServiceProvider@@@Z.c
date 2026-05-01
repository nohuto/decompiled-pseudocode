/*
 * XREFs of ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180333200
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009BC00 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923@@@details@wil@@QEAA_NXZ @ 0x1800A481C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923@@.c)
 *     ??$?9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIApplicationViewCollection@@@01@$$T@Z @ 0x1800C0B14 (--$-9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIApplicationViewCollection@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801128D0 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18011D420 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18011DF28 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180332FB4 (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180333118 (-UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TouchKeyboardExperienceManager::UnsubscribeFromServices(
        TouchKeyboardExperienceManager *this,
        struct IServiceProvider *a2)
{
  unsigned int v3; // r13d
  __int64 v4; // rbx
  __int64 v5; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rdx
  bool v12; // si
  int v14; // [rsp+20h] [rbp-40h]
  __int64 v15; // [rsp+28h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  int v21; // [rsp+A0h] [rbp+40h]
  int v22; // [rsp+B0h] [rbp+50h]
  __int64 v23; // [rsp+B8h] [rbp+58h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v3 = 0;
  v4 = 0LL;
  v15 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 328);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 328));
  v19[1] = (__int64)v6;
  Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(&v17, (__int64 *)this + 50);
  v22 = *((_DWORD *)this + 54);
  Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(&v16, (__int64 *)this + 37);
  v21 = *((_DWORD *)this + 55);
  v7 = *((_QWORD *)this + 39);
  if ( v7 )
  {
    v23 = *((_QWORD *)this + 39);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v23);
    v4 = v7;
    v23 = 0LL;
    v15 = v7;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  }
  LODWORD(v23) = *((_DWORD *)this + 59);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923>::GetImpl'::`2'::impl) )
    v3 = *((_DWORD *)this + 60);
  v14 = *((_DWORD *)this + 61);
  v8 = *((_QWORD *)this + 40);
  if ( v8 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)this + 40));
    v5 = v8;
    v8 = 0LL;
    v19[0] = 0LL;
    v18 = v5;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
  }
  *((_QWORD *)this + 26) = v8;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 50);
  *((_DWORD *)this + 54) = v8;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 37);
  *((_DWORD *)this + 55) = v8;
  *((_QWORD *)this + 28) = v8;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
  *((_DWORD *)this + 59) = v8;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923>::GetImpl'::`2'::impl) )
    *((_DWORD *)this + 60) = v8;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
  *((_DWORD *)this + 61) = 0;
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( v16 && v21 )
    (*(void (**)(void))(*(_QWORD *)v16 + 48LL))();
  if ( v17 && v22 )
    (*(void (**)(void))(*(_QWORD *)v17 + 48LL))();
  v9 = TouchKeyboardExperienceManager::UnregisterForViewEvents((TouchKeyboardExperienceManager *)((char *)this - 48));
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 1876LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_37;
  }
  if ( *((_QWORD *)this + 28) )
    UnregisterScaleChangeEvent();
  SmartCookie::Unregister((TouchKeyboardExperienceManager *)((char *)this + 496));
  v12 = Microsoft::WRL::operator!=<IApplicationViewCollection>(&v15);
  if ( v12 && (_DWORD)v23 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, (unsigned int)v23);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923>::GetImpl'::`2'::impl)
    && v12
    && v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, v3);
  }
  v9 = TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges((TouchKeyboardExperienceManager *)((char *)this - 48));
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 1898LL;
    goto LABEL_30;
  }
  if ( v5 && v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  if ( *((_QWORD *)this + 107) )
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (Concurrency::details::_RefCounter **)this + 107,
      0LL);
  v10 = 0;
LABEL_37:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v18);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v17);
  return v10;
}
