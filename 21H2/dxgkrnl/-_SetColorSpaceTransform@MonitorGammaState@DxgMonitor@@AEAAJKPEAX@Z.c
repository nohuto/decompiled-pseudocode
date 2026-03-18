/*
 * XREFs of ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x1C01B4B34
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01B3FE0 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0012C4C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x1C0012D9C (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C0012E74 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C0012EA0 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0012ED0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?put@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ @ 0x1C0012EF8 (-put@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ.c)
 *     ColorSpaceTransformConvert @ 0x1C0012F1C (ColorSpaceTransformConvert.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1C01B4978 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 *     ?_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C01B4AD4 (-_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TY.c)
 *     ?_IsWireFormatMatch@MonitorGammaState@DxgMonitor@@AEAA_NAEBU_OUTPUT_WIRE_FORMAT@@@Z @ 0x1C01B4E78 (-_IsWireFormatMatch@MonitorGammaState@DxgMonitor@@AEAA_NAEBU_OUTPUT_WIRE_FORMAT@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::_SetColorSpaceTransform(
        ReferenceCounted **this,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4)
{
  int MostCapableColorSpaceTransform; // eax
  int v8; // ebx
  __int64 v9; // r9
  int v10; // eax
  enum _D3DDDI_GAMMARAMP_TYPE v11; // ebx
  __int64 v12; // rax
  DXGK_GAMMA_RAMP *v13; // r15
  enum _D3DDDI_GAMMARAMP_TYPE v14; // ecx
  __int64 v15; // rax
  struct DXGK_GAMMA_RAMP **v16; // rax
  __int64 v17; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  DXGK_GAMMA_RAMP *v22; // [rsp+40h] [rbp-20h] BYREF
  struct _D3DKMDT_GAMMA_RAMP v23; // [rsp+48h] [rbp-18h] BYREF
  struct _KTHREAD **v24; // [rsp+B0h] [rbp+50h] BYREF
  ReferenceCounted *v25; // [rsp+B8h] [rbp+58h] BYREF

  if ( !a3 )
    WdLogSingleEntry0(1LL);
  LODWORD(v24) = 0;
  v22 = 0LL;
  v25 = 0LL;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_EnableDisplayColorManagementApi__private_reporting,
    0x12AB040u,
    (__int64)a3,
    a4,
    (const struct FEATURE_LOGGED_TRAITS *)Feature_DmaRemapping_logged_traits,
    1);
  MostCapableColorSpaceTransform = DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(
                                     (DxgMonitor::MonitorGammaState *)this,
                                     (enum _D3DDDI_GAMMARAMP_TYPE *)&v24);
  v8 = MostCapableColorSpaceTransform;
  if ( MostCapableColorSpaceTransform < 0 )
  {
    WdLogSingleEntry1(3LL, MostCapableColorSpaceTransform);
    goto LABEL_20;
  }
  if ( a2 < 0x18040 )
  {
    v8 = -1073741789;
    goto LABEL_20;
  }
  if ( (*(unsigned int (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 88LL))(*this) != *a3 )
  {
    v19 = (*(__int64 (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 88LL))(*this);
    v20 = (int)*a3;
    v21 = v19;
LABEL_29:
    WdLogSingleEntry2(3LL, v20, v21);
    v8 = -1073741811;
    goto LABEL_20;
  }
  if ( !DxgMonitor::MonitorGammaState::_IsWireFormatMatch(
          (DxgMonitor::MonitorGammaState *)this,
          (const struct _OUTPUT_WIRE_FORMAT *)(a3 + 1)) )
  {
    v21 = a3[2];
    v20 = (int)a3[1];
    goto LABEL_29;
  }
  v10 = a3[3];
  v11 = (int)v24;
  if ( v10 != (_DWORD)v24 && (int)v24 < 4 && ((_DWORD)v24 == 3 || v10 > (int)v24) )
  {
    v21 = (int)v24;
    v20 = (int)a3[3];
    goto LABEL_29;
  }
  v12 = operator new[](0x30uLL, 0x4D677844u, 256LL, v9);
  if ( v12 )
  {
    *(_WORD *)(v12 + 40) = 0;
    *(_QWORD *)v12 = &ReferenceCounted::`vftable';
    *(_QWORD *)v12 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v12 + 8) = 1;
    *(_DWORD *)(v12 + 16) = 1;
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_QWORD *)(v12 + 32) = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v22, (ReferenceCounted *)v12);
  v13 = v22;
  if ( v22 )
  {
    v8 = DXGK_GAMMA_RAMP::Initialize(v22, v11, 0LL);
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(3LL, a3);
    }
    else
    {
      v14 = a3[3];
      *(_QWORD *)&v23.Type = (unsigned int)v14;
      v23.DataSize = GetSizeFromGammaRampType(v14);
      v23.Data.pRgb256x3x16 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)(a3 + 4);
      v8 = ColorSpaceTransformConvert(&v23, (struct _D3DKMDT_GAMMA_RAMP *)((char *)v13 + 16));
      if ( v8 < 0 )
        goto LABEL_33;
      v15 = (*(__int64 (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 32LL))(*this);
      if ( (*(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15) & 0x400000) != 0
        && *((_DWORD *)v13 + 4) == 2 )
      {
        *(_WORD *)(*((_QWORD *)v13 + 4) + 510LL) ^= *((_BYTE *)this + 136) == 0;
        *((_BYTE *)this + 136) = *((_BYTE *)this + 136) == 0;
      }
      v16 = (struct DXGK_GAMMA_RAMP **)auto_rc<DXGK_GAMMA_RAMP>::put(&v25);
      v8 = DxgMonitor::MonitorGammaState::_CombineDXGIGammaRamp((DxgMonitor::MonitorGammaState *)this, v13, v16);
      if ( v8 < 0 )
      {
LABEL_33:
        WdLogSingleEntry0(3LL);
      }
      else
      {
        if ( !v25 )
          WdLogSingleEntry0(1LL);
        v17 = (*(__int64 (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 24LL))(*this);
        v8 = (*(__int64 (__fastcall **)(__int64, ReferenceCounted *))(*(_QWORD *)v17 + 88LL))(v17, v25);
        MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v24, (struct DXGFASTMUTEX *)(this + 10));
        if ( v8 >= 0 )
        {
          v22 = 0LL;
          auto_rc<DXGK_GAMMA_RAMP>::reset(this + 16, v13);
        }
        MUTEX_LOCK::~MUTEX_LOCK(&v24);
      }
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, a3);
    v8 = -1073741801;
  }
LABEL_20:
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v25, 0LL);
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v22, 0LL);
  return (unsigned int)v8;
}
