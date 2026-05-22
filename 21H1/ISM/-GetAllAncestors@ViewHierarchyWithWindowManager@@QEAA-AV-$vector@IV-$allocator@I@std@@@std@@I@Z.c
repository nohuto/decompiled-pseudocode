/*
 * XREFs of ?GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x1800BDC5C
 * Callers:
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800B9910 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x180103D70 (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 * Callees:
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppViewId@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x18000423C (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManage.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B26C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B2EC (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@QEAAPEAW4GameInputGamepadButtons@@QEAW42@AEBW42@@Z @ 0x180089F78 (--$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@-$vector@W4GameInputGamepadButtons@@V-$all.c)
 *     ??$as@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@@impl@winrt@@YA?AUUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800BCBD8 (--$as@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype@-$abi@U.c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUIAppModel@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x1800BCFB0 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@Window.c)
 *     ?GetView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x1800BE220 (-GetView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@Intern.c)
 *     ?HostAppView@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x1800BE2C8 (-HostAppView@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrev.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall ViewHierarchyWithWindowManager::GetAllAncestors(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r14
  _BYTE *v4; // r13
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rbx
  _BYTE *v8; // r15
  __int64 v9; // rdi
  unsigned int *v10; // rax
  __int64 v11; // r8
  __int64 *View; // r12
  _QWORD *v13; // rax
  __int64 *v14; // r12
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+28h] [rbp-50h] BYREF
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+38h] [rbp-40h] BYREF
  _BYTE *v20; // [rsp+48h] [rbp-30h]
  __int64 v21; // [rsp+50h] [rbp-28h] BYREF
  __int64 v22; // [rsp+58h] [rbp-20h] BYREF
  __int64 v23; // [rsp+60h] [rbp-18h] BYREF
  __int64 v24[2]; // [rsp+68h] [rbp-10h] BYREF
  unsigned int v27; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v28; // [rsp+D8h] [rbp+60h] BYREF

  v3 = a2;
  v19 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  ViewHierarchyWithWindowManager::GetView(a1, &v16, a3);
  v5 = v16;
  if ( !v16 )
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    goto LABEL_32;
  }
  v6 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::AppModel(
         &v16,
         &v28);
  winrt::impl::as<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>(
    &v18,
    (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*v6);
  if ( v28 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v28);
  v7 = v18;
  if ( !v18 )
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v19 = 0LL;
    v20 = 0LL;
LABEL_31:
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v16);
    goto LABEL_32;
  }
  winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::HostAppView(
    &v18,
    &v17);
  v8 = (_BYTE *)*((_QWORD *)&v19 + 1);
  v9 = v17;
  while ( v9 )
  {
    v10 = (unsigned int *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Id(
                            &v17,
                            (__int64)&v28);
    v11 = *v10;
    v27 = *v10;
    if ( v4 == v8 )
    {
      std::vector<enum GameInputGamepadButtons>::_Emplace_reallocate<enum GameInputGamepadButtons const &>(
        (const void **)&v19,
        v8,
        &v27);
      v4 = v20;
      v8 = (_BYTE *)*((_QWORD *)&v19 + 1);
      v11 = v27;
    }
    else
    {
      *(_DWORD *)v8 = v11;
      v8 += 4;
      *((_QWORD *)&v19 + 1) = v8;
    }
    View = (__int64 *)ViewHierarchyWithWindowManager::GetView(a1, &v21, v11);
    if ( &v16 != View )
    {
      if ( v5 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v16);
      v5 = *View;
      *View = 0LL;
      v16 = v5;
    }
    if ( v21 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v21);
    v13 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::AppModel(
            &v16,
            &v23);
    winrt::impl::as<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>(
      &v22,
      (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*v13);
    if ( v7 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v18);
    v7 = v22;
    v22 = 0LL;
    v18 = v7;
    if ( v23 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v23);
    if ( v7 )
    {
      v14 = (__int64 *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::HostAppView(
                         &v18,
                         v24);
      if ( &v17 != v14 )
      {
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v17);
        v9 = *v14;
        *v14 = 0LL;
        v17 = v9;
      }
      if ( v24[0] )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v24);
    }
    else
    {
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v17);
      v9 = 0LL;
      v17 = 0LL;
    }
  }
  v3 = a2;
  *a2 = v19;
  a2[1] = v8;
  a2[2] = v4;
  v19 = 0LL;
  v20 = 0LL;
  if ( v7 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v18);
  if ( v5 )
    goto LABEL_31;
LABEL_32:
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v19);
  return v3;
}
