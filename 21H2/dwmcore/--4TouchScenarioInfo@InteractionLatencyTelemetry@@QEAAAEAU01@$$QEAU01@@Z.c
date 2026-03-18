/*
 * XREFs of ??4TouchScenarioInfo@InteractionLatencyTelemetry@@QEAAAEAU01@$$QEAU01@@Z @ 0x180013E78
 * Callers:
 *     ?DeallocateScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@_N@Z @ 0x180013DAC (-DeallocateScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchSc.c)
 * Callees:
 *     ??4InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAAEAV01@AEBV01@@Z @ 0x180014160 (--4InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180061A30 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall InteractionLatencyTelemetry::TouchScenarioInfo::operator=(__int64 a1, __int64 a2)
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
  *(_BYTE *)(a1 + 156) = *(_BYTE *)(a2 + 156);
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
  InteractionLatencyTelemetry::InteractionFrameLatency::operator=(a1 + 216, a2 + 216);
  *(_BYTE *)(a1 + 328) = *(_BYTE *)(a2 + 328);
  *(_BYTE *)(a1 + 329) = *(_BYTE *)(a2 + 329);
  *(_BYTE *)(a1 + 330) = *(_BYTE *)(a2 + 330);
  InteractionLatencyTelemetry::InteractionFrameLatency::operator=(a1 + 332, a2 + 332);
  *(_QWORD *)(a1 + 444) = *(_QWORD *)(a2 + 444);
  *(_DWORD *)(a1 + 452) = *(_DWORD *)(a2 + 452);
  *(_WORD *)(a1 + 456) = *(_WORD *)(a2 + 456);
  *(_WORD *)(a1 + 458) = *(_WORD *)(a2 + 458);
  *(_WORD *)(a1 + 460) = *(_WORD *)(a2 + 460);
  *(_WORD *)(a1 + 462) = *(_WORD *)(a2 + 462);
  *(_DWORD *)(a1 + 464) = *(_DWORD *)(a2 + 464);
  *(_DWORD *)(a1 + 468) = *(_DWORD *)(a2 + 468);
  *(_WORD *)(a1 + 472) = *(_WORD *)(a2 + 472);
  *(_DWORD *)(a1 + 476) = *(_DWORD *)(a2 + 476);
  *(_WORD *)(a1 + 480) = *(_WORD *)(a2 + 480);
  *(_QWORD *)(a1 + 488) = *(_QWORD *)(a2 + 488);
  *(_QWORD *)(a1 + 496) = *(_QWORD *)(a2 + 496);
  *(_DWORD *)(a1 + 504) = *(_DWORD *)(a2 + 504);
  *(_DWORD *)(a1 + 508) = *(_DWORD *)(a2 + 508);
  return a1;
}
