/*
 * XREFs of _lambda_f27b60bae871d07517fb334ba178f733_::operator() @ 0x1802E46EC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f27b60bae871d07517fb334ba178f733___::Run @ 0x1802E53D0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f27b60bae871d07517fb334ba178f733___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18001710C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089B14 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18025411C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_pol.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@W4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@W4WindowingEnvironmentType@@@std@@V?$allocator@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBW4WindowingEnvironmentType@@@Z @ 0x1802E59A4 (-find@-$_Tree@V-$_Tmap_traits@W4WindowingEnvironmentType@@V-$com_ptr_t@UIWindowingEnvironmentCon.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_f27b60bae871d07517fb334ba178f733_::operator()(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int i; // edi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  const char *v19; // r9
  __int64 v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF
  __int64 v25; // [rsp+58h] [rbp+10h] BYREF
  __int64 v26; // [rsp+60h] [rbp+18h] BYREF
  __int64 v27; // [rsp+68h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<enum WindowingEnvironmentType,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>,std::less<enum WindowingEnvironmentType>,std::allocator<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>,0>>::find(
    *a1 + 168LL,
    &v24,
    a1[1]);
  v2 = v24;
  v3 = *(_QWORD *)(v24 + 40);
  v22[0] = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3) )
  {
    v6 = std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>>::_Extract(
           (_QWORD *)(*a1 + 168LL),
           v2,
           v4,
           v5);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v6 + 5);
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x30);
    try
    {
      v26 = 0LL;
      v7 = *(_QWORD *)(*a1 + 192LL);
      v26 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, &v26);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          182LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v8);
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v21,
        v9);
      v10 = v21;
      if ( !v21 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          185LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)0x8000FFFFLL);
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, 0LL);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          187LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v11);
      v25 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 48LL))(v10, &v25);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          190LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v12);
      v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 56LL))(v25, &v24);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          193LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v13);
      for ( i = 0; i < (unsigned int)v24; ++i )
      {
        v27 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v25 + 48LL))(v25, i, &v27);
        if ( v15 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            198LL,
            (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v15);
        v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 104LL))(v10, v27);
        if ( v16 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            199LL,
            (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v16);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 184LL) + 88LL))(
              *(_QWORD *)(*a1 + 184LL),
              v10);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          202LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v17);
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 56LL))(v26);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          204LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v18);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
    }
    catch ( ... )
    {
      LODWORD(v24) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0xCE,
                       (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                       v19);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v22);
      return (unsigned int)v24;
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v22);
  return 0LL;
}
