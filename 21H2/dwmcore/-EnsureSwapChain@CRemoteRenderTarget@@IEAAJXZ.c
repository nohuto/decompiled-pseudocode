/*
 * XREFs of ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x1800FE2A8
 * Callers:
 *     ?CheckOcclusionState@CRemoteRenderTarget@@UEAAJXZ @ 0x1800FE23C (-CheckOcclusionState@CRemoteRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x18001E884 (-InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006ACA0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800A7C48 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800FE0C4 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFor.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802895FC (-Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z.c)
 */

__int64 __fastcall CRemoteRenderTarget::EnsureSwapChain(CRemoteRenderTarget *this)
{
  struct ILegacyRemotingSwapChain **v1; // rbx
  unsigned int v3; // edi
  __int64 v4; // rcx
  int (__fastcall ***v5)(_QWORD); // rcx
  struct ILegacyRemotingSwapChain *v7; // rdx
  struct IDXGIOutputDWM **v8; // r14
  CDisplayManager *v9; // rcx
  int DXGIOutput; // eax
  CDeviceManager *v11; // rcx
  __int64 v12; // rax
  struct _LUID v13; // rdx
  int Device; // eax
  __int64 v15; // rcx
  struct ILegacyRemotingSwapChain *v16; // rdx
  CD3DDevice *v17; // rbx
  int LegacyRemotingSwapChain; // eax
  __int64 v19; // rcx
  CD3DDevice *v20; // rcx
  __int64 v21; // rcx
  struct ILegacyRemotingSwapChain *v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // [rsp+20h] [rbp-48h]
  struct ILegacyRemotingSwapChain **v28; // [rsp+28h] [rbp-40h]
  CD3DDevice *v29; // [rsp+30h] [rbp-38h] BYREF
  int v30; // [rsp+38h] [rbp-30h] BYREF
  __int64 v31; // [rsp+3Ch] [rbp-2Ch]

  v1 = (struct ILegacyRemotingSwapChain **)((char *)this + 168);
  v3 = 0;
  v4 = *((_QWORD *)this + 21);
  if ( v4 )
  {
    v5 = (int (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v4 + 8) + 12LL) + v4 + 8);
    if ( (**v5)(v5) >= 0 && (!*((_BYTE *)this + 386) || *(_DWORD *)(*((_QWORD *)this + 2) + 1104LL) == 6) )
      return v3;
  }
  v7 = *v1;
  *v1 = 0LL;
  if ( v7 )
  {
    v21 = (__int64)v7 + *(int *)(*((_QWORD *)v7 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v8 = (struct IDXGIOutputDWM **)((char *)this + 160);
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)this + 20);
  DXGIOutput = CDisplayManager::InternalGetDXGIOutput(
                 v9,
                 0,
                 *((HMONITOR *)this + 24),
                 (struct IDXGIOutputDWM **)this + 20);
  LODWORD(v29) = DXGIOutput;
  v3 = DXGIOutput;
  if ( DXGIOutput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, &dword_180347468, 2LL, DXGIOutput, 0x8Cu);
    TranslateDXGIorD3DErrorInContext(v3, 4, &v29);
    v3 = (unsigned int)v29;
  }
  if ( (v3 & 0x80000000) != 0 )
  {
    v27 = 349;
    goto LABEL_33;
  }
  *((_DWORD *)this + 73) = *((_DWORD *)this + 48);
  v12 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 37) = 0LL;
  *((_BYTE *)this + 304) = 0;
  if ( *(_DWORD *)(v12 + 1104) == 6 )
  {
    v22 = *v1;
    *v1 = 0LL;
    if ( v22 )
    {
      v23 = (__int64)v22 + *(int *)(*((_QWORD *)v22 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = CDummyRemotingSwapChain::Create(*v8, v1);
    v3 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v24, 0x16Bu);
    else
      *((_BYTE *)this + 386) = 1;
    return v3;
  }
  if ( !*((_DWORD *)this + 26) || !*((_DWORD *)this + 27) )
  {
    v3 = -2147024809;
    v27 = 385;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0LL, v3, v27);
    return v3;
  }
  v30 = 87;
  v13 = *(struct _LUID *)((char *)this + 284);
  v31 = 3LL;
  v29 = 0LL;
  Device = CDeviceManager::GetDevice(v11, v13, &v29);
  v3 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, Device, 0x175u);
    v20 = v29;
    if ( !v29 )
      return v3;
    goto LABEL_20;
  }
  v16 = *v1;
  *v1 = 0LL;
  if ( v16 )
  {
    v26 = (__int64)v16 + *(int *)(*((_QWORD *)v16 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v28 = v1;
  v17 = v29;
  LegacyRemotingSwapChain = CD3DDevice::CreateLegacyRemotingSwapChain(
                              v29,
                              *v8,
                              (const struct D2D_SIZE_U *)this + 13,
                              (const struct PixelFormatInfo *)&v30,
                              (CRemoteRenderTarget *)((char *)this + 284),
                              v28);
  v3 = LegacyRemotingSwapChain;
  if ( LegacyRemotingSwapChain < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, LegacyRemotingSwapChain, 0x17Bu);
  }
  else
  {
    *((_BYTE *)this + 141) = 1;
    *((_BYTE *)this + 386) = 0;
  }
  if ( v17 )
  {
    v20 = v17;
LABEL_20:
    CD3DDevice::Release(v20);
  }
  return v3;
}
