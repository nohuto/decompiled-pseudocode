/*
 * XREFs of ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEBUTouchScenarioInfo@1@_N@Z @ 0x1801650CC
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCLatencyInfo@1@I@Z @ 0x180161100 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCL.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003594C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180091A94 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180091B08 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     ??4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z @ 0x180160B88 (--4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?NewInteractionSummary@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@_N@Z @ 0x18016466C (-NewInteractionSummary@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatency.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::SetUpNewInteractionSummary(
        CTelemetryTouchLatencyAnalysis *this,
        const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        char a3)
{
  _QWORD *v6; // rdx
  _QWORD *v7; // rdx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-D0h] BYREF
  __m128i si128; // [rsp+40h] [rbp-C0h]
  __int64 v12; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v13; // [rsp+60h] [rbp-A0h]
  _BYTE v14[76]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v15; // [rsp+BCh] [rbp-44h]
  int v16; // [rsp+CCh] [rbp-34h]
  __int128 v17; // [rsp+D0h] [rbp-30h]
  __int64 v18; // [rsp+E0h] [rbp-20h]
  char v19; // [rsp+E8h] [rbp-18h]
  __int64 v20; // [rsp+EAh] [rbp-16h]
  __int16 v21; // [rsp+F2h] [rbp-Eh]
  __int64 v22; // [rsp+F4h] [rbp-Ch]
  __int16 v23; // [rsp+FCh] [rbp-4h]
  __int128 v24; // [rsp+100h] [rbp+0h]
  __int128 v25; // [rsp+110h] [rbp+10h]
  __int64 v26; // [rsp+120h] [rbp+20h]
  __int128 v27; // [rsp+128h] [rbp+28h]
  __int128 v28; // [rsp+138h] [rbp+38h]
  __int64 v29; // [rsp+148h] [rbp+48h]
  __int128 v30; // [rsp+150h] [rbp+50h]
  __int128 v31; // [rsp+160h] [rbp+60h]
  __int64 v32; // [rsp+170h] [rbp+70h]
  int v33; // [rsp+178h] [rbp+78h]
  __int128 v34; // [rsp+17Ch] [rbp+7Ch]
  __int128 v35; // [rsp+18Ch] [rbp+8Ch]
  __int64 v36; // [rsp+19Ch] [rbp+9Ch]
  int v37; // [rsp+1A4h] [rbp+A4h]
  char v38[220]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int128 v39; // [rsp+284h] [rbp+184h]
  __int64 v40; // [rsp+294h] [rbp+194h]
  int v41; // [rsp+29Ch] [rbp+19Ch]
  __int16 v42; // [rsp+2A0h] [rbp+1A0h]
  char v43; // [rsp+2A2h] [rbp+1A2h]
  __int128 v44; // [rsp+2A4h] [rbp+1A4h]
  __int128 v45; // [rsp+2B4h] [rbp+1B4h]
  __int64 v46; // [rsp+2C4h] [rbp+1C4h]
  int v47; // [rsp+2CCh] [rbp+1CCh]
  __int128 v48; // [rsp+2D0h] [rbp+1D0h]
  __int128 v49; // [rsp+2E0h] [rbp+1E0h]
  __int64 v50; // [rsp+2F0h] [rbp+1F0h]
  int v51; // [rsp+2F8h] [rbp+1F8h]
  char v52[220]; // [rsp+2FCh] [rbp+1FCh] BYREF
  _BYTE v53[68]; // [rsp+3D8h] [rbp+2D8h] BYREF
  __int64 v54; // [rsp+41Ch] [rbp+31Ch]
  __int128 v55; // [rsp+424h] [rbp+324h]
  int v56; // [rsp+434h] [rbp+334h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v10[0]) = 0;
  v13 = si128;
  LOWORD(v12) = 0;
  memset_0(v14, 0, sizeof(v14));
  v16 = 0;
  v18 = 0LL;
  v19 = 0;
  v20 = 0LL;
  v21 = 0;
  v22 = 0LL;
  v15 = 0LL;
  v23 = 0;
  v17 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  v29 = 0LL;
  v25 = 0LL;
  v32 = 0LL;
  v27 = 0LL;
  v33 = 0;
  v28 = 0LL;
  v36 = 0LL;
  v30 = 0LL;
  v37 = 0;
  v31 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  `vector constructor iterator'(
    v38,
    44LL,
    5LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  v40 = 0LL;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v39 = 0LL;
  v46 = 0LL;
  v44 = 0LL;
  v47 = 0;
  v45 = 0LL;
  v50 = 0LL;
  v48 = 0LL;
  v51 = 0;
  v49 = 0LL;
  `vector constructor iterator'(
    v52,
    44LL,
    5LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  memset_0(v53, 0, 0x42uLL);
  v54 = 0LL;
  v56 = 0;
  v55 = 0LL;
  CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo::operator=((__int64)this + 4088, (__int64)v10);
  std::wstring::_Tidy_deallocate(&v12);
  std::wstring::_Tidy_deallocate(v10);
  QueryPerformanceCounter(&PerformanceCount);
  v6 = (_QWORD *)((char *)a2 + 16);
  *((LARGE_INTEGER *)this + 526) = PerformanceCount;
  if ( (char *)this + 4088 != (char *)a2 + 16 )
  {
    if ( *((_QWORD *)a2 + 5) >= 8uLL )
      v6 = (_QWORD *)*v6;
    std::wstring::assign((char *)this + 4088, v6, *((_QWORD *)a2 + 4));
  }
  v7 = (_QWORD *)((char *)a2 + 48);
  if ( (char *)this + 4120 != (char *)a2 + 48 )
  {
    if ( *((_QWORD *)a2 + 9) >= 8uLL )
      v7 = (_QWORD *)*v7;
    std::wstring::assign((char *)this + 4120, v7, *((_QWORD *)a2 + 8));
  }
  *((_DWORD *)this + 1039) = *((_DWORD *)a2 + 33);
  *((_QWORD *)this + 520) = *((_QWORD *)a2 + 17);
  *((_BYTE *)this + 4168) = *((_BYTE *)a2 + 144);
  *((_DWORD *)this + 1043) = *((_DWORD *)a2 + 37);
  *((_DWORD *)this + 1044) = *((_DWORD *)a2 + 21);
  *((_DWORD *)this + 1046) = *((_DWORD *)a2 + 23);
  *((_DWORD *)this + 1045) = *((_DWORD *)a2 + 22);
  *((_OWORD *)this + 262) = *(_OWORD *)((char *)a2 + 100);
  *((_DWORD *)this + 1038) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 1047) = *((_DWORD *)a2 + 24);
  InteractionTraceProvider::NewInteractionSummary(a2, a3);
  return 1LL;
}
