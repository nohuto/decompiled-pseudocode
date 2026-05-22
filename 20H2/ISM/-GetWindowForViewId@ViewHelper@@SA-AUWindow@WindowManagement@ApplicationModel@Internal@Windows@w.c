/*
 * XREFs of ?GetWindowForViewId@ViewHelper@@SA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@K@Z @ 0x180003D0C
 * Callers:
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x1800187B0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x1800193C0 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B29C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?Window@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU0WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180041F98 (-Window@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowMa.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall ViewHelper::GetWindowForViewId(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 i; // rdx
  __int64 v9; // r8
  __int64 v10; // r11
  __int64 *v11; // rax
  __int64 *v12; // rdx
  __int64 *v13; // rcx
  __int64 *v14; // rax
  __int64 *v15; // rsi
  __int64 v16; // rcx
  __int64 v18; // [rsp+68h] [rbp+30h] BYREF
  int v19; // [rsp+70h] [rbp+38h]
  __int64 v20; // [rsp+78h] [rbp+40h] BYREF

  *a1 = 0LL;
  v19 = a3;
  v6 = 0LL;
  v18 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)&v19 + i) ^ (unsigned __int64)v7);
  v9 = 2 * (v7 & a2[13]);
  v10 = a2[10];
  v11 = *(__int64 **)(v10 + 16 * (v7 & a2[13]));
  v12 = (__int64 *)a2[8];
  while ( 1 )
  {
    v13 = *(__int64 **)(v10 + 8 * v9) == v12 ? (__int64 *)a2[8] : **(__int64 ***)(v10 + 8 * v9 + 8);
    if ( v11 == v13 )
      break;
    if ( *((_DWORD *)v11 + 4) == a3 )
      goto LABEL_8;
    v11 = (__int64 *)*v11;
  }
  v11 = (__int64 *)a2[8];
LABEL_8:
  if ( v11 != v12 )
  {
    v14 = v11 + 3;
    if ( &v18 != v14 )
    {
      v6 = *v14;
      v18 = v6;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  if ( v6 )
  {
    v15 = (__int64 *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Window(
                       &v18,
                       &v20);
    if ( a1 != v15 )
    {
      if ( *a1 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a1);
      v16 = *v15;
      *v15 = 0LL;
      *a1 = v16;
    }
    if ( v20 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v20);
  }
  if ( v6 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v18);
  return a1;
}
