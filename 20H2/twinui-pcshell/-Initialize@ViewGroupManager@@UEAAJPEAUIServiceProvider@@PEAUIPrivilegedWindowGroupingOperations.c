/*
 * XREFs of ?Initialize@ViewGroupManager@@UEAAJPEAUIServiceProvider@@PEAUIPrivilegedWindowGroupingOperations@@PEAUIPrivilegedForegroundOperations@@@Z @ 0x18028B8B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088A68 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A8BD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x18015A7B8 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementWindowGroupingEvents@@PEAK@ZP81@EAAJK@ZPEAVViewGroupManager@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementWindowGroupingEvents@@PEAK@ZP81@EAAJK@ZPEAVViewGroupManager@@@Z @ 0x18028AA88 (--$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementWindowGroupingEvents@@PEAK@.c)
 *     ??$MakeOrThrow@VWindowGroupManager@@AEAPEAUIPrivilegedWindowGroupingOperations@@@wil@@YA?AV?$ComPtr@VWindowGroupManager@@@WRL@Microsoft@@AEAPEAUIPrivilegedWindowGroupingOperations@@@Z @ 0x180293434 (--$MakeOrThrow@VWindowGroupManager@@AEAPEAUIPrivilegedWindowGroupingOperations@@@wil@@YA-AV-$Com.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewGroupManager::Initialize(
        ViewGroupManager *this,
        struct IServiceProvider *a2,
        struct IPrivilegedWindowGroupingOperations *a3,
        struct IPrivilegedForegroundOperations *a4)
{
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v12; // eax
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v14; // eax
  __int64 v15; // r8
  int v16; // eax
  const char *v17; // r9
  __int64 result; // rax
  __int64 v19; // [rsp+30h] [rbp-28h]
  struct IPrivilegedWindowGroupingOperations *v20; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v22; // [rsp+70h] [rbp+18h] BYREF

  v20 = a3;
  try
  {
    v7 = (__int64 *)wil::MakeOrThrow<WindowGroupManager,IPrivilegedWindowGroupingOperations * &>();
    v8 = *v7;
    *v7 = 0LL;
    if ( v8 )
      v9 = v8 + 8;
    else
      v9 = 0LL;
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(v19);
    v20 = 0LL;
    v10 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = v9;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
    QueryService = a2->lpVtbl->QueryService;
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 13);
    v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
            a2,
            &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
            &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
            (char *)this + 104);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        72LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
        (const char *)(unsigned int)v12);
    v22 = 0LL;
    v13 = a2->lpVtbl->QueryService;
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v22);
    v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v13)(
            a2,
            &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
            &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
            &v22);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        75LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
        (const char *)(unsigned int)v14);
    v16 = SmartCookie::Register<IViewPresentationMediator,long (IViewPresentationMediator::*)(IWindowManagementWindowGroupingEvents *,unsigned long *),long (IViewPresentationMediator::*)(unsigned long),ViewGroupManager *>(
            (__int64)this + 120,
            v22,
            v15);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        81LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
        (const char *)(unsigned int)v16);
    wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
      (__int64 *)this + 14,
      (__int64)a4);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x57,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
                           v17);
  }
  return result;
}
