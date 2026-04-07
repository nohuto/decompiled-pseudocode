/*
 * XREFs of ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004B8F8
 * Callers:
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z @ 0x18004B4F4 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x180017FF0 (-EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F0C4 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800457B0 (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     ??$As@UIDCompositionDeviceInternal@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionDeviceInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004B7E8 (--$As@UIDCompositionDeviceInternal@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft.c)
 *     ??$As@UICompositorInterop@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositorInterop@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004B82C (--$As@UICompositorInterop@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@.c)
 *     ??$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004B870 (--$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@-$ComPtr@UICompositionDrawingS.c)
 *     ??$As@UICompositionSurface@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004B8B4 (--$As@UICompositionSurface@Composition@UI@Windows@@@-$ComPtr@UICompositionDrawingSurface@Composi.c)
 *     ??$As@UICompositionBrush@Composition@UI@Windows@@@?$ComPtr@UICompositionSurfaceBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004D85C (--$As@UICompositionBrush@Composition@UI@Windows@@@-$ComPtr@UICompositionSurfaceBrush@Composition.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::EnsureNoiseSurfaceBrush(CAccentAcrylicBlurBehind *this)
{
  char *v1; // r14
  unsigned int v3; // edi
  HMODULE ModuleHandleW; // rdi
  HRSRC ResourceW; // rbx
  HGLOBAL Resource; // rax
  LPVOID v7; // r15
  DWORD v8; // r12d
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  _QWORD *v19; // rsi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdi
  CDesktopManager *v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdi
  __m128 v29; // xmm7
  __m128 v30; // xmm6
  int v31; // eax
  int v32; // eax
  __int64 v33; // rdi
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rdi
  int v40; // eax
  int v41; // eax
  int v42; // eax
  __int64 v44; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+70h] [rbp-98h] BYREF
  __int64 v50; // [rsp+78h] [rbp-90h] BYREF
  __int64 v51; // [rsp+80h] [rbp-88h] BYREF
  __int64 v52; // [rsp+88h] [rbp-80h] BYREF
  __int64 v53; // [rsp+90h] [rbp-78h] BYREF
  __int64 v54; // [rsp+98h] [rbp-70h] BYREF
  int v55; // [rsp+A0h] [rbp-68h] BYREF
  int v56; // [rsp+A4h] [rbp-64h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-48h] BYREF
  int v61; // [rsp+C8h] [rbp-40h] BYREF
  int v62; // [rsp+CCh] [rbp-3Ch]
  __int64 v63; // [rsp+D0h] [rbp-38h] BYREF
  int v64; // [rsp+D8h] [rbp-30h]
  int v65; // [rsp+DCh] [rbp-2Ch]
  int v66; // [rsp+E0h] [rbp-28h]
  int v67; // [rsp+E4h] [rbp-24h]
  float v68; // [rsp+E8h] [rbp-20h]
  float v69; // [rsp+ECh] [rbp-1Ch]
  float v70[4]; // [rsp+F0h] [rbp-18h] BYREF

  v1 = (char *)this + 320;
  v3 = 0;
  if ( !*((_QWORD *)this + 40) )
  {
    ModuleHandleW = GetModuleHandleW(L"Windows.UI.Xaml.Controls.dll");
    ResourceW = FindResourceW(ModuleHandleW, (LPCWSTR)0x7D0, (LPCWSTR)0xA);
    Resource = LoadResource(ModuleHandleW, ResourceW);
    v7 = LockResource(Resource);
    v8 = SizeofResource(ModuleHandleW, ResourceW);
    v9 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 39);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 39));
    v44 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v44);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 112LL))(v9, &v44);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x796u);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v44);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD))(*(_QWORD *)v44 + 128LL))(v44, v7, v8);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x797u);
      }
      else
      {
        v45 = 0LL;
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v45);
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v9 + 32LL))(
                v9,
                v44,
                0LL,
                1LL,
                &v45);
        v3 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x79Au);
        }
        else
        {
          v13 = v45;
          v47 = 0LL;
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v47);
          v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 104LL))(v13, 0LL, &v47);
          v3 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x79Du);
          }
          else
          {
            v46 = 0LL;
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v46);
            v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 80LL))(v9, &v46);
            v3 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x7A0u);
            }
            else
            {
              v16 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v46 + 64LL))(
                      v46,
                      v47,
                      &GUID_WICPixelFormat32bppPBGRA,
                      0LL,
                      0LL,
                      0LL,
                      1);
              v3 = v16;
              if ( v16 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x7A1u);
              }
              else
              {
                v48 = 0LL;
                Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v48);
                v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v9 + 144LL))(
                        v9,
                        v46,
                        2LL,
                        &v48);
                v3 = v17;
                if ( v17 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x7A4u);
                }
                else
                {
                  v55 = 0;
                  v56 = 0;
                  v18 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v48 + 24LL))(v48, &v55, &v56);
                  v3 = v18;
                  if ( v18 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x7A9u);
                  }
                  else
                  {
                    v19 = (_QWORD *)((char *)this + 288);
                    v49 = 0LL;
                    v20 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<IDCompositionDeviceInternal>(
                            v19,
                            &v49);
                    v3 = v20;
                    if ( v20 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x7ADu);
                    }
                    else
                    {
                      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v49 + 24LL))(
                              v49,
                              (unsigned int)v55,
                              (unsigned int)v56);
                      v3 = v21;
                      if ( v21 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x7AFu);
                      }
                      else
                      {
                        v64 = v55;
                        v65 = v56;
                        v63 = 0LL;
                        v22 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v49 + 32LL))(
                                v49,
                                &v63,
                                1LL);
                        v3 = v22;
                        if ( v22 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x7B1u);
                        }
                        else
                        {
                          v52 = 0LL;
                          v23 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositorInterop>(
                                  v19,
                                  &v52);
                          v3 = v23;
                          if ( v23 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x7B4u);
                          }
                          else
                          {
                            v24 = v52;
                            v51 = 0LL;
                            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v51);
                            if ( (int)CDesktopManager::EnsureDCompositionInteropDevice(v25) < 0 )
                              v26 = 0LL;
                            else
                              v26 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29);
                            v27 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v24 + 40LL))(
                                    v24,
                                    v26,
                                    &v51);
                            v3 = v27;
                            if ( v27 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x7B7u);
                            }
                            else
                            {
                              v28 = v51;
                              v29 = 0LL;
                              v30 = 0LL;
                              v50 = 0LL;
                              v29.m128_f32[0] = (float)v55;
                              v30.m128_f32[0] = (float)v56;
                              Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v50);
                              v31 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, __int64, __int64 *))(*(_QWORD *)v28 + 48LL))(
                                      v28,
                                      _mm_unpacklo_ps(v29, v30).m128_u64[0],
                                      87LL,
                                      1LL,
                                      &v50);
                              v3 = v31;
                              if ( v31 < 0 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0x7BDu);
                              }
                              else
                              {
                                v54 = 0LL;
                                v32 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionDrawingSurfaceInterop>(
                                        &v50,
                                        &v54);
                                v3 = v32;
                                if ( v32 < 0 )
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x7C0u);
                                }
                                else
                                {
                                  v33 = v54;
                                  v53 = 0LL;
                                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v53);
                                  v34 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *, int *))(*(_QWORD *)v33 + 24LL))(
                                          v33,
                                          0LL,
                                          &GUID_e8f7fe7a_191c_466d_ad95_975678bda998,
                                          &v53,
                                          &v61);
                                  v3 = v34;
                                  if ( v34 < 0 )
                                  {
                                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0x7C5u);
                                  }
                                  else
                                  {
                                    v57 = 0LL;
                                    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v57);
                                    v35 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v53 + 40LL))(
                                            v53,
                                            v48,
                                            0LL,
                                            &v57);
                                    v3 = v35;
                                    if ( v35 < 0 )
                                    {
                                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x7C9u);
                                    }
                                    else
                                    {
                                      v66 = 0;
                                      v67 = 0;
                                      v70[0] = (float)v61;
                                      v70[1] = (float)v62;
                                      v68 = (float)v55;
                                      v69 = (float)v56;
                                      v70[2] = (float)v61 + (float)v55;
                                      v70[3] = (float)v62 + (float)v56;
                                      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v53 + 624LL))(v53, 1LL);
                                      (*(void (__fastcall **)(__int64, __int64, float *))(*(_QWORD *)v53 + 208LL))(
                                        v53,
                                        v57,
                                        v70);
                                      v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 32LL))(v54);
                                      v3 = v36;
                                      if ( v36 < 0 )
                                      {
                                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x7DEu);
                                      }
                                      else
                                      {
                                        v59 = 0LL;
                                        v37 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
                                                v19,
                                                &v59);
                                        v3 = v37;
                                        if ( v37 < 0 )
                                        {
                                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, 0x7E1u);
                                        }
                                        else
                                        {
                                          v60 = 0LL;
                                          v38 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionSurface>(
                                                  &v50,
                                                  &v60);
                                          v3 = v38;
                                          if ( v38 < 0 )
                                          {
                                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x7E5u);
                                          }
                                          else
                                          {
                                            v39 = v59;
                                            v58 = 0LL;
                                            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v58);
                                            v40 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v39 + 192LL))(
                                                    v39,
                                                    v60,
                                                    &v58);
                                            v3 = v40;
                                            if ( v40 < 0 )
                                            {
                                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0x7E9u);
                                            }
                                            else
                                            {
                                              v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v58 + 88LL))(
                                                      v58,
                                                      0LL);
                                              v3 = v41;
                                              if ( v41 < 0 )
                                              {
                                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0x7EAu);
                                              }
                                              else
                                              {
                                                v42 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionSurfaceBrush>::As<Windows::UI::Composition::ICompositionBrush>(
                                                        &v58,
                                                        v1);
                                                v3 = v42;
                                                if ( v42 < 0 )
                                                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v42, 0x7EDu);
                                              }
                                            }
                                            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v58);
                                          }
                                          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v60);
                                        }
                                        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v59);
                                      }
                                    }
                                    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v57);
                                  }
                                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v53);
                                }
                                Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v54);
                              }
                              Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v50);
                            }
                            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v51);
                          }
                          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v52);
                        }
                      }
                    }
                    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v49);
                  }
                }
                Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v48);
              }
            }
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v46);
          }
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v47);
        }
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v45);
      }
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v44);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return v3;
}
