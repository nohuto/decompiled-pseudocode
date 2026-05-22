/*
 * XREFs of ?GetAllInputSites@InputSiteHierarchyManager@@UEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x1800F16E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800F12D0 (--$_Emplace_reallocate@AEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputSiteHierarchyManager::GetAllInputSites(_QWORD *a1, __int64 a2)
{
  _QWORD **v4; // rsi
  _QWORD *i; // rbx
  __int64 *v6; // r8
  __int64 *v7; // rdx

  (*(void (__fastcall **)(_QWORD *))(*a1 + 40LL))(a1);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = (_QWORD **)a1[3];
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    v6 = i + 3;
    v7 = *(__int64 **)(a2 + 8);
    if ( *(__int64 **)(a2 + 16) == v7 )
    {
      std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSite> const &>(
        (__int64 **)a2,
        v7,
        v6);
    }
    else
    {
      *v7 = *v6;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v7);
      *(_QWORD *)(a2 + 8) += 8LL;
    }
  }
  return a2;
}
