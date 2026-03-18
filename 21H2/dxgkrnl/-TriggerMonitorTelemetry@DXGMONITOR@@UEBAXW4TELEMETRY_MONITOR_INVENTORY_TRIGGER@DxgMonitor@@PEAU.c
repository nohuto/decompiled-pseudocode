/*
 * XREFs of ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020BB20
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020B3F4 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     ?_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B4664 (-_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     ?GetAddress@MonitorDisplayPortState@DxgMonitor@@QEBA?AU_DXGKARG_GETDPADDRESS@@XZ @ 0x1C001FA84 (-GetAddress@MonitorDisplayPortState@DxgMonitor@@QEBA-AU_DXGKARG_GETDPADDRESS@@XZ.c)
 *     ?IsAddressValid@MonitorDisplayPortState@DxgMonitor@@QEBA_NXZ @ 0x1C001FBB0 (-IsAddressValid@MonitorDisplayPortState@DxgMonitor@@QEBA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapSz@G@@U2@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperBinary@@U6@U6@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U6@U2@U3@U3@U?$_tlgWrapperByVal@$00@@U1@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U6@U2@U6@U2@U2@U2@U2@U6@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapSz@G@@44AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperBinary@@8844444444444444444448455AEBU?$_tlgWrapperByVal@$00@@3444444444484844448@Z @ 0x1C0027740 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U-$_tlgWrapSz@G@@U2@U2@U-.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C006BA20 (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@@Z @ 0x1C01631B4 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 *     ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01A69AC (-_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?IsAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01A9B2C (-IsAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     ?GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_N@Z @ 0x1C01DE228 (-GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_N.c)
 *     ?IsAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01E0728 (-IsAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     ?_SupportSyncLockIdentical@DXGMONITOR@@QEBA_NXZ @ 0x1C020C5A8 (-_SupportSyncLockIdentical@DXGMONITOR@@QEBA_NXZ.c)
 */

void __fastcall DXGMONITOR::TriggerMonitorTelemetry(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rax
  void *v5; // rsi
  int v6; // r12d
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // r15d
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  DxgMonitor::MonitorColorState *v13; // r9
  char *v14; // r10
  int v15; // ebx
  int v16; // r14d
  int v17; // edi
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rbx
  char *v21; // rdi
  __int64 v22; // rcx
  char *v23; // r14
  void **v24; // rax
  void *v25; // rcx
  __m128i *v26; // rcx
  __m128i v27; // xmm2
  __m128i v28; // xmm3
  __m128i v29; // xmm5
  __m128i v30; // xmm4
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  void *v34; // rax
  unsigned int v35; // eax
  _WORD *v36; // rbx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int16 v39; // cx
  __int64 v40; // r9
  unsigned __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  _WORD *v44; // rcx
  _WORD *v45; // rax
  __int64 v46; // rcx
  int v47; // r9d
  bool v48; // al
  __int16 v49; // r10
  __int16 v50; // cx
  __int64 v51; // rax
  int v52; // ecx
  __int16 v53; // ax
  DxgMonitor::MonitorColorState *v54; // rcx
  DxgMonitor::MonitorColorState *v55; // rcx
  bool IsAdvancedColorEnabled; // al
  int v57; // r10d
  __int64 v58; // rcx
  bool v59; // zf
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rcx
  void **v65; // rax
  void *v66; // rcx
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // kr00_8
  __int64 v69; // rax
  __int64 *v70; // r13
  __int16 v71; // r15
  unsigned int i; // esi
  __int64 v73; // rax
  unsigned __int8 (__fastcall *v74)(__int64 *, _QWORD, __int128 *); // rax
  char *v75; // rbx
  size_t v76; // r8
  char v77; // [rsp+1F0h] [rbp-80h] BYREF
  bool v78; // [rsp+1F1h] [rbp-7Fh] BYREF
  __int16 v79; // [rsp+1F2h] [rbp-7Eh] BYREF
  int v80; // [rsp+1F4h] [rbp-7Ch] BYREF
  __int16 v81[2]; // [rsp+1F8h] [rbp-78h] BYREF
  int v82; // [rsp+1FCh] [rbp-74h] BYREF
  int v83; // [rsp+200h] [rbp-70h] BYREF
  int v84; // [rsp+204h] [rbp-6Ch] BYREF
  int v85; // [rsp+208h] [rbp-68h] BYREF
  int v86; // [rsp+20Ch] [rbp-64h] BYREF
  int v87; // [rsp+210h] [rbp-60h] BYREF
  unsigned int v88; // [rsp+214h] [rbp-5Ch] BYREF
  void *v89; // [rsp+218h] [rbp-58h] BYREF
  __int64 v90; // [rsp+220h] [rbp-50h] BYREF
  __int64 *v91; // [rsp+228h] [rbp-48h]
  int v92; // [rsp+230h] [rbp-40h] BYREF
  int v93; // [rsp+234h] [rbp-3Ch] BYREF
  int v94; // [rsp+238h] [rbp-38h] BYREF
  unsigned int v95; // [rsp+23Ch] [rbp-34h] BYREF
  int v96; // [rsp+240h] [rbp-30h]
  int v97; // [rsp+244h] [rbp-2Ch]
  void *v98; // [rsp+248h] [rbp-28h] BYREF
  unsigned __int16 *v99; // [rsp+250h] [rbp-20h] BYREF
  unsigned __int64 v100; // [rsp+258h] [rbp-18h] BYREF
  __int64 v101; // [rsp+260h] [rbp-10h] BYREF
  unsigned __int64 v102; // [rsp+268h] [rbp-8h] BYREF
  char *v103; // [rsp+270h] [rbp+0h] BYREF
  void *v104; // [rsp+278h] [rbp+8h] BYREF
  int v105; // [rsp+280h] [rbp+10h] BYREF
  int v106; // [rsp+284h] [rbp+14h] BYREF
  int v107; // [rsp+288h] [rbp+18h] BYREF
  int v108; // [rsp+28Ch] [rbp+1Ch] BYREF
  int v109; // [rsp+290h] [rbp+20h] BYREF
  int v110; // [rsp+294h] [rbp+24h] BYREF
  int v111; // [rsp+298h] [rbp+28h] BYREF
  BOOL IsAutoColorManagementSupported; // [rsp+29Ch] [rbp+2Ch] BYREF
  BOOL v113; // [rsp+2A0h] [rbp+30h] BYREF
  BOOL v114; // [rsp+2A4h] [rbp+34h] BYREF
  int v115; // [rsp+2A8h] [rbp+38h] BYREF
  int v116; // [rsp+2ACh] [rbp+3Ch] BYREF
  int v117; // [rsp+2B0h] [rbp+40h] BYREF
  BOOL v118; // [rsp+2B4h] [rbp+44h] BYREF
  int v119; // [rsp+2B8h] [rbp+48h] BYREF
  int v120; // [rsp+2BCh] [rbp+4Ch] BYREF
  int v121; // [rsp+2C0h] [rbp+50h] BYREF
  int v122; // [rsp+2C4h] [rbp+54h] BYREF
  int v123; // [rsp+2C8h] [rbp+58h] BYREF
  int v124; // [rsp+2CCh] [rbp+5Ch] BYREF
  int v125; // [rsp+2D0h] [rbp+60h] BYREF
  int v126; // [rsp+2D4h] [rbp+64h] BYREF
  int v127; // [rsp+2D8h] [rbp+68h] BYREF
  int v128; // [rsp+2DCh] [rbp+6Ch] BYREF
  __int64 v129; // [rsp+2E0h] [rbp+70h] BYREF
  int v130; // [rsp+2E8h] [rbp+78h]
  int v131; // [rsp+2ECh] [rbp+7Ch] BYREF
  int v132; // [rsp+2F0h] [rbp+80h] BYREF
  int v133; // [rsp+2F4h] [rbp+84h] BYREF
  BOOL v134; // [rsp+2F8h] [rbp+88h] BYREF
  int v135; // [rsp+2FCh] [rbp+8Ch] BYREF
  int v136; // [rsp+300h] [rbp+90h] BYREF
  void *v137[2]; // [rsp+308h] [rbp+98h] BYREF
  const GUID *p_ActivityId; // [rsp+318h] [rbp+A8h]
  __int128 v139; // [rsp+320h] [rbp+B0h] BYREF
  void *Src[2]; // [rsp+330h] [rbp+C0h]
  __int64 v141; // [rsp+340h] [rbp+D0h] BYREF
  __int64 *v142; // [rsp+348h] [rbp+D8h] BYREF
  char *v143; // [rsp+350h] [rbp+E0h] BYREF
  __int16 v144; // [rsp+358h] [rbp+E8h]
  void *v145; // [rsp+360h] [rbp+F0h] BYREF
  __int16 v146; // [rsp+368h] [rbp+F8h]
  char *v147; // [rsp+370h] [rbp+100h] BYREF
  __int16 v148; // [rsp+378h] [rbp+108h]
  char *v149; // [rsp+380h] [rbp+110h] BYREF
  __int16 v150; // [rsp+388h] [rbp+118h]
  _OWORD *v151; // [rsp+390h] [rbp+120h] BYREF
  __int16 v152; // [rsp+398h] [rbp+128h]
  __int64 *v153; // [rsp+3A0h] [rbp+130h] BYREF
  __int16 v154; // [rsp+3A8h] [rbp+138h]
  GUID ActivityId; // [rsp+410h] [rbp+1A0h] BYREF
  __int128 v156; // [rsp+420h] [rbp+1B0h] BYREF
  int v157; // [rsp+430h] [rbp+1C0h]
  char v158[8]; // [rsp+438h] [rbp+1C8h] BYREF
  int v159; // [rsp+440h] [rbp+1D0h]
  unsigned __int8 v160; // [rsp+444h] [rbp+1D4h]
  char v161; // [rsp+445h] [rbp+1D5h] BYREF
  _OWORD v162[2]; // [rsp+458h] [rbp+1E8h] BYREF
  __int64 v163; // [rsp+478h] [rbp+208h] BYREF
  __int16 v164; // [rsp+480h] [rbp+210h]
  __int64 v165; // [rsp+488h] [rbp+218h] BYREF
  int v166; // [rsp+490h] [rbp+220h]
  __int16 v167; // [rsp+494h] [rbp+224h]

  v130 = a2;
  v129 = a1;
  v3 = a1;
  ActivityId = 0LL;
  if ( a3 )
  {
    p_ActivityId = (const GUID *)(a3 + 8);
  }
  else
  {
    EtwActivityIdControl(3u, &ActivityId);
    p_ActivityId = &ActivityId;
  }
  v4 = *(_QWORD *)(v3 + 216);
  v5 = 0LL;
  v92 = 0;
  v6 = 1;
  v104 = 0LL;
  v82 = 0;
  v7 = *(_QWORD *)(v4 + 136);
  if ( v7 )
  {
    v65 = (void **)(*(__int64 (__fastcall **)(__int64, void **, int *))(*(_QWORD *)v7 + 240LL))(v7, &v89, &v92);
    v82 = 1;
    v5 = *v65;
    *v65 = 0LL;
    v66 = v89;
    v104 = v5;
    v89 = 0LL;
    if ( v66 )
    {
      operator delete[](v66);
      v82 = 1;
    }
  }
  v8 = *(_QWORD *)(v3 + 224);
  v83 = 0;
  v9 = 0;
  v80 = 0;
  v78 = 0;
  v10 = *(_OWORD *)(v8 + 208);
  v96 = 0;
  v97 = 0;
  v156 = v10;
  v157 = *(_DWORD *)(v8 + 224);
  v141 = *(_QWORD *)(v8 + 228);
  v11 = *(_OWORD *)(v8 + 236);
  v90 = 0LL;
  LODWORD(v91) = 0;
  v162[0] = v11;
  LODWORD(v98) = 0;
  v12 = *(_OWORD *)(v8 + 252);
  LODWORD(v99) = 0;
  v162[1] = v12;
  if ( (int)DXGMONITOR::_GetLinkInfo((DXGMONITOR *)v3, (struct _DXGK_MONITORLINKINFO *)&v90) >= 0 )
  {
    v15 = HIDWORD(v90) >> 1;
    v16 = HIDWORD(v90) >> 2;
    v17 = HIDWORD(v90) >> 11;
    DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
      v13,
      (const struct _DXGK_MONITORLINKINFO *)&v90,
      (union MONITOR_AND_LINK_HDR_CAPS *)&v80);
    DxgMonitor::MonitorColorState::GetMonitorAndLinkWcgCapable(
      *(DxgMonitor::MonitorColorState **)(v3 + 224),
      (const struct _DXGK_MONITORLINKINFO *)&v90,
      &v78,
      v18);
    v9 = v80;
    v96 = v17 & 1;
    v97 = v16 & 1;
    LODWORD(v98) = v15 & 1;
    v14 = 0LL;
    LODWORD(v99) = 1;
    v83 = v80;
  }
  v77 = (char)v14;
  v165 = 0LL;
  v166 = 0;
  v167 = 0;
  v163 = 0LL;
  v164 = 0;
  v19 = *(_QWORD *)(v3 + 216);
  v81[0] = (__int16)v14;
  v94 = (int)v14;
  v93 = (int)v14;
  v20 = *(_QWORD *)(v19 + 160);
  if ( v20 )
  {
    v90 = 917504LL;
    v91 = &v165;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 64LL))(v20, &v90);
    v137[0] = (void *)655360;
    v137[1] = &v163;
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v20 + 72LL))(v20, v137);
    (*(void (__fastcall **)(__int64, char *, __int16 *))(*(_QWORD *)v20 + 88LL))(v20, &v77, v81);
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v20 + 208LL))(v20, &v94, &v93);
    v19 = *(_QWORD *)(v3 + 216);
    v14 = 0LL;
  }
  v95 = (unsigned int)v14;
  v21 = v14;
  v22 = *(_QWORD *)(v19 + 128);
  v23 = v14;
  LODWORD(v100) = (_DWORD)v14;
  LODWORD(v101) = (_DWORD)v14;
  v86 = (int)v14;
  v85 = (int)v14;
  LODWORD(v102) = (_DWORD)v14;
  v84 = (int)v14;
  v79 = (__int16)v14;
  v103 = v14;
  v80 = (int)v14;
  if ( v22 )
  {
    v24 = (void **)(*(__int64 (__fastcall **)(__int64, void **, unsigned int *))(*(_QWORD *)v22 + 240LL))(
                     v22,
                     &v89,
                     &v95);
    LODWORD(v14) = 0;
    v80 = 1;
    v23 = (char *)*v24;
    *v24 = 0LL;
    v25 = v89;
    v103 = v23;
    v89 = 0LL;
    if ( v25 )
    {
      operator delete[](v25);
      LODWORD(v14) = 0;
      v80 = 1;
    }
  }
  v26 = *(__m128i **)(*(_QWORD *)(v3 + 232) + 144LL);
  if ( v26 )
  {
    v27 = v26[1];
    v87 = 1;
    v28 = v26[3];
    v29 = v26[2];
    v30 = _mm_srli_si128(*v26, 8);
    v31 = HIDWORD(v27.m128i_i64[0]);
    v27.m128i_i64[0] = _mm_srli_si128(v27, 8).m128i_u64[0];
    v100 = v31;
    v102 = HIDWORD(v27.m128i_i64[0]);
    v101 = v27.m128i_i64[0];
    v86 = _mm_cvtsi128_si32(v30);
    v85 = _mm_cvtsi128_si32(_mm_srli_si128(v28, 8));
    v84 = _mm_cvtsi128_si32(v29);
  }
  else
  {
    v87 = (int)v14;
  }
  v32 = *(_QWORD *)(v3 + 216);
  v88 = (unsigned int)v14;
  v33 = *(_QWORD *)(v32 + 128);
  if ( v33 )
  {
    v34 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
    v89 = v34;
    if ( v34 )
    {
      v35 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v34 + 24LL))(v34);
      v88 = v35;
      if ( v35 > 1 )
      {
        v68 = v35 - 1;
        v67 = 136 * v68;
        if ( !is_mul_ok(v68, 0x88uLL) )
          v67 = -1LL;
        v69 = operator new[](v67, 0x4D677844u, 256LL, (__int64)v13);
        v70 = (__int64 *)v89;
        v21 = (char *)v69;
        v71 = v79;
        for ( i = 1; v21; ++i )
        {
          if ( i >= (*(unsigned int (__fastcall **)(__int64 *))(*v70 + 24))(v70) )
            break;
          v73 = *v70;
          v139 = 0LL;
          v74 = *(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v73 + 32);
          *(_OWORD *)Src = 0LL;
          if ( !v74(v70, i, &v139) )
            break;
          ++v71;
          v75 = &v21[136 * i - 136];
          ConvertMonitorCapablitiesOrigin(
            (enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN)Src[1],
            (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)v75);
          *((_DWORD *)v75 + 1) = DWORD1(v139);
          v76 = *((_QWORD *)&v139 + 1);
          if ( *((_QWORD *)&v139 + 1) > 0x80uLL )
            v76 = 128LL;
          memmove(v75 + 8, Src[0], v76);
        }
        v5 = v104;
        v23 = v103;
        v3 = v129;
        v79 = v71;
        v9 = v83;
      }
    }
  }
  v36 = (_WORD *)operator new[](0x208uLL, 0x4D677844u, 256LL, (__int64)v13);
  if ( v36 )
  {
    v37 = *(_QWORD *)(v3 + 200);
    v38 = *(unsigned __int16 *)(v37 + 48);
    if ( (v38 & 1) != 0
      || (v39 = *(_WORD *)(v37 + 50), (v39 & 1) != 0)
      || (unsigned __int16)v38 > v39
      || v39 == 0xFFFF
      || (v40 = *(_QWORD *)(v37 + 56)) == 0 && ((_WORD)v38 || v39) )
    {
      *v36 = 0;
    }
    else
    {
      v41 = v38 >> 1;
      v42 = 260LL;
      v43 = v40 - (_QWORD)v36;
      v44 = v36;
      do
      {
        if ( !v41 )
          break;
        --v41;
        *v44 = *(_WORD *)((char *)v44 + v43);
        ++v44;
        --v42;
      }
      while ( v42 );
      v45 = v44 - 1;
      if ( v42 )
        v45 = v44;
      *v45 = 0;
    }
  }
  DxgMonitor::MonitorDisplayPortState::IsAddressValid(*(DxgMonitor::MonitorDisplayPortState **)(v3 + 272));
  DxgMonitor::MonitorDisplayPortState::GetAddress(v46, (__int64)v158);
  if ( (unsigned int)dword_1C012F918 > 5 && tlgKeywordOn((__int64)&dword_1C012F918, 0x800000000020LL) )
  {
    v133 = v47;
    v143 = &v161;
    v144 = 15;
    v131 = v160;
    v132 = v159;
    v48 = DXGMONITOR::_SupportSyncLockIdentical((DXGMONITOR *)v3);
    v146 = v92;
    v135 = v82;
    v134 = v48;
    v145 = v5;
    if ( v21 )
      v50 = 136 * v79;
    else
      v50 = v49;
    v136 = v93;
    v105 = v94;
    v106 = v102;
    v107 = v101;
    v108 = v100;
    v51 = *(_QWORD *)(v3 + 240);
    v148 = v50;
    v147 = v21;
    v149 = v23;
    v52 = *(_DWORD *)(v51 + 16);
    LOWORD(v83) = v81[0];
    LOBYTE(v79) = v77;
    v142 = &v163;
    v137[0] = &v165;
    v53 = v95;
    v109 = v52;
    if ( v95 > 0x80 )
      v53 = 128;
    v54 = *(DxgMonitor::MonitorColorState **)(v3 + 224);
    v150 = v53;
    v110 = *(_DWORD *)(v3 + 364);
    v111 = *((_DWORD *)v54 + 98);
    IsAutoColorManagementSupported = DxgMonitor::MonitorColorState::IsAutoColorManagementSupported(v54);
    IsAdvancedColorEnabled = DxgMonitor::MonitorColorState::IsAdvancedColorEnabled(v55);
    v57 = 0;
    v114 = v78;
    v113 = !IsAdvancedColorEnabled;
    v58 = *(_QWORD *)(v3 + 224);
    v115 = (v9 >> 2) & 1;
    v117 = v9 & 1;
    v59 = *(_DWORD *)(v3 + 352) == 0;
    v116 = (v9 >> 1) & 1;
    v118 = !v59;
    v119 = v96;
    v120 = v97;
    v121 = (int)v98;
    v122 = (int)v99;
    v123 = *(unsigned __int8 *)(v58 + 268);
    v124 = 0;
    v60 = (unsigned int)dword_1C012F918;
    v125 = *(_DWORD *)(v58 + 320);
    v126 = *(_DWORD *)(v58 + 316);
    v127 = *(_DWORD *)(v58 + 312);
    v128 = *(_DWORD *)(v58 + 272);
    v151 = v162;
    v152 = 32;
    v153 = &v141;
    v154 = 8;
    *(_QWORD *)&v139 = &v156;
    WORD4(v139) = 20;
    v61 = *(_QWORD *)(v3 + 168);
    v98 = v36;
    v62 = *(_QWORD *)(*(_QWORD *)(v61 + 24) + 16LL);
    v99 = *(unsigned __int16 **)(v62 + 1616);
    v90 = *(_QWORD *)(v62 + 404);
    LODWORD(v129) = *(_DWORD *)(v3 + 180);
    LODWORD(v100) = v80;
    LODWORD(v101) = *(_DWORD *)(v3 + 184);
    LODWORD(v102) = v130;
    if ( !dword_1C012F918 || (v59 = tlgKeywordOn((__int64)&dword_1C012F918, 0x200000000000LL) == 0, v63 = 1, v59) )
      v63 = v57;
    LODWORD(v103) = v63;
    if ( !(_DWORD)v60 || !tlgKeywordOn((__int64)&dword_1C012F918, 0x400000000000LL) )
      v6 = v57;
    v64 = gDISeqId;
    LODWORD(v104) = v6;
    LODWORD(v89) = gDISeqId++;
    LOWORD(v82) = 15;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v64,
      byte_1C009A8F6,
      p_ActivityId,
      v60,
      (__int64)&v82,
      (__int64)&v89,
      (__int64)&v104,
      (__int64)&v103,
      (__int64)&v102,
      (__int64)&v101,
      &v98,
      (__int64)&v100,
      (__int64)&v129,
      (__int64)&v90,
      &v99,
      (__int64 *)&v139,
      (__int64 *)&v153,
      (__int64 *)&v151,
      (__int64)&v128,
      (__int64)&v127,
      (__int64)&v126,
      (__int64)&v125,
      (__int64)&v124,
      (__int64)&v123,
      (__int64)&v122,
      (__int64)&v121,
      (__int64)&v120,
      (__int64)&v119,
      (__int64)&v118,
      (__int64)&v117,
      (__int64)&v116,
      (__int64)&v115,
      (__int64)&v114,
      (__int64)&v113,
      (__int64)&IsAutoColorManagementSupported,
      (__int64)&v111,
      (__int64)&v110,
      (__int64 *)&v149,
      (__int64)&v88,
      v137,
      (void **)&v142,
      (__int64)&v79,
      (__int64)&v83,
      (__int64)&v109,
      (__int64)&v87,
      (__int64)&v108,
      (__int64)&v107,
      (__int64)&v86,
      (__int64)&v85,
      (__int64)&v106,
      (__int64)&v84,
      (__int64)&v105,
      (__int64)&v136,
      (__int64 *)&v147,
      (__int64)&v135,
      (__int64 *)&v145,
      (__int64)&v134,
      (__int64)&v133,
      (__int64)&v132,
      (__int64)&v131,
      (__int64 *)&v143);
  }
  if ( v36 )
    operator delete[](v36);
  if ( v23 )
    operator delete[](v23);
  if ( v21 )
    operator delete[](v21);
  if ( v5 )
    operator delete[](v5);
}
