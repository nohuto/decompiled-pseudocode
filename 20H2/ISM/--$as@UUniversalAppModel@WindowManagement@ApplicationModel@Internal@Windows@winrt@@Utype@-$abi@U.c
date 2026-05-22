/*
 * XREFs of ??$as@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@@impl@winrt@@YA?AUUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800BC678
 * Callers:
 *     ??$as@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUUniversalAppModel@WindowManagement@ApplicationModel@Internal@23@XZ @ 0x1800BC654 (--$as@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@IUnknown@Fou.c)
 *     ?GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x1800BD6FC (-GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 *     ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800BDA10 (-GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800BD00C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *))
{
  __int64 (__fastcall **v3)(_QWORD, void *, __int64 *); // rax
  int v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = *a2;
    v6 = 0LL;
    v4 = (*v3)(
           a2,
           &winrt::impl::guid_storage<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>::value,
           &v6);
    if ( v4 < 0 )
      winrt::throw_hresult((unsigned int)v4);
    *a1 = v6;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
