/*
 * XREFs of ?IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NAEBV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@_K@Z @ 0x1800E17C8
 * Callers:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x180024620 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageRe.c)
 *     _anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn @ 0x18005F320 (_anonymous_namespace_--FramesReport--UpdateResourceCountersForPsn.c)
 * Callees:
 *     <none>
 */

bool __fastcall CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber::IsLessThan(
        unsigned __int64 **a1,
        unsigned __int64 a2)
{
  return **a1 < a2;
}
