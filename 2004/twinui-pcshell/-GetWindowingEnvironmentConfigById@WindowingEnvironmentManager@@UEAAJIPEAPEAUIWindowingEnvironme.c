/*
 * XREFs of ?GetWindowingEnvironmentConfigById@WindowingEnvironmentManager@@UEAAJIPEAPEAUIWindowingEnvironmentConfig@@@Z @ 0x1802E4ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIWindowingEnvironmentConfig@@@?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWindowingEnvironmentConfig@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800ACD14 (--$query@UIWindowingEnvironmentConfig@@@-$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_e.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800BB8A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowingEnvironmentManager::GetWindowingEnvironmentConfigById(
        RTL_SRWLOCK *this,
        int a2,
        struct IWindowingEnvironmentConfig **a3)
{
  RTL_SRWLOCK *v6; // rbx
  const char *v7; // r9
  __int64 *v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  struct IWindowingEnvironmentConfig *v11; // rcx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16[2]; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v17; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v19; // [rsp+50h] [rbp+8h] BYREF
  struct IWindowingEnvironmentConfig *v20; // [rsp+60h] [rbp+18h] BYREF
  __int64 v21; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0LL;
  v6 = this + 3;
  AcquireSRWLockShared(this + 3);
  v17 = v6;
  v8 = *(__int64 **)this[4].Ptr;
  *(_QWORD *)v16 = v8;
  try
  {
    while ( v8 != this[4].Ptr )
    {
      v9 = v8[5];
      v21 = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>::query<IWindowingEnvironmentConfig>(
        &v21,
        (__int64)&v20);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
      v19 = 0;
      v10 = (*(__int64 (__fastcall **)(struct IWindowingEnvironmentConfig *, int *))(*(_QWORD *)v20 + 32LL))(v20, &v19);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          149LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v10);
      if ( v19 == a2 )
      {
        v11 = v20;
        if ( v20 )
        {
          *a3 = v20;
          (*(void (__fastcall **)(struct IWindowingEnvironmentConfig *))(*(_QWORD *)v11 + 8LL))(v11);
        }
        else
        {
          *a3 = 0LL;
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
        break;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
        (__int64 *)v16,
        v13,
        v14,
        v15);
      v8 = *(__int64 **)v16;
    }
    if ( *a3 )
    {
      if ( v6 )
        ReleaseSRWLockShared(v6);
      result = 0LL;
    }
    else
    {
      if ( v6 )
        ReleaseSRWLockShared(v6);
      result = 2147943568LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA0,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           v7);
  }
  return result;
}
