/*
 * XREFs of ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x180042838
 * Callers:
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x180010174 (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DD3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003EF44 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18003F780 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180040E88 (-InternalRelease@-$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@WRL@Microsoft@@.c)
 *     ?InternalAddRef@?$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180040EB0 (-InternalAddRef@-$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXX.c)
 *     ??$As@UICompositionBrush@Composition@UI@Windows@@@?$ComPtr@UICompositionBackdropBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180042BB4 (--$As@UICompositionBrush@Composition@UI@Windows@@@-$ComPtr@UICompositionBackdropBrush@Compositio.c)
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@2@@Z @ 0x180042C04 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@V12345@$$V@Details@WR.c)
 *     ?put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJM@Z @ 0x180042DC0 (-put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJM@Z.c)
 *     ??$As@UIGraphicsEffectSource@Effects@Graphics@Windows@@@?$ComPtr@UICompositionEffectSourceParameter@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180042DEC (--$As@UIGraphicsEffectSource@Effects@Graphics@Windows@@@-$ComPtr@UICompositionEffectSourceParame.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowsInternal::UI::CreateHostBackdropBrush(
        __int64 (__fastcall ***this)(WindowsInternal::UI *, GUID *, __int64 *),
        struct IDCompositionDesktopDevicePartner *a2,
        struct Windows::UI::Composition::ICompositionBrush **a3)
{
  __int64 v5; // rbx
  int ActivationFactory; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, __int64 *); // rdi
  int v10; // eax
  int v11; // eax
  __int64 (__fastcall **v12)(WindowsInternal::UI *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v13)(WindowsInternal::UI *, GUID *, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 *); // rdi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 (__fastcall **v22)(WindowsInternal::UI *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v23)(WindowsInternal::UI *, GUID *, __int64 *); // rbx
  int v24; // eax
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, __int64, __int64 *); // rdi
  int v27; // eax
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, _QWORD **); // rdi
  _QWORD *v30; // rbx
  __int64 v31; // rdi
  __int64 (__fastcall **v32)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v33)(_QWORD *, __int64, __int64); // rsi
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // [rsp+20h] [rbp-49h] BYREF
  _QWORD *v38; // [rsp+28h] [rbp-41h] BYREF
  __int64 v39; // [rsp+30h] [rbp-39h] BYREF
  __int64 v40; // [rsp+38h] [rbp-31h] BYREF
  __int64 v41; // [rsp+40h] [rbp-29h] BYREF
  __int64 v42; // [rsp+48h] [rbp-21h] BYREF
  __int64 v43; // [rsp+50h] [rbp-19h] BYREF
  __int64 v44; // [rsp+58h] [rbp-11h] BYREF
  __int64 v45; // [rsp+60h] [rbp-9h] BYREF
  __int64 v46; // [rsp+68h] [rbp-1h] BYREF
  __int64 v47; // [rsp+70h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v49; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *(_QWORD *)a2 = 0LL;
  v44 = 0LL;
  v49 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.Composition.CompositionEffectSourceParameter",
    0x38u,
    0x37u);
  v5 = v49;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v44);
  ActivationFactory = RoGetActivationFactory(v5, &GUID_b3d9f276_aba3_4724_acf3_d0397464db1c, &v44);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"onecoreuap\\internal\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_25;
  }
  v8 = v44;
  v43 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v44 + 48LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v43);
  v49 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"source", 7u, 6u);
  v10 = v9(v8, v49, &v43);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (__int64)"onecoreuap\\internal\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v10);
    goto LABEL_24;
  }
  v47 = 0LL;
  v11 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameter>::As<Windows::Graphics::Effects::IGraphicsEffectSource>(
          &v43,
          &v47);
  v7 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (__int64)"onecoreuap\\internal\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v11);
    goto LABEL_23;
  }
  v12 = *this;
  v42 = 0LL;
  v13 = *v12;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v42);
  v14 = v13((WindowsInternal::UI *)this, &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0, &v42);
  v7 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"onecoreuap\\internal\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v14);
    goto LABEL_22;
  }
  v15 = v42;
  v41 = 0LL;
  v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v42 + 64LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v41);
  v17 = v16(v15, &v41);
  v7 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"onecoreuap\\internal\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v17);
    goto LABEL_21;
  }
  v46 = 0LL;
  v18 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBackdropBrush>::As<Windows::UI::Composition::ICompositionBrush>(
          &v41,
          &v46);
  v7 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21,
      (__int64)"onecoreuap\\internal\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v18);
    goto LABEL_20;
  }
  v38 = 0LL;
  v37 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::UI::Composition::Effects::GaussianBlurEffect>::InternalRelease(&v37);
  v19 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::UI::Composition::Effects::GaussianBlurEffect,Microsoft::UI::Composition::Effects::GaussianBlurEffect,>(&v37);
  v7 = v19;
  if ( v19 < 0 )
  {
    v35 = 39LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (__int64)"onecoreuap\\internal\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v19);
    goto LABEL_19;
  }
  *(_DWORD *)(v37 + 76) = 0;
  v19 = Microsoft::UI::Composition::Effects::GaussianBlurEffect::put_BlurAmount(
          (Microsoft::UI::Composition::Effects::GaussianBlurEffect *)(v37 + 32),
          30.0);
  v7 = v19;
  if ( v19 < 0 )
  {
    v35 = 42LL;
    goto LABEL_34;
  }
  v20 = v37;
  v21 = v47;
  if ( *(_QWORD *)(v37 + 64) != v47 )
  {
    v45 = v47;
    Microsoft::WRL::ComPtr<Windows::Graphics::Effects::IGraphicsEffectSource>::InternalAddRef(&v45);
    v45 = *(_QWORD *)(v20 + 64);
    *(_QWORD *)(v20 + 64) = v21;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v45);
  }
  v22 = *this;
  v40 = 0LL;
  v23 = *v22;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v40);
  v24 = v23((WindowsInternal::UI *)this, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8, &v40);
  v7 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"onecoreuap\\internal\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v24);
    goto LABEL_18;
  }
  v25 = v40;
  v39 = 0LL;
  v26 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v40 + 88LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v39);
  v27 = v26(v25, v37, &v39);
  v7 = v27;
  if ( v27 < 0 )
  {
    v36 = 49LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (__int64)"onecoreuap\\internal\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v27);
    goto LABEL_17;
  }
  v28 = v39;
  v29 = *(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v39 + 48LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v38);
  v27 = v29(v28, &v38);
  v7 = v27;
  if ( v27 < 0 )
  {
    v36 = 50LL;
    goto LABEL_40;
  }
  v30 = v38;
  v31 = v46;
  v32 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v38;
  v49 = 0LL;
  v33 = (__int64 (__fastcall *)(_QWORD *, __int64, __int64))v32[7];
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"source", 7u, 6u);
  v27 = v33(v30, v49, v31);
  v7 = v27;
  if ( v27 < 0 )
  {
    v36 = 52LL;
    goto LABEL_40;
  }
  v27 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct IDCompositionDesktopDevicePartner *))*v38)(
          v38,
          &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46,
          a2);
  v7 = v27;
  if ( v27 < 0 )
  {
    v36 = 54LL;
    goto LABEL_40;
  }
  v7 = 0;
LABEL_17:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v39);
LABEL_18:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v40);
LABEL_19:
  Microsoft::WRL::ComPtr<Microsoft::UI::Composition::Effects::GaussianBlurEffect>::InternalRelease(&v37);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v38);
LABEL_20:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v46);
LABEL_21:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v41);
LABEL_22:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v42);
LABEL_23:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v47);
LABEL_24:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v43);
LABEL_25:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v44);
  return v7;
}
