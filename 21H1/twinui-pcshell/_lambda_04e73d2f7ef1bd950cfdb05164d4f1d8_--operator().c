/*
 * XREFs of _lambda_04e73d2f7ef1bd950cfdb05164d4f1d8_::operator() @ 0x1802C25DC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_04e73d2f7ef1bd950cfdb05164d4f1d8___::Run @ 0x1802C37D0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_04e73d2f7ef1bd950cfdb05164d4f1d8___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x18022842C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4WindowingEnvironmentType@@V-$com_ptr_t@U.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_04e73d2f7ef1bd950cfdb05164d4f1d8_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  unsigned int i; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int j; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdi
  _QWORD *v17; // rbx
  const char *v18; // r9
  __int64 result; // rax
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+28h] [rbp-30h] BYREF
  __int64 v22[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+68h] [rbp+10h] BYREF
  __int64 v26; // [rsp+70h] [rbp+18h] BYREF
  __int64 v27; // [rsp+78h] [rbp+20h]

  v27 = 0LL;
  v2 = *(_QWORD *)(*a1 + 184);
  v27 = 0LL;
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        258LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v27 + 56LL))(v27, &v24);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        261LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v4);
    v21 = 0LL;
    v5 = *(_QWORD *)(*a1 + 192);
    v21 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v21);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        264LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v6);
    for ( i = 0; i < v24; ++i )
    {
      v26 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v27 + 48LL))(v27, i, &v26);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          269LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v8);
      v20 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 48LL))(v26, &v20);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          272LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v9);
      v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 56LL))(v20, &v25);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          275LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v10);
      for ( j = 0; j < v25; ++j )
      {
        v22[0] = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 48LL))(v20, j, v22);
        if ( v12 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            280LL,
            (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v12);
        v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 104LL))(v26, v22[0]);
        if ( v13 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            281LL,
            (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
            (const char *)(unsigned int)v13);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v22);
      }
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 184) + 88LL))(*(_QWORD *)(*a1 + 184), v26);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          284LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v14);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
    }
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 56LL))(v21);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        287LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v15);
    v16 = *a1;
    v17 = *(_QWORD **)(*a1 + 168);
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>,void *>>>(
      *a1 + 168,
      *a1 + 168,
      v17[1]);
    v17[1] = v17;
    *v17 = v17;
    v17[2] = v17;
    *(_QWORD *)(v16 + 176) = 0LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x124,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           v18);
  }
  return result;
}
