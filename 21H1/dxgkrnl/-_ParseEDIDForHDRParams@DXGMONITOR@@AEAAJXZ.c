/*
 * XREFs of ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C016A008
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C016A258 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0008898 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C0021318 (-EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z.c)
 *     ?EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z @ 0x1C002141C (-EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z.c)
 *     ?EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x1C00214E4 (-EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z.c)
 *     ?EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z @ 0x1C0021624 (-EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z.c)
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C00216F0 (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C015716C (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 *     ?_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z @ 0x1C02F56F0 (-_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z.c)
 *     ?_GetFinalMinLuminanceValueFromRaw@DXGMONITOR@@AEAAKKK@Z @ 0x1C02F5740 (-_GetFinalMinLuminanceValueFromRaw@DXGMONITOR@@AEAAKKK@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C02F6B60 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_ParseEDIDForHDRParams(DXGMONITOR *this, __int64 a2, __int64 a3)
{
  int v4; // r14d
  unsigned __int8 *v5; // rdi
  unsigned int v6; // esi
  unsigned int v7; // r14d
  unsigned __int8 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _OWORD *v12; // r14
  int ColorDepths; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r15
  __int64 v18; // rax
  int ColorimetryData; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  __int64 v25; // rax
  int ColorDataRaw; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r14
  int HDRCaps; // eax
  __int64 v32; // rdx
  DXGMONITOR *v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  char v36; // r15
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int FinalMaxLuminanceValueFromRaw; // eax
  unsigned int v47; // edx
  DXGMONITOR *v48; // rcx
  unsigned int FinalMinLuminanceValueFromRaw; // eax
  unsigned int v50; // edx
  DXGMONITOR *v51; // rcx
  unsigned int v52; // eax
  int v53; // r9d
  int v54; // r8d
  int v55; // ecx
  double v56; // xmm1_8
  double v57; // xmm0_8
  int v58; // eax
  double v59; // xmm0_8
  int v60; // eax
  double v61; // xmm0_8
  int v62; // eax
  double v63; // xmm1_8
  int v64; // eax
  double v65; // xmm0_8
  int v66; // eax
  double v67; // xmm0_8
  int v68; // ecx
  double v69; // xmm0_8
  double v70; // xmm0_8
  double v71; // xmm1_8
  int v72; // eax
  double v73; // xmm0_8
  int v74; // eax
  double v75; // xmm0_8
  int v76; // eax
  double v77; // xmm1_8
  int v78; // eax
  double v79; // xmm0_8
  int v80; // eax
  double v81; // xmm1_8
  int v82; // eax
  double v83; // xmm0_8
  int v84; // [rsp+38h] [rbp-49h]
  __int128 v85; // [rsp+48h] [rbp-39h] BYREF
  __int128 v86; // [rsp+58h] [rbp-29h]
  double v87[10]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v88; // [rsp+E8h] [rbp+67h] BYREF

  if ( !*((_QWORD *)this + 18) )
  {
    v40 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v40);
  }
  v4 = *((_DWORD *)this + 32);
  if ( !v4 )
  {
    v41 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v41);
    v4 = *((_DWORD *)this + 32);
  }
  LODWORD(v88) = 0;
  v5 = 0LL;
  v6 = 0;
  if ( v4 )
  {
    v7 = v4 << 7;
    v8 = (unsigned __int8 *)operator new[](v7, 0x4D677844u, PagedPool);
    v5 = v8;
    if ( v8 )
    {
      DXGMONITOR::_GetContiguousEDID(this, v7, (unsigned int *)&v88, v8);
      v6 = v88;
      if ( v7 != (_DWORD)v88 )
      {
        v42 = WdLogNewEntry5_WdAssertion(this, a2);
        WdLogEvent5_WdAssertion(v42);
      }
    }
    else
    {
      v43 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      WdLogEvent5_WdWarning(v43);
    }
  }
  v12 = (_OWORD *)((char *)this + 600);
  if ( v6 )
  {
    ColorDepths = EDID_V1_GetColorDepths(v6, v5, (DXGMONITOR *)((char *)this + 600));
    v17 = ColorDepths;
    if ( ColorDepths < 0 )
    {
      v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v18 + 24) = v17;
      *(_QWORD *)(v18 + 32) = *((unsigned int *)this + 11);
      WdLogEvent5_WdWarning(v18);
      *v12 = 0LL;
      *((_DWORD *)this + 154) = 0;
    }
    ColorimetryData = EDID_V1_GetColorimetryData(v6, v5, (DXGMONITOR *)((char *)this + 620));
    v24 = ColorimetryData;
    if ( ColorimetryData < 0 )
    {
      v25 = WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
      *(_QWORD *)(v25 + 24) = v24;
      *(_QWORD *)(v25 + 32) = *((unsigned int *)this + 11);
      *(_QWORD *)((char *)this + 620) = 0LL;
    }
    if ( *((_DWORD *)this + 165) != 2 )
    {
      v85 = 0LL;
      v86 = 0LL;
      ColorDataRaw = EDID_V1_GetColorDataRaw(v6, v5, (struct DISPLAY_COLOR_DATA_RAW *)&v85);
      v30 = ColorDataRaw;
      if ( ColorDataRaw < 0 )
      {
        v45 = WdLogNewEntry5_WdWarning(v28, v27, v29);
        *(_QWORD *)(v45 + 24) = v30;
        *(_QWORD *)(v45 + 32) = *((unsigned int *)this + 11);
        WdLogEvent5_WdWarning(v45);
        *(_OWORD *)((char *)this + 628) = 0LL;
        *(_OWORD *)((char *)this + 644) = 0LL;
      }
      else
      {
        *(_OWORD *)((char *)this + 628) = v85;
        *(_OWORD *)((char *)this + 644) = v86;
        *((_DWORD *)this + 165) = 1;
      }
    }
    v88 = 0LL;
    HDRCaps = EDID_V1_GetHDRCaps(v6, v5, (struct DISPLAY_HDR_CAPS *)&v88);
    v36 = BYTE2(v88);
    v37 = HDRCaps;
    if ( HDRCaps >= 0 )
    {
      if ( !*((_DWORD *)this + 167) )
      {
        FinalMaxLuminanceValueFromRaw = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(v33, BYTE5(v88));
        v47 = HIBYTE(v88);
        *((_DWORD *)this + 167) = FinalMaxLuminanceValueFromRaw;
        FinalMinLuminanceValueFromRaw = DXGMONITOR::_GetFinalMinLuminanceValueFromRaw(
                                          v48,
                                          v47,
                                          FinalMaxLuminanceValueFromRaw);
        v50 = BYTE6(v88);
        *((_DWORD *)this + 166) = FinalMinLuminanceValueFromRaw;
        v52 = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(v51, v50);
        *((_DWORD *)this + 168) = v52;
        *((_DWORD *)this + 171) = v52;
        *((_DWORD *)this + 170) = v53;
        *((_DWORD *)this + 169) = v54;
        *((_BYTE *)this + 692) = 0;
        *((_DWORD *)this + 174) = 1;
      }
      *((_BYTE *)this + 700) = v36;
    }
    else
    {
      v38 = WdLogNewEntry5_WdTrace(v33, v32, v34, v35);
      *(_QWORD *)(v38 + 24) = v37;
      *(_QWORD *)(v38 + 32) = *((unsigned int *)this + 11);
      *((_QWORD *)this + 83) = 0LL;
      *((_QWORD *)this + 84) = 0LL;
      *((_QWORD *)this + 85) = 0LL;
      *((_BYTE *)this + 700) = 0;
    }
    memset(v87, 0, sizeof(v87));
    if ( (int)EDID_V1_GetDolbyVisionCaps(v6, v5, (struct DISPLAY_DVLL_CAPS *)v87) >= 0 )
    {
      v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 348LL);
      if ( (v55 & 0x200) != 0 || !LOBYTE(v87[9]) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 348LL) & 0x200) != 0
          || (v55 & 8) != 0 )
        {
          v70 = v87[1] * 10000.0;
          v71 = v87[3] * 1024.0;
          *((_BYTE *)this + 702) = LOBYTE(v87[0]) != 0;
          v72 = (int)v70;
          v73 = v87[2] * 10000.0;
          *((_DWORD *)this + 184) = v72;
          v74 = (int)v73;
          v75 = v87[4];
          *((_DWORD *)this + 185) = v74;
          v76 = (int)(v71 + 0.5);
          v77 = v87[5];
          *((_DWORD *)this + 176) = v76;
          v78 = (int)(v75 * 1024.0 + 0.5);
          v79 = v87[6];
          *((_DWORD *)this + 177) = v78;
          v80 = (int)(v77 * 1024.0 + 0.5);
          v81 = v87[7];
          *((_DWORD *)this + 178) = v80;
          v82 = (int)(v79 * 1024.0 + 0.5);
          v83 = v87[8];
          *((_DWORD *)this + 179) = v82;
          *((_DWORD *)this + 180) = (int)(v81 * 1024.0 + 0.5);
          *((_DWORD *)this + 181) = (int)(v83 * 1024.0 + 0.5);
          *((_DWORD *)this + 182) = *((_DWORD *)this + 163);
          *((_DWORD *)this + 183) = *((_DWORD *)this + 164);
        }
      }
      else
      {
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_DolbyVision_Default_On__private_reporting,
          0x13DE0A8u,
          0LL,
          0LL,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
          1,
          v84);
        v56 = v87[5];
        v57 = v87[3] * 1024.0;
        *((_DWORD *)this + 165) = 1;
        *((_BYTE *)this + 692) = 0;
        *((_DWORD *)this + 174) = 1;
        *((_BYTE *)this + 703) = 1;
        *((_BYTE *)this + 700) = v36;
        *((_BYTE *)this + 796) = 1;
        *((_DWORD *)this + 192) = 964069926;
        *((_DWORD *)this + 193) = -1686232824;
        v58 = (int)(v57 + 0.5);
        *((_DWORD *)this + 194) = 138811898;
        *((_DWORD *)this + 195) = 1076903406;
        *((_QWORD *)this + 98) = 1000LL;
        *((_DWORD *)this + 198) = 61473790;
        v59 = v87[4] * 1024.0;
        *((_DWORD *)this + 157) = v58;
        v60 = (int)(v59 + 0.5);
        v61 = v87[6] * 1024.0;
        *((_DWORD *)this + 158) = v60;
        v62 = (int)(v56 * 1024.0 + 0.5);
        v63 = v87[7];
        *((_DWORD *)this + 159) = v62;
        v64 = (int)(v61 + 0.5);
        v65 = v87[8] * 1024.0;
        *((_DWORD *)this + 160) = v64;
        *((_DWORD *)this + 161) = (int)(v63 * 1024.0 + 0.5);
        v66 = (int)(v65 + 0.5);
        v67 = v87[2] * 10000.0;
        *((_DWORD *)this + 162) = v66;
        v68 = (int)v67;
        v69 = v87[1] * 10000.0;
        *((_DWORD *)this + 167) = v68;
        *((_DWORD *)this + 168) = v68;
        *((_DWORD *)this + 170) = v68;
        *((_DWORD *)this + 171) = v68;
        *((_DWORD *)this + 166) = (int)v69;
        *((_DWORD *)this + 169) = (int)v69;
      }
    }
  }
  else
  {
    v44 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v44 + 24) = *((unsigned int *)this + 11);
    WdLogEvent5_WdWarning(v44);
    *(_QWORD *)((char *)this + 620) = 0LL;
    *v12 = 0LL;
    *((_DWORD *)this + 154) = 0;
    DXGMONITOR::_SetColorPrimariesToBT709(this);
    *((_BYTE *)this + 692) = 0;
    *((_DWORD *)this + 167) = 2700000;
    *((_DWORD *)this + 166) = 5000;
    *((_DWORD *)this + 168) = 2700000;
    *((_DWORD *)this + 170) = 2700000;
    *((_DWORD *)this + 169) = 5000;
    *((_DWORD *)this + 171) = 2700000;
    *((_DWORD *)this + 174) = 3;
    *((_BYTE *)this + 700) = 0;
  }
  if ( v5 )
    operator delete[](v5);
  return 0LL;
}
