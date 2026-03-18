/*
 * XREFs of ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C01C4A20
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C01B9F4C (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01C486C (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0012C4C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0013DE8 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C006A640 (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ColorSpaceTransformCombine @ 0x1C0073F04 (ColorSpaceTransformCombine.c)
 *     ?IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ @ 0x1C02C13F4 (-IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ.c)
 *     ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1C030A6FC (-GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::UpdateGammaRamp(DMMVIDPNPRESENTPATH *this)
{
  unsigned int v2; // r14d
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v14; // rcx
  int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  DXGGLOBAL *Global; // rax
  const void **DefaultColorSpaceTransform; // rbp
  __int64 v21; // r9
  __int64 v22; // rax
  ReferenceCounted *v23; // rbx
  int v24; // eax
  int v25; // eax
  __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 96LL) + 128LL);
  if ( v3 && !IsValidGammaRamp((const struct _D3DKMDT_GAMMA_RAMP *)(v3 + 16)) )
    WdLogSingleEntry0(1LL);
  v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v5 = *(_QWORD *)(v4 + 40);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    v5 = *(_QWORD *)(v4 + 40);
  }
  v6 = *(_QWORD *)(v5 + 88);
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 )
  {
    WdLogSingleEntry0(1LL);
    v7 = *(_QWORD *)(v6 + 8);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 2800LL) && v3 && DXGK_GAMMA_RAMP::IsDefaultGammaRamp((DXGK_GAMMA_RAMP *)v3) )
    v3 = 0LL;
  v8 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v9 = *(_QWORD *)(v8 + 40);
  if ( !v9 )
  {
    WdLogSingleEntry0(1LL);
    v9 = *(_QWORD *)(v8 + 40);
  }
  v10 = *(_QWORD *)(v9 + 88);
  v11 = *(_QWORD *)(v10 + 8);
  if ( !v11 )
  {
    WdLogSingleEntry0(1LL);
    v11 = *(_QWORD *)(v10 + 8);
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( !v3 || (*(_DWORD *)(v12 + 2136) & 0x18) == 0 )
    goto LABEL_13;
  v14 = *((_QWORD *)this + 12);
  v15 = 4;
  v16 = *(_QWORD *)(v14 + 104);
  if ( v16 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v16 + 96), 1u);
    v17 = *(_QWORD *)(v14 + 104);
  }
  else
  {
    v17 = 0LL;
  }
  v18 = *(_QWORD *)(v17 + 144);
  v26 = v17;
  if ( v18 )
    v15 = *(_DWORD *)(v18 + 136);
  if ( (((auto_rc<DMMVIDPNTARGETMODESET>::reset(&v26, 0LL), v15 == 12) || v15 == 32)
     && (*(_DWORD *)(v12 + 2136) & 0x10) != 0
     || v15 == 30 && (*(_DWORD *)(v12 + 2136) & 8) != 0)
    && (Global = DXGGLOBAL_GetGlobal(),
        (DefaultColorSpaceTransform = (const void **)DXGGLOBAL::GetDefaultColorSpaceTransform(Global)) != 0LL) )
  {
    v22 = operator new[](0x30uLL, 0x4B677844u, 256LL, v21);
    v23 = (ReferenceCounted *)v22;
    if ( v22 )
    {
      *(_WORD *)(v22 + 40) = 0;
      *(_DWORD *)(v22 + 16) = 1;
      *(_QWORD *)v22 = &ReferenceCounted::`vftable';
      *(_DWORD *)(v22 + 8) = 1;
      *(_QWORD *)v22 = &DXGK_GAMMA_RAMP::`vftable';
      *(_QWORD *)(v22 + 24) = 0LL;
      *(_QWORD *)(v22 + 32) = 0LL;
      v24 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v22, D3DDDI_GAMMARAMP_MATRIX_3x4, 0LL);
      v2 = v24;
      if ( v24 >= 0 )
      {
        v25 = ColorSpaceTransformCombine(DefaultColorSpaceTransform + 2, (int *)(v3 + 16), (__int64)v23 + 16);
        v2 = v25;
        if ( v25 >= 0 )
          DefaultColorSpaceTransform = (const void **)v23;
        else
          WdLogSingleEntry1(2LL, v25);
      }
      else
      {
        WdLogSingleEntry3(
          2LL,
          *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
          *(unsigned int *)(*((_QWORD *)this + 12) + 24LL),
          v24);
      }
    }
    else
    {
      WdLogSingleEntry2(
        6LL,
        *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
        *(unsigned int *)(*((_QWORD *)this + 12) + 24LL));
      v2 = -1073741801;
      v23 = 0LL;
    }
    DMMVIDPNPRESENTPATH::SetGammaRamp(this, (const struct DXGK_GAMMA_RAMP *)DefaultColorSpaceTransform);
    if ( v23 )
      ReferenceCounted::Release(v23);
  }
  else
  {
LABEL_13:
    DMMVIDPNPRESENTPATH::SetGammaRamp(this, (const struct DXGK_GAMMA_RAMP *)v3);
  }
  return v2;
}
