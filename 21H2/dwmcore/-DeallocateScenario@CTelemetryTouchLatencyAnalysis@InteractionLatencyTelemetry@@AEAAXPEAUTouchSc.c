/*
 * XREFs of ?DeallocateScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@_N@Z @ 0x180013DAC
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@_N1@Z @ 0x180013B7C (-RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenar.c)
 * Callees:
 *     ??4TouchScenarioInfo@InteractionLatencyTelemetry@@QEAAAEAU01@$$QEAU01@@Z @ 0x180013E78 (--4TouchScenarioInfo@InteractionLatencyTelemetry@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180061A30 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

void __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::DeallocateScenario(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        struct InteractionLatencyTelemetry::TouchScenarioInfo *a2,
        char a3)
{
  __int128 v5; // [rsp+20h] [rbp-218h] BYREF
  _WORD v6[8]; // [rsp+30h] [rbp-208h] BYREF
  __int64 v7; // [rsp+40h] [rbp-1F8h]
  __int64 v8; // [rsp+48h] [rbp-1F0h]
  _WORD v9[8]; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 v10; // [rsp+60h] [rbp-1D8h]
  __int64 v11; // [rsp+68h] [rbp-1D0h]
  _BYTE v12[432]; // [rsp+70h] [rbp-1C8h] BYREF

  *((_BYTE *)a2 + 156) = 0;
  if ( a3 )
  {
    memset_0(v12, 0, sizeof(v12));
    v7 = 0LL;
    v8 = 7LL;
    v11 = 7LL;
    v6[0] = 0;
    v5 = 0LL;
    v10 = 0LL;
    v9[0] = 0;
    InteractionLatencyTelemetry::TouchScenarioInfo::operator=(a2, &v5);
    std::wstring::_Tidy_deallocate(v9);
    std::wstring::_Tidy_deallocate(v6);
    if ( *(_DWORD *)this )
      --*(_DWORD *)this;
  }
}
