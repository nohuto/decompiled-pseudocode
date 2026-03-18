/*
 * XREFs of ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C013BC38
 * Callers:
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C013A2CC (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C013DF30 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0008108 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000B04C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C000B664 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000B7B0 (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ColorSpaceTransformCombine @ 0x1C0061194 (ColorSpaceTransformCombine.c)
 *     ?IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ @ 0x1C013F25C (-IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ.c)
 *     ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1C0269934 (-GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::UpdateGammaRamp(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  const void **DefaultColorSpaceTransform; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rbx
  const struct DXGK_GAMMA_RAMP *v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // r15d
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  DXGGLOBAL *Global; // rax
  size_t *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  size_t *v35; // rbx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(v2) = 0;
  v3 = *(_QWORD *)(*((_QWORD *)this + 11) + 96LL);
  v4 = *(_QWORD *)(v3 + 128);
  if ( v4 && !IsValidGammaRamp((const struct _D3DKMDT_GAMMA_RAMP *)(v4 + 16)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, v3);
    WdLogEvent5_WdAssertion(v17);
  }
  v5 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v6 = *(_QWORD *)(v5 + 40);
  if ( !v6 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, v3);
    WdLogEvent5_WdAssertion(v18);
    v6 = *(_QWORD *)(v5 + 40);
  }
  v7 = *(_QWORD *)(v6 + 88);
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v8 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, v3);
    WdLogEvent5_WdAssertion(v19);
    v8 = *(_QWORD *)(v7 + 8);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v8 + 16) + 2704LL) && v4 && DXGK_GAMMA_RAMP::IsDefaultGammaRamp((DXGK_GAMMA_RAMP *)v4) )
    v4 = 0LL;
  DefaultColorSpaceTransform = 0LL;
  v10 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v11 = *(_QWORD *)(v10 + 40);
  if ( !v11 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, v3);
    WdLogEvent5_WdAssertion(v20);
    v11 = *(_QWORD *)(v10 + 40);
  }
  v12 = *(_QWORD *)(v11 + 88);
  v13 = *(_QWORD *)(v12 + 8);
  if ( !v13 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, v3);
    WdLogEvent5_WdAssertion(v21);
    v13 = *(_QWORD *)(v12 + 8);
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( v4 && (*(_DWORD *)(v14 + 2040) & 0x18) != 0 )
  {
    v22 = *((_QWORD *)this + 12);
    v23 = 4;
    v24 = *(_QWORD *)(v22 + 104);
    if ( v24 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 96));
      v25 = *(_QWORD *)(v22 + 104);
    }
    else
    {
      v25 = 0LL;
    }
    v26 = *(_QWORD *)(v25 + 144);
    v45 = v25;
    if ( v26 )
      v23 = *(_DWORD *)(v26 + 136);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v45, 0LL);
    if ( (v23 == 12 || v23 == 32) && (*(_DWORD *)(v14 + 2040) & 0x10) != 0
      || v23 == 30 && (*(_DWORD *)(v14 + 2040) & 8) != 0 )
    {
      Global = DXGGLOBAL::GetGlobal(v28, v27);
      DefaultColorSpaceTransform = (const void **)DXGGLOBAL::GetDefaultColorSpaceTransform(Global);
    }
  }
  if ( !DefaultColorSpaceTransform )
  {
    v15 = (const struct DXGK_GAMMA_RAMP *)v4;
LABEL_19:
    DMMVIDPNPRESENTPATH::SetGammaRamp(this, v15);
    return (unsigned int)v2;
  }
  if ( !v4 )
  {
    v15 = (const struct DXGK_GAMMA_RAMP *)DefaultColorSpaceTransform;
    goto LABEL_19;
  }
  v30 = (size_t *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
  v35 = v30;
  if ( v30 )
  {
    *((_WORD *)v30 + 20) = 0;
    *v30 = (size_t)&ReferenceCounted::`vftable';
    *v30 = (size_t)&DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v30 + 2) = 1;
    *((_DWORD *)v30 + 4) = 1;
    v30[3] = 0LL;
    v30[4] = 0LL;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v35 )
  {
    v37 = DXGK_GAMMA_RAMP::Initialize(v35, 4LL, 0LL);
    v2 = v37;
    if ( v37 >= 0 )
    {
      v41 = ColorSpaceTransformCombine(DefaultColorSpaceTransform + 2, (int *)(v4 + 16), (__int64)(v35 + 2));
      v2 = v41;
      if ( v41 >= 0 )
        goto LABEL_45;
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42);
      v40[3] = v2;
    }
    else
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
      v40[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v40[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v40[5] = v2;
    }
    WdLogEvent5_WdError(v40);
    goto LABEL_45;
  }
  v36 = WdLogNewEntry5_WdLowResource(v32, v31, v33, v34);
  *(_QWORD *)(v36 + 24) = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
  *(_QWORD *)(v36 + 32) = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
  WdLogEvent5_WdLowResource(v36);
  LODWORD(v2) = -1073741801;
LABEL_45:
  if ( (int)v2 >= 0 )
    DefaultColorSpaceTransform = (const void **)v35;
  DMMVIDPNPRESENTPATH::SetGammaRamp(this, (const struct DXGK_GAMMA_RAMP *)DefaultColorSpaceTransform);
  if ( v35 )
    ReferenceCounted::Release((ReferenceCounted *)v35, v44);
  return (unsigned int)v2;
}
