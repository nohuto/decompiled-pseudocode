/*
 * XREFs of ?OnTitleBarsLost@ViewGroupManager@@UEAAJXZ @ 0x18028BD90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UITitleBarRecovery@@@?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITitleBarRecovery@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800AD05C (--$query@UITitleBarRecovery@@@-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800BD778 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewGroupManager::OnTitleBarsLost(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  const char *v3; // r9
  __int64 *Ptr; // rbx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF
  RTL_SRWLOCK *v14; // [rsp+40h] [rbp+18h]

  v2 = this + 29;
  AcquireSRWLockShared(this + 29);
  v14 = v2;
  Ptr = (__int64 *)this[30].Ptr;
  v5 = *Ptr;
  v13 = *Ptr;
  try
  {
    while ( (__int64 *)v5 != Ptr )
    {
      wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>::query<ITitleBarRecovery>(
        (_QWORD *)(v5 + 32),
        (__int64)&v12);
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBB,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
          (const char *)(unsigned int)v6);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
        &v13,
        v7,
        v8,
        v9);
      v5 = v13;
    }
    if ( v2 )
      ReleaseSRWLockShared(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC0,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
                           v3);
  }
  return result;
}
