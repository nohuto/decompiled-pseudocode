/*
 * XREFs of ?SubscribeToServices@RetailDemoExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801EE070
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180146134 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIViewWrapper.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x18015A988 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall RetailDemoExperienceManager::SubscribeToServices(
        RetailDemoExperienceManager *this,
        struct IServiceProvider *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r12
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, GUID *, GUID *, char *); // rdi
  __int64 v7; // rcx
  int v8; // eax
  char *v9; // rdi
  char *v10; // rax
  char *v11; // rbx
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, char *, _QWORD, __int64, char *); // rbx
  int v14; // eax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v16; // rcx
  int v17; // eax
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v19; // eax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, _QWORD, SID *, GUID *, char *); // rsi
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  __int64 v26; // [rsp+30h] [rbp-78h] BYREF
  __int128 v27; // [rsp+38h] [rbp-70h] BYREF
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+48h] [rbp-60h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-58h] BYREF
  __int64 v30; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 416);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 416));
  v28 = v4;
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
    (__int64 *)this + 22,
    (__int64)a2);
  v5 = *((_QWORD *)this + 22);
  v6 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v5 + 24LL);
  v7 = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = v6(v5, &SID_ViewEventDispatcher, &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e, (char *)this + 184);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      735LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  *(_QWORD *)&v27 = RetailDemoExperienceManager::OnViewEvent;
  DWORD2(v27) = 0;
  hstringHeader.Reserved.Reserved1 = (char *)this - 48;
  *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v27;
  v9 = 0LL;
  v10 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>((__int64)v10);
    *(HSTRING_HEADER *)(v11 + 16) = hstringHeader;
    *(_QWORD *)v11 = off_1804A3CF0;
    v9 = v11;
  }
  *(_QWORD *)&v27 = v9;
  v12 = *((_QWORD *)this + 23);
  v13 = *(__int64 (__fastcall **)(__int64, char *, _QWORD, __int64, char *))(*(_QWORD *)v12 + 48LL);
  v30 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.RetailDemo",
    0x2Cu,
    0x2Bu);
  v14 = v13(v12, v9, 0LL, v30, (char *)this + 400);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      748LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
  QueryService = a2->lpVtbl->QueryService;
  v16 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v17 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
          a2,
          &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
          &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
          (char *)this + 144);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      751LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v17);
  v26 = 0LL;
  v18 = a2->lpVtbl->QueryService;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v26);
  v19 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v18)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          &v26);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      755LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v19);
  v20 = v26;
  v21 = *(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *, char *))(*(_QWORD *)v26 + 72LL);
  v22 = *((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = 0LL;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v23 = v21(v20, 0LL, &SID_ImmersiveLayout, &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c, (char *)this + 160);
  if ( v23 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      756LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v23);
  v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(**((_QWORD **)this + 20) + 40LL))(
          *((_QWORD *)this + 20),
          10LL,
          ((unsigned __int64)this + 72) & -(__int64)(this != (RetailDemoExperienceManager *)48),
          (char *)this + 384);
  if ( v24 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      763LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v24);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
