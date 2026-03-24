/*
 * XREFs of ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCLatencyInfo@1@I@Z @ 0x18015CCB0
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18002340C (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 * Callees:
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x180023C94 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180034F98 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180035198 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800949F0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     ??4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z @ 0x18015C738 (--4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??HCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@AEBV01@@Z @ 0x18015CB44 (--HCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA-AV01@AEBV01@@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x180160388 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 *     ?SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z @ 0x180160BB8 (-SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z.c)
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEBUTouchScenarioInfo@1@_N@Z @ 0x180160C7C (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEBUTouchScenarioInfo@1@_N@Z.c)
 *     ?UpdateInteractionSummary@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@_NI@Z @ 0x1801616B8 (-UpdateInteractionSummary@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLate.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(
        CTelemetryTouchLatencyAnalysis *this,
        const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        bool a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *a6,
        __int16 a7)
{
  int v7; // edi
  bool v8; // bl
  const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v9; // r13
  CTelemetryTouchLatencyAnalysis *v10; // r15
  __int64 v11; // rax
  unsigned __int8 v12; // cl
  __int64 v13; // rax
  __int64 v14; // r14
  _DWORD *v15; // rax
  unsigned __int8 v16; // al
  _DWORD *v17; // rax
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // ax
  unsigned __int16 v21; // ax
  unsigned int v22; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v24[56]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+80h] [rbp-80h] BYREF
  __m128i v28; // [rsp+90h] [rbp-70h]
  _BYTE v29[76]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v30; // [rsp+ECh] [rbp-14h]
  int v31; // [rsp+FCh] [rbp-4h]
  __int128 v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+110h] [rbp+10h]
  char v34; // [rsp+118h] [rbp+18h]
  __int64 v35; // [rsp+11Ah] [rbp+1Ah]
  __int16 v36; // [rsp+122h] [rbp+22h]
  __int64 v37; // [rsp+124h] [rbp+24h]
  __int16 v38; // [rsp+12Ch] [rbp+2Ch]
  __int128 v39; // [rsp+130h] [rbp+30h]
  __int128 v40; // [rsp+140h] [rbp+40h]
  __int64 v41; // [rsp+150h] [rbp+50h]
  __int128 v42; // [rsp+158h] [rbp+58h]
  __int128 v43; // [rsp+168h] [rbp+68h]
  __int64 v44; // [rsp+178h] [rbp+78h]
  __int128 v45; // [rsp+180h] [rbp+80h]
  __int128 v46; // [rsp+190h] [rbp+90h]
  __int64 v47; // [rsp+1A0h] [rbp+A0h]
  int v48; // [rsp+1A8h] [rbp+A8h]
  __int128 v49; // [rsp+1ACh] [rbp+ACh]
  __int128 v50; // [rsp+1BCh] [rbp+BCh]
  __int64 v51; // [rsp+1CCh] [rbp+CCh]
  int v52; // [rsp+1D4h] [rbp+D4h]
  char v53[220]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int128 v54; // [rsp+2B4h] [rbp+1B4h]
  __int64 v55; // [rsp+2C4h] [rbp+1C4h]
  int v56; // [rsp+2CCh] [rbp+1CCh]
  __int16 v57; // [rsp+2D0h] [rbp+1D0h]
  char v58; // [rsp+2D2h] [rbp+1D2h]
  __int128 v59; // [rsp+2D4h] [rbp+1D4h]
  __int128 v60; // [rsp+2E4h] [rbp+1E4h]
  __int64 v61; // [rsp+2F4h] [rbp+1F4h]
  int v62; // [rsp+2FCh] [rbp+1FCh]
  __int128 v63; // [rsp+300h] [rbp+200h]
  __int128 v64; // [rsp+310h] [rbp+210h]
  __int64 v65; // [rsp+320h] [rbp+220h]
  int v66; // [rsp+328h] [rbp+228h]
  char v67[220]; // [rsp+32Ch] [rbp+22Ch] BYREF
  _BYTE v68[68]; // [rsp+408h] [rbp+308h] BYREF
  __int64 v69; // [rsp+44Ch] [rbp+34Ch]
  __int128 v70; // [rsp+454h] [rbp+354h]
  int v71; // [rsp+464h] [rbp+364h]

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = this;
  if ( !*((_QWORD *)this + 513) )
  {
LABEL_16:
    if ( !CTelemetryTouchLatencyAnalysis::SetUpNewInteractionSummary(this, a2, a3) )
      return;
    goto LABEL_17;
  }
  if ( *((_DWORD *)a2 + 33) != *((_DWORD *)this + 1039)
    || *((_DWORD *)a2 + 34) != *((_DWORD *)this + 1040)
    || *((_DWORD *)a2 + 35) != *((_DWORD *)this + 1041)
    || *((_BYTE *)a2 + 144) != *((_BYTE *)this + 4168)
    || *((_DWORD *)a2 + 37) != *((_DWORD *)this + 1043)
    || (unsigned int)std::wstring::compare((char *)a2 + 16, (_QWORD *)this + 511)
    || *((_DWORD *)v9 + 21) != *((_DWORD *)v10 + 1044)
    || *((_DWORD *)v9 + 23) != *((_DWORD *)v10 + 1046)
    || *((_DWORD *)v9 + 22) != *((_DWORD *)v10 + 1045)
    || *((_DWORD *)v9 + 24) != *((_DWORD *)v10 + 1047) )
  {
    goto LABEL_15;
  }
  v11 = *(_QWORD *)((char *)v9 + 100) - *((_QWORD *)v10 + 524);
  if ( !v11 )
    v11 = *(_QWORD *)((char *)v9 + 108) - *((_QWORD *)v10 + 525);
  if ( v11 )
  {
LABEL_15:
    CTelemetryTouchLatencyAnalysis::SendInteractionSummary(v10);
    a3 = v8;
    a2 = v9;
    this = v10;
    goto LABEL_16;
  }
LABEL_17:
  InteractionTraceProvider::UpdateInteractionSummary(v9, v8, *((unsigned __int8 *)v10 + 4216));
  if ( *((_BYTE *)v9 + 192) || ((*((_DWORD *)v10 + 1044) - 4) & 0xFFFFFFFD) == 0 )
  {
    v12 = *((_BYTE *)v10 + 4216);
    if ( (unsigned int)(*((_DWORD *)v10 + 1044) - 2) <= 4 )
      *((_BYTE *)v10 + 4216) = ++v12;
    v13 = (unsigned int)v12 - 1;
    v14 = (unsigned int)v13;
    *((_DWORD *)v10 + v13 + 1057) = v7;
    *((_DWORD *)v10 + (unsigned int)v13 + 1062) = a5;
    *((_BYTE *)v10 + (unsigned int)v13 + 4268) = *((_BYTE *)v9 + 192);
    *((_WORD *)v10 + (unsigned int)v13 + 2137) = a7;
    *((_WORD *)v10 + (unsigned int)v13 + 2142) = *((_WORD *)v9 + 104);
    *((_DWORD *)v10 + 1055) += *((unsigned __int16 *)v9 + 104);
    *((_QWORD *)v10 + (unsigned int)v13 + 542) = *((_QWORD *)v9 + 20);
    *((_DWORD *)v10 + 1056) += *((unsigned __int16 *)v9 + 105);
    *((_QWORD *)v10 + (unsigned int)v13 + 537) = *((_QWORD *)v9 + 15);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::SetMax(
      (CTelemetryTouchLatencyAnalysis *)((char *)v10 + 4376),
      (const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)v9 + 216));
    v15 = (_DWORD *)CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator+(
                      (_DWORD *)v10 + 1105,
                      (__int64)v24,
                      (char *)v9 + 216);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)v10 + 1105, v15);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)v10 + 11 * v14 + 1116, (_DWORD *)v9 + 54);
    *((_BYTE *)v10 + 4684) += *((_BYTE *)v9 + 260) != 0;
    *((_BYTE *)v10 + v14 + 4685) = *((_BYTE *)v9 + 260);
    *((_BYTE *)v10 + 4690) += *((_BYTE *)v9 + 261) != 0;
    *((_BYTE *)v10 + v14 + 4691) = *((_BYTE *)v9 + 261);
    v16 = *((_BYTE *)v10 + 4696);
    if ( v16 <= *((_BYTE *)v9 + 262) )
      v16 = *((_BYTE *)v9 + 262);
    *((_BYTE *)v10 + 4696) = v16;
    *((_DWORD *)v10 + 1175) += *((unsigned __int8 *)v9 + 262);
    *((_BYTE *)v10 + v14 + 4704) = *((_BYTE *)v9 + 262);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::SetMax(
      (CTelemetryTouchLatencyAnalysis *)((char *)v10 + 4716),
      (const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)v9 + 264));
    v17 = (_DWORD *)CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator+(
                      (_DWORD *)v10 + 1190,
                      (__int64)v24,
                      (char *)v9 + 308);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)v10 + 1190, v17);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)v10 + 11 * v14 + 1201, a6);
    v18 = *((_WORD *)v10 + 2512);
    if ( v18 <= *((_WORD *)v9 + 176) )
      v18 = *((_WORD *)v9 + 176);
    *((_WORD *)v10 + 2512) = v18;
    *((_DWORD *)v10 + 1257) += *((unsigned __int16 *)v9 + 176);
    *((_WORD *)v10 + v14 + 2516) = *((_WORD *)v9 + 176);
    v19 = *((_WORD *)v10 + 2521);
    if ( v19 <= *((_WORD *)v9 + 177) )
      v19 = *((_WORD *)v9 + 177);
    *((_WORD *)v10 + 2521) = v19;
    *((_DWORD *)v10 + 1261) += *((unsigned __int16 *)v9 + 177);
    *((_WORD *)v10 + v14 + 2524) = *((_WORD *)v9 + 177);
    v20 = *((_WORD *)v10 + 2529);
    if ( v20 <= *((_WORD *)v9 + 179) )
      v20 = *((_WORD *)v9 + 179);
    *((_WORD *)v10 + 2529) = v20;
    *((_DWORD *)v10 + 1265) += *((unsigned __int16 *)v9 + 179);
    *((_WORD *)v10 + v14 + 2532) = *((_WORD *)v9 + 179);
    v21 = *((_WORD *)v10 + 2537);
    if ( v21 <= *((_WORD *)v9 + 178) )
      v21 = *((_WORD *)v9 + 178);
    *((_WORD *)v10 + 2537) = v21;
    *((_DWORD *)v10 + 1269) += *((unsigned __int16 *)v9 + 178);
    *((_WORD *)v10 + v14 + 2540) = *((_WORD *)v9 + 178);
    *((_BYTE *)v10 + v14 + 4710) = *((_BYTE *)v9 + 212);
    *((_BYTE *)v10 + 4709) += *((_BYTE *)v9 + 212) != 0;
    v22 = *((_DWORD *)v10 + 1273);
    if ( v22 <= *((_DWORD *)v9 + 93) )
      v22 = *((_DWORD *)v9 + 93);
    *((_DWORD *)v10 + 1273) = v22;
    *((_DWORD *)v10 + 1274) += *((_DWORD *)v9 + 93);
    *((_DWORD *)v10 + v14 + 1275) = *((_DWORD *)v9 + 93);
  }
  QueryPerformanceCounter(&PerformanceCount);
  if ( (unsigned int)((PerformanceCount.QuadPart - *((_QWORD *)v10 + 526)) / (qword_180347420 / 0x3E8uLL)) >= 0xEA60
    || *((_BYTE *)v10 + 4216) == 5 )
  {
    CTelemetryTouchLatencyAnalysis::SendInteractionSummary(v10);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v25[0]) = 0;
    v28 = si128;
    LOWORD(v27) = 0;
    memset_0(v29, 0, sizeof(v29));
    v31 = 0;
    v33 = 0LL;
    v34 = 0;
    v35 = 0LL;
    v36 = 0;
    v37 = 0LL;
    v30 = 0LL;
    v38 = 0;
    v32 = 0LL;
    v41 = 0LL;
    v39 = 0LL;
    v44 = 0LL;
    v40 = 0LL;
    v47 = 0LL;
    v42 = 0LL;
    v48 = 0;
    v43 = 0LL;
    v51 = 0LL;
    v45 = 0LL;
    v52 = 0;
    v46 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    `vector constructor iterator'(
      v53,
      44LL,
      5LL,
      (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
    v55 = 0LL;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v54 = 0LL;
    v61 = 0LL;
    v59 = 0LL;
    v62 = 0;
    v60 = 0LL;
    v65 = 0LL;
    v63 = 0LL;
    v66 = 0;
    v64 = 0LL;
    `vector constructor iterator'(
      v67,
      44LL,
      5LL,
      (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
    memset_0(v68, 0, 0x42uLL);
    v69 = 0LL;
    v71 = 0;
    v70 = 0LL;
    CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo::operator=((__int64)v10 + 4088, (__int64)v25);
    std::wstring::_Tidy_deallocate(&v27);
    std::wstring::_Tidy_deallocate(v25);
  }
}
