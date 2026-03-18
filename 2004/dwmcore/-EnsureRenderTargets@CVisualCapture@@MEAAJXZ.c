/*
 * XREFs of ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1801F2E60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800AF580 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z @ 0x1800DB0DC (-ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?GetAdapterLuid@CCompositionSurfaceBitmap@@QEBA?AU_LUID@@XZ @ 0x1801BA798 (-GetAdapterLuid@CCompositionSurfaceBitmap@@QEBA-AU_LUID@@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18023CF48 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 */

__int64 __fastcall CVisualCapture::EnsureRenderTargets(CVisualCapture *this)
{
  int v2; // ebx
  __int64 v3; // rcx
  CCompositionSurfaceBitmap *v4; // rcx
  struct IBitmapRealization *v5; // rdi
  char *v6; // rcx
  enum DXGI_COLOR_SPACE_TYPE *v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r14
  int v12; // ebx
  struct IBitmapRealization *v13; // rcx
  unsigned int v14; // esi
  struct IBitmapRealization *v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 (__fastcall ***v21)(_QWORD, _QWORD *); // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v29; // [rsp+48h] [rbp-19h] BYREF
  __int64 v30; // [rsp+50h] [rbp-11h] BYREF
  struct IBitmapRealization *v31; // [rsp+58h] [rbp-9h] BYREF
  struct _LUID v32; // [rsp+60h] [rbp-1h] BYREF
  int v33; // [rsp+68h] [rbp+7h]
  int v34; // [rsp+6Ch] [rbp+Bh]
  float v35; // [rsp+70h] [rbp+Fh]
  char v36; // [rsp+74h] [rbp+13h]
  _QWORD v37[2]; // [rsp+78h] [rbp+17h] BYREF
  char v38[16]; // [rsp+88h] [rbp+27h] BYREF

  v2 = -2003292412;
  v3 = *((_QWORD *)this + 237);
  if ( v3 )
  {
    v31 = 0LL;
    if ( (int)CCompositionSurfaceBitmap::GetCurrentRenderingRealization((CCompositionSurfaceBitmap *)(v3 + 64), &v31) < 0 )
    {
LABEL_16:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v31);
      return (unsigned int)v2;
    }
    v4 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 237);
    v29 = 0LL;
    v30 = 0LL;
    CCompositionSurfaceBitmap::GetAdapterLuid(v4, &v32);
    v34 = 0;
    v5 = v31;
    v33 = DisplayId::All;
    v6 = (char *)v31 + *(int *)(*((_QWORD *)v31 + 1) + 8LL) + 8;
    v7 = (enum DXGI_COLOR_SPACE_TYPE *)(**(__int64 (__fastcall ***)(char *, _QWORD *))v6)(v6, v37);
    v35 = ValidateSDRBoost(*((float *)this + 478), v7);
    v36 = 0;
    v8 = (*(__int64 (__fastcall **)(struct IBitmapRealization *, struct _LUID *, __int64 *))(*(_QWORD *)v5 + 48LL))(
           v5,
           &v32,
           &v29);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_180302FD0, 3u, v8, 0x43u, 0LL);
    }
    else
    {
      v10 = *(int *)(*(_QWORD *)(v29 + 8) + 8LL) + v29 + 8;
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v12 = DisplayId::All;
      v13 = (struct IBitmapRealization *)((char *)v5 + *(int *)(*((_QWORD *)v5 + 1) + 8LL) + 8);
      v14 = *(_DWORD *)((**(__int64 (__fastcall ***)(struct IBitmapRealization *, _QWORD *))v13)(v13, v37) + 8);
      v15 = (struct IBitmapRealization *)((char *)v5 + *(int *)(*((_QWORD *)v5 + 1) + 8LL) + 8);
      v16 = *(_DWORD *)((**(__int64 (__fastcall ***)(struct IBitmapRealization *, char *))v15)(v15, v38) + 4);
      v17 = (**(__int64 (__fastcall ***)(__int64))v29)(v29);
      v18 = CD3DDevice::CreateRenderTargetBitmap(v11, v17, v16, v14, v12, LODWORD(v35), &v30);
      v2 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_180302FD0, 3u, v18, 0x4Au, 0LL);
      }
      else
      {
        v20 = v30;
        v21 = (__int64 (__fastcall ***)(_QWORD, _QWORD *))(v30 + *(int *)(*(_QWORD *)(v30 + 8) + 16LL) + 8LL);
        v22 = (__int64 *)(**v21)(v21, v37);
        v30 = 0LL;
        v23 = *v22;
        *((_QWORD *)this + 10) = *v22;
        v24 = *((unsigned int *)this + 450);
        v37[0] = v20;
        v25 = v24 + 1;
        if ( (int)v24 + 1 < (unsigned int)v24 )
        {
          v2 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_11:
          if ( v2 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v26, &dword_180302FD0, 3u, v2, 0x4Fu, 0LL);
          goto LABEL_15;
        }
        if ( v25 > *((_DWORD *)this + 449) )
        {
          v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1776, 8, 1, v37);
          v2 = v27;
          if ( v27 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v27, 0xC0u, 0LL);
          goto LABEL_11;
        }
        *(_QWORD *)(*((_QWORD *)this + 222) + 8 * v24) = v20;
        v2 = 0;
        *((_DWORD *)this + 450) = v25;
      }
    }
LABEL_15:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v30);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
    goto LABEL_16;
  }
  return (unsigned int)v2;
}
