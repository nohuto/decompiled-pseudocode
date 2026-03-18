/*
 * XREFs of ?EnsureDDisplayManager@CDDisplayManager@@QEAAJXZ @ 0x180284D40
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180283F0C (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180282520 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 */

__int64 __fastcall CDDisplayManager::EnsureDDisplayManager(CDDisplayManager *this)
{
  unsigned int v1; // ebx
  HRESULT v2; // eax
  __int64 v3; // rcx
  int ActivationFactory; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(_QWORD *, _QWORD, void *); // rdi
  int v10; // eax
  __int64 v11; // rcx
  HRESULT v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  HRESULT v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  HSTRING v23; // [rsp+38h] [rbp-19h] BYREF
  HSTRING v24; // [rsp+40h] [rbp-11h] BYREF
  _QWORD *v25; // [rsp+48h] [rbp-9h] BYREF
  HSTRING string; // [rsp+50h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp+7h] BYREF
  HSTRING_HEADER v28; // [rsp+70h] [rbp+1Fh] BYREF
  HSTRING_HEADER v29; // [rsp+88h] [rbp+37h] BYREF

  v1 = 0;
  if ( !g_DDisplayManager )
  {
    v25 = 0LL;
    v24 = 0LL;
    v23 = 0LL;
    string = 0LL;
    v2 = WindowsCreateStringReference(L"Windows.Devices.Display.Core.DisplayManager", 0x2Bu, &hstringHeader, &string);
    v1 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, v2, 0x5Eu);
    }
    else
    {
      ActivationFactory = RoGetActivationFactory(string, &GUID_2b6b9446_b999_5535_9d69_53f092c780a1, &v25);
      v1 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, ActivationFactory, 0x5Fu);
      }
      else
      {
        v6 = g_DDisplayManager;
        v7 = v25;
        v8 = *v25;
        g_DDisplayManager = 0LL;
        v9 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, void *))(v8 + 48);
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        v10 = v9(v7, 0LL, &g_DDisplayManager);
        v1 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x60u);
        }
        else
        {
          v12 = WindowsCreateStringReference(
                  L"Windows.Devices.Display.Core.DisplayPrimaryDescription",
                  0x36u,
                  &v28,
                  &v24);
          v1 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x66u);
          }
          else
          {
            v14 = *(&g_DDisplayManager + 1);
            *(&g_DDisplayManager + 1) = 0LL;
            if ( v14 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            v15 = RoGetActivationFactory(
                    v24,
                    &GUID_e60e4cfb_36c9_56dd_8fa1_6ff8c4e0ff07,
                    (char *)&g_DDisplayManager + 8);
            v1 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x67u);
            }
            else
            {
              v17 = WindowsCreateStringReference(L"Windows.Devices.Display.Core.DisplayHdrMetadata", 0x2Fu, &v29, &v23);
              v1 = v17;
              if ( v17 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x6Du);
              }
              else
              {
                v19 = qword_1803D39D8;
                qword_1803D39D8 = 0LL;
                if ( v19 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
                v20 = RoGetActivationFactory(v23, &GUID_028d1ebd_933a_5cba_97d8_fe808844d45d, &qword_1803D39D8);
                v1 = v20;
                if ( v20 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0x6Eu);
              }
            }
          }
        }
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v23);
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v24);
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
  }
  return v1;
}
