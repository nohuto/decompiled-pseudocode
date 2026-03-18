/*
 * XREFs of ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18016C934
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x1800407A0 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x18002CD68 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180032370 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180032A3C (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18008D0B0 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x18008D0DC (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SpatialComposition@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016D0C4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SpatialComposition@@@details@wil@@QEAAX_N.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18016D1C0 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x18016D1E4 (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180239888 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z @ 0x180239AD8 (-Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CSceneResourceManager::EnsureSceneCompositor(CSceneResourceManager *this, __int64 a2)
{
  unsigned int v3; // ebx
  HMODULE v4; // rcx
  HMODULE LibraryW; // rax
  CDisplayManager *v6; // rcx
  FARPROC ProcAddress; // r12
  __int64 v8; // rcx
  struct IDXGIFactory5 *v9; // rbx
  unsigned int v10; // esi
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  bool v12; // r15
  CSceneResourceManager *v13; // rcx
  CDisplayManager *v14; // rcx
  struct _LUID PrimaryAdapterLuid; // rcx
  CDeviceManager *v16; // rcx
  int Device; // eax
  __int64 v18; // rcx
  struct CD3DDevice **v19; // rsi
  CDeviceManager *v20; // rcx
  int DefaultDevice; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  _BYTE *v29; // rdx
  _QWORD *v30; // r15
  __int64 v31; // r12
  unsigned __int64 v32; // rsi
  struct IUnknown *v34; // [rsp+38h] [rbp-D0h] BYREF
  CSceneResourceManager *v35; // [rsp+40h] [rbp-C8h] BYREF
  struct IDXGIFactory5 *v36; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B8h] BYREF
  int v38; // [rsp+58h] [rbp-B0h]
  int v39; // [rsp+5Ch] [rbp-ACh]
  int v40; // [rsp+60h] [rbp-A8h]
  float v41; // [rsp+64h] [rbp-A4h]
  int v42; // [rsp+68h] [rbp-A0h]
  char v43; // [rsp+6Ch] [rbp-9Ch]
  char v44; // [rsp+6Dh] [rbp-9Bh]
  char v45; // [rsp+6Eh] [rbp-9Ah]
  char v46; // [rsp+6Fh] [rbp-99h]
  CSceneResourceManager **v47; // [rsp+70h] [rbp-98h]
  CSceneResourceManager *v48; // [rsp+78h] [rbp-90h] BYREF
  char v49; // [rsp+80h] [rbp-88h]
  struct _LUID v50; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v51[296]; // [rsp+98h] [rbp-70h] BYREF
  struct _LUID v52; // [rsp+1C0h] [rbp+B8h]

  LOBYTE(a2) = 1;
  v3 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SpatialComposition>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SpatialComposition>::GetImpl'::`2'::impl,
    a2);
  if ( !*((_BYTE *)this + 64) )
  {
    v4 = (HMODULE)*((_QWORD *)this + 2);
    if ( !v4 )
    {
      LibraryW = LoadLibraryW(L"DwmScene.dll");
      wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
        (char *)this + 16,
        LibraryW);
      v4 = (HMODULE)*((_QWORD *)this + 2);
      if ( !v4 )
      {
        *((_BYTE *)this + 64) = 1;
        return v3;
      }
    }
    if ( *((_QWORD *)this + 3) )
      return v3;
    ProcAddress = GetProcAddress(v4, "CreateDwmSceneRenderer");
    if ( !ProcAddress )
    {
      v3 = -2147418113;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, -2147418113, 0x57u, 0LL);
      goto LABEL_41;
    }
    if ( CCommonRegistryData::m_fSceneForceNonPrimaryDisplayAdapter )
    {
      v36 = 0LL;
      if ( (int)CDisplayManager::GetDXGIFactory(v6, &v36) >= 0 )
      {
        v9 = v36;
        v10 = 0;
        v35 = 0LL;
        while ( 1 )
        {
          lpVtbl = v9->lpVtbl;
          v47 = &v35;
          v48 = 0LL;
          v49 = 1;
          v12 = ((int (__fastcall *)(struct IDXGIFactory5 *, _QWORD, CSceneResourceManager **))lpVtbl->EnumAdapters1)(
                  v9,
                  v10,
                  &v48) >= 0;
          if ( v49 )
          {
            v13 = *v47;
            *v47 = v48;
            if ( v13 )
              (*(void (__fastcall **)(CSceneResourceManager *))(*(_QWORD *)v13 + 16LL))(v13);
          }
          if ( !v12 )
            break;
          memset_0(v51, 0, 0x138uLL);
          if ( (*(int (__fastcall **)(CSceneResourceManager *, _BYTE *))(*(_QWORD *)v35 + 80LL))(v35, v51) >= 0 )
          {
            PrimaryAdapterLuid = CDisplayManager::GetPrimaryAdapterLuid(v14, &v50);
            if ( v52.LowPart != *(_DWORD *)PrimaryAdapterLuid.LowPart
              || v52.HighPart != *(_DWORD *)(*(_QWORD *)&PrimaryAdapterLuid + 4LL) )
            {
              wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((CD3DDevice **)this + 4);
              Device = CDeviceManager::GetDevice(v16, v52, (struct CD3DDevice **)this + 4);
              v3 = Device;
              if ( Device < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, Device, 0x69u, 0LL);
                wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
                wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v36);
                goto LABEL_40;
              }
              break;
            }
          }
          ++v10;
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
      }
      v19 = (struct CD3DDevice **)((char *)this + 32);
      if ( !*((_QWORD *)this + 4) )
      {
        v3 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147467259, 0x73u, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v36);
        goto LABEL_41;
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v36);
    }
    else
    {
      v19 = (struct CD3DDevice **)((char *)this + 32);
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((CD3DDevice **)this + 4);
      DefaultDevice = CDeviceManager::GetDefaultDevice(v20, (struct CD3DDevice **)this + 4);
      v3 = DefaultDevice;
      if ( DefaultDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, DefaultDevice, 0x78u, 0LL);
        goto LABEL_40;
      }
    }
    v23 = *((_QWORD *)*v19 + 74);
    v38 = CCommonRegistryData::Scene::ImageProcessingMinWidth;
    v39 = CCommonRegistryData::Scene::ImageProcessingMinHeight;
    v40 = CCommonRegistryData::Scene::ImageProcessingResizeGrowth;
    v42 = CCommonRegistryData::Scene::MsaaQualityMode;
    v43 = CCommonRegistryData::Scene::EnableBloom;
    v44 = CCommonRegistryData::Scene::EnableImageProcessing;
    v45 = CCommonRegistryData::Scene::ImageProcessing8bit;
    v46 = CCommonRegistryData::Scene::EnableShadow;
    v37 = v23;
    v41 = CCommonRegistryData::m_flSceneImageProcessingResizeThreshold;
    v34 = 0LL;
    v24 = ((__int64 (__fastcall *)(__int64 *, GUID *, struct IUnknown **))ProcAddress)(
            &v37,
            &GUID_c459639d_0878_4eb7_ade9_3655c96fa73a,
            &v34);
    v3 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x88u, 0LL);
    }
    else
    {
      wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((char *)this + 24);
      v26 = CExternalD3DRenderer::Create(*v19, v34, (struct CExternalD3DRenderer **)this + 3);
      v3 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x8Au, 0LL);
      }
      else
      {
        v28 = *((_QWORD *)this + 3) + 88LL;
        v35 = this;
        v29 = *(_BYTE **)(v28 + 8);
        if ( *(_BYTE **)(v28 + 16) == v29 )
        {
          std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>(
            (const void **)v28,
            v29,
            &v35);
        }
        else
        {
          *(_QWORD *)v29 = this;
          *(_QWORD *)(v28 + 8) += 8LL;
        }
        v30 = (_QWORD *)*((_QWORD *)this + 5);
        v31 = 0LL;
        v32 = (unsigned __int64)(*((_QWORD *)this + 6) - (_QWORD)v30 + 7LL) >> 3;
        if ( (unsigned __int64)v30 > *((_QWORD *)this + 6) )
          v32 = 0LL;
        if ( v32 )
        {
          do
          {
            (**(void (__fastcall ***)(_QWORD, struct IUnknown *))*v30)(*v30, v34);
            ++v31;
            ++v30;
          }
          while ( v31 != v32 );
        }
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
LABEL_40:
    if ( (v3 & 0x80000000) == 0 )
      return v3;
LABEL_41:
    *((_BYTE *)this + 64) = 1;
    wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((char *)this + 24);
    wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
      (char *)this + 16,
      0LL);
  }
  return v3;
}
