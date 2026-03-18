/*
 * XREFs of ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800D29B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U?$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@@std@@QEAA@XZ @ 0x1800E3FF4 (--1-$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U-$default_delete@.c)
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x1800E426C (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageRe.c)
 */

void __fastcall CProcessResourceAttributionReporter::ReportHighResourceUsageWorker(
        PTP_CALLBACK_INSTANCE Instance,
        union _SLIST_HEADER *Context,
        PTP_WORK Work)
{
  struct CProcessResourceAttributionReporter::HighResourceUsageReport *v4; // rbx
  struct CProcessResourceAttributionReporter::HighResourceUsageReport *v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = (struct CProcessResourceAttributionReporter::HighResourceUsageReport *)InterlockedFlushSList(Context + 1);
  while ( v4 )
  {
    v5 = v4;
    CProcessResourceAttributionReporter::ReportHighResourceUsageWorker(
      (CProcessResourceAttributionReporter *)Context,
      v4);
    v4 = *(struct CProcessResourceAttributionReporter::HighResourceUsageReport **)v4;
    std::unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>::~unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>(&v5);
  }
}
