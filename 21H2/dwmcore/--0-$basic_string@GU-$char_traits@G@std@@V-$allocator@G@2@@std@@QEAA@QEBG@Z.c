/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180061B50
 * Callers:
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG1IAEBU_LUID@@_N@Z @ 0x180015B80 (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBU.c)
 *     ?FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAX_KIPEBG@Z @ 0x18005270C (-FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAX_KIPEBG@Z.c)
 *     _anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn @ 0x18005F320 (_anonymous_namespace_--FramesReport--UpdateResourceCountersForPsn.c)
 *     _anonymous_namespace_::SynthesizeDescription @ 0x180061AA4 (_anonymous_namespace_--SynthesizeDescription.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180061B90 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

_QWORD *__fastcall std::wstring::wstring(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r8

  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)(a2 + 2 * v3) );
  std::wstring::assign(a1);
  return a1;
}
