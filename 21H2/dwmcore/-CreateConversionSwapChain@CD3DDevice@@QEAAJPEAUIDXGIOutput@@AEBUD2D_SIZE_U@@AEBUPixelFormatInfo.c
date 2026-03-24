/*
 * XREFs of ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacySwapChain@@@Z @ 0x18023DFD8
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x180025040 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x18002CC28 (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180078248 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacySwapChain@@@Z @ 0x18024F46C (-Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AE.c)
 */

__int64 __fastcall CD3DDevice::CreateConversionSwapChain(
        CD3DDevice *this,
        struct IDXGIOutput *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct ILegacySwapChain **a6)
{
  int v10; // ebx
  __int64 v11; // rcx
  int v12; // eax
  UINT32 width; // ecx
  struct IDXGIOutputVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetParent)(IDXGIOutput *, const IID *const, void **); // rbx
  int v16; // r9d
  unsigned int v17; // ebx
  unsigned int v19; // [rsp+20h] [rbp-E0h]
  struct IDXGISwapChainDWM1 *v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, struct IDXGISwapChainDWM1 **); // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v25[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h]
  int v27; // [rsp+70h] [rbp-90h]
  int v28; // [rsp+74h] [rbp-8Ch]
  int v29; // [rsp+78h] [rbp-88h]
  __int64 v30; // [rsp+7Ch] [rbp-84h]
  int v31; // [rsp+84h] [rbp-7Ch]
  int v32; // [rsp+88h] [rbp-78h]
  __int64 v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  int v36; // [rsp+A0h] [rbp-60h]
  _BYTE v37[8]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v38; // [rsp+B8h] [rbp-48h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  int v40; // [rsp+E4h] [rbp-1Ch]

  v24[0] = 0LL;
  v23 = 0LL;
  *a6 = 0LL;
  v10 = *((_DWORD *)this + 282);
  v11 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  if ( v10 < 0 )
  {
    v19 = 1164;
    goto LABEL_27;
  }
  if ( *((_BYTE *)this + 1436) )
  {
    CD3DDevice::Trim(this);
    v11 = v24[0];
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
          v24);
  v10 = v12;
  if ( v12 < 0 )
  {
    v19 = 1173;
    goto LABEL_18;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24[0] + 32LL))(v24[0], v37);
  v10 = v12;
  if ( v12 < 0 )
  {
    v19 = 1176;
    goto LABEL_18;
  }
  if ( !(_DWORD)v39 || !HIDWORD(v39) )
  {
    v10 = -2003304442;
    v19 = 1181;
LABEL_27:
    v16 = v10;
    goto LABEL_28;
  }
  width = a3->width;
  v26 = v39;
  v27 = *(_DWORD *)a4;
  v28 = v40;
  v30 = 1LL;
  v35 = 1;
  v36 = 1;
  lpVtbl = a2->lpVtbl;
  v25[0] = width;
  v25[1] = a3->height;
  GetParent = lpVtbl->GetParent;
  v29 = 0;
  v31 = 96;
  v32 = 2;
  v33 = 0LL;
  v34 = 0;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v12 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))GetParent)(
          a2,
          &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
          &v23);
  v10 = v12;
  if ( v12 < 0 )
  {
    v19 = 1207;
    goto LABEL_18;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v23 + 48LL))(
          v23,
          &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
          &v22);
  v10 = v12;
  if ( v12 < 0 )
  {
    v19 = 1208;
    goto LABEL_18;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, struct IDXGIOutput *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGISwapChainDWM1 **)))(*(_QWORD *)v22 + 24LL))(
          v22,
          *((_QWORD *)this + 74),
          v25,
          a2,
          &v21);
  v10 = v12;
  if ( v12 < 0 )
  {
    v19 = 1214;
    goto LABEL_18;
  }
  v12 = (**v21)(v21, &GUID_fc4f7700_8c88_43fb_aa4f_44c4a584dc19, &v20);
  v10 = v12;
  if ( v12 < 0 )
  {
    v19 = 1216;
    goto LABEL_18;
  }
  v12 = CConversionSwapChain::Create(this, v20, a4, a5, v38, a6);
  v10 = v12;
  if ( v12 < 0 )
  {
    v19 = 1224;
LABEL_18:
    v16 = v12;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1803069D8, 3u, v16, v19, 0LL);
  }
  v17 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v10, 2u);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v23);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v24);
  return v17;
}
