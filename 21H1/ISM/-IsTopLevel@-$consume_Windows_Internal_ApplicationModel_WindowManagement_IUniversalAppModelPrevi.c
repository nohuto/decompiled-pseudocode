/*
 * XREFs of ?IsTopLevel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800BE3EC
 * Callers:
 *     ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800BDF70 (-GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B26C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800BD56C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::IsTopLevel(
        __int64 *a1)
{
  __int64 v1; // rcx
  signed int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v1 = *a1;
  if ( v1 )
  {
    v5 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v1)(
      v1,
      &winrt::impl::guid_storage<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelPreview>::value,
      &v5);
    v1 = v5;
  }
  v6 = v1;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 120LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v6);
  return v4;
}
