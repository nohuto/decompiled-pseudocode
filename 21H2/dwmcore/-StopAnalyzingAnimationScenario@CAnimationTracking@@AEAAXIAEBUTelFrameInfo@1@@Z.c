/*
 * XREFs of ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800745D0
 * Callers:
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x180017F1C (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     ?RetireScenariosIfOverdueOrLastFrameUnpresented@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x180078994 (-RetireScenariosIfOverdueOrLastFrameUnpresented@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18007C008 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     McTemplateU0xxqqqzzq_EventWriteTransfer @ 0x180014B20 (McTemplateU0xxqqqzzq_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U2@U2@U2@U2@U2@U2@U1@U1@U2@U1@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapperByVal@$07@@544444433434AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180024F04 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U-$_tlgWrapperByVal@$07@@U3@U2@U2.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180025E3C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x180074C18 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x180074CF4 (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180076D34 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180076D84 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     McTemplateU0qqqzzq_EventWriteTransfer @ 0x1801CB46C (McTemplateU0qqqzzq_EventWriteTransfer.c)
 *     McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer @ 0x1801CB588 (McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer.c)
 */

void __fastcall CAnimationTracking::StopAnalyzingAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        const struct CAnimationTracking::TelFrameInfo *a3)
{
  const struct _GUID *v3; // rdi
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // r11d
  unsigned int v8; // esi
  unsigned int v9; // esi
  unsigned int v10; // ecx
  unsigned int v11; // r15d
  __int64 v12; // r8
  float v13; // xmm0_4
  float v14; // xmm1_4
  unsigned __int64 v15; // r9
  __int64 v16; // r10
  LONGLONG v17; // r8
  LONGLONG v18; // r9
  unsigned __int16 *ScenarioName; // r13
  CAnimationTracking *v20; // rcx
  unsigned int v21; // r9d
  const unsigned __int16 *ScenarioDetails; // r11
  size_t v23; // r8
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  unsigned int v27; // r9d
  unsigned int v28; // ecx
  int v29; // eax
  int v30; // r8d
  int v31; // ecx
  unsigned int v32; // eax
  int v33; // eax
  unsigned int v34; // r10d
  int v35; // eax
  int v36; // r8d
  int v37; // eax
  int v38; // r8d
  unsigned int v39; // ecx
  bool v40; // zf
  const unsigned __int16 *v41; // r8
  const struct _GUID *v42; // rax
  CAnimationTracking *v43; // rbx
  __int64 v44; // rax
  int v45; // ecx
  const unsigned __int16 *v46; // rax
  const unsigned __int16 *v47; // rcx
  const unsigned __int16 *v48; // rax
  const unsigned __int16 *v49; // rcx
  wchar_t *v50; // rcx
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // rtt
  unsigned __int64 v53; // rtt
  __int64 v54; // rdx
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rtt
  wchar_t *v57; // r8
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // r8
  int v61; // ecx
  int v62; // eax
  int v63; // ecx
  char v64; // al
  unsigned int v65; // r9d
  wchar_t *v66; // rdx
  unsigned int v67[2]; // [rsp+20h] [rbp-120h]
  unsigned int v68[2]; // [rsp+28h] [rbp-118h]
  unsigned int v69[2]; // [rsp+30h] [rbp-110h]
  __int64 v70; // [rsp+48h] [rbp-F8h]
  _BYTE v71[4]; // [rsp+C0h] [rbp-80h] BYREF
  unsigned int v72; // [rsp+C4h] [rbp-7Ch]
  unsigned int v73; // [rsp+C8h] [rbp-78h]
  unsigned int v74[2]; // [rsp+D0h] [rbp-70h]
  unsigned int v75[2]; // [rsp+D8h] [rbp-68h]
  unsigned __int64 v76; // [rsp+E0h] [rbp-60h] BYREF
  unsigned __int64 v77; // [rsp+E8h] [rbp-58h]
  int v78; // [rsp+F0h] [rbp-50h] BYREF
  int v79; // [rsp+F4h] [rbp-4Ch] BYREF
  int v80; // [rsp+F8h] [rbp-48h] BYREF
  int v81; // [rsp+FCh] [rbp-44h] BYREF
  int v82; // [rsp+100h] [rbp-40h] BYREF
  unsigned int v83; // [rsp+104h] [rbp-3Ch] BYREF
  unsigned int v84; // [rsp+108h] [rbp-38h] BYREF
  unsigned int v85; // [rsp+10Ch] [rbp-34h] BYREF
  int v86; // [rsp+110h] [rbp-30h] BYREF
  int v87; // [rsp+114h] [rbp-2Ch] BYREF
  int v88; // [rsp+118h] [rbp-28h] BYREF
  const unsigned __int16 *v89; // [rsp+120h] [rbp-20h] BYREF
  unsigned int v90; // [rsp+128h] [rbp-18h]
  __int64 v91; // [rsp+130h] [rbp-10h]
  const struct CAnimationTracking::TelFrameInfo *v92; // [rsp+138h] [rbp-8h]
  CAnimationTracking *v93; // [rsp+140h] [rbp+0h]
  const unsigned __int16 *v94; // [rsp+148h] [rbp+8h] BYREF
  const unsigned __int16 *v95; // [rsp+150h] [rbp+10h] BYREF
  const unsigned __int16 *v96; // [rsp+158h] [rbp+18h] BYREF
  __int64 v97; // [rsp+160h] [rbp+20h] BYREF
  __int64 v98; // [rsp+168h] [rbp+28h] BYREF
  unsigned __int16 *v99; // [rsp+170h] [rbp+30h] BYREF
  unsigned int v100[2]; // [rsp+178h] [rbp+38h]
  wchar_t String2[8]; // [rsp+180h] [rbp+40h] BYREF
  unsigned __int16 v102[128]; // [rsp+190h] [rbp+50h] BYREF
  unsigned __int16 v103[128]; // [rsp+290h] [rbp+150h] BYREF
  unsigned __int16 v104[128]; // [rsp+390h] [rbp+250h] BYREF

  v3 = 0LL;
  v93 = this;
  v92 = a3;
  LODWORD(v4) = 0;
  v90 = a2;
  *(_QWORD *)v75 = 0LL;
  v5 = *(_QWORD *)this;
  LODWORD(v77) = 0;
  LODWORD(v76) = 0;
  v72 = 0;
  v6 = *(_QWORD *)(v5 + 8LL * a2);
  v7 = *(_DWORD *)(v6 + 72);
  if ( v7 < 3 || (v8 = *(_DWORD *)(v6 + 28), v8 <= *(_DWORD *)(v6 + 24)) )
  {
    v43 = v93;
  }
  else
  {
    v9 = v8 - *(_DWORD *)(v6 + 24);
    v10 = *(_DWORD *)(v6 + 32);
    if ( v10 > v9 )
    {
      *(_DWORD *)(v6 + 32) = v9;
      v10 = v9;
    }
    v11 = 100 * v10 / v9;
    if ( !v11 )
      v11 = v10 != 0;
    v12 = *((_QWORD *)a3 + 2);
    *(_QWORD *)v100 = v12 * (unsigned __int64)v9 / 0x2710;
    if ( v12 < 0 )
      v13 = (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1))
          + (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1));
    else
      v13 = (float)(int)v12;
    v14 = 10000000.0 / v13;
    if ( (float)(10000000.0 / v13) >= 59.0 && v14 <= 61.0 )
      v14 = FLOAT_60_0;
    v15 = *(_QWORD *)(v6 + 96);
    v16 = *(_QWORD *)(v6 + 160);
    *(_QWORD *)v74 = (unsigned int)(int)v14;
    v73 = (int)v14 * (100 - v11) / 0x64;
    v17 = v15 / g_qpcFrequency.QuadPart;
    v18 = v15 % g_qpcFrequency.QuadPart;
    v91 = 1000 * (_DWORD)v17 + (unsigned int)((unsigned __int64)(1000 * v18) / g_qpcFrequency.QuadPart);
    if ( v16 )
    {
      if ( *(_QWORD *)(v16 + 8) )
      {
        v51 = *(_QWORD *)(v6 + 104);
        if ( v51 > *(_QWORD *)(v16 + 8) )
        {
          v52 = v51 - *(_QWORD *)(v16 + 8);
          v18 = v52 / g_qpcFrequency.QuadPart;
          v4 = (10000000 * (v52 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
              + 10000000 * (v52 / g_qpcFrequency.QuadPart))
             / 0x2710;
          *(_QWORD *)v75 = v4;
          if ( (_DWORD)v4 )
          {
            v53 = *(_QWORD *)(v6 + 80);
            v18 = v53 / g_qpcFrequency.QuadPart;
            v76 = (10000000 * (v53 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
                 + 10000000 * (v53 / g_qpcFrequency.QuadPart))
                / 0x2710
                / (v7 - 1);
          }
        }
      }
      if ( *(_QWORD *)(v16 + 16) )
      {
        v55 = *(_QWORD *)(v6 + 104);
        if ( v55 > *(_QWORD *)(v16 + 16) )
        {
          v56 = v55 - *(_QWORD *)(v16 + 16);
          v18 = v56 / g_qpcFrequency.QuadPart;
          v77 = (10000000 * (v56 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
               + 10000000 * (v56 / g_qpcFrequency.QuadPart))
              / 0x2710;
        }
      }
      v72 = *(_DWORD *)(v16 + 24);
    }
    ScenarioName = (unsigned __int16 *)CAnimationTracking::GetScenarioName(
                                         (CAnimationTracking *)g_qpcFrequency.QuadPart,
                                         (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v6,
                                         v103,
                                         v18);
    ScenarioDetails = CAnimationTracking::GetScenarioDetails(
                        v20,
                        (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v6,
                        v104,
                        v21);
    v89 = ScenarioDetails;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
    {
      v57 = word_18032C468;
      if ( *(_QWORD *)(v6 + 136) )
        v57 = *(wchar_t **)(v6 + 136);
      v58 = *(_QWORD *)(v6 + 160);
      if ( v58 )
        v59 = *(_DWORD *)(v58 + 28);
      else
        LOBYTE(v59) = 0;
      McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer(
        v73,
        v74[0],
        *(_QWORD *)(v6 + 56),
        *((_QWORD *)v92 + 1),
        v11,
        v9,
        v74[0],
        v73,
        v91,
        (__int64)ScenarioName,
        *(_DWORD *)(v6 + 20),
        *(_DWORD *)(v6 + 36),
        v4,
        v77,
        v72,
        v59,
        (__int64)ScenarioDetails,
        (__int64)v57,
        *(_DWORD *)(v6 + 40),
        *(_DWORD *)(v6 + 32));
    }
    wcscpy(String2, L"DManip");
    if ( ScenarioName )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( String2[v23] );
      if ( wcsncmp(ScenarioName, String2, v23)
        && (unsigned int)dword_1803D0F28 > 5
        && tlgKeywordOn((__int64)&dword_1803D0F28, 0x200000000004LL) )
      {
        v71[0] = *(_BYTE *)v92;
        v44 = *(_QWORD *)(v6 + 160);
        if ( v44 )
          v45 = *(_DWORD *)(v44 + 28);
        else
          v45 = 0;
        v94 = v89;
        v79 = *(_DWORD *)(v6 + 20);
        v46 = *(const unsigned __int16 **)(v6 + 144);
        v78 = v45;
        v47 = word_18032C468;
        v83 = v9;
        if ( v46 )
          v47 = v46;
        v87 = v4;
        v48 = *(const unsigned __int16 **)(v6 + 136);
        v95 = v47;
        v49 = word_18032C468;
        v99 = ScenarioName;
        if ( v48 )
          v49 = v48;
        v80 = *(_DWORD *)(v6 + 40);
        v81 = *(_DWORD *)(v6 + 36);
        v82 = *(_DWORD *)(v6 + 32);
        v84 = v74[0];
        v85 = v72;
        v97 = *((_QWORD *)v92 + 1);
        v98 = *(_QWORD *)(v6 + 56);
        v86 = v77;
        v88 = v91;
        LODWORD(v89) = v76;
        LODWORD(v76) = v73;
        v96 = v49;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
          (__int64)v49,
          (int)&unk_18036B880,
          v24,
          v25,
          (const unsigned __int16 **)&v99,
          (__int64)&v76,
          (__int64)&v89,
          (__int64)&v88,
          (__int64)&v87,
          (__int64)&v86,
          (__int64)&v98,
          (__int64)&v97,
          (__int64)&v85,
          (__int64)&v84,
          (__int64)&v83,
          (__int64)&v82,
          (__int64)&v81,
          (__int64)&v80,
          &v96,
          &v95,
          (__int64)&v79,
          &v94,
          (__int64)&v78,
          (__int64)v71);
      }
    }
    if ( *(_DWORD *)(v6 + 32) || (unsigned int)v4 >= 0xC8 )
    {
      v26 = *(_DWORD *)(v6 + 32);
      if ( *(_DWORD *)v6 )
      {
        v54 = *(_QWORD *)(v6 + 160);
        if ( v54 )
        {
          if ( *(_WORD *)(v54 + 38) )
          {
            v60 = v54 + *(unsigned __int16 *)(v54 + 38);
            if ( v60 )
            {
              v67[0] = *(_DWORD *)(v54 + 28);
              StringCchPrintfW(v102, 0x80uLL, (size_t *)L"%ws|%X|%ws", ScenarioName, *(_QWORD *)v67, v60);
              v26 = *(_DWORD *)(v6 + 32);
              ScenarioName = v102;
            }
          }
        }
      }
      v27 = v74[0];
      if ( v26 )
      {
        v28 = 255;
        v29 = 4095;
        v30 = 255;
        if ( v9 < 0xFFF )
          v29 = v9;
        if ( v74[0] < 0xFF )
          v28 = v74[0];
        v31 = v29 | (v28 << 12);
        v32 = 255;
        if ( v73 < 0xFF )
          v32 = v73;
        v33 = v31 | (v32 << 20);
        v34 = v33 | 0x80000000;
        if ( !*(_DWORD *)v6 )
          v34 = v33;
        v35 = 4095;
        if ( (unsigned int)v91 < 0xFFF )
          v35 = v91;
        if ( *(_DWORD *)(v6 + 36) < 0xFFu )
          v30 = *(_DWORD *)(v6 + 36);
        v36 = v35 | (v30 << 12);
        v37 = 4095;
        if ( v72 < 0xFFF )
          v37 = v72;
        v38 = (v37 << 20) | v36;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000) != 0 )
        {
          v50 = word_18032C468;
          if ( *(_QWORD *)(v6 + 136) )
            v50 = *(wchar_t **)(v6 + 136);
          v69[0] = v38;
          v68[0] = v34;
          v67[0] = v11;
          LODWORD(v70) = *(_DWORD *)(v6 + 20);
          McTemplateU0xxqqqzzq_EventWriteTransfer(
            (__int64)v50,
            (unsigned int)v70,
            *(_QWORD *)(v6 + 56),
            *((_QWORD *)v92 + 1),
            *(_QWORD *)v67,
            *(_QWORD *)v68,
            *(_QWORD *)v69,
            ScenarioName,
            v50,
            v70);
          v27 = v74[0];
        }
      }
      if ( v75[0] < 0xC8 )
        goto LABEL_39;
      v61 = 255;
      v62 = 4095;
      if ( v9 < 0xFFF )
        v62 = v9;
      if ( v27 < 0xFF )
        v61 = v27;
      v63 = v62 | (v61 << 12);
      v64 = -1;
      v65 = v63 | 0x80000000;
      if ( !*(_DWORD *)v6 )
        v65 = v63;
      if ( (unsigned int)v77 < 0xFFF )
        v64 = v77;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000) != 0 )
      {
        v66 = word_18032C468;
        if ( *(_QWORD *)(v6 + 136) )
          v66 = *(wchar_t **)(v6 + 136);
        LODWORD(v4) = v75[0];
        McTemplateU0qqqzzq_EventWriteTransfer(
          *(_DWORD *)(v6 + 20),
          (_DWORD)v66,
          v75[0],
          v65,
          v64,
          (__int64)ScenarioName,
          (__int64)v66,
          *(_DWORD *)(v6 + 20));
      }
      else
      {
LABEL_39:
        LODWORD(v4) = v75[0];
      }
    }
    v39 = *(_DWORD *)(v6 + 36);
    v40 = *(_DWORD *)v6 == 0;
    if ( *(_DWORD *)v6 )
      v41 = *(const unsigned __int16 **)(v6 + 136);
    else
      v41 = 0LL;
    v42 = (const struct _GUID *)(v6 + 4);
    v43 = v93;
    if ( v40 )
      v3 = v42;
    CAnimationTracking::UpdateLongtermStatistics(v93, v3, v41, v11, v74[0], v73, v4, v100[0], v39);
    a2 = v90;
  }
  CAnimationTracking::DeleteScenario(v43, a2);
}
