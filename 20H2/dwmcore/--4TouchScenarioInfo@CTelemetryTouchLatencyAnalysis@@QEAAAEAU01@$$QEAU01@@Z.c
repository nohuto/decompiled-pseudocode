/*
 * XREFs of ??4TouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z @ 0x180004774
 * Callers:
 *     ?DeallocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N@Z @ 0x1800043C8 (-DeallocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N@Z.c)
 * Callees:
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x180004A54 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180041D34 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::TouchScenarioInfo::operator=(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _OWORD *v3; // rbp
  _OWORD *v6; // rsi

  v2 = a2 + 16;
  *(_BYTE *)a1 = *(_BYTE *)a2;
  v3 = (_OWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  if ( a1 + 16 != a2 + 16 )
  {
    std::wstring::_Tidy_deallocate(a1 + 16);
    *v3 = *(_OWORD *)v2;
    v3[1] = *(_OWORD *)(v2 + 16);
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 7LL;
    *(_WORD *)v2 = 0;
  }
  v6 = (_OWORD *)(a2 + 48);
  if ( a1 + 48 != a2 + 48 )
  {
    std::wstring::_Tidy_deallocate(a1 + 48);
    *(_OWORD *)(a1 + 48) = *v6;
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
    *(_QWORD *)(a2 + 64) = 0LL;
    *(_QWORD *)(a2 + 72) = 7LL;
    *(_WORD *)v6 = 0;
  }
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 100) = *(_OWORD *)(a2 + 100);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  *(_WORD *)(a1 + 128) = *(_WORD *)(a2 + 128);
  *(_WORD *)(a1 + 130) = *(_WORD *)(a2 + 130);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 136);
  *(_BYTE *)(a1 + 144) = *(_BYTE *)(a2 + 144);
  *(_DWORD *)(a1 + 148) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 152);
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 156);
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 160);
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 176);
  *(_QWORD *)(a1 + 184) = *(_QWORD *)(a2 + 184);
  *(_BYTE *)(a1 + 192) = *(_BYTE *)(a2 + 192);
  *(_BYTE *)(a1 + 193) = *(_BYTE *)(a2 + 193);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a2 + 200);
  *(_WORD *)(a1 + 208) = *(_WORD *)(a2 + 208);
  *(_WORD *)(a1 + 210) = *(_WORD *)(a2 + 210);
  *(_BYTE *)(a1 + 212) = *(_BYTE *)(a2 + 212);
  CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(a1 + 216, a2 + 216);
  *(_BYTE *)(a1 + 260) = *(_BYTE *)(a2 + 260);
  *(_BYTE *)(a1 + 261) = *(_BYTE *)(a2 + 261);
  *(_BYTE *)(a1 + 262) = *(_BYTE *)(a2 + 262);
  CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(a1 + 264, a2 + 264);
  CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(a1 + 308, a2 + 308);
  *(_WORD *)(a1 + 352) = *(_WORD *)(a2 + 352);
  *(_WORD *)(a1 + 354) = *(_WORD *)(a2 + 354);
  *(_WORD *)(a1 + 356) = *(_WORD *)(a2 + 356);
  *(_WORD *)(a1 + 358) = *(_WORD *)(a2 + 358);
  *(_DWORD *)(a1 + 360) = *(_DWORD *)(a2 + 360);
  *(_DWORD *)(a1 + 364) = *(_DWORD *)(a2 + 364);
  *(_WORD *)(a1 + 368) = *(_WORD *)(a2 + 368);
  *(_DWORD *)(a1 + 372) = *(_DWORD *)(a2 + 372);
  *(_WORD *)(a1 + 376) = *(_WORD *)(a2 + 376);
  *(_QWORD *)(a1 + 384) = *(_QWORD *)(a2 + 384);
  *(_QWORD *)(a1 + 392) = *(_QWORD *)(a2 + 392);
  *(_DWORD *)(a1 + 400) = *(_DWORD *)(a2 + 400);
  *(_DWORD *)(a1 + 404) = *(_DWORD *)(a2 + 404);
  return a1;
}
