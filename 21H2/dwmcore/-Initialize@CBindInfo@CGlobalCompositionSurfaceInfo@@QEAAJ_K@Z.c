/*
 * XREFs of ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18006B800
 * Callers:
 *     ?EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@PEAPEAVISwapChainRealization@@@Z @ 0x180069980 (-EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@PEAPEAVISwapChai.c)
 * Callees:
 *     ?Create@CFlipExSwapchainStatistics@@SAJPEBVCGlobalCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x18001544C (-Create@CFlipExSwapchainStatistics@@SAJPEBVCGlobalCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x180066804 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180066C1C (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z @ 0x180066F98 (-AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAG@Z @ 0x18006B75C (-EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAG@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180104C34 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180111D6E (McTemplateU0xx_EventWriteTransfer.c)
 *     ?CheckBufferHomogeneity@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ @ 0x180248230 (-CheckBufferHomogeneity@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ.c)
 *     McTemplateU0qqt_EventWriteTransfer @ 0x180249478 (McTemplateU0qqt_EventWriteTransfer.c)
 *     ?Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z @ 0x18025E02C (-Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::Initialize(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        __int64 a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // eax
  const struct CGlobalCompositionSurfaceInfo *v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rcx
  int v16; // r9d
  const struct CCompositionSurfaceInfo *v17; // rcx
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rcx
  struct CCompositionSwapchainStatistics *v21; // rax
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // [rsp+20h] [rbp-E0h]
  struct CFlipExSwapchainStatistics *v27; // [rsp+30h] [rbp-D0h] BYREF
  struct CCompositionSwapchainStatistics *v28; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v30[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v31[144]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[4]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v33; // [rsp+F4h] [rbp-Ch]
  void *v34; // [rsp+4D8h] [rbp+3D8h]
  unsigned __int64 v35; // [rsp+4E0h] [rbp+3E0h]
  size_t v36[16]; // [rsp+4F0h] [rbp+3F0h] BYREF

  v29 = a2;
  v3 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000000) != 0 )
    McTemplateU0xx_EventWriteTransfer(this, &CompSurfInfo_Binding_Start, *(_QWORD *)(*(_QWORD *)this + 40LL), a2);
  memset_0(v30, 0, 0x520uLL);
  if ( *((_QWORD *)this + 3) )
    CGlobalCompositionSurfaceInfo::CBindInfo::Reset(this, 0);
  v4 = NtQueryCompositionSurfaceBinding(*(_QWORD *)(*(_QWORD *)this + 32LL), &v29, v30);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1803464F0, 4u, v4 | 0x10000000, 0x28Cu, 0LL);
    goto LABEL_15;
  }
  v7 = v30[0];
  *((_QWORD *)this + 3) = v29;
  *((_DWORD *)this + 9) = v7;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
      {
        if ( v33 > 1 )
        {
          v12 = *(const struct CGlobalCompositionSurfaceInfo **)this;
          v27 = 0LL;
          v13 = CFlipExSwapchainStatistics::Create(v12, &v27);
          v3 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_1803464F0, 4u, v13, 0x2A8u, 0LL);
            if ( v27 )
              (*(void (__fastcall **)(struct CFlipExSwapchainStatistics *))(*(_QWORD *)v27 + 16LL))(v27);
            goto LABEL_20;
          }
          v15 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 2) = v27;
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        v10 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
                this,
                (const struct CSM_BUFFER_ATTRIBUTES *)v31,
                v33);
        v3 = v10;
        if ( v10 >= 0 )
        {
          CGlobalCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(this, v36);
LABEL_12:
          v7 = v30[0];
          goto LABEL_13;
        }
        v16 = v10;
        v26 = 686;
LABEL_26:
        MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1803464F0, 4u, v16, v26, 0LL);
        goto LABEL_20;
      }
      if ( v9 == 1 )
      {
        v17 = *(const struct CCompositionSurfaceInfo **)this;
        v27 = (struct CFlipExSwapchainStatistics *)v34;
        v28 = 0LL;
        v18 = CCompositionSwapchainStatistics::Create(v17, v34, v35, &v28);
        v3 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_1803464F0, 4u, v18, 0x2BEu, 0LL);
        }
        else
        {
          v20 = *((_QWORD *)this + 2);
          v21 = v28;
          v28 = 0LL;
          *((_QWORD *)this + 2) = v21;
          if ( v20 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          v22 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
                  this,
                  (const struct CSM_BUFFER_ATTRIBUTES *)v31,
                  v33);
          v3 = v22;
          if ( v22 >= 0 )
          {
            CGlobalCompositionSurfaceInfo::CBindInfo::CheckBufferHomogeneity(this);
            CGlobalCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(this, v36);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
            wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v27);
            goto LABEL_12;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v23, &dword_1803464F0, 4u, v22, 0x2C2u, 0LL);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v27);
        goto LABEL_20;
      }
      v3 = -2147024809;
      v26 = 722;
    }
    else
    {
      v27 = 0LL;
      v24 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
              (struct _LUID **)this,
              (const struct CSM_BUFFER_ATTRIBUTES *)v31,
              (const struct CSM_REALIZATION_INFO *)v32,
              0,
              &v27);
      v3 = v24;
      if ( v24 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v25, &dword_18038C8B0, 3u, v24, 0x4B5u, 0LL);
      else
        CGlobalCompositionSurfaceInfo::CBindInfo::AddRealization(this, v27);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v27);
      if ( v3 >= 0 )
        goto LABEL_12;
      v26 = 665;
    }
    v16 = v3;
    goto LABEL_26;
  }
LABEL_13:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000000) != 0 )
    McTemplateU0qqt_EventWriteTransfer(
      *((unsigned __int8 *)this + 32),
      v5,
      v7,
      (__int64)(*((_QWORD *)this + 11) - *((_QWORD *)this + 10)) >> 3,
      *((_BYTE *)this + 32));
LABEL_15:
  if ( v3 < 0 )
  {
LABEL_20:
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 9) = 0;
  }
  return (unsigned int)v3;
}
