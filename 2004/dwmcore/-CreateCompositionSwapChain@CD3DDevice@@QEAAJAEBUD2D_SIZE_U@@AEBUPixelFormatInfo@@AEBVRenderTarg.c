/*
 * XREFs of ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVICompositionSwapChain@@@Z @ 0x18023C050
 * Callers:
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18018740C (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?EnsureSwapChain@CLocalAppRenderTarget@@IEAAJXZ @ 0x18018BBAC (-EnsureSwapChain@CLocalAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180064188 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E1920 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVICompositionSwapChain@@@Z @ 0x18024F340 (-Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@AEBUPixelFormatInfo@@AEBVRenderT.c)
 */

__int64 __fastcall CD3DDevice::CreateCompositionSwapChain(
        CD3DDevice *this,
        const struct D2D_SIZE_U *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4,
        unsigned int a5,
        struct ICompositionSwapChain **a6)
{
  int v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 *); // rdi
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, GUID *, __int64 *); // rdi
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD, struct D2D_SIZE_U *, _QWORD, struct IDXGISwapChain1 **); // rdi
  int v18; // r9d
  unsigned int v19; // ebx
  unsigned int v21; // [rsp+20h] [rbp-69h]
  struct IDXGISwapChain1 *v22; // [rsp+30h] [rbp-59h] BYREF
  __int64 v23; // [rsp+38h] [rbp-51h] BYREF
  __int64 v24; // [rsp+40h] [rbp-49h] BYREF
  __int64 v25; // [rsp+48h] [rbp-41h] BYREF
  struct D2D_SIZE_U v26; // [rsp+50h] [rbp-39h] BYREF
  int v27; // [rsp+58h] [rbp-31h]
  int v28; // [rsp+5Ch] [rbp-2Dh]
  __int64 v29; // [rsp+60h] [rbp-29h]
  int v30; // [rsp+68h] [rbp-21h]
  __int64 v31; // [rsp+6Ch] [rbp-1Dh]
  int v32; // [rsp+74h] [rbp-15h]
  int v33; // [rsp+78h] [rbp-11h]
  int v34; // [rsp+7Ch] [rbp-Dh]

  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  *a6 = 0LL;
  v9 = *((_DWORD *)this + 282);
  v22 = 0LL;
  if ( v9 < 0 )
  {
    v18 = v9;
    v21 = 1325;
    goto LABEL_18;
  }
  v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 74);
  v26 = *a2;
  v27 = *(_DWORD *)a3;
  v31 = 3LL;
  v32 = 3;
  v33 = *((_DWORD *)a3 + 1);
  v28 = 0;
  v29 = 1LL;
  v30 = 32;
  v34 = 0;
  v11 = (**v10)(v10, &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c, &v25);
  v9 = v11;
  if ( v11 < 0 )
  {
    v21 = 1345;
    goto LABEL_12;
  }
  v12 = v25;
  v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 56LL);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  v11 = v13(v12, &v24);
  v9 = v11;
  if ( v11 < 0 )
  {
    v21 = 1346;
    goto LABEL_12;
  }
  v14 = v24;
  v15 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v24 + 48LL);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v11 = v15(v14, &GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, &v23);
  v9 = v11;
  if ( v11 < 0 )
  {
    v21 = 1347;
    goto LABEL_12;
  }
  v16 = v23;
  v17 = *(__int64 (__fastcall **)(__int64, _QWORD, struct D2D_SIZE_U *, _QWORD, struct IDXGISwapChain1 **))(*(_QWORD *)v23 + 192LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v22);
  v11 = v17(v16, *((_QWORD *)this + 74), &v26, 0LL, &v22);
  v9 = v11;
  if ( v11 < 0 )
  {
    v21 = 1352;
    goto LABEL_12;
  }
  v11 = CCompSwapChain::Create(this, v22, a3, a4, a6);
  v9 = v11;
  if ( v11 < 0 )
  {
    v21 = 1359;
LABEL_12:
    v18 = v11;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802EE908, 2u, v18, v21, 0LL);
  }
  v19 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v9, 2u);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v23);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
  return v19;
}
