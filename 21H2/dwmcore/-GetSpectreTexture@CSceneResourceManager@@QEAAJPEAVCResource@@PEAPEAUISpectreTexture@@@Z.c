/*
 * XREFs of ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z @ 0x180199B14
 * Callers:
 *     ?ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSceneSurfaceMaterialInput@@@Z @ 0x18023D854 (-ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V-$basic_string@DU-$c.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x18003D588 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x18005D920 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x1800799E8 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800B2FA8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBQEAVCResource@@$$V@?$map@PEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAVCResource@@@Z @ 0x180199288 (--$_Try_emplace@AEBQEAVCResource@@$$V@-$map@PEAVCResource@@V-$com_ptr_t@UISpectreTexture@@Uerr_r.c)
 */

__int64 __fastcall CSceneResourceManager::GetSpectreTexture(
        CSceneResourceManager *this,
        struct CResource *a2,
        struct ISpectreTexture **a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  struct D2D_VECTOR_2F v8; // xmm0_8
  int CVIForRealizationSize; // eax
  CDisplayManager *v10; // rcx
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  struct ISpectreRenderer *SpectreRenderer; // rsi
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(struct ISpectreRenderer *, __int64, __int64, struct ISpectreTexture **); // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  struct ISpectreTexture *v24; // rcx
  __int64 v25; // rdi
  __int64 result; // rax
  struct CCachedVisualImage *v27; // [rsp+30h] [rbp-40h] BYREF
  struct ISpectreTexture *v28; // [rsp+38h] [rbp-38h] BYREF
  struct D2D_VECTOR_2F v29; // [rsp+40h] [rbp-30h] BYREF
  __int128 v30; // [rsp+58h] [rbp-18h] BYREF
  __int64 v31; // [rsp+68h] [rbp-8h]
  CVisualSurface *v32; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+48h] BYREF

  v32 = a2;
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 201LL) )
  {
    v6 = *((_QWORD *)this + 4);
    v7 = -(__int64)(*((_BYTE *)v32 + 200) != 0);
    v27 = 0LL;
    v8 = *(struct D2D_VECTOR_2F *)((char *)v32 + (v7 & 8) + 88);
    LODWORD(v7) = *(_DWORD *)(v6 + 928);
    v29 = v8;
    CVIForRealizationSize = CVisualSurface::GetCVIForRealizationSize(
                              v32,
                              v7,
                              (struct CCachedVisualImage ***)&v29,
                              &v29,
                              &v27);
    v5 = CVIForRealizationSize;
    if ( CVIForRealizationSize < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0LL, CVIForRealizationSize, 0xFAu);
    }
    else
    {
      CDisplayManager::GetPrimaryAdapterLuid(v10, (struct _LUID *)&v30);
      LODWORD(v31) = 0;
      *((_QWORD *)&v30 + 1) = DisplayId::None;
      BYTE4(v31) = 0;
      PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*((CRenderTargetManager **)g_pComposition + 27));
      if ( PrimaryMonitorTarget )
      {
        v12 = (*(__int64 (__fastcall **)(struct IMonitorTarget *, struct D2D_VECTOR_2F *))(*(_QWORD *)PrimaryMonitorTarget
                                                                                         + 96LL))(
                PrimaryMonitorTarget,
                &v29);
        v30 = *(_OWORD *)v12;
        v31 = *(_QWORD *)(v12 + 16);
      }
      v13 = *((_QWORD *)v27 + 9);
      v33 = 0LL;
      v14 = (*(__int64 (__fastcall **)(char *, __int128 *, __int64 *))(v13 + 48))((char *)v27 + 72, &v30, &v33);
      v5 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x108u);
      }
      else
      {
        SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
        v17 = *(_QWORD *)SpectreRenderer;
        v28 = 0LL;
        v18 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, __int64, __int64, struct ISpectreTexture **))(v17 + 88);
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
        v20 = (**(__int64 (__fastcall ***)(__int64))v33)(v33);
        v21 = v18(SpectreRenderer, v20, v19, &v28);
        v5 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0x10Fu);
        }
        else
        {
          v23 = std::map<CResource *,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>::_Try_emplace<CResource * const &,>(
                  (__int64 *)this + 8,
                  (__int64)&v29,
                  (unsigned __int64 *)&v32);
          v24 = v28;
          v25 = *(_QWORD *)(*(_QWORD *)v23 + 40LL);
          *(_QWORD *)(*(_QWORD *)v23 + 40LL) = v28;
          if ( v24 )
            (*(void (__fastcall **)(struct ISpectreTexture *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( v25 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          *a3 = v28;
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v33);
    }
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v27);
    return v5;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CVisualSurface *, __int64))(*(_QWORD *)v32 + 56LL))(v32, 35LL) )
    return v5;
  result = 0LL;
  *a3 = (struct ISpectreTexture *)*((_QWORD *)v32 + 19);
  return result;
}
