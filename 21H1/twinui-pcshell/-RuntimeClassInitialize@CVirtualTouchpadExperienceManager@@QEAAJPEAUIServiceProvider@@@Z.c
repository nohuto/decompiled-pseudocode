/*
 * XREFs of ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801C1670
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801BE448 (--$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x180015F04 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x18011DCC0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18011DF28 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     wistd::function_void___cdecl(unsigned_long_const_&)_::function_void___cdecl(unsigned_long_const_&)___lambda_0eb1209f55c390bc801eaf1cc9e40904__void_ @ 0x1801BE0E4 (wistd--function_void___cdecl(unsigned_long_const_-)_--function_void___cdecl(unsigne_ea_1801BE0E4.c)
 *     ??$make_wnf_subscription_nothrow@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1801BE858 (--$make_wnf_subscription_nothrow@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x1801C2F68 (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1804505E8 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180451550 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualTouchpadExperienceManager::RuntimeClassInitialize(
        CVirtualTouchpadExperienceManager *this,
        struct IServiceProvider *a2)
{
  HSTRING v4; // rbx
  int AgileReference; // ebx
  __int64 v6; // rdx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v8; // rdi
  __int64 v9; // rdx
  Concurrency::details::_RefCounter **wnf_subscription; // rax
  Concurrency::details::_RefCounter **v11; // rdi
  HMODULE *v12; // rbx
  HMODULE LibraryW; // rax
  const char *v14; // r9
  FARPROC ProcAddress; // rax
  FARPROC v16; // rax
  FARPROC v17; // rax
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  Concurrency::details::_RefCounter *v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  CVirtualTouchpadExperienceManager *v22; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING_HEADER v23; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING v24; // [rsp+68h] [rbp-98h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-90h] BYREF
  HSTRING v26; // [rsp+88h] [rbp-78h]
  _BYTE v27[128]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.VirtualTouchpad",
    0x31u,
    0x30u);
  v4 = v26;
  v24 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v23,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  AgileReference = CSingleViewShellExperience::RuntimeClassInitialize(
                     (CVirtualTouchpadExperienceManager *)((char *)this + 64),
                     (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
                     a2,
                     v24,
                     v4);
  if ( AgileReference >= 0 )
  {
    v24 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v23,
      L"ShellExperienceHostVS_ccv6fwk6gx0xp!App",
      0x28u,
      0x27u);
    AgileReference = CSingleViewShellExperience::AddTestAumid(
                       (CVirtualTouchpadExperienceManager *)((char *)this + 64),
                       v24);
    if ( AgileReference < 0 )
    {
      v6 = 199LL;
      goto LABEL_3;
    }
    *((_DWORD *)this + 31) = 2;
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 42);
    AgileReference = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
                       a2,
                       &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
                       &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
                       (char *)this + 336);
    if ( AgileReference < 0 )
    {
      v6 = 205LL;
      goto LABEL_3;
    }
    v22 = this;
    if ( this )
      (*(void (__fastcall **)(CVirtualTouchpadExperienceManager *))(*(_QWORD *)this + 8LL))(this);
    v8 = 0LL;
    v19 = 0LL;
    AgileReference = 0;
    if ( this )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      AgileReference = RoGetAgileReference(0LL, &GUID_17c4ec91_62df_486d_aa0d_6a11c725e414, this, &v19);
      v8 = v19;
    }
    v19 = 0LL;
    v20 = 0LL;
    v21 = v8;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    if ( AgileReference >= 0 )
    {
      v19 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      wistd::function_void___cdecl_unsigned_long_const____::function_void___cdecl_unsigned_long_const______lambda_0eb1209f55c390bc801eaf1cc9e40904__void_(
        (__int64)v27,
        &v19);
      wnf_subscription = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription_nothrow<unsigned long>(
                                                                 &v20,
                                                                 (__int64)&WNF_SHEL_LOCKSCREEN_ACTIVE,
                                                                 (__int64)v27);
      v11 = wnf_subscription;
      if ( (Concurrency::details::_RefCounter **)((char *)this + 760) != wnf_subscription )
      {
        wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
          (Concurrency::details::_RefCounter **)this + 95,
          *wnf_subscription);
        *v11 = 0LL;
      }
      if ( v20 )
        Concurrency::details::_RefCounter::_Destroy(v20);
      wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v27);
      if ( *((_QWORD *)this + 95) )
      {
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 34, (__int64)this);
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 41, (__int64)a2);
        v12 = (HMODULE *)((char *)this + 768);
        LibraryW = LoadLibraryW(L"user32.DLL");
        wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
          (char *)this + 768,
          LibraryW);
        if ( !*((_QWORD *)this + 96) )
        {
          AgileReference = wil::details::in1diag3::Return_GetLastError(
                             retaddr,
                             (void *)0xE7,
                             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                             v14);
LABEL_33:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
          return (unsigned int)AgileReference;
        }
        ProcAddress = GetProcAddress(*((HMODULE *)this + 96), "SetPhysicalCursorPos");
        *((_QWORD *)this + 97) = ProcAddress;
        if ( ProcAddress )
        {
          v16 = GetProcAddress(*v12, "CalculatePopupWindowPosition");
          *((_QWORD *)this + 98) = v16;
          if ( v16 )
          {
            v17 = GetProcAddress(*v12, "GetPhysicalCursorPos");
            *((_QWORD *)this + 99) = v17;
            if ( v17 )
            {
              AgileReference = 0;
              goto LABEL_33;
            }
            v9 = 240LL;
          }
          else
          {
            v9 = 237LL;
          }
        }
        else
        {
          v9 = 234LL;
        }
        AgileReference = -2147024769;
      }
      else
      {
        AgileReference = -2147467259;
        v9 = 224LL;
      }
    }
    else
    {
      v9 = 209LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)AgileReference);
    goto LABEL_33;
  }
  v6 = 198LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)AgileReference);
  return (unsigned int)AgileReference;
}
