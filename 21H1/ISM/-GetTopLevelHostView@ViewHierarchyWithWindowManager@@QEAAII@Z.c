/*
 * XREFs of ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800BDF70
 * Callers:
 *     ?IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BD4F0 (-IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z.c)
 * Callees:
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppViewId@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x18000423C (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManage.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B26C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??$as@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@@impl@winrt@@YA?AUUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800BCBD8 (--$as@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype@-$abi@U.c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUIAppModel@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x1800BCFB0 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@Window.c)
 *     ?GetView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x1800BE220 (-GetView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@Intern.c)
 *     ?HostAppView@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x1800BE2C8 (-HostAppView@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrev.c)
 *     ?IsTopLevel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800BE3EC (-IsTopLevel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrevi.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ViewHierarchyWithWindowManager::GetTopLevelHostView(
        ViewHierarchyWithWindowManager *this,
        unsigned int a2)
{
  __int64 v2; // r15
  __int64 v3; // rdi
  _QWORD *v4; // rax
  int v5; // r13d
  __int64 v6; // r14
  char IsTopLevel; // r12
  __int64 v8; // rbx
  __int64 *View; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rsi
  __int64 *v13; // r12
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+38h] [rbp-20h] BYREF
  __int64 v19[3]; // [rsp+40h] [rbp-18h] BYREF
  int v21; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+60h] BYREF

  LODWORD(v2) = a2;
  v21 = 0;
  ViewHierarchyWithWindowManager::GetView(this, &v23, a2);
  v3 = v23;
  if ( v23 )
  {
    v4 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::AppModel(
           &v23,
           &v16);
    winrt::impl::as<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>(
      &v15,
      (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*v4);
    v5 = 2;
    if ( v16 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v16);
    v6 = v15;
    if ( v15 )
    {
      winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::HostAppView(
        &v15,
        &v22);
      IsTopLevel = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::IsTopLevel(&v15);
      v8 = v22;
      while ( v8 && !IsTopLevel )
      {
        v2 = *(unsigned int *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Id(
                                &v22,
                                (__int64)&v21);
        View = (__int64 *)ViewHierarchyWithWindowManager::GetView(this, &v17, v2);
        if ( &v23 != View )
        {
          if ( v3 )
            winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v23);
          v3 = *View;
          *View = 0LL;
          v23 = v3;
        }
        if ( v17 )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v17);
        v11 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::AppModel(
                &v23,
                &v18);
        winrt::impl::as<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>(
          &v16,
          (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*v11);
        v5 |= 8u;
        if ( v18 )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v18);
        v12 = v16;
        if ( v16 )
        {
          v13 = (__int64 *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::HostAppView(
                             &v16,
                             v19);
          if ( &v22 != v13 )
          {
            if ( v8 )
              winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v22);
            v8 = *v13;
            *v13 = 0LL;
            v22 = v8;
          }
          if ( v19[0] )
            winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v19);
          IsTopLevel = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::IsTopLevel(&v16);
        }
        else
        {
          if ( v8 )
            winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v22);
          v8 = 0LL;
          v22 = 0LL;
          IsTopLevel = 1;
        }
        if ( v12 )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v16);
      }
      v6 = v15;
      if ( v8 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v22);
    }
    if ( v6 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v15);
  }
  if ( v3 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v23);
  return (unsigned int)v2;
}
