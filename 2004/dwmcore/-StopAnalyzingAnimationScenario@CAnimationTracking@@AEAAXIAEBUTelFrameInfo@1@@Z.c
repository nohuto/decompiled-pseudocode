/*
 * XREFs of ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180088DE0
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180058C00 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800880DC (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x1800C9AE8 (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003125C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800889B8 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180088B74 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioDetails@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@QEBAPEBGXZ @ 0x180088BC8 (-GetScenarioDetails@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@QEBAPEBGXZ.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x18008935C (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x18008C7B0 (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 *     McTemplateU0qqqzzq_EventWriteTransfer @ 0x1800D5DBC (McTemplateU0qqqzzq_EventWriteTransfer.c)
 *     McTemplateU0xxqqqzzq_EventWriteTransfer @ 0x1800D5ED4 (McTemplateU0xxqqqzzq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U2@U2@U2@U2@U2@U2@U1@U1@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapperByVal@$07@@544444433434@Z @ 0x180158358 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U-$_tlgWrapperByVal@$07@@U3@U2@U2.c)
 *     McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer @ 0x180158DB4 (McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer.c)
 */

void __fastcall CAnimationTracking::StopAnalyzingAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        const struct CAnimationTracking::TelFrameInfo *a3)
{
  const struct _GUID *v3; // rdi
  unsigned __int64 v4; // r14
  __int64 v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // esi
  unsigned int v8; // ecx
  unsigned int v9; // r12d
  __int64 v10; // r8
  float v11; // xmm0_4
  float v12; // xmm1_4
  __int64 v13; // r10
  unsigned __int64 v14; // r8
  unsigned __int16 *ScenarioName; // r13
  CAnimationTracking *v16; // rcx
  wchar_t *ScenarioDetails; // r11
  size_t v18; // r8
  int v19; // edx
  DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *v20; // rcx
  DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *v21; // rcx
  const unsigned __int16 *v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // r9d
  char v25; // al
  char v26; // r8
  char v27; // al
  unsigned int v28; // ecx
  bool v29; // zf
  const unsigned __int16 *v30; // r8
  const struct _GUID *v31; // rax
  CAnimationTracking *v32; // rbx
  wchar_t *v33; // rcx
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  char v37; // al
  unsigned int v38; // r9d
  wchar_t *v39; // rdx
  unsigned __int64 v40; // r8
  wchar_t *v41; // r8
  __int64 v42; // rcx
  int v43; // eax
  wchar_t *v44; // rax
  wchar_t *v45; // rcx
  unsigned __int16 **v46; // [rsp+20h] [rbp-120h]
  int v47; // [rsp+C0h] [rbp-80h]
  unsigned int v48; // [rsp+C4h] [rbp-7Ch]
  int v49; // [rsp+C8h] [rbp-78h]
  unsigned int v50; // [rsp+D0h] [rbp-70h]
  unsigned __int64 v51; // [rsp+E0h] [rbp-60h]
  unsigned int v53; // [rsp+128h] [rbp-18h]
  unsigned int v54; // [rsp+130h] [rbp-10h]
  unsigned __int16 *v56; // [rsp+168h] [rbp+28h] BYREF
  unsigned int v57[2]; // [rsp+170h] [rbp+30h]
  wchar_t String2[12]; // [rsp+178h] [rbp+38h] BYREF
  unsigned __int16 v59[128]; // [rsp+190h] [rbp+50h] BYREF
  unsigned __int16 v60[128]; // [rsp+290h] [rbp+150h] BYREF
  unsigned __int16 v61[128]; // [rsp+390h] [rbp+250h] BYREF

  v3 = 0LL;
  LODWORD(v4) = 0;
  v53 = a2;
  v50 = 0;
  LODWORD(v51) = 0;
  LOBYTE(v47) = 0;
  v5 = *(_QWORD *)(*(_QWORD *)this + 8LL * a2);
  if ( *(_BYTE *)a3 && *(_DWORD *)(v5 + 72) >= 3u && (v6 = *(_DWORD *)(v5 + 28), v6 > *(_DWORD *)(v5 + 24)) )
  {
    v7 = v6 - *(_DWORD *)(v5 + 24);
    v8 = *(_DWORD *)(v5 + 32);
    if ( v8 > v7 )
    {
      *(_DWORD *)(v5 + 32) = v7;
      v8 = v7;
    }
    v9 = 100 * v8 / v7;
    if ( !v9 )
      v9 = v8 != 0;
    v10 = *((_QWORD *)a3 + 2);
    *(_QWORD *)v57 = v10 * (unsigned __int64)v7 / 0x2710;
    if ( v10 < 0 )
      v11 = (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
          + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1));
    else
      v11 = (float)(int)v10;
    v12 = 10000000.0 / v11;
    if ( (float)(10000000.0 / v11) >= 59.0 && v12 <= 61.0 )
      v12 = FLOAT_60_0;
    v13 = *(_QWORD *)(v5 + 152);
    v49 = (int)v12;
    v48 = (int)v12 * (100 - v9) / 0x64;
    v54 = 1000 * (*(_QWORD *)(v5 + 96) / g_qpcFrequency.QuadPart)
        + (unsigned __int64)(1000 * (*(_QWORD *)(v5 + 96) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart;
    if ( v13 )
    {
      if ( *(_QWORD *)(v13 + 8) )
      {
        v14 = *(_QWORD *)(v5 + 104);
        if ( v14 > *(_QWORD *)(v13 + 8) )
        {
          v4 = (10000000 * ((v14 - *(_QWORD *)(v13 + 8)) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
              + 10000000 * ((v14 - *(_QWORD *)(v13 + 8)) / g_qpcFrequency.QuadPart))
             / 0x2710;
          v50 = v4;
        }
      }
      if ( *(_QWORD *)(v13 + 16) )
      {
        v40 = *(_QWORD *)(v5 + 104);
        if ( v40 > *(_QWORD *)(v13 + 16) )
          v51 = (10000000 * ((v40 - *(_QWORD *)(v13 + 16)) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
               + 10000000 * ((v40 - *(_QWORD *)(v13 + 16)) / g_qpcFrequency.QuadPart))
              / 0x2710;
      }
      v47 = *(_DWORD *)(v13 + 24);
    }
    ScenarioName = CAnimationTracking::GetScenarioName(
                     (CAnimationTracking *)g_qpcFrequency.QuadPart,
                     (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v5,
                     v60);
    ScenarioDetails = CAnimationTracking::GetScenarioDetails(
                        v16,
                        (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v5,
                        v61);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    {
      v41 = word_18028970C;
      if ( *(_QWORD *)(v5 + 136) )
        v41 = *(wchar_t **)(v5 + 136);
      v42 = *(_QWORD *)(v5 + 152);
      if ( v42 )
        v43 = *(_DWORD *)(v42 + 28);
      else
        LOBYTE(v43) = 0;
      McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer(
        v48,
        v49,
        *(_QWORD *)(v5 + 56),
        *((_QWORD *)a3 + 1),
        v9,
        v7,
        v49,
        v48,
        v54,
        (__int64)ScenarioName,
        *(_DWORD *)(v5 + 20),
        *(_DWORD *)(v5 + 36),
        v4,
        v51,
        v47,
        v43,
        (__int64)ScenarioDetails,
        (__int64)v41,
        *(_DWORD *)(v5 + 40),
        *(_DWORD *)(v5 + 32));
    }
    wcscpy(String2, L"DManip");
    if ( ScenarioName )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( String2[v18] );
      if ( wcsncmp(ScenarioName, String2, v18)
        && (unsigned int)dword_180342EB8 > 5
        && (qword_180342EC8 & 0x200000000004LL) != 0
        && (qword_180342ED0 & 0x200000000004LL) == qword_180342ED0 )
      {
        v44 = *(wchar_t **)(v5 + 136);
        v45 = word_18028970C;
        v56 = ScenarioName;
        if ( v44 )
          v45 = v44;
        v46 = &v56;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          v45,
          &unk_1802E1E12);
      }
    }
    if ( *(_DWORD *)(v5 + 32) || (unsigned int)v4 >= 0xC8 )
    {
      v19 = *(_DWORD *)(v5 + 32);
      if ( *(_DWORD *)v5 )
      {
        v20 = *(DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO **)(v5 + 152);
        if ( v20 )
        {
          if ( DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO::GetScenarioDetails(v20) )
          {
            v22 = DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO::GetScenarioDetails(v21);
            LODWORD(v46) = *(_DWORD *)(v23 + 28);
            StringCchPrintfW(v59, 0x80uLL, (size_t *)L"%ws|%X|%ws", ScenarioName, v46, v22);
            v19 = *(_DWORD *)(v5 + 32);
            ScenarioName = v59;
          }
        }
      }
      v24 = (int)v12;
      if ( v19 )
      {
        v25 = -1;
        if ( v7 < 0xFFF )
          v25 = v7;
        v26 = v25;
        v27 = -1;
        if ( v54 < 0xFFF )
          v27 = v54;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
        {
          v33 = word_18028970C;
          if ( *(_QWORD *)(v5 + 136) )
            v33 = *(wchar_t **)(v5 + 136);
          McTemplateU0xxqqqzzq_EventWriteTransfer(
            (_DWORD)v33,
            *(_DWORD *)(v5 + 20),
            *(_QWORD *)(v5 + 56),
            *((_QWORD *)a3 + 1),
            v9,
            v26,
            v27,
            (__int64)ScenarioName,
            (__int64)v33,
            *(_DWORD *)(v5 + 20));
          v24 = (int)v12;
        }
      }
      if ( v50 < 0xC8 )
        goto LABEL_38;
      v34 = 255;
      v35 = 4095;
      if ( v7 < 0xFFF )
        v35 = v7;
      if ( v24 < 0xFF )
        v34 = v24;
      v36 = v35 | (v34 << 12);
      v37 = -1;
      v38 = v36 | 0x80000000;
      if ( !*(_DWORD *)v5 )
        v38 = v36;
      if ( (unsigned int)v51 < 0xFFF )
        v37 = v51;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
      {
        v39 = word_18028970C;
        if ( *(_QWORD *)(v5 + 136) )
          v39 = *(wchar_t **)(v5 + 136);
        LODWORD(v4) = v50;
        McTemplateU0qqqzzq_EventWriteTransfer(
          *(_DWORD *)(v5 + 20),
          (_DWORD)v39,
          v50,
          v38,
          v37,
          (__int64)ScenarioName,
          (__int64)v39,
          *(_DWORD *)(v5 + 20));
      }
      else
      {
LABEL_38:
        LODWORD(v4) = v50;
      }
    }
    v28 = *(_DWORD *)(v5 + 36);
    v29 = *(_DWORD *)v5 == 0;
    if ( *(_DWORD *)v5 )
      v30 = *(const unsigned __int16 **)(v5 + 136);
    else
      v30 = 0LL;
    v31 = (const struct _GUID *)(v5 + 4);
    v32 = this;
    if ( v29 )
      v3 = v31;
    CAnimationTracking::UpdateLongtermStatistics(this, v3, v30, v9, v49, v48, v4, v57[0], v28);
    a2 = v53;
  }
  else
  {
    v32 = this;
  }
  CAnimationTracking::DeleteScenario(v32, a2);
}
