/*
 * XREFs of ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x1800454E4
 * Callers:
 *     ?EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVISwapChainRealization@@@Z @ 0x1800A7DF4 (-EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVISwapChain.c)
 * Callees:
 *     ?Create@CFlipExSwapchainStatistics@@SAJPEBVCGlobalCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x180020434 (-Create@CFlipExSwapchainStatistics@@SAJPEBVCGlobalCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x180045160 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAG@Z @ 0x180045634 (-EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAG@Z.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x1800456D8 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z @ 0x1800458D4 (-AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x1800459EC (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z @ 0x18020A88C (-Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::Initialize(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        __int64 a2)
{
  int v3; // edi
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  const struct CGlobalCompositionSurfaceInfo *v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rcx
  char *v16; // rbx
  const struct CCompositionSurfaceInfo *v17; // rcx
  int v18; // eax
  unsigned int v19; // ecx
  struct CFlipExSwapchainStatistics *v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // [rsp+20h] [rbp-E0h]
  struct CFlipExSwapchainStatistics *v27; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v29[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v30[120]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v31[4]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v32; // [rsp+CCh] [rbp-34h]
  HANDLE hObject; // [rsp+3B8h] [rbp+2B8h]
  unsigned __int64 v34; // [rsp+3C0h] [rbp+2C0h]
  unsigned __int16 v35[64]; // [rsp+3D0h] [rbp+2D0h] BYREF

  v28 = a2;
  v3 = 0;
  memset_0(v29, 0, 0x410uLL);
  if ( *((_QWORD *)this + 3) )
    CGlobalCompositionSurfaceInfo::CBindInfo::Reset(this);
  v4 = NtQueryCompositionSurfaceBinding(*(_QWORD *)(*(_QWORD *)this + 32LL), &v28, v29);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    v26 = 635;
LABEL_36:
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802D9050, 4u, v3, v26, 0LL);
    goto LABEL_10;
  }
  v6 = v29[0];
  *((_QWORD *)this + 3) = v28;
  *((_DWORD *)this + 8) = v6;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          v3 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802D9050, 4u, -2147024809, 0x2C0u, 0LL);
          goto LABEL_18;
        }
        v16 = (char *)hObject;
        v17 = *(const struct CCompositionSurfaceInfo **)this;
        v27 = 0LL;
        v18 = CCompositionSwapchainStatistics::Create(v17, hObject, v34, &v27);
        v3 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_1802D9050, 4u, v18, 0x2AFu, 0LL);
        }
        else
        {
          v20 = v27;
          v21 = *((_QWORD *)this + 2);
          v27 = 0LL;
          *((_QWORD *)this + 2) = ((unsigned __int64)v20 + 16) & -(__int64)(v20 != 0LL);
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          v22 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
                  this,
                  (const struct CSM_BUFFER_ATTRIBUTES *)v30,
                  (const struct CSM_SWAPCHAIN_REALIZATION_INFO *)v31);
          v3 = v22;
          if ( v22 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v23, &dword_1802D9050, 4u, v22, 0x2B3u, 0LL);
          else
            CGlobalCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(this, v35);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
        if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v16);
      }
      else
      {
        if ( v32 <= 1 )
        {
LABEL_8:
          v9 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
                 this,
                 (const struct CSM_BUFFER_ATTRIBUTES *)v30,
                 (const struct CSM_SWAPCHAIN_REALIZATION_INFO *)v31);
          v3 = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802D9050, 4u, v9, 0x29Du, 0LL);
          else
            CGlobalCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(this, v35);
          goto LABEL_10;
        }
        v12 = *(const struct CGlobalCompositionSurfaceInfo **)this;
        v27 = 0LL;
        v13 = CFlipExSwapchainStatistics::Create(v12, &v27);
        v3 = v13;
        if ( v13 >= 0 )
        {
          v15 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 2) = ((unsigned __int64)v27 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v27 >> 64);
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          goto LABEL_8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_1802D9050, 4u, v13, 0x297u, 0LL);
        if ( v27 )
          (*(void (__fastcall **)(struct CFlipExSwapchainStatistics *))(*(_QWORD *)v27 + 16LL))(v27);
      }
LABEL_10:
      if ( v3 >= 0 )
        return (unsigned int)v3;
LABEL_18:
      *((_QWORD *)this + 3) = 0LL;
      *((_DWORD *)this + 8) = 0;
      return (unsigned int)v3;
    }
    v27 = 0LL;
    v24 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
            this,
            (const struct CSM_BUFFER_ATTRIBUTES *)v30,
            (const struct CSM_REALIZATION_INFO *)v31,
            0,
            &v27);
    v3 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v25, &dword_180302358, 3u, v24, 0x3E9u, 0LL);
    else
      CGlobalCompositionSurfaceInfo::CBindInfo::AddRealization(this, v27);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v27);
    if ( v3 < 0 )
    {
      v26 = 648;
      goto LABEL_36;
    }
  }
  return (unsigned int)v3;
}
