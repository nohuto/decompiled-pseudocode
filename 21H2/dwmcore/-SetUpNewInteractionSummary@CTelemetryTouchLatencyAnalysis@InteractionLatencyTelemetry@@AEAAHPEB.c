/*
 * XREFs of ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAHPEBUTouchScenarioInfo@2@_N@Z @ 0x1801D5950
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEBUTouchScenarioInfo@2@_NGGAEBVInteractionFrameLatency@2@I@Z @ 0x1801D215C (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEBUTo.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180061A30 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180061B90 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ??4InteractionSummaryInfo@InteractionLatencyTelemetry@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801D1E10 (--4InteractionSummaryInfo@InteractionLatencyTelemetry@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?NewInteractionSummary@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@_N@Z @ 0x1801D52DC (-NewInteractionSummary@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenari.c)
 */

__int64 __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::SetUpNewInteractionSummary(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        const struct InteractionLatencyTelemetry::TouchScenarioInfo *a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rdx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v8[4]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v9[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v10[76]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v11; // [rsp+BCh] [rbp-44h]
  int v12; // [rsp+CCh] [rbp-34h]
  __int128 v13; // [rsp+D0h] [rbp-30h]
  __int64 v14; // [rsp+E0h] [rbp-20h]
  char v15; // [rsp+E8h] [rbp-18h]
  __int64 v16; // [rsp+EAh] [rbp-16h]
  __int16 v17; // [rsp+F2h] [rbp-Eh]
  __int64 v18; // [rsp+F4h] [rbp-Ch]
  __int16 v19; // [rsp+FCh] [rbp-4h]
  __int128 v20; // [rsp+100h] [rbp+0h]
  __int128 v21; // [rsp+110h] [rbp+10h]
  __int64 v22; // [rsp+120h] [rbp+20h]
  __int128 v23; // [rsp+128h] [rbp+28h]
  __int128 v24; // [rsp+138h] [rbp+38h]
  __int64 v25; // [rsp+148h] [rbp+48h]
  _BYTE v26[112]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v27[560]; // [rsp+1C0h] [rbp+C0h] BYREF
  int v28; // [rsp+3F0h] [rbp+2F0h]
  char v29; // [rsp+3F4h] [rbp+2F4h]
  int v30; // [rsp+3F5h] [rbp+2F5h]
  char v31; // [rsp+3F9h] [rbp+2F9h]
  int v32; // [rsp+3FAh] [rbp+2FAh]
  char v33; // [rsp+3FEh] [rbp+2FEh]
  int v34; // [rsp+3FFh] [rbp+2FFh]
  char v35; // [rsp+403h] [rbp+303h]
  _BYTE v36[112]; // [rsp+404h] [rbp+304h] BYREF
  _BYTE v37[560]; // [rsp+474h] [rbp+374h] BYREF
  __int64 v38; // [rsp+6A4h] [rbp+5A4h]
  __int16 v39; // [rsp+6ACh] [rbp+5ACh]
  __int64 v40; // [rsp+6AEh] [rbp+5AEh]
  __int16 v41; // [rsp+6B6h] [rbp+5B6h]
  __int64 v42; // [rsp+6B8h] [rbp+5B8h]
  __int16 v43; // [rsp+6C0h] [rbp+5C0h]
  __int64 v44; // [rsp+6C2h] [rbp+5C2h]
  __int16 v45; // [rsp+6CAh] [rbp+5CAh]
  __int128 v46; // [rsp+6CCh] [rbp+5CCh]
  __int64 v47; // [rsp+6DCh] [rbp+5DCh]
  char v48; // [rsp+6E4h] [rbp+5E4h]
  __int16 v49; // [rsp+6E5h] [rbp+5E5h]
  char v50; // [rsp+6E7h] [rbp+5E7h]
  __int128 v51; // [rsp+6E8h] [rbp+5E8h]
  int v52; // [rsp+6F8h] [rbp+5F8h]
  __int64 v53; // [rsp+6FCh] [rbp+5FCh]
  __int16 v54; // [rsp+704h] [rbp+604h]
  int v55; // [rsp+706h] [rbp+606h]
  __int16 v56; // [rsp+70Ah] [rbp+60Ah]
  __int64 v57; // [rsp+70Ch] [rbp+60Ch]
  __int16 v58; // [rsp+714h] [rbp+614h]
  __int64 v59; // [rsp+716h] [rbp+616h]
  __int16 v60; // [rsp+71Eh] [rbp+61Eh]

  v8[2] = 0LL;
  LOWORD(v8[0]) = 0;
  v9[2] = 0LL;
  LOWORD(v9[0]) = 0;
  v8[3] = 7LL;
  v9[3] = 7LL;
  memset_0(v10, 0, sizeof(v10));
  v12 = 0;
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v11 = 0LL;
  v17 = 0;
  v13 = 0LL;
  v18 = 0LL;
  v19 = 0;
  v20 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  memset_0(v26, 0, sizeof(v26));
  memset_0(v27, 0, sizeof(v27));
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  memset_0(v36, 0, sizeof(v36));
  memset_0(v37, 0, sizeof(v37));
  v38 = 0LL;
  v39 = 0;
  v40 = 0LL;
  v41 = 0;
  v42 = 0LL;
  v43 = 0;
  v44 = 0LL;
  v45 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0LL;
  v52 = 0;
  v53 = 0LL;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0LL;
  v58 = 0;
  v59 = 0LL;
  v60 = 0;
  InteractionLatencyTelemetry::InteractionSummaryInfo::operator=((__int64)this + 5128, (__int64)v8);
  std::wstring::_Tidy_deallocate(v9);
  std::wstring::_Tidy_deallocate(v8);
  QueryPerformanceCounter(&PerformanceCount);
  v4 = (_QWORD *)((char *)a2 + 16);
  *((LARGE_INTEGER *)this + 656) = PerformanceCount;
  if ( (char *)this + 5128 != (char *)a2 + 16 )
  {
    if ( *((_QWORD *)a2 + 5) >= 8uLL )
      v4 = (_QWORD *)*v4;
    std::wstring::assign((char *)this + 5128, v4, *((_QWORD *)a2 + 4));
  }
  v5 = (_QWORD *)((char *)a2 + 48);
  if ( (char *)this + 5160 != (char *)a2 + 48 )
  {
    if ( *((_QWORD *)a2 + 9) >= 8uLL )
      v5 = (_QWORD *)*v5;
    std::wstring::assign((char *)this + 5160, v5, *((_QWORD *)a2 + 8));
  }
  *((_DWORD *)this + 1299) = *((_DWORD *)a2 + 33);
  *((_QWORD *)this + 650) = *((_QWORD *)a2 + 17);
  *((_BYTE *)this + 5208) = *((_BYTE *)a2 + 144);
  *((_DWORD *)this + 1303) = *((_DWORD *)a2 + 37);
  *((_DWORD *)this + 1304) = *((_DWORD *)a2 + 21);
  *((_DWORD *)this + 1306) = *((_DWORD *)a2 + 23);
  *((_DWORD *)this + 1305) = *((_DWORD *)a2 + 22);
  *((_OWORD *)this + 327) = *(_OWORD *)((char *)a2 + 100);
  *((_DWORD *)this + 1298) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 1307) = *((_DWORD *)a2 + 24);
  InteractionLatencyTelemetry::InteractionTraceProvider::NewInteractionSummary(a2);
  return 1LL;
}
