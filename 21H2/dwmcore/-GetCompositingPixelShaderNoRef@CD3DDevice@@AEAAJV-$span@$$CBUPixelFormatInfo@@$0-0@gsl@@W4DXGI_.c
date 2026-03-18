/*
 * XREFs of ?GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18027E284
 * Callers:
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18027E784 (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18027EA64 (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x18003B49C (-Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@UID3D11PixelShader@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUID3D11PixelShader@@@Z @ 0x1800F40E0 (--4-$com_ptr_t@UID3D11PixelShader@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUID3D11PixelS.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Add@?$CMap@W4CompositingShaderLookupKey@@V?$com_ptr_t@UID3D11PixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$CMapEqualHelper@W4CompositingShaderLookupKey@@V?$com_ptr_t@UID3D11PixelShader@@Uerr_returncode_policy@wil@@@wil@@@@@@QEAAHAEBW4CompositingShaderLookupKey@@AEBV?$com_ptr_t@UID3D11PixelShader@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18027CC68 (-Add@-$CMap@W4CompositingShaderLookupKey@@V-$com_ptr_t@UID3D11PixelShader@@Uerr_returncode_polic.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1802AC260 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 *     ?GetCompositingShaderLookupKey@@YA?AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802AC830 (-GetCompositingShaderLookupKey@@YA-AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V-$span@$.c)
 */

__int64 __fastcall CD3DDevice::GetCompositingPixelShaderNoRef(
        struct CD3DDevice *this,
        __int128 *a2,
        unsigned int a3,
        __int64 *a4)
{
  unsigned int v8; // edi
  __int64 CompositingShaderLookupKey; // r9
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rbx
  __int128 v15; // xmm0
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  const void *v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v26[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  __int128 v28; // [rsp+50h] [rbp-10h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+40h] BYREF
  struct CD3DPixelShader *v30; // [rsp+A8h] [rbp+48h] BYREF

  v27 = *a2;
  v8 = 0;
  CompositingShaderLookupKey = GetCompositingShaderLookupKey(*((unsigned int *)this + 146), &v27);
  *(_QWORD *)&v27 = CompositingShaderLookupKey;
  v10 = 0;
  if ( *((int *)this + 394) <= 0 )
    goto LABEL_5;
  v11 = *((int *)this + 394);
  v12 = 0LL;
  v13 = (_QWORD *)*((_QWORD *)this + 195);
  while ( *v13 != CompositingShaderLookupKey )
  {
    ++v10;
    ++v12;
    ++v13;
    if ( v12 >= v11 )
      goto LABEL_5;
  }
  if ( v10 == -1 )
  {
LABEL_5:
    v14 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(*((_QWORD *)this + 196) + 8LL * v10);
    if ( v14 )
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 8LL))(v14, v12, v11);
  }
  v29 = 0LL;
  v26[0] = v14;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
  if ( !v14 )
  {
    v15 = *a2;
    v16 = *((unsigned int *)this + 146);
    v29 = 0LL;
    v28 = v15;
    v17 = CreateCompositingShader(v16, &v28, a3, &v29);
    v8 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0xCFFu);
      goto LABEL_20;
    }
    v19 = v29;
    v30 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29);
    v21 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
    v22 = CD3DPixelShader::Create(this, v21, v20, &v30);
    v8 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, v22, 0xD05u);
      goto LABEL_18;
    }
    wil::com_ptr_t<ID3D11PixelShader,wil::err_returncode_policy>::operator=(v26, *((_QWORD *)v30 + 12));
    if ( !(unsigned int)CMap<enum CompositingShaderLookupKey,wil::com_ptr_t<ID3D11PixelShader,wil::err_returncode_policy>,CMapEqualHelper<enum CompositingShaderLookupKey,wil::com_ptr_t<ID3D11PixelShader,wil::err_returncode_policy>>>::Add(
                          (__int64)this + 1560,
                          &v27,
                          v26) )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, -2147024882, 0xD0Bu);
LABEL_18:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v30);
LABEL_20:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
      goto LABEL_16;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v30);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
    v14 = v26[0];
  }
  *a4 = v14;
LABEL_16:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v26);
  return v8;
}
