/*
 * XREFs of ??1TouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1801537A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180041D34 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::TouchScenarioInfo::~TouchScenarioInfo(
        CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 6);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 2);
}
