/*
 * XREFs of ?GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBitmapSource@@@Z @ 0x1802232F0
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x18021C5B0 (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$?4UIWICBitmapFlipRotator@@@?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@UIWICBitmapFlipRotator@@@12@@Z @ 0x1802230DC (--$-4UIWICBitmapFlipRotator@@@-$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComP.c)
 *     ??$As@UID3D11Texture2D@@@?$ComPtr@UIDXGIResource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Details@12@@Z @ 0x180223128 (--$As@UID3D11Texture2D@@@-$ComPtr@UIDXGIResource@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ?InitializeDuplication@DDAScreenCapture@@AEAAJXZ @ 0x180223994 (-InitializeDuplication@DDAScreenCapture@@AEAAJXZ.c)
 *     ?TryAcquireFrame@DDAScreenCapture@@AEAAJPEAUDXGI_OUTDUPL_FRAME_INFO@@PEAPEAUIDXGIResource@@@Z @ 0x180223F1C (-TryAcquireFrame@DDAScreenCapture@@AEAAJPEAUDXGI_OUTDUPL_FRAME_INFO@@PEAPEAUIDXGIResource@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall DDAScreenCapture::GetScreenCaptureAsWicBitmapSource(
        DDAScreenCapture *this,
        struct IWICImagingFactory *a2,
        struct IWICBitmapSource **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r14
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  struct IWICBitmapSource *v20; // rax
  int v21; // eax
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  struct IWICBitmapSource *v24; // [rsp+58h] [rbp-A8h] BYREF
  struct IDXGIResource *v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+78h] [rbp-88h] BYREF
  int v29; // [rsp+80h] [rbp-80h] BYREF
  __int64 v30[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v31[2]; // [rsp+98h] [rbp-68h] BYREF
  char v32; // [rsp+A8h] [rbp-58h]
  __int64 v33; // [rsp+B0h] [rbp-50h] BYREF
  int v34; // [rsp+B8h] [rbp-48h]
  DDAScreenCapture *v35; // [rsp+C0h] [rbp-40h]
  char v36; // [rsp+C8h] [rbp-38h]
  unsigned int v37; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v38; // [rsp+D4h] [rbp-2Ch]
  __int64 v39; // [rsp+ECh] [rbp-14h]
  __int64 v40; // [rsp+F4h] [rbp-Ch]
  GUID v41; // [rsp+100h] [rbp+0h] BYREF
  GUID v42; // [rsp+110h] [rbp+10h] BYREF
  DXGI_OUTDUPL_FRAME_INFO v43; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  *a3 = 0LL;
  v25 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15));
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 126LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_49;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
  v6 = DDAScreenCapture::TryAcquireFrame(this, &v43, &v25);
  v7 = v6;
  if ( v6 == -2005270490 )
  {
    v6 = DDAScreenCapture::InitializeDuplication(this);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 132LL;
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    v6 = DDAScreenCapture::TryAcquireFrame(this, &v43, &v25);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 133LL;
      goto LABEL_10;
    }
  }
  else if ( v6 < 0 )
  {
    v8 = 137LL;
    goto LABEL_10;
  }
  v35 = this;
  v36 = 1;
  if ( !v43.AccumulatedFrames )
  {
    v7 = -2147483638;
    goto LABEL_47;
  }
  v28 = 0LL;
  v9 = Microsoft::WRL::ComPtr<IDXGIResource>::As<ID3D11Texture2D>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v25,
         &v28);
  v7 = v9;
  if ( v9 >= 0 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v28 + 80LL))(v28, &v37);
    v26 = 0LL;
    v39 = 3LL;
    v40 = 0x20000LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, __int64 *))(**((_QWORD **)this + 13) + 40LL))(
            *((_QWORD *)this + 13),
            &v37,
            0LL,
            &v26);
    v7 = v10;
    if ( v10 < 0 )
    {
      v11 = 162LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v10);
LABEL_45:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      goto LABEL_46;
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 14) + 376LL))(
      *((_QWORD *)this + 14),
      v26,
      v28);
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, __int64 *))(**((_QWORD **)this + 14)
                                                                                         + 112LL))(
            *((_QWORD *)this + 14),
            v26,
            0LL,
            1LL,
            0,
            &v33);
    v7 = v10;
    if ( v10 < 0 )
    {
      v11 = 167LL;
      goto LABEL_19;
    }
    v12 = v26;
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
    v30[1] = (__int64)this;
    v31[0] = v12;
    v30[0] = 0LL;
    v31[1] = (__int64)this;
    v32 = 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v30);
    v27 = 0LL;
    v41 = GUID_WICPixelFormat32bppBGRA;
    v13 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, _QWORD, _QWORD, GUID *, int, unsigned int, __int64, __int64 *))a2->lpVtbl->CreateBitmapFromMemory)(
            a2,
            v37,
            v38,
            &v41,
            v34,
            v34 * v38,
            v33,
            &v27);
    v7 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB7,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v13);
LABEL_44:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      v32 = 0;
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 14) + 120LL))(
        *((_QWORD *)this + 14),
        v12,
        0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v31);
      goto LABEL_45;
    }
    v30[0] = 0LL;
    if ( v38 <= v37 )
    {
      Microsoft::WRL::ComPtr<IWICBitmapSource>::operator=<IWICBitmapFlipRotator>(v30, &v27);
    }
    else
    {
      v23 = 0LL;
      v14 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, __int64 *))a2->lpVtbl->CreateBitmapFlipRotator)(
              a2,
              &v23);
      v7 = v14;
      if ( v14 < 0 )
      {
        v15 = 190LL;
        goto LABEL_29;
      }
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v23 + 64LL))(v23, v27, 3LL);
      v7 = v14;
      if ( v14 < 0 )
      {
        v15 = 191LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
          (const char *)(unsigned int)v14);
        v16 = v23;
        if ( v23 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        goto LABEL_43;
      }
      Microsoft::WRL::ComPtr<IWICBitmapSource>::operator=<IWICBitmapFlipRotator>(v30, &v23);
      v17 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
    v42 = GUID_WICPixelFormat24bppBGR;
    v24 = 0LL;
    v18 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource **))a2->lpVtbl->CreateFormatConverter)(
            a2,
            &v24);
    v7 = v18;
    if ( v18 >= 0 )
    {
      v29 = 0;
      v18 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, GUID *, GUID *, int *))v24->lpVtbl[1].AddRef)(
              v24,
              &v41,
              &v42,
              &v29);
      v7 = v18;
      if ( v18 >= 0 )
      {
        v18 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, GUID *, _QWORD, _QWORD, _QWORD, _DWORD))v24->lpVtbl[1].QueryInterface)(
                v24,
                v30[0],
                &v42,
                0LL,
                0LL,
                0LL,
                0);
        v7 = v18;
        if ( v18 >= 0 )
        {
          v20 = v24;
          v24 = 0LL;
          *a3 = v20;
          v7 = 0;
          goto LABEL_42;
        }
        v19 = 205LL;
      }
      else
      {
        v19 = 204LL;
      }
    }
    else
    {
      v19 = 202LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v18);
LABEL_42:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
LABEL_43:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v30);
    goto LABEL_44;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x98,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
    (const char *)(unsigned int)v9);
LABEL_46:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
LABEL_47:
  v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
  if ( v21 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8E,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v21);
LABEL_49:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
  return v7;
}
