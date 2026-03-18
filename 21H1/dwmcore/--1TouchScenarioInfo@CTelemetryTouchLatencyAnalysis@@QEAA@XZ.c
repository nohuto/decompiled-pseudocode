/*
 * XREFs of ??1TouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x180157220
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180091A94 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::TouchScenarioInfo::~TouchScenarioInfo(
        CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 6);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 2);
}
