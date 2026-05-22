/*
 * XREFs of ?GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@_K@Z @ 0x1800F1CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEB_K$$V@?$unordered_map@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x180004274 (--$_Try_emplace@AEB_K$$V@-$unordered_map@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@U.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?equal_range@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@V12@@2@AEB_K@Z @ 0x18008E308 (-equal_range@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800F1820 (--$_Emplace_reallocate@AEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputSiteHierarchyManager::GetInputSiteListToRoot(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 *v9; // rdx
  _QWORD v11[2]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 i; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+78h] [rbp+28h]

  v14 = a2;
  (*(void (__fastcall **)(_QWORD *))(*a1 + 40LL))(a1);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  for ( i = a3; i; i = *(_QWORD *)(v8 + 32) )
  {
    std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::equal_range(
      a1 + 2,
      v11,
      (const unsigned __int8 *)&i);
    v6 = (_QWORD *)v11[0];
    v7 = 0LL;
    while ( v6 != (_QWORD *)v11[1] )
    {
      ++v7;
      v6 = (_QWORD *)*v6;
    }
    if ( !v7 )
      break;
    std::unordered_map<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry>::_Try_emplace<unsigned __int64 const &,>(
      (__int64)(a1 + 2),
      (__int64)v12,
      &i);
    v8 = v12[0];
    v9 = *(__int64 **)(a2 + 8);
    if ( *(__int64 **)(a2 + 16) == v9 )
    {
      std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSite> const &>(
        (__int64 **)a2,
        v9,
        (__int64 *)(v12[0] + 24LL));
    }
    else
    {
      *v9 = *(_QWORD *)(v12[0] + 24LL);
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v9);
      *(_QWORD *)(a2 + 8) += 8LL;
    }
  }
  return a2;
}
