/*
 * XREFs of ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01695C8
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C0169250 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z @ 0x1C001E1C0 (-EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C001E7A8 (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C001E89C (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C001E94C (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C001EA2C (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C001EEC0 (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C00220F4 (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 *     ?EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C00246DC (-EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z.c)
 *     ?EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x1C002478C (-EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x1C005F8F8 (-EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z.c)
 *     ?EDIDV1_ObtainMonitorColorCharacteristics@@YAJPEBEPEAU_WmiMonitorColorCharacteristics@@@Z @ 0x1C005F994 (-EDIDV1_ObtainMonitorColorCharacteristics@@YAJPEBEPEAU_WmiMonitorColorCharacteristics@@@Z.c)
 *     ?DisplayID_GetManufactureDate@@YAJPEBUDisplayIDObj@@PEAEPEAG@Z @ 0x1C005FC8C (-DisplayID_GetManufactureDate@@YAJPEBUDisplayIDObj@@PEAEPEAG@Z.c)
 *     ?DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C005FD00 (-DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C005FDD0 (-DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C005FE48 (-DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z @ 0x1C005FED4 (-DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z.c)
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x1C006052C (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     ?DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z @ 0x1C00606E8 (-DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z.c)
 *     ?DisplayID_GetColorDataRaw@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE_COLOR_DEPTH@@PEA_N@Z @ 0x1C0060F9C (-DisplayID_GetColorDataRaw@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE.c)
 *     ?DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C00610F0 (-DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_.c)
 *     ?DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z @ 0x1C00611AC (-DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C016DBE4 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C018CADC (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     MonitorLogBadEDID @ 0x1C02F4078 (MonitorLogBadEDID.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@DXGMONITOR@@QEAAJXZ @ 0x1C02F8A14 (-SetLuminanceValuesWithBrightnessCompensation@DXGMONITOR@@QEAAJXZ.c)
 *     ?TriggerMonitorColorimetryChangedWnf@DXGMONITOR@@QEAAJXZ @ 0x1C02F8C0C (-TriggerMonitorColorimetryChangedWnf@DXGMONITOR@@QEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_DispatchInternalIOCtrl(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned int a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  __int64 v8; // rsi
  unsigned int v9; // r15d
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  __int16 v20; // si
  size_t v21; // r8
  int v22; // esi
  int v23; // esi
  int v24; // esi
  unsigned __int64 v25; // r14
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdi
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v43; // rax
  int MonitorModes; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // r15
  unsigned __int64 v48; // r14
  __int64 v49; // rax
  int SupportedModes; // eax
  _QWORD *v51; // r12
  size_t v52; // r8
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  _QWORD *v57; // r12
  size_t v58; // r8
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  int ProductCode; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  int SerialNumber; // eax
  int ManufacturerName; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r15
  int ManufactureDate; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r15
  __int64 v77; // rax
  int UserFriendlyName; // eax
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rdi
  unsigned __int64 *v83; // rbx
  unsigned __int64 *v84; // rax
  __int128 v85; // xmm1
  __int64 v86; // rax
  unsigned int v87; // edx
  int v88; // ecx
  int SupportedMonitorFrequencyRanges; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r9
  int v93; // eax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rdi
  __int64 v99; // rcx
  __int64 v100; // r12
  unsigned int v101; // r15d
  __int64 v102; // r13
  __int64 v103; // rax
  char *v104; // r14
  char *v105; // r14
  unsigned int v106; // edi
  unsigned int i; // r8d
  __int64 v108; // rcx
  __int64 v109; // rdx
  struct _WmiMonitorColorCharacteristics *v110; // r14
  __int64 v111; // rcx
  int v112; // eax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rax
  int ColorDataRaw; // eax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rax
  DXGMONITOR *v122; // rcx
  _BYTE *v123; // rbx
  _WmiMonitorAnalogVideoInputParams *v124; // rbx
  unsigned __int64 v125; // r14
  __int64 v126; // rcx
  int v127; // eax
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  unsigned int v134; // kr00_4
  unsigned int v135; // edx
  char v136; // al
  __int64 v137; // rax
  unsigned int v138; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v139; // [rsp+34h] [rbp-3Ch] BYREF
  unsigned int v140; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v141; // [rsp+3Ch] [rbp-34h] BYREF
  unsigned int v142; // [rsp+40h] [rbp-30h] BYREF
  __int128 v143; // [rsp+48h] [rbp-28h] BYREF
  __int128 v144; // [rsp+58h] [rbp-18h]
  _WmiMonitorAnalogVideoInputParams v145; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v146; // [rsp+B8h] [rbp+48h] BYREF

  v8 = (unsigned int)a2;
  v9 = a3;
  LODWORD(v11) = -1073741637;
  v12 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v12 + 24) = v8;
  *(_QWORD *)(v12 + 32) = this;
  if ( (unsigned int)v8 > 0x23241F )
  {
    v22 = v8 - 2303011;
    if ( !v22 )
    {
      v57 = (_QWORD *)((char *)this + 168);
      if ( *((_QWORD *)this + 18) || *v57 )
      {
        if ( v9 >= 0x10 && a5 >= 0x10 )
        {
          v58 = *a4;
          if ( *a4 >= 0xB )
          {
            v125 = a4[1];
            memset((void *)v125, 0, v58);
            v126 = *((_QWORD *)this + 18);
            if ( v126 )
            {
              v127 = EDIDV1_ObtainMonitorBasicDisplayParams(
                       (unsigned __int8 *)(v126 + 24),
                       (struct _WmiMonitorBasicDisplayParams *)v125);
              v11 = v127;
              if ( v127 < 0 )
              {
                v131 = WdLogNewEntry5_WdWarning(v129, v128, v130);
                *(_QWORD *)(v131 + 24) = *((_QWORD *)this + 18) + 24LL;
                *(_QWORD *)(v131 + 32) = v11;
                WdLogEvent5_WdWarning(v131);
                MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v11);
              }
            }
            else
            {
              *(_DWORD *)&v145.SignalLevelStandard = 0;
              LODWORD(v144) = 0;
              v138 = 0;
              v142 = 0;
              v141 = 0;
              v143 = 0LL;
              v140 = 0;
              v139 = 0;
              LOBYTE(v146) = 0;
              LODWORD(v11) = DisplayID_GetPhysicalSize(
                               (DXGMONITOR *)((char *)this + 168),
                               (unsigned int *)&v145.SignalLevelStandard,
                               &v138);
              if ( (int)v11 < 0
                || (LODWORD(v11) = DisplayID_GetNativeLuminance(
                                     (DXGMONITOR *)((char *)this + 168),
                                     &v142,
                                     &v141,
                                     &v140,
                                     &v139),
                    (int)v11 < 0)
                || (LODWORD(v11) = DisplayID_GetColorimetryData(
                                     (DXGMONITOR *)((char *)this + 168),
                                     (struct DISPLAYID_COLORIMETRY_DATA *)&v146,
                                     (struct DISPLAY_COLOR_DEPTHS *)&v143),
                    (int)v11 < 0) )
              {
                v137 = WdLogNewEntry5_WdError(v133, v132);
                *(_QWORD *)(v137 + 24) = *v57;
                *(_QWORD *)(v137 + 32) = (int)v11;
                WdLogEvent5_WdError(v137);
              }
              else
              {
                *(_BYTE *)v125 = 1;
                *(_WORD *)(v125 + 9) = 1;
                v134 = *(_DWORD *)&v145.SignalLevelStandard;
                *(_DWORD *)(v125 + 4) = 16843009;
                *(_BYTE *)(v125 + 1) = v134 / 0x64;
                v135 = v138 / 0x64;
                *(_BYTE *)(v125 + 3) = v139 - 100;
                v136 = v146 & 1;
                *(_BYTE *)(v125 + 2) = v135;
                *(_BYTE *)(v125 + 8) = v136;
              }
            }
          }
          else
          {
            LODWORD(v11) = -2147483643;
          }
          *a6 = 11LL;
          goto LABEL_30;
        }
        goto LABEL_47;
      }
      goto LABEL_103;
    }
    v23 = v22 - 4;
    if ( v23 )
    {
      v24 = v23 - 4;
      if ( v24 )
      {
        if ( v24 != 168 )
          return (unsigned int)v11;
        if ( v9 >= 0x20 )
        {
          if ( *(_DWORD *)a4 != 3 )
          {
            v121 = WdLogNewEntry5_WdAssertion(v14, v13);
            WdLogEvent5_WdAssertion(v121);
          }
          *((_DWORD *)this + 186) = *((_DWORD *)a4 + 1) / 0x3E8u;
          LODWORD(v11) = DXGMONITOR::SetLuminanceValuesWithBrightnessCompensation(this);
          if ( (int)v11 >= 0 && *((_DWORD *)this + 187) == 12 )
          {
            DXGMONITOR::_SendAdjustedHDRParamsToDriver(this, 1, 0);
            DXGMONITOR::TriggerMonitorColorimetryChangedWnf(v122);
          }
          return (unsigned int)v11;
        }
        goto LABEL_47;
      }
      v53 = *((_QWORD *)this + 18);
      if ( v53 )
      {
        if ( v9 < 0x10 || a5 < 0x10 )
          goto LABEL_47;
        LOBYTE(v146) = 0;
        v54 = EDIDV1_ObtainMonitorDigitalVideoInputParams(
                (unsigned __int8 *)(v53 + 24),
                (struct _WmiMonitorDigitalVideoInputParams *)&v146);
        v11 = v54;
        if ( v54 >= 0 )
        {
          if ( *a4 )
          {
            v123 = (_BYTE *)a4[1];
            memset(v123, 0, *a4);
            *v123 = v146;
          }
          else
          {
            LODWORD(v11) = -2147483643;
          }
          *a6 = 1LL;
          goto LABEL_30;
        }
LABEL_59:
        if ( (_DWORD)v11 == -1073741275 )
          return (unsigned int)v11;
        goto LABEL_76;
      }
    }
    else
    {
      v55 = *((_QWORD *)this + 18);
      if ( v55 )
      {
        if ( v9 < 0x10 || a5 < 0x10 )
          goto LABEL_47;
        *(_DWORD *)&v145.SignalLevelStandard = 0;
        *(_WORD *)&v145.SyncOnGreenVideoSupported = 0;
        v56 = EDIDV1_ObtainMonitorAnalogVideoInputParams((unsigned __int8 *)(v55 + 24), &v145);
        v11 = v56;
        if ( v56 >= 0 )
        {
          if ( *a4 >= 6 )
          {
            v124 = (_WmiMonitorAnalogVideoInputParams *)a4[1];
            memset(v124, 0, *a4);
            *v124 = v145;
          }
          else
          {
            LODWORD(v11) = -2147483643;
          }
          *a6 = 6LL;
          goto LABEL_30;
        }
        goto LABEL_59;
      }
    }
    LODWORD(v11) = *((_QWORD *)this + 21) != 0LL ? -1073741275 : -1071841279;
    return (unsigned int)v11;
  }
  if ( (_DWORD)v8 == 2303007 )
  {
    v51 = (_QWORD *)((char *)this + 168);
    if ( *((_QWORD *)this + 18) || *v51 )
    {
      if ( v9 >= 0x10 && a5 >= 0x10 )
      {
        v52 = *a4;
        if ( *a4 >= 0x10 )
        {
          v110 = (struct _WmiMonitorColorCharacteristics *)a4[1];
          memset(v110, 0, v52);
          v111 = *((_QWORD *)this + 18);
          if ( v111 )
          {
            v112 = EDIDV1_ObtainMonitorColorCharacteristics((unsigned __int8 *)(v111 + 24), v110);
            v11 = v112;
            if ( v112 < 0 )
            {
              v116 = WdLogNewEntry5_WdWarning(v114, v113, v115);
              *(_QWORD *)(v116 + 24) = *((_QWORD *)this + 18) + 24LL;
              *(_QWORD *)(v116 + 32) = v11;
              WdLogEvent5_WdWarning(v116);
              MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v11);
            }
          }
          else
          {
            *(_DWORD *)&v145.SignalLevelStandard = 0;
            LOBYTE(v146) = 0;
            v143 = 0LL;
            v144 = 0LL;
            ColorDataRaw = DisplayID_GetColorDataRaw(
                             (DXGMONITOR *)((char *)this + 168),
                             (struct DISPLAY_COLOR_DATA_RAW *)&v143,
                             (enum DISPLAY_NATIVE_COLOR_DEPTH *)&v145,
                             (bool *)&v146);
            v11 = ColorDataRaw;
            if ( ColorDataRaw >= 0 )
            {
              v110->Red.X = (unsigned __int16)v143 >> 2;
              v110->Red.Y = WORD2(v143) >> 2;
              v110->Green.X = WORD4(v143) >> 2;
              v110->Green.Y = WORD6(v143) >> 2;
              v110->Blue.X = (unsigned __int16)v144 >> 2;
              v110->Blue.Y = WORD2(v144) >> 2;
              v110->DefaultWhite.X = WORD4(v144) >> 2;
              v110->DefaultWhite.Y = WORD6(v144) >> 2;
            }
            else
            {
              v120 = WdLogNewEntry5_WdError(v119, v118);
              *(_QWORD *)(v120 + 24) = *v51;
              *(_QWORD *)(v120 + 32) = v11;
              WdLogEvent5_WdError(v120);
            }
          }
        }
        else
        {
          LODWORD(v11) = -2147483643;
        }
        *a6 = 16LL;
        goto LABEL_30;
      }
      goto LABEL_47;
    }
LABEL_103:
    LODWORD(v11) = -1071841279;
    return (unsigned int)v11;
  }
  v16 = v8 - 2302979;
  if ( v16 )
  {
    v17 = v16 - 12;
    if ( v17 )
    {
      v18 = v17 - 4;
      if ( v18 )
      {
        v19 = v18 - 4;
        if ( v19 )
        {
          if ( v19 != 4 )
            return (unsigned int)v11;
          v20 = 0;
          if ( *((_QWORD *)this + 18) || *((_QWORD *)this + 21) )
          {
            if ( v9 >= 0x10 && a5 >= 0x10 )
            {
              v21 = *a4;
              if ( *a4 < 0x82 )
              {
                LODWORD(v11) = -2147483643;
LABEL_29:
                *a6 = 130LL;
LABEL_30:
                *a7 = 16LL;
                return (unsigned int)v11;
              }
              v25 = a4[1];
              memset((void *)v25, 0, v21);
              v26 = *((_QWORD *)this + 18);
              if ( v26 )
              {
                v27 = EDIDV1_ObtainMonitorProductCodeID((unsigned __int8 *)(v26 + 24), (unsigned __int16 *)v25);
                v11 = v27;
                if ( v27 >= 0 )
                {
                  v31 = EDIDV1_ObtainMonitorSerialNumber(
                          (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                          (unsigned __int16 *)(v25 + 32));
                  v11 = v31;
                  if ( v31 == -1073741275 )
                  {
                    v60 = WdLogNewEntry5_WdDmmEvent(v29, v28);
                    *(_QWORD *)(v60 + 24) = *((_QWORD *)this + 18) + 24LL;
                    WdLogEvent5_WdDmmEvent(v60);
                  }
                  else if ( v31 < 0 )
                  {
                    goto LABEL_76;
                  }
                  v32 = EDIDV1_ObtainMonitorManufacturerName(
                          (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                          (unsigned __int16 *)(v25 + 64));
                  v11 = v32;
                  if ( v32 >= 0 )
                  {
                    v33 = EDIDV1_ObtainMonitorManufactureDate(
                            (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                            (unsigned __int8 *)(v25 + 96),
                            (unsigned __int16 *)(v25 + 98));
                    v37 = v33;
                    if ( v33 < 0 )
                    {
                      v61 = WdLogNewEntry5_WdWarning(v35, v34, v36);
                      *(_QWORD *)(v61 + 24) = *((_QWORD *)this + 18) + 24LL;
                      *(_QWORD *)(v61 + 32) = v37;
                      WdLogEvent5_WdWarning(v61);
                      MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v37);
                    }
                    v38 = EDIDV1_ObtainMonitorUserFriendlyName(
                            (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                            (unsigned __int16 *)(v25 + 102));
                    v11 = v38;
                    if ( v38 == -1073741275 )
                    {
                      v62 = WdLogNewEntry5_WdDmmEvent(v40, v39);
                      *(_QWORD *)(v62 + 24) = *((_QWORD *)this + 18) + 24LL;
                      WdLogEvent5_WdDmmEvent(v62);
                      LODWORD(v11) = 0;
                    }
                    else
                    {
                      if ( v38 < 0 )
                      {
                        v63 = WdLogNewEntry5_WdWarning(v40, v39, v41);
                        *(_QWORD *)(v63 + 24) = *((_QWORD *)this + 18) + 24LL;
                        *(_QWORD *)(v63 + 32) = v11;
                        WdLogEvent5_WdWarning(v63);
                        MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v11);
                        *(_WORD *)(v25 + 100) = 0;
                        return (unsigned int)v11;
                      }
                      v20 = 13;
                    }
                    *(_WORD *)(v25 + 100) = v20;
                    goto LABEL_29;
                  }
                }
LABEL_76:
                v59 = WdLogNewEntry5_WdWarning(v29, v28, v30);
                *(_QWORD *)(v59 + 24) = *((_QWORD *)this + 18) + 24LL;
                *(_QWORD *)(v59 + 32) = v11;
                WdLogEvent5_WdWarning(v59);
                MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v11);
                return (unsigned int)v11;
              }
              ProductCode = DisplayID_GetProductCode((DXGMONITOR *)((char *)this + 168), (unsigned __int16 *)v25);
              v11 = ProductCode;
              if ( ProductCode < 0
                || (SerialNumber = DisplayID_GetSerialNumber(
                                     (DXGMONITOR *)((char *)this + 168),
                                     (unsigned __int16 *)(v25 + 32)),
                    v11 = SerialNumber,
                    SerialNumber < 0) )
              {
                v79 = WdLogNewEntry5_WdError(v66, v65);
                v80 = *((_QWORD *)this + 20);
                *(_QWORD *)(v79 + 32) = v11;
              }
              else
              {
                ManufacturerName = DisplayID_GetManufacturerName(
                                     (DXGMONITOR *)((char *)this + 168),
                                     (unsigned __int16 *)(v25 + 64));
                v71 = ManufacturerName;
                if ( ManufacturerName >= 0 )
                {
                  ManufactureDate = DisplayID_GetManufactureDate(
                                      (DXGMONITOR *)((char *)this + 168),
                                      (unsigned __int8 *)(v25 + 96),
                                      (unsigned __int16 *)(v25 + 98));
                  v76 = ManufactureDate;
                  if ( ManufactureDate < 0 )
                  {
                    v77 = WdLogNewEntry5_WdError(v74, v73);
                    *(_QWORD *)(v77 + 24) = *((_QWORD *)this + 20);
                    *(_QWORD *)(v77 + 32) = v76;
                    WdLogEvent5_WdError(v77);
                  }
                  LOBYTE(v146) = 0;
                  UserFriendlyName = DisplayID_GetUserFriendlyName(
                                       (DXGMONITOR *)((char *)this + 168),
                                       (unsigned __int16 *)(v25 + 102),
                                       v75,
                                       (unsigned __int8 *)&v146);
                  v70 = (unsigned __int8)v146;
                  *(_WORD *)(v25 + 100) = (unsigned __int8)v146;
                  v71 = UserFriendlyName;
                  if ( UserFriendlyName >= 0 )
                    goto LABEL_29;
                }
                v79 = WdLogNewEntry5_WdError(v70, v69);
                v80 = *((_QWORD *)this + 20);
                *(_QWORD *)(v79 + 32) = v71;
              }
              goto LABEL_107;
            }
LABEL_47:
            LODWORD(v11) = -1073741789;
            return (unsigned int)v11;
          }
          goto LABEL_103;
        }
        if ( !*((_QWORD *)this + 18) )
          goto LABEL_103;
        if ( v9 < 0x88 || a5 < 0x88 )
          goto LABEL_47;
        v81 = *(unsigned __int8 *)a4;
        if ( (unsigned int)v81 >= *((_DWORD *)this + 32) )
          goto LABEL_103;
        v82 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v81);
        if ( !v82 )
          goto LABEL_103;
        v83 = a6;
        *(_BYTE *)a6 = v81;
        *((_BYTE *)v83 + 1) = *(_BYTE *)(v82 + 12);
        ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v82 + 8), (char *)v83 + 132);
        v84 = a7;
        *(_OWORD *)((char *)v83 + 2) = *(_OWORD *)(v82 + 24);
        v85 = *(_OWORD *)(v82 + 40);
        *v84 = 136LL;
        *(_OWORD *)((char *)v83 + 18) = v85;
        *(_OWORD *)((char *)v83 + 34) = *(_OWORD *)(v82 + 56);
        *(_OWORD *)((char *)v83 + 50) = *(_OWORD *)(v82 + 72);
        *(_OWORD *)((char *)v83 + 66) = *(_OWORD *)(v82 + 88);
        *(_OWORD *)((char *)v83 + 82) = *(_OWORD *)(v82 + 104);
        *(_OWORD *)((char *)v83 + 98) = *(_OWORD *)(v82 + 120);
        *(_OWORD *)((char *)v83 + 114) = *(_OWORD *)(v82 + 136);
LABEL_123:
        LODWORD(v11) = 0;
        return (unsigned int)v11;
      }
      v86 = *((_QWORD *)this + 18);
      if ( !v86 )
        goto LABEL_103;
      if ( v9 < 0x10 || a5 < 0x10 )
        goto LABEL_47;
      v87 = *(_DWORD *)(v86 + 16);
      v88 = *(_DWORD *)(v86 + 8);
      LOWORD(v146) = 0;
      SupportedMonitorFrequencyRanges = EDID_V1_GetSupportedMonitorFrequencyRanges(
                                          v88,
                                          v87,
                                          (unsigned __int8 *)(v86 + 24),
                                          (__int64)&v146,
                                          0LL);
      v11 = SupportedMonitorFrequencyRanges;
      if ( SupportedMonitorFrequencyRanges == -1073741275 )
        goto LABEL_103;
      v91 = 0x80000000LL;
      if ( (int)(SupportedMonitorFrequencyRanges + 0x80000000) >= 0 && SupportedMonitorFrequencyRanges != -1073741789 )
      {
LABEL_98:
        v79 = WdLogNewEntry5_WdError(v91, v90);
        *(_QWORD *)(v79 + 24) = v11;
LABEL_108:
        WdLogEvent5_WdError(v79);
        return (unsigned int)v11;
      }
      v47 = 52LL * (unsigned __int16)v146 + 4;
      if ( *a4 >= v47 )
      {
        v92 = a4[1];
        *(_WORD *)v92 = v146;
        v93 = EDID_V1_GetSupportedMonitorFrequencyRanges(
                *(_DWORD *)(*((_QWORD *)this + 18) + 8LL),
                *(_DWORD *)(*((_QWORD *)this + 18) + 16LL),
                (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                v92,
                (struct _FrequencyRangeDescriptor *)(v92 + 4));
        v11 = v93;
        if ( v93 < 0 )
          goto LABEL_98;
LABEL_44:
        *a6 = v47;
        goto LABEL_30;
      }
LABEL_48:
      LODWORD(v11) = -2147483643;
      goto LABEL_44;
    }
    v43 = *((_QWORD *)this + 18);
    if ( !v43 && !*((_QWORD *)this + 21) )
      goto LABEL_103;
    if ( v9 < 0x10 || a5 < 0x10 )
      goto LABEL_47;
    v146 = 0;
    if ( v43 )
      MonitorModes = EDID_V1_GetMonitorModes(
                       *(unsigned int *)(v43 + 8),
                       *(_DWORD *)(v43 + 16),
                       (unsigned __int8 *)(v43 + 24),
                       (unsigned __int16 *)&v146,
                       0LL,
                       0LL);
    else
      MonitorModes = DisplayID_GetSupportedModes((DXGMONITOR *)((char *)this + 168), &v146, 0LL, 0LL);
    v46 = 0x80000000LL;
    LODWORD(v11) = MonitorModes;
    if ( (int)(MonitorModes + 0x80000000) < 0 || MonitorModes == -1073741789 )
    {
      if ( !v146 )
        goto LABEL_103;
      v47 = 56LL * (v146 - 1) + 60;
      if ( *a4 < v47 )
        goto LABEL_48;
      v48 = a4[1];
      v49 = *((_QWORD *)this + 18);
      *(_DWORD *)&v145.SignalLevelStandard = 0;
      if ( v49 )
        SupportedModes = EDID_V1_GetMonitorModes(
                           *(unsigned int *)(v49 + 8),
                           *(_DWORD *)(v49 + 16),
                           (unsigned __int8 *)(v49 + 24),
                           (unsigned __int16 *)&v146,
                           (struct _VideoModeDescriptor *)(v48 + 4),
                           &v145);
      else
        SupportedModes = DisplayID_GetSupportedModes(
                           (DXGMONITOR *)((char *)this + 168),
                           &v146,
                           (unsigned int *)&v145.SignalLevelStandard,
                           (struct _VideoModeDescriptor *)(v48 + 4));
      LODWORD(v11) = SupportedModes;
      if ( SupportedModes >= 0 )
      {
        *(_WORD *)v48 = v146;
        *(_WORD *)(v48 + 2) = *(_WORD *)&v145.SignalLevelStandard;
        goto LABEL_44;
      }
    }
    v79 = WdLogNewEntry5_WdError(v46, v45);
    v80 = (int)v11;
LABEL_107:
    *(_QWORD *)(v79 + 24) = v80;
    goto LABEL_108;
  }
  if ( a4 )
  {
    if ( v9 >= 0x10 )
    {
      v96 = *((unsigned int *)this + 32);
      if ( (_DWORD)v96 )
      {
        v98 = *(_DWORD *)a4 >> 7;
        v99 = (unsigned int)(*((_DWORD *)a4 + 1) + *(_DWORD *)a4);
        v100 = *(_DWORD *)a4 & 0x7F;
        v101 = (unsigned int)(v99 - 1) >> 7;
        v102 = (*((_BYTE *)a4 + 4) + *(_BYTE *)a4 - 1) & 0x7F;
        if ( v101 < (unsigned int)v96 )
        {
          v104 = (char *)a4[1];
          memmove(v104, (const void *)(*(_QWORD *)(*((_QWORD *)this + 17) + 8 * v98) + v100 + 24), 128 - v100);
          v105 = &v104[128 - v100];
          v106 = v98 + 1;
          for ( i = v106 + 1; i < v101; ++i )
          {
            v108 = v106;
            v106 = i;
            v109 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v108);
            *(_OWORD *)v105 = *(_OWORD *)(v109 + 24);
            *((_OWORD *)v105 + 1) = *(_OWORD *)(v109 + 40);
            *((_OWORD *)v105 + 2) = *(_OWORD *)(v109 + 56);
            *((_OWORD *)v105 + 3) = *(_OWORD *)(v109 + 72);
            *((_OWORD *)v105 + 4) = *(_OWORD *)(v109 + 88);
            *((_OWORD *)v105 + 5) = *(_OWORD *)(v109 + 104);
            *((_OWORD *)v105 + 6) = *(_OWORD *)(v109 + 120);
            *((_OWORD *)v105 + 7) = *(_OWORD *)(v109 + 136);
            v105 += 128;
          }
          if ( v106 < v101 )
            memmove(v105, (const void *)(*(_QWORD *)(*((_QWORD *)this + 17) + 8LL * v106) + 24LL), v102 + 1);
          goto LABEL_123;
        }
        v103 = WdLogNewEntry5_WdWarning(v99, v96, v15);
        *(_QWORD *)(v103 + 24) = *(unsigned int *)a4;
        *(_QWORD *)(v103 + 32) = *((unsigned int *)a4 + 1);
        WdLogEvent5_WdWarning(v103);
        return 3223126024LL;
      }
      else
      {
        v97 = WdLogNewEntry5_WdWarning(v14, v96, v15);
        *(_QWORD *)(v97 + 24) = this;
        WdLogEvent5_WdWarning(v97);
        return 3223126017LL;
      }
    }
    else
    {
      v95 = WdLogNewEntry5_WdError(v14, v13);
      WdLogEvent5_WdError(v95);
      return 3221225507LL;
    }
  }
  else
  {
    v94 = WdLogNewEntry5_WdError(v14, v13);
    WdLogEvent5_WdError(v94);
    return 3221225485LL;
  }
}
