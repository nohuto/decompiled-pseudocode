/*
 * XREFs of ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C018CD9C
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018D400 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C00222E4 (-EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z.c)
 *     ?EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z @ 0x1C00223E8 (-EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z.c)
 *     ?EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x1C00224B0 (-EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z.c)
 *     ?EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z @ 0x1C00225F0 (-EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z.c)
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C00226BC (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 *     Feature_DolbyVision_Default_On__private_ReportDeviceUsage @ 0x1C0028868 (Feature_DolbyVision_Default_On__private_ReportDeviceUsage.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C016BFDC (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 *     ?_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z @ 0x1C02F9FC0 (-_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z.c)
 *     ?_GetFinalMinLuminanceValueFromRaw@DXGMONITOR@@AEAAKKK@Z @ 0x1C02FA010 (-_GetFinalMinLuminanceValueFromRaw@DXGMONITOR@@AEAAKKK@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C02FB430 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_ParseEDIDForHDRParams(DXGMONITOR *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // r14d
  __int64 v6; // rax
  unsigned __int8 *v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // r14d
  unsigned __int8 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  _OWORD *v16; // r14
  __int64 v17; // rax
  int ColorDepths; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r15
  __int64 v23; // rax
  int ColorimetryData; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r15
  __int64 v30; // rax
  int ColorDataRaw; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r14
  __int64 v36; // rax
  int HDRCaps; // eax
  __int64 v38; // rdx
  DXGMONITOR *v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  char v42; // r15
  __int64 v43; // r14
  unsigned int FinalMaxLuminanceValueFromRaw; // eax
  unsigned int v45; // edx
  DXGMONITOR *v46; // rcx
  unsigned int FinalMinLuminanceValueFromRaw; // eax
  unsigned int v48; // edx
  DXGMONITOR *v49; // rcx
  unsigned int v50; // eax
  int v51; // r9d
  int v52; // r8d
  __int64 v53; // rax
  int v54; // ecx
  double v55; // xmm1_8
  double v56; // xmm0_8
  int v57; // eax
  double v58; // xmm0_8
  int v59; // eax
  double v60; // xmm0_8
  int v61; // eax
  double v62; // xmm1_8
  int v63; // eax
  double v64; // xmm0_8
  int v65; // eax
  double v66; // xmm0_8
  int v67; // ecx
  double v68; // xmm0_8
  double v69; // xmm0_8
  double v70; // xmm1_8
  int v71; // eax
  double v72; // xmm0_8
  int v73; // eax
  double v74; // xmm0_8
  int v75; // eax
  double v76; // xmm1_8
  int v77; // eax
  double v78; // xmm0_8
  int v79; // eax
  double v80; // xmm1_8
  int v81; // eax
  double v82; // xmm0_8
  __int128 v84; // [rsp+28h] [rbp-39h] BYREF
  __int128 v85; // [rsp+38h] [rbp-29h]
  double v86[10]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v87; // [rsp+C8h] [rbp+67h] BYREF

  if ( !*((_QWORD *)this + 18) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *((_DWORD *)this + 32);
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
    v5 = *((_DWORD *)this + 32);
  }
  LODWORD(v87) = 0;
  v7 = 0LL;
  v8 = 0;
  if ( v5 )
  {
    v9 = v5 << 7;
    v10 = (unsigned __int8 *)operator new[](v9, 0x4D677844u, PagedPool);
    v7 = v10;
    if ( v10 )
    {
      DXGMONITOR::_GetContiguousEDID(this, v9, (unsigned int *)&v87, v10);
      v8 = v87;
      if ( v9 != (_DWORD)v87 )
      {
        v14 = WdLogNewEntry5_WdAssertion(this, a2);
        WdLogEvent5_WdAssertion(v14);
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      WdLogEvent5_WdWarning(v15);
    }
  }
  v16 = (_OWORD *)((char *)this + 600);
  if ( v8 )
  {
    ColorDepths = EDID_V1_GetColorDepths(v8, v7, (DXGMONITOR *)((char *)this + 600));
    v22 = ColorDepths;
    if ( ColorDepths < 0 )
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v23 + 24) = v22;
      *(_QWORD *)(v23 + 32) = *((unsigned int *)this + 11);
      WdLogEvent5_WdWarning(v23);
      *v16 = 0LL;
      *((_DWORD *)this + 154) = 0;
    }
    ColorimetryData = EDID_V1_GetColorimetryData(v8, v7, (DXGMONITOR *)((char *)this + 620));
    v29 = ColorimetryData;
    if ( ColorimetryData < 0 )
    {
      v30 = WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
      *(_QWORD *)(v30 + 24) = v29;
      *(_QWORD *)(v30 + 32) = *((unsigned int *)this + 11);
      *(_QWORD *)((char *)this + 620) = 0LL;
    }
    if ( *((_DWORD *)this + 165) != 2 )
    {
      v84 = 0LL;
      v85 = 0LL;
      ColorDataRaw = EDID_V1_GetColorDataRaw(v8, v7, (struct DISPLAY_COLOR_DATA_RAW *)&v84);
      v35 = ColorDataRaw;
      if ( ColorDataRaw < 0 )
      {
        v36 = WdLogNewEntry5_WdWarning(v33, v32, v34);
        *(_QWORD *)(v36 + 24) = v35;
        *(_QWORD *)(v36 + 32) = *((unsigned int *)this + 11);
        WdLogEvent5_WdWarning(v36);
        *(_OWORD *)((char *)this + 628) = 0LL;
        *(_OWORD *)((char *)this + 644) = 0LL;
      }
      else
      {
        *(_OWORD *)((char *)this + 628) = v84;
        *(_OWORD *)((char *)this + 644) = v85;
        *((_DWORD *)this + 165) = 1;
      }
    }
    v87 = 0LL;
    HDRCaps = EDID_V1_GetHDRCaps(v8, v7, (struct DISPLAY_HDR_CAPS *)&v87);
    v42 = BYTE2(v87);
    v43 = HDRCaps;
    if ( HDRCaps < 0 )
    {
      v53 = WdLogNewEntry5_WdTrace(v39, v38, v40, v41);
      *(_QWORD *)(v53 + 24) = v43;
      *(_QWORD *)(v53 + 32) = *((unsigned int *)this + 11);
      *((_QWORD *)this + 83) = 0LL;
      *((_QWORD *)this + 84) = 0LL;
      *((_QWORD *)this + 85) = 0LL;
      *((_BYTE *)this + 700) = 0;
    }
    else
    {
      if ( !*((_DWORD *)this + 167) )
      {
        FinalMaxLuminanceValueFromRaw = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(v39, BYTE5(v87));
        v45 = HIBYTE(v87);
        *((_DWORD *)this + 167) = FinalMaxLuminanceValueFromRaw;
        FinalMinLuminanceValueFromRaw = DXGMONITOR::_GetFinalMinLuminanceValueFromRaw(
                                          v46,
                                          v45,
                                          FinalMaxLuminanceValueFromRaw);
        v48 = BYTE6(v87);
        *((_DWORD *)this + 166) = FinalMinLuminanceValueFromRaw;
        v50 = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(v49, v48);
        *((_DWORD *)this + 168) = v50;
        *((_DWORD *)this + 171) = v50;
        *((_DWORD *)this + 170) = v51;
        *((_DWORD *)this + 169) = v52;
        *((_BYTE *)this + 692) = 0;
        *((_DWORD *)this + 174) = 1;
      }
      *((_BYTE *)this + 700) = v42;
    }
    memset(v86, 0, sizeof(v86));
    if ( (int)EDID_V1_GetDolbyVisionCaps(v8, v7, (struct DISPLAY_DVLL_CAPS *)v86) >= 0 )
    {
      v54 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 348LL);
      if ( (v54 & 0x200) != 0 || !LOBYTE(v86[9]) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 348LL) & 0x200) != 0
          || (v54 & 8) != 0 )
        {
          v69 = v86[1] * 10000.0;
          v70 = v86[3] * 1024.0;
          *((_BYTE *)this + 702) = LOBYTE(v86[0]) != 0;
          v71 = (int)v69;
          v72 = v86[2] * 10000.0;
          *((_DWORD *)this + 184) = v71;
          v73 = (int)v72;
          v74 = v86[4];
          *((_DWORD *)this + 185) = v73;
          v75 = (int)(v70 + 0.5);
          v76 = v86[5];
          *((_DWORD *)this + 176) = v75;
          v77 = (int)(v74 * 1024.0 + 0.5);
          v78 = v86[6];
          *((_DWORD *)this + 177) = v77;
          v79 = (int)(v76 * 1024.0 + 0.5);
          v80 = v86[7];
          *((_DWORD *)this + 178) = v79;
          v81 = (int)(v78 * 1024.0 + 0.5);
          v82 = v86[8];
          *((_DWORD *)this + 179) = v81;
          *((_DWORD *)this + 180) = (int)(v80 * 1024.0 + 0.5);
          *((_DWORD *)this + 181) = (int)(v82 * 1024.0 + 0.5);
          *((_DWORD *)this + 182) = *((_DWORD *)this + 163);
          *((_DWORD *)this + 183) = *((_DWORD *)this + 164);
        }
      }
      else
      {
        Feature_DolbyVision_Default_On__private_ReportDeviceUsage();
        v55 = v86[5];
        v56 = v86[3] * 1024.0;
        *((_DWORD *)this + 165) = 1;
        *((_BYTE *)this + 692) = 0;
        *((_DWORD *)this + 174) = 1;
        *((_BYTE *)this + 703) = 1;
        *((_BYTE *)this + 700) = v42;
        *((_BYTE *)this + 796) = 1;
        *((_DWORD *)this + 192) = 964069926;
        *((_DWORD *)this + 193) = -1686232824;
        v57 = (int)(v56 + 0.5);
        *((_DWORD *)this + 194) = 138811898;
        *((_DWORD *)this + 195) = 1076903406;
        *((_QWORD *)this + 98) = 1000LL;
        *((_DWORD *)this + 198) = 61473790;
        v58 = v86[4] * 1024.0;
        *((_DWORD *)this + 157) = v57;
        v59 = (int)(v58 + 0.5);
        v60 = v86[6] * 1024.0;
        *((_DWORD *)this + 158) = v59;
        v61 = (int)(v55 * 1024.0 + 0.5);
        v62 = v86[7];
        *((_DWORD *)this + 159) = v61;
        v63 = (int)(v60 + 0.5);
        v64 = v86[8] * 1024.0;
        *((_DWORD *)this + 160) = v63;
        *((_DWORD *)this + 161) = (int)(v62 * 1024.0 + 0.5);
        v65 = (int)(v64 + 0.5);
        v66 = v86[2] * 10000.0;
        *((_DWORD *)this + 162) = v65;
        v67 = (int)v66;
        v68 = v86[1] * 10000.0;
        *((_DWORD *)this + 167) = v67;
        *((_DWORD *)this + 168) = v67;
        *((_DWORD *)this + 170) = v67;
        *((_DWORD *)this + 171) = v67;
        *((_DWORD *)this + 166) = (int)v68;
        *((_DWORD *)this + 169) = (int)v68;
      }
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v17 + 24) = *((unsigned int *)this + 11);
    WdLogEvent5_WdWarning(v17);
    *(_QWORD *)((char *)this + 620) = 0LL;
    *v16 = 0LL;
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
  if ( v7 )
    operator delete[](v7);
  return 0LL;
}
