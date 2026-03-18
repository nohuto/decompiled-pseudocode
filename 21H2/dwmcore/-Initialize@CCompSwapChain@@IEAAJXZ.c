/*
 * XREFs of ?Initialize@CCompSwapChain@@IEAAJXZ @ 0x18028F010
 * Callers:
 *     ?Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVICompositionSwapChain@@@Z @ 0x18028EC68 (-Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV-$unique_any_t@V-$unique_.c)
 *     ?SetSize@CCompSwapChain@@UEAAJAEBUD2D_SIZE_U@@I@Z @ 0x18028F910 (-SetSize@CCompSwapChain@@UEAAJAEBUD2D_SIZE_U@@I@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ResetBackBuffer@CCompSwapChain@@IEAAJXZ @ 0x18028F6A4 (-ResetBackBuffer@CCompSwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CCompSwapChain::Initialize(CCompSwapChain *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)); // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, char *); // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  v2 = CCompSwapChain::ResetBackBuffer(this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, v2, 0x3Bu);
  }
  else
  {
    v5 = *((_QWORD *)this + 10);
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v5 + 72LL);
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v13);
    v7 = v6(v5, (unsigned int)(*((_DWORD *)this + 40) - 1), &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v13);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x3Fu);
    }
    else
    {
      v9 = *((_QWORD *)this + 14);
      *((_QWORD *)this + 14) = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v10 = (**v13)(v13, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, (char *)this + 112);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x41u);
      }
      else
      {
        **((_DWORD **)this + 30) = 0;
        **((_DWORD **)this + 39) = 0;
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  return v4;
}
