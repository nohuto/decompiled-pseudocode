/*
 * XREFs of ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180354960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A89D0 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$?9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIApplicationViewCollection@@@01@$$T@Z @ 0x1800BAF6C (--$-9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIApplicationViewCollection@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136EC0 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180141980 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18014245C (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180354714 (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180354878 (-UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::UnsubscribeFromServices(
        TouchKeyboardExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // r15
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  __int64 v8; // rsi
  __int64 v9; // rsi
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // si
  __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+28h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF
  int v23; // [rsp+A0h] [rbp+50h]
  int v24; // [rsp+A8h] [rbp+58h]

  v18 = 0LL;
  v17 = 0LL;
  v3 = 0LL;
  v16 = 0LL;
  v4 = 0LL;
  v19 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 328);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 328));
  Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(&v18, (__int64 *)this + 50);
  v6 = *((_DWORD *)this + 54);
  Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(&v17, (__int64 *)this + 37);
  v7 = *((_DWORD *)this + 55);
  v8 = *((_QWORD *)this + 39);
  if ( v8 )
  {
    v22 = *((_QWORD *)this + 39);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
    v3 = v8;
    v22 = 0LL;
    v16 = v8;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  }
  LODWORD(v22) = *((_DWORD *)this + 59);
  v23 = *((_DWORD *)this + 60);
  v24 = *((_DWORD *)this + 61);
  v9 = *((_QWORD *)this + 40);
  if ( v9 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)this + 40));
    v4 = v9;
    v9 = 0LL;
    v20 = 0LL;
    v19 = v4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  }
  *((_QWORD *)this + 26) = v9;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 50);
  *((_DWORD *)this + 54) = v9;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 37);
  *((_DWORD *)this + 55) = v9;
  *((_QWORD *)this + 28) = v9;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
  *(_QWORD *)((char *)this + 236) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
  *((_DWORD *)this + 61) = v9;
  if ( v5 )
    LeaveCriticalSection(v5);
  if ( v17 && v7 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 48LL))(v17, v7);
  if ( v18 && v6 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 48LL))(v18, v6);
  v10 = TouchKeyboardExperienceManager::UnregisterForViewEvents((TouchKeyboardExperienceManager *)((char *)this - 48));
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 1831LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_32;
  }
  v13 = *((_QWORD *)this + 28);
  if ( v13 )
    UnregisterScaleChangeEvent(v13);
  SmartCookie::Unregister((TouchKeyboardExperienceManager *)((char *)this + 496));
  v14 = Microsoft::WRL::operator!=<IApplicationViewCollection>(&v16);
  if ( v14 && (_DWORD)v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  if ( v14 && v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  v10 = TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges((TouchKeyboardExperienceManager *)((char *)this - 48));
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 1850LL;
    goto LABEL_25;
  }
  if ( v4 && v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  if ( *((_QWORD *)this + 107) )
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (Concurrency::details::_RefCounter **)this + 107,
      0LL);
  v11 = 0;
LABEL_32:
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v19);
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v16);
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v17);
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v18);
  return v11;
}
