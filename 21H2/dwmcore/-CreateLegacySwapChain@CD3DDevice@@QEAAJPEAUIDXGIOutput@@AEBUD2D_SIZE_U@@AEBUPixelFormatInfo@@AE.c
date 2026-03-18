/*
 * XREFs of ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVILegacySwapChain@@@Z @ 0x18001D808
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x18001D5F0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@FrontBufferRender@@PEAPEAVILegacySwapChain@@@Z @ 0x18001ED08 (-Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@A.c)
 *     ?IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z @ 0x18001F3A8 (-IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z.c)
 *     ?UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ @ 0x18001F44C (-UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1800218AC (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007F688 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::CreateLegacySwapChain(
        CD3DDevice *this,
        struct IDXGIOutput *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        unsigned int a6,
        bool a7,
        struct ILegacySwapChain **a8)
{
  int v12; // esi
  int v13; // ebx
  int v14; // eax
  int v15; // r9d
  int v16; // r8d
  enum DXGI_FORMAT v17; // r9d
  __int64 v18; // r10
  bool IsFrontBufferRenderingSupported; // al
  struct IDXGIOutputVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetParent)(IDXGIOutput *, const IID *const, void **); // rbx
  unsigned int v22; // ebx
  int v24; // r9d
  unsigned int v25; // [rsp+20h] [rbp-E0h]
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  const struct RenderTargetInfo *v31; // [rsp+68h] [rbp-98h]
  _DWORD v32[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v33; // [rsp+78h] [rbp-88h]
  int v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+84h] [rbp-7Ch]
  int v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+8Ch] [rbp-74h]
  int v38; // [rsp+94h] [rbp-6Ch]
  unsigned int v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  int v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+ACh] [rbp-54h]
  int v43; // [rsp+B0h] [rbp-50h]
  _BYTE v44[40]; // [rsp+C0h] [rbp-40h] BYREF
  int v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+ECh] [rbp-14h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  int v48; // [rsp+108h] [rbp+8h]
  int v49; // [rsp+12Ch] [rbp+2Ch]

  v31 = a5;
  v30 = 0LL;
  v12 = 0;
  *a8 = 0LL;
  v13 = *((_DWORD *)this + 272);
  v29 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  if ( v13 < 0 )
  {
    v25 = 197;
    goto LABEL_36;
  }
  if ( *((_BYTE *)this + 1508) )
    CD3DDevice::Trim(this);
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v30);
  v14 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
          &v30);
  v13 = v14;
  if ( v14 < 0 )
  {
    v25 = 206;
    goto LABEL_28;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v30 + 32LL))(v30, v44);
  v13 = v14;
  if ( v14 < 0 )
  {
    v25 = 209;
    goto LABEL_28;
  }
  if ( !v45 || !v46 )
  {
    v13 = -2003304442;
    v25 = 214;
    goto LABEL_36;
  }
  v15 = *(_DWORD *)a4;
  v32[0] = a3->width;
  v32[1] = a3->height;
  v33 = v47;
  v35 = v48;
  v34 = v15;
  v36 = 0;
  v37 = 1LL;
  if ( CD3DDevice::UseSwapchainAsShaderInput(this) )
    v16 = 112;
  v38 = v16;
  if ( a7 != (_BYTE)v18 && (v49 & 0x100) == 0 )
  {
    IsFrontBufferRenderingSupported = CD3DDevice::IsFrontBufferRenderingSupported(this, v17);
    v18 = 0LL;
    if ( IsFrontBufferRenderingSupported )
      v38 |= 0x2000480u;
  }
  v39 = a6;
  lpVtbl = a2->lpVtbl;
  v42 = 1;
  v43 = 1;
  v40 = v18;
  GetParent = lpVtbl->GetParent;
  v41 = v18;
  v14 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))GetParent)(
          a2,
          &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
          &v29);
  v13 = v14;
  if ( v14 < 0 )
  {
    v25 = 255;
    goto LABEL_28;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v29 + 48LL))(
          v29,
          &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
          &v28);
  v13 = v14;
  if ( v14 < 0 )
  {
    v25 = 256;
    goto LABEL_28;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, struct IDXGIOutput *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v28 + 24LL))(
          v28,
          *((_QWORD *)this + 69),
          v32,
          a2,
          &v27);
  v13 = v14;
  if ( v14 < 0 )
  {
    v25 = 262;
    goto LABEL_28;
  }
  v14 = (**v27)(v27, &GUID_fc4f7700_8c88_43fb_aa4f_44c4a584dc19, &v26);
  v13 = v14;
  if ( v14 < 0 )
  {
    v25 = 264;
    goto LABEL_28;
  }
  if ( (v38 & 0x400) != 0 )
  {
    if ( *((int *)this + 147) >= 2600 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v26 + 264LL))(v26) == 2 )
      {
        v12 = 1;
        goto LABEL_22;
      }
      v13 = -2003304306;
      v25 = 280;
LABEL_36:
      v24 = v13;
      goto LABEL_37;
    }
    v12 = 2;
  }
LABEL_22:
  v14 = CLegacySwapChain::Create(this, v44, v26, a4, v31, v12, a8);
  v13 = v14;
  if ( v14 < 0 )
  {
    v25 = 297;
LABEL_28:
    v24 = v14;
LABEL_37:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_180347500, 3u, v24, v25, 0LL);
  }
  v22 = CD3DDevice::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v13, 2LL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v28);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>(&v30);
  return v22;
}
