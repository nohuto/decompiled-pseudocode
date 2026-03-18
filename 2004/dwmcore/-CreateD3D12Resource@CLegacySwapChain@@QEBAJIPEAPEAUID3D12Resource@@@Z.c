/*
 * XREFs of ?CreateD3D12Resource@CLegacySwapChain@@QEBAJIPEAPEAUID3D12Resource@@@Z @ 0x180247CB8
 * Callers:
 *     ?EnsureComputeScribbleResources@CSwapChainBuffer@@QEAAJPEAVCLegacySwapChain@@@Z @ 0x1802506C8 (-EnsureComputeScribbleResources@CSwapChainBuffer@@QEAAJPEAVCLegacySwapChain@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CCCB4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShareToD3D12@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z @ 0x18023E80C (-ShareToD3D12@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z.c)
 */

__int64 __fastcall CLegacySwapChain::CreateD3D12Resource(CLegacySwapChain *this, int a2, struct ID3D12Resource **a3)
{
  unsigned int v3; // r9d
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  CD3DDevice *v11; // rcx
  int v12; // eax
  struct ID3D12Resource *v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ID3D11Texture2D *v16; // [rsp+40h] [rbp+8h] BYREF
  struct ID3D12Resource *v17; // [rsp+58h] [rbp+20h] BYREF

  v3 = *((_DWORD *)this + 44);
  v16 = 0LL;
  v6 = (a2 + v3 - *((_DWORD *)this + 32)) % v3;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v16);
  v16 = 0LL;
  if ( v6 >= *((_DWORD *)this + 44) )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0x473u, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, struct ID3D11Texture2D **))(**((_QWORD **)this + 9) + 72LL))(
           *((_QWORD *)this + 9),
           v6,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &v16);
    v10 = v8;
    if ( v8 >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x46Fu, 0LL);
  }
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x482,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\legacyswapchain.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_11;
  }
LABEL_7:
  v11 = (CD3DDevice *)*((_QWORD *)this + 8);
  v17 = 0LL;
  v12 = CD3DDevice::ShareToD3D12(v11, v16, &v17);
  v10 = v12;
  if ( v12 >= 0 )
  {
    v13 = v17;
    v17 = 0LL;
    v10 = 0;
    *a3 = v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x487,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\legacyswapchain.cpp",
      (const char *)(unsigned int)v12);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
LABEL_11:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  return (unsigned int)v10;
}
