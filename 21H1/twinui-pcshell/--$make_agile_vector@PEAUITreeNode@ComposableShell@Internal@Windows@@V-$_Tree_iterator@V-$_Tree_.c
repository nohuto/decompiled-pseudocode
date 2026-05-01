/*
 * XREFs of ??$make_agile_vector@PEAUITreeNode@ComposableShell@Internal@Windows@@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@U?$select_from_tuple@$00@cshell@@@cshell@@YA@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@0$$QEAU?$select_from_tuple@$00@0@@Z @ 0x180228D30
 * Callers:
 *     ??$make_agile_vector_view@PEAUITreeNode@ComposableShell@Internal@Windows@@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@U?$select_from_tuple@$00@cshell@@@cshell@@YA?AV?$com_ptr_t@U?$IVectorView@PEAUITreeNode@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@0$$QEAU?$select_from_tuple@$00@0@@Z @ 0x180228DF0 (--$make_agile_vector_view@PEAUITreeNode@ComposableShell@Internal@Windows@@V-$_Tree_iterator@V-$_.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A9AC4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ??$make_agile_vector@PEAUITreeNode@ComposableShell@Internal@Windows@@@cshell@@YA?AV?$com_ptr_t@V?$AgileVector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@$0A@@Internal@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180228CA8 (--$make_agile_vector@PEAUITreeNode@ComposableShell@Internal@Windows@@@cshell@@YA-AV-$com_ptr_t@V.c)
 *     ?InsertAtInternal@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITreeNode@ComposableShell@25@_N@Z @ 0x18022D3E0 (-InsertAtInternal@-$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U-$DefaultEqualityPre.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *cshell::make_agile_vector<Windows::Internal::ComposableShell::ITreeNode *,std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>>,cshell::select_from_tuple<1>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, _QWORD);
  cshell::make_agile_vector<Windows::Internal::ComposableShell::ITreeNode *>(a1);
  v12 = 1;
  v14 = a2;
  while ( a2 != a3 )
  {
    LOBYTE(v6) = 1;
    v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::ITreeNode *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::ITreeNode *,0,1,0>>::InsertAtInternal(
           *a1,
           0LL,
           *(_QWORD *)(a2 + 40),
           v6,
           v12);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        117LL,
        (__int64)"onecoreuap\\internal\\shell\\inc\\winrt_utility.h",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
      (__int64 *)va,
      v8,
      v9,
      v10);
    a2 = v14;
  }
  return a1;
}
