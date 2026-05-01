/*
 * XREFs of _lambda_aa4892268e0364aa795347ae8a8bf43d_::operator() @ 0x1802E3C00
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_aa4892268e0364aa795347ae8a8bf43d___::Run @ 0x1802E4AB0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_aa4892268e0364aa795347ae_ea_1802E4AB0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShellPositionerPriority@@UIShellPositionerPriorityPersistence@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180067280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShe.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$MakeOrThrow@VWindowingEnvironmentConfig@@AEBQEAVWindowingEnvironmentManager@@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@wil@@YA?AV?$ComPtr@VWindowingEnvironmentConfig@@@WRL@Microsoft@@AEBQEAVWindowingEnvironmentManager@@$$QEAPEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@Z @ 0x1802E3084 (--$MakeOrThrow@VWindowingEnvironmentConfig@@AEBQEAVWindowingEnvironmentManager@@PEAUIWindowingEn.c)
 *     ??$emplace@AEAW4WindowingEnvironmentType@@AEAV?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@W4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@W4WindowingEnvironmentType@@@std@@V?$allocator@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAW4WindowingEnvironmentType@@AEAV?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1802E3500 (--$emplace@AEAW4WindowingEnvironmentType@@AEAV-$com_ptr_t@UIWindowingEnvironmentConfigInternal@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_aa4892268e0364aa795347ae8a8bf43d_::operator()(unsigned int **a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 *v9; // rax
  __int64 *v10; // r9
  __int64 v11; // r8
  __int64 v12; // rcx
  volatile int *v13; // rdx
  __int64 v14; // rcx
  const char *v15; // r9
  __int64 result; // rax
  char v17[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF
  __int64 v20; // [rsp+48h] [rbp+10h] BYREF
  __int64 v21; // [rsp+50h] [rbp+18h] BYREF
  __int64 v22; // [rsp+58h] [rbp+20h] BYREF

  v20 = 0LL;
  v2 = *((_QWORD *)*a1 + 24);
  v20 = 0LL;
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        86LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v3);
    v4 = *a1[1];
    v19 = 0LL;
    v5 = *((_QWORD *)*a1 + 23);
    v19 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, v4, &v19);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        90LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v6);
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)*a1 + 23) + 80LL))(*((_QWORD *)*a1 + 23), v19);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        91LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v7);
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 56LL))(v20);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        93LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v8);
    v22 = v19;
    v9 = wil::MakeOrThrow<WindowingEnvironmentConfig,WindowingEnvironmentManager * const &,Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel *,enum WindowingEnvironmentType &>(
           &v21,
           a1,
           &v22,
           a1[1]);
    v10 = (__int64 *)a1[2];
    v11 = *v9;
    *v9 = 0LL;
    v12 = *v10;
    v13 = (volatile int *)(v11 + 40);
    *v10 = (v11 + 40) & -(__int64)(v11 != 0);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v14 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::Release(
        v14,
        v13);
    }
    std::_Tree<std::_Tmap_traits<enum WindowingEnvironmentType,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>,std::less<enum WindowingEnvironmentType>,std::allocator<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>,0>>::emplace<enum WindowingEnvironmentType &,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy> &>(
      (__int64 *)*a1 + 21,
      (__int64)v17,
      a1[1],
      (__int64 *)a1[2]);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x62,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           v15);
  }
  return result;
}
