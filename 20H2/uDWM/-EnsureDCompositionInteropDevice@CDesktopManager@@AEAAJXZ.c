/*
 * XREFs of ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x180017FF0
 * Callers:
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x180011FCC (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x180017BF0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004B8F8 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x1800863E0 (-HandleInteropDeviceLost@CDesktopManager@@SAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F0C4 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18003F3FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180042BDC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18007DA1C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180080688 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall CDesktopManager::EnsureDCompositionInteropDevice(CDesktopManager *this)
{
  CDesktopManager *v1; // rbx
  char *v2; // rdi
  HRESULT v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  void *v8; // rdx
  wil::details *v9; // rcx
  wil::details *v10; // rcx
  HANDLE Event; // rsi
  int v12; // eax
  HRESULT v13; // eax
  _QWORD *v14; // r14
  int v15; // eax
  int ActivationFactory; // eax
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rbx
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  int LastErrorFailHr; // eax
  __int64 v22; // rdx
  __int64 v23; // [rsp+50h] [rbp-29h] BYREF
  int v24[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v25; // [rsp+60h] [rbp-19h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-11h] BYREF
  void *ppIFactory; // [rsp+70h] [rbp-9h] BYREF
  __int64 v28; // [rsp+78h] [rbp-1h] BYREF
  ID3D11Device *ppDevice; // [rsp+80h] [rbp+7h] BYREF
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+88h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+17h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = (char *)CDesktopManager::s_pDesktopManagerInstance + 216;
  if ( *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27) )
    return 0LL;
  ppDevice = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&ppDevice);
  v4 = D3D11CreateDevice(0LL, D3D_DRIVER_TYPE_WARP, 0LL, 0x20u, 0LL, 0, 7u, &ppDevice, &pFeatureLevel, 0LL);
  if ( v4 >= 0 )
  {
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23);
    v5 = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, __int64 *))ppDevice->lpVtbl->QueryInterface)(
           ppDevice,
           &GUID_77db970f_6276_48ba_ba28_070143b4392c,
           &v23);
    v4 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20B,
        (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
        (const char *)(unsigned int)v5);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v23 + 48LL))(
             v23,
             &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
             (__int64)v1 + 224);
      v4 = v6;
      if ( v6 >= 0 )
      {
        v28 = 0LL;
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v28);
        v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**((_QWORD **)v1 + 28) + 48LL))(
               *((_QWORD *)v1 + 28),
               &GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8,
               &v28);
        v4 = v7;
        if ( v7 >= 0 )
        {
          v9 = (wil::details *)*((_QWORD *)v1 + 34);
          if ( v9 )
          {
            wil::details::ResetEvent(v9, v8);
          }
          else
          {
            Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
            if ( Event )
            {
              GetLastError();
              wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
                (char *)v1 + 272,
                Event);
              goto LABEL_10;
            }
            LastErrorFailHr = wil::details::GetLastErrorFailHr(v10);
            v4 = LastErrorFailHr;
            if ( LastErrorFailHr < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x215,
                (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
                (const char *)(unsigned int)LastErrorFailHr);
              goto LABEL_35;
            }
          }
LABEL_10:
          v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v28 + 240LL))(
                  v28,
                  *((_QWORD *)v1 + 34),
                  (__int64)v1 + 280);
          v4 = v12;
          if ( v12 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x21C,
              (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
              (const char *)(unsigned int)v12);
          }
          else
          {
            ppIFactory = 0LL;
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&ppIFactory);
            v13 = D2D1CreateFactory(
                    D2D1_FACTORY_TYPE_SINGLE_THREADED,
                    &GUID_94f81a73_9212_4376_9c58_b16a3a0d3992,
                    0LL,
                    &ppIFactory);
            v4 = v13;
            if ( v13 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x21F,
                (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
                (const char *)(unsigned int)v13);
            }
            else
            {
              v14 = (_QWORD *)((char *)v1 + 232);
              v15 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)ppIFactory + 136LL))(
                      ppIFactory,
                      v23,
                      (__int64)v1 + 232);
              v4 = v15;
              if ( v15 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x221,
                  (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
                  (const char *)(unsigned int)v15);
              }
              else
              {
                v26 = 0LL;
                Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v26);
                v32 = 0LL;
                Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                  &hstringHeader,
                  L"Windows.UI.Composition.Compositor",
                  0x22u,
                  0x21u);
                ActivationFactory = RoGetActivationFactory(v32, &GUID_00000035_0000_0000_c000_000000000046, &v26);
                v4 = ActivationFactory;
                if ( ActivationFactory < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x225,
                    (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
                    (const char *)(unsigned int)ActivationFactory);
                }
                else
                {
                  v17 = v26;
                  v25 = 0LL;
                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
                  v18 = (**v17)(v17, &GUID_22118adf_23f1_4801_bcfa_66cbf48cc51b, &v25);
                  v4 = v18;
                  if ( v18 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x229,
                      (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
                      (const char *)(unsigned int)v18);
                  }
                  else
                  {
                    v19 = v25;
                    *(_QWORD *)v24 = 0LL;
                    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v24);
                    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, int *))(*(_QWORD *)v19 + 48LL))(
                            v19,
                            *v14,
                            0LL,
                            &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8,
                            v24);
                    v4 = v20;
                    if ( v20 < 0 )
                    {
                      v22 = 557LL;
                    }
                    else
                    {
                      v20 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v24)(
                              *(_QWORD *)v24,
                              &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0,
                              v2);
                      v4 = v20;
                      if ( v20 >= 0 )
                      {
                        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v24);
                        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
                        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v26);
                        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&ppIFactory);
                        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v28);
                        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23);
                        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&ppDevice);
                        return 0LL;
                      }
                      v22 = 560LL;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v22,
                      (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
                      (const char *)(unsigned int)v20);
                    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v24);
                  }
                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
                }
                Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v26);
              }
            }
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&ppIFactory);
          }
          goto LABEL_35;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x211,
          (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
          (const char *)(unsigned int)v7);
LABEL_35:
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v28);
        goto LABEL_36;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20E,
        (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
        (const char *)(unsigned int)v6);
    }
LABEL_36:
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23);
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&ppDevice);
  return (unsigned int)v4;
}
