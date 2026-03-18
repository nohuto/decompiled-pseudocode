/*
 * XREFs of ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0189A20
 * Callers:
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018C5E4 (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F28E4 (-_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C02F34CC (MonitorEnableDisableAdvancedColor.c)
 *     ?SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z @ 0x1C02F8654 (-SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z.c)
 *     ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C02F8850 (-SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C00095AC (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C000BBDC (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C001E0C0 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C001E170 (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C001E250 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDID_V1_RemovePII@@YAJKPEAE@Z @ 0x1C002248C (-EDID_V1_RemovePII@@YAJKPEAE@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0022548 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C00225BC (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U_tlgWrapperBinary@@U5@U5@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U5@U2@U?$_tlgWrapSz@G@@U6@U?$_tlgWrapperByVal@$00@@U1@U2@U2@U2@U2@U2@U2@U2@U2@U2@U5@U2@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@44AEBU?$_tlgWrapperByVal@$07@@5AEBU_tlgWrapperBinary@@7744444444444444444474AEBU?$_tlgWrapSz@G@@8AEBU?$_tlgWrapperByVal@$00@@3444444444747@Z @ 0x1C005D240 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U-$_tlgWrapBuffer@U_UNICO.c)
 *     ?DisplayID_GetManufactureDate@@YAJPEBUDisplayIDObj@@PEAEPEAG@Z @ 0x1C005EEAC (-DisplayID_GetManufactureDate@@YAJPEBUDisplayIDObj@@PEAEPEAG@Z.c)
 *     ?DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C005EF20 (-DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C005EFF0 (-DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z @ 0x1C005F23C (-DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z.c)
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x1C005F74C (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C01283E8 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C012C35C (MonitorIsMonitorAndDriverWCGCapable.c)
 *     MonitorLogBadEDID @ 0x1C02F3D18 (MonitorLogBadEDID.c)
 */

void __fastcall DXGMONITOR::_MonitorTelemetry(__int64 a1, __int64 a2, __int64 a3)
{
  GUID *p_ActivityId; // rax
  __int64 *v5; // rsi
  int v6; // edi
  __int64 **v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // r15
  int IsEDIDBaseBlock; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r14
  int v15; // r11d
  bool v16; // zf
  bool v17; // r12
  __int128 v18; // xmm0
  bool v19; // r13
  __int128 v20; // xmm1
  __int64 v21; // rax
  __int128 v22; // xmm0
  unsigned __int64 v23; // rax
  int v24; // ecx
  struct HDXGMONITOR__ *MonitorHandle; // rax
  __int64 v26; // rdx
  struct HDXGMONITOR__ *v27; // rax
  void *v28; // r14
  unsigned __int8 *v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rcx
  _DWORD *v32; // rax
  int v33; // ecx
  unsigned int v34; // eax
  __int64 v35; // r9
  __int64 v36; // r10
  int v37; // r11d
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  const void *v43; // rdx
  size_t v44; // r8
  int v45; // r8d
  __int64 v46; // rax
  int v47; // eax
  unsigned __int64 v48; // rax
  SIZE_T v49; // rax
  unsigned __int64 v50; // kr00_8
  char *v51; // rax
  unsigned __int8 v52; // r10
  unsigned __int16 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rcx
  _DWORD *v57; // rax
  int v58; // ecx
  unsigned int v59; // eax
  __int64 v60; // rax
  unsigned int v61; // esi
  unsigned int v62; // r10d
  BOOL v63; // eax
  __int64 v64; // r13
  BOOL v65; // eax
  BOOL v66; // r12d
  BOOL v67; // r10d
  int v68; // esi
  unsigned int v69; // edx
  __int64 v70; // rcx
  unsigned __int8 v71[4]; // [rsp+1B0h] [rbp-80h] BYREF
  unsigned __int16 v72[2]; // [rsp+1B4h] [rbp-7Ch] BYREF
  unsigned int v73; // [rsp+1B8h] [rbp-78h] BYREF
  char v74[4]; // [rsp+1BCh] [rbp-74h] BYREF
  unsigned int v75; // [rsp+1C0h] [rbp-70h] BYREF
  int v76; // [rsp+1C4h] [rbp-6Ch] BYREF
  unsigned int v77; // [rsp+1C8h] [rbp-68h] BYREF
  unsigned int v78; // [rsp+1CCh] [rbp-64h] BYREF
  int v79; // [rsp+1D0h] [rbp-60h] BYREF
  int v80; // [rsp+1D4h] [rbp-5Ch] BYREF
  int v81; // [rsp+1D8h] [rbp-58h] BYREF
  int v82; // [rsp+1DCh] [rbp-54h] BYREF
  int v83; // [rsp+1E0h] [rbp-50h] BYREF
  int v84; // [rsp+1E4h] [rbp-4Ch] BYREF
  BOOL v85; // [rsp+1E8h] [rbp-48h] BYREF
  int v86; // [rsp+1ECh] [rbp-44h] BYREF
  int v87; // [rsp+1F0h] [rbp-40h] BYREF
  int v88; // [rsp+1F4h] [rbp-3Ch] BYREF
  int v89; // [rsp+1F8h] [rbp-38h] BYREF
  unsigned int v90; // [rsp+1FCh] [rbp-34h] BYREF
  BOOL v91; // [rsp+200h] [rbp-30h] BYREF
  BOOL v92; // [rsp+204h] [rbp-2Ch] BYREF
  int v93; // [rsp+208h] [rbp-28h] BYREF
  int v94; // [rsp+20Ch] [rbp-24h] BYREF
  int v95; // [rsp+210h] [rbp-20h] BYREF
  int v96; // [rsp+214h] [rbp-1Ch] BYREF
  int v97; // [rsp+218h] [rbp-18h] BYREF
  int v98; // [rsp+21Ch] [rbp-14h] BYREF
  int v99; // [rsp+220h] [rbp-10h] BYREF
  int v100; // [rsp+224h] [rbp-Ch] BYREF
  __int64 v101; // [rsp+228h] [rbp-8h] BYREF
  size_t v102; // [rsp+230h] [rbp+0h] BYREF
  int v103; // [rsp+238h] [rbp+8h] BYREF
  int v104; // [rsp+23Ch] [rbp+Ch] BYREF
  BOOL v105; // [rsp+240h] [rbp+10h] BYREF
  int v106; // [rsp+244h] [rbp+14h] BYREF
  int v107; // [rsp+248h] [rbp+18h] BYREF
  __int64 v108; // [rsp+250h] [rbp+20h] BYREF
  __int64 v109; // [rsp+258h] [rbp+28h] BYREF
  void *v110; // [rsp+260h] [rbp+30h]
  unsigned __int16 *v111; // [rsp+268h] [rbp+38h] BYREF
  int v112; // [rsp+270h] [rbp+40h]
  const GUID *v113; // [rsp+278h] [rbp+48h]
  __int128 v114; // [rsp+280h] [rbp+50h] BYREF
  __int64 v115; // [rsp+290h] [rbp+60h]
  __int64 v116; // [rsp+298h] [rbp+68h] BYREF
  unsigned __int16 *v117; // [rsp+2A0h] [rbp+70h] BYREF
  unsigned __int16 *v118; // [rsp+2A8h] [rbp+78h] BYREF
  unsigned __int16 *v119; // [rsp+2B0h] [rbp+80h] BYREF
  __int64 v120; // [rsp+2B8h] [rbp+88h] BYREF
  void *v121; // [rsp+2C0h] [rbp+90h] BYREF
  __int16 v122; // [rsp+2C8h] [rbp+98h]
  void *v123; // [rsp+2D0h] [rbp+A0h] BYREF
  __int16 v124; // [rsp+2D8h] [rbp+A8h]
  __int64 v125; // [rsp+2E0h] [rbp+B0h] BYREF
  __int16 v126; // [rsp+2E8h] [rbp+B8h]
  _OWORD *v127; // [rsp+2F0h] [rbp+C0h] BYREF
  __int16 v128; // [rsp+2F8h] [rbp+C8h]
  __int64 *v129; // [rsp+300h] [rbp+D0h] BYREF
  __int16 v130; // [rsp+308h] [rbp+D8h]
  GUID ActivityId; // [rsp+310h] [rbp+E0h] BYREF
  __int128 v132; // [rsp+320h] [rbp+F0h] BYREF
  int v133; // [rsp+330h] [rbp+100h]
  _OWORD v134[2]; // [rsp+338h] [rbp+108h] BYREF
  unsigned __int16 v135[4]; // [rsp+358h] [rbp+128h] BYREF
  __int16 v136; // [rsp+360h] [rbp+130h]
  unsigned __int16 v137[4]; // [rsp+368h] [rbp+138h] BYREF
  int v138; // [rsp+370h] [rbp+140h]
  __int16 v139; // [rsp+374h] [rbp+144h]

  v100 = a2;
  ActivityId = 0LL;
  if ( a3 )
  {
    p_ActivityId = (GUID *)(a3 + 8);
  }
  else
  {
    EtwActivityIdControl(3u, &ActivityId);
    p_ActivityId = &ActivityId;
  }
  v5 = 0LL;
  v113 = p_ActivityId;
  v6 = 1;
  if ( !*(_DWORD *)(a1 + 128) )
    goto LABEL_34;
  v7 = *(__int64 ***)(a1 + 136);
  if ( !v7 )
    goto LABEL_34;
  v8 = *v7;
  if ( !v8 )
    goto LABEL_34;
  do
  {
    if ( *((_DWORD *)v8 + 2) == 2 )
      break;
    v8 = (__int64 *)*v8;
  }
  while ( v8 );
  if ( v8 )
  {
    v9 = v8 + 3;
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v8 + 24);
    v14 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock < 0 )
    {
      v38 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v38 + 24) = v9;
      *(_QWORD *)(v38 + 32) = v14;
      WdLogEvent5_WdWarning(v38);
      MonitorLogBadEDID(v9, (unsigned int)v14);
    }
    else
    {
      v5 = v9;
      LODWORD(v14) = 0;
    }
    v87 = 0;
    if ( (int)v14 >= 0 )
    {
      if ( (int)EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v5) >= 0 )
        v15 = 1;
      v87 = v15;
    }
  }
  else
  {
LABEL_34:
    v39 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v39 + 24) = a1;
    WdLogEvent5_WdWarning(v39);
    v87 = 0;
  }
  v110 = 0LL;
  LODWORD(v102) = 0;
  v76 = 0;
  if ( *(_QWORD *)(a1 + 168) )
  {
    v110 = operator new[](*(unsigned int *)(a1 + 176), 0x4D677844u, PagedPool);
    if ( v110 )
    {
      v43 = *(const void **)(a1 + 168);
      v44 = *(unsigned int *)(a1 + 176);
      v102 = v44;
      memmove(v110, v43, v44);
      v45 = *(_DWORD *)(a1 + 176);
      v115 = 0LL;
      v114 = 0LL;
      DisplayID_Initialize((struct DisplayIDObj *)&v114, (char *)v110, v45);
      DisplayID_UpdateForTelemetry((struct DisplayIDObj *)&v114);
      v76 = 1;
    }
    else
    {
      v46 = WdLogNewEntry5_WdWarning(v41, v40, v42);
      WdLogEvent5_WdWarning(v46);
      v76 = 0;
    }
  }
  v16 = (*(_DWORD *)(a1 + 40) & 0x400) == 0;
  v17 = 0;
  v18 = *(_OWORD *)(a1 + 600);
  v19 = 0;
  v20 = *(_OWORD *)(a1 + 644);
  v133 = *(_DWORD *)(a1 + 616);
  v21 = *(_QWORD *)(a1 + 620);
  v132 = v18;
  v116 = v21;
  v22 = *(_OWORD *)(a1 + 628);
  v134[1] = v20;
  v134[0] = v22;
  if ( v16 )
  {
    v23 = 0LL;
    v24 = -1073741275;
    v112 = 0;
  }
  else
  {
    v47 = *(_DWORD *)(a1 + 476);
    v24 = 0;
    v111 = *(unsigned __int16 **)(a1 + 468);
    v112 = v47;
    v23 = (unsigned __int64)v111;
  }
  v85 = 0;
  v86 = 0;
  if ( v24 >= 0 )
  {
    v48 = HIDWORD(v23);
    v86 = 1;
    v17 = (v48 & 2) != 0;
    v19 = (v48 & 4) != 0;
    v85 = (v48 & 0x800) != 0;
  }
  v75 = 0;
  MonitorHandle = MONITOR_MGR::_GetMonitorHandle((struct DXGMONITOR *)a1, v11);
  MonitorIsMonitorAndLinkHDRCapable(MonitorHandle, &v75);
  v74[0] = 0;
  v27 = MONITOR_MGR::_GetMonitorHandle((struct DXGMONITOR *)a1, v26);
  MonitorIsMonitorAndDriverWCGCapable(v27, v74);
  v71[0] = 0;
  *(_QWORD *)v137 = 0LL;
  v138 = 0;
  v139 = 0;
  v28 = 0LL;
  *(_QWORD *)v135 = 0LL;
  v136 = 0;
  v73 = 0;
  v72[0] = 0;
  v78 = 0;
  v77 = 0;
  v84 = 0;
  v83 = 0;
  v82 = 0;
  v81 = 0;
  v80 = 0;
  v79 = 0;
  v101 = 128LL;
  v29 = (unsigned __int8 *)operator new[](0x80uLL, 0x4D677844u, PagedPool);
  if ( v29 )
  {
    if ( v5 )
    {
      EDIDV1_ObtainMonitorManufacturerName((unsigned __int8 *)v5, v137);
      EDIDV1_ObtainMonitorProductCodeID((unsigned __int8 *)v5, v135);
      EDIDV1_ObtainMonitorManufactureDate((unsigned __int8 *)v5, v71, v72);
      EDID_V1_GetPhysicalSize(v30, (unsigned __int8 *)v5, &v78, &v77);
      *(_OWORD *)v29 = *(_OWORD *)v5;
      *((_OWORD *)v29 + 1) = *((_OWORD *)v5 + 1);
      *((_OWORD *)v29 + 2) = *((_OWORD *)v5 + 2);
      *((_OWORD *)v29 + 3) = *((_OWORD *)v5 + 3);
      *((_OWORD *)v29 + 4) = *((_OWORD *)v5 + 4);
      *((_OWORD *)v29 + 5) = *((_OWORD *)v5 + 5);
      *((_OWORD *)v29 + 6) = *((_OWORD *)v5 + 6);
      *((_OWORD *)v29 + 7) = *((_OWORD *)v5 + 7);
      EDID_V1_RemovePII(v31, v29);
      v32 = *(_DWORD **)(a1 + 232);
      if ( v32 )
      {
        v84 = v32[5];
        v83 = v32[6];
        v82 = v32[2];
        v81 = v32[14];
        v33 = v32[7];
        v79 = v32[8];
        v80 = v33;
      }
      v34 = *(_DWORD *)(a1 + 128);
      if ( v34 > 1 )
      {
        if ( v34 < 4 )
          LOWORD(v34) = v34 - 1;
        else
          v34 = 3;
        v73 = v34;
        v50 = (unsigned __int16)v34;
        v49 = 136LL * (unsigned __int16)v34;
        if ( !is_mul_ok(v50, 0x88uLL) )
          v49 = -1LL;
        v51 = (char *)operator new[](v49, 0x4D677844u, PagedPool);
        v52 = 0;
        v28 = v51;
        if ( v51 )
        {
          v53 = v73;
          if ( (_WORD)v73 )
          {
            do
            {
              v54 = v52++;
              v55 = 136 * v54;
              *(_DWORD *)&v51[v55] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 8 * v54 + 8) + 8LL);
              *(_DWORD *)&v51[v55 + 4] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 8 * v54 + 8) + 12LL);
              v56 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8 * v54 + 8);
              *(_OWORD *)&v51[v55 + 8] = *(_OWORD *)(v56 + 24);
              *(_OWORD *)&v51[v55 + 24] = *(_OWORD *)(v56 + 40);
              *(_OWORD *)&v51[v55 + 40] = *(_OWORD *)(v56 + 56);
              *(_OWORD *)&v51[v55 + 56] = *(_OWORD *)(v56 + 72);
              *(_OWORD *)&v51[v55 + 72] = *(_OWORD *)(v56 + 88);
              *(_OWORD *)&v51[v55 + 88] = *(_OWORD *)(v56 + 104);
              *(_OWORD *)&v51[v55 + 104] = *(_OWORD *)(v56 + 120);
              *(_OWORD *)&v51[v55 + 120] = *(_OWORD *)(v56 + 136);
            }
            while ( v52 < v53 );
          }
        }
      }
    }
    else if ( *(_QWORD *)(a1 + 168) )
    {
      DisplayID_GetManufacturerName((const struct DisplayIDObj *)(a1 + 168), v137);
      DisplayID_GetProductCode((const struct DisplayIDObj *)(a1 + 168), v135);
      DisplayID_GetManufactureDate((const struct DisplayIDObj *)(a1 + 168), v71, v72);
      DisplayID_GetPhysicalSize((const struct DisplayIDObj *)(a1 + 168), &v78, &v77);
      v57 = *(_DWORD **)(a1 + 232);
      if ( v57 )
      {
        v84 = v57[5];
        v83 = v57[6];
        v82 = v57[2];
        v81 = v57[14];
        v58 = v57[7];
        v79 = v57[8];
        v80 = v58;
      }
    }
    if ( (unsigned int)dword_1C00B0A90 > 5 && tlgKeywordOn((__int64)&dword_1C00B0A90, 0x800000000020LL) )
    {
      v59 = v36;
      LOBYTE(v59) = *(_QWORD *)(a1 + 232) != v36;
      v73 = v59;
      if ( !v5 )
        LOWORD(v101) = v36;
      v16 = v5 == 0LL;
      v60 = v36;
      v61 = v75;
      v62 = *(_DWORD *)(a1 + 40);
      if ( !v16 )
        v60 = (__int64)v29;
      v109 = v60;
      v88 = *(_DWORD *)(a1 + 688);
      v89 = *(unsigned __int8 *)(a1 + 701);
      v90 = v75 & 1;
      v75 = (v75 >> 1) & 1;
      v63 = v19;
      v64 = *(_QWORD *)(a1 + 32);
      v91 = v63;
      v65 = v17;
      v66 = 0;
      v92 = v65;
      v93 = *(unsigned __int8 *)(a1 + 700);
      v94 = *(unsigned __int8 *)(a1 + 692);
      v95 = *(_DWORD *)(a1 + 672);
      v96 = *(_DWORD *)(a1 + 668);
      v97 = *(_DWORD *)(a1 + 664);
      v98 = *(_DWORD *)(a1 + 660);
      v67 = ((v62 >> 11) & 1) == 0;
      v68 = (v61 >> 2) & 1;
      v108 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v64 + 8) + 16LL) + 316LL);
      v99 = *(_DWORD *)(a1 + 48);
      if ( v37 )
        v66 = tlgKeywordOn((__int64)&dword_1C00B0A90, 0x200000000000LL) != 0;
      if ( !v37 || !tlgKeywordOn((__int64)&dword_1C00B0A90, 0x400000000000LL) )
        v6 = 0;
      v69 = gDISeqId;
      v123 = v28;
      v105 = v67;
      v107 = v68;
      ++gDISeqId;
      v121 = v110;
      v122 = v102;
      v117 = v135;
      v118 = v137;
      v103 = *(_DWORD *)(a1 + 128);
      v125 = v109;
      v126 = v101;
      v104 = *(_DWORD *)(a1 + 476);
      v106 = (unsigned __int8)v74[0];
      v124 = 136 * v35;
      v127 = v134;
      v128 = 32;
      v129 = &v116;
      v130 = 8;
      *(_QWORD *)&v114 = &v132;
      WORD4(v114) = 20;
      v70 = *(_QWORD *)(*(_QWORD *)(v64 + 8) + 16LL);
      v119 = *(unsigned __int16 **)(v70 + 1520);
      v120 = v108;
      LODWORD(v108) = *(_DWORD *)(a1 + 44);
      v111 = (unsigned __int16 *)(a1 + 88);
      *(_WORD *)v74 = 11;
      LODWORD(v109) = v66;
      LODWORD(v101) = v6;
      LODWORD(v102) = v69;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v70,
        byte_1C00813D8,
        v113,
        v35,
        (__int64)v74,
        (__int64)&v102,
        (__int64)&v101,
        (__int64)&v109,
        (__int64)&v100,
        (__int64)&v99,
        &v111,
        (__int64)&v87,
        (__int64)&v108,
        (__int64)&v120,
        &v119,
        (__int64 *)&v114,
        (__int64 *)&v129,
        (__int64 *)&v127,
        (__int64)&v98,
        (__int64)&v97,
        (__int64)&v96,
        (__int64)&v95,
        (__int64)&v94,
        (__int64)&v93,
        (__int64)&v86,
        (__int64)&v92,
        (__int64)&v91,
        (__int64)&v85,
        (__int64)&v90,
        (__int64)&v75,
        (__int64)&v107,
        (__int64)&v106,
        (__int64)&v105,
        (__int64)&v89,
        (__int64)&v88,
        (__int64)&v104,
        &v125,
        (__int64)&v103,
        (void **)&v118,
        (void **)&v117,
        (__int64)v71,
        (__int64)v72,
        (__int64)&v73,
        (__int64)&v84,
        (__int64)&v83,
        (__int64)&v82,
        (__int64)&v81,
        (__int64)&v80,
        (__int64)&v79,
        (__int64)&v78,
        (__int64)&v77,
        (__int64 *)&v123,
        (__int64)&v76,
        (__int64 *)&v121);
    }
    operator delete[](v29);
    if ( v28 )
      operator delete[](v28);
  }
  if ( v110 )
    operator delete[](v110);
}
